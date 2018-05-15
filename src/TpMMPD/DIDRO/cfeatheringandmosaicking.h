#ifndef CFEATHERINGANDMOSAICKING_H
#define CFEATHERINGANDMOSAICKING_H
#include "cimgeo.h"
//#include "../../uti_image/NewRechPH/cParamNewRechPH.h"
//#include "../../uti_image/NewRechPH/ExternNewRechPH.h"

// member class that is used both by appli "mother" and software "box"
class  cMyICNM
{
public:
    cMyICNM(cInterfChantierNameManipulateur * aICNM, std::string aTmpDir);
    std::string nameNbIm(){return mNameNbIm;}
    std::string nameIW(){return mNameInternalW;}
    std::string nameSDE(){return mNameSumDistExt;}
    std::string nameSDI(){return mNameSumDistInt;}
    std::string nameSW(){return mNameSumWeighting;}
    std::string nameEgal(){return mNameSumWeighting;}
    std::string nameXmlImList(const int i){return mNameImList + ToString(i) + ".xml";}
    std::string KeyAssocNameOrt2PC(std::string aOrtName);
    std::string KeyAssocNameOrt2Incid(std::string aOrtName);
    std::string KeyAssocNameTif2TFW(std::string aOrtName);
    std::string KeyAssocNamePC2MTD(std::string aPCName);
    std::string KAChamferName(std::string aImName, string aDir, int aBox);
    std::string KAIncidName(std::string aImName, string aDir);
    std::string KAWeightingName(std::string aImName, string aDir,int aBox);

    std::vector<int> extractImID( Liste_Pts_INT2 * aListePt);
    std::map<int,int> extractHist( Liste_Pts_INT2 * aListePt);

    int writeTFW(std::string aNameTiffFile, Pt2dr aGSD, Pt2dr aXminYmax);
    //template <class T,class TB> void SaveTiff(std::string aName,  Im2D<T,TB> * aIm);
    template <class T,class TB> void SaveBoxInTiff(std::string aName,  Im2D<T,TB> * aIm,Box2di aBox2Save,Box2di aBox);

private:
    cInterfChantierNameManipulateur * mICNM;
    // name of temporary file that have to be known by both software
    std::string mTmpDir,mNameNbIm,mNameInternalW,mNameSumDistExt,mNameSumDistInt,mNameSumWeighting;
    std::string mNameImList;
};


class  c_Appli_FeatheringAndMosaic
{
public:
    c_Appli_FeatheringAndMosaic(int argc,char ** argv);

private:
    std::string mDir,mTmpDir;
    std::string mNameMosaicOut, mFullDir, mLabel,mFileModelsRadiomEgal;
    Pt2di mSzTuile; // taille tuile/box
    int mDilat; //dilatation of each box, buffer
    int mNbBox;
    std::map<int, Box2di> mBoxes; // box in pixels
    std::map<int, Box2di> mDilatBoxes; // dilatation
    std::map<int, Pt2di>  mTrs; // translation between every single orthoimages and the corner of the mosaic
    int mDist;
    int mMasqLim;
    double mLambda;
    bool mDebug,mDoRE,mComputeRE;
    std::list<std::string> mLFile;
    cInterfChantierNameManipulateur * mICNM;
    cMyICNM * mKA; // mKey assoc
    cFileOriMnt MTD;
    Pt2di sz;
    Pt2dr aCorner;
    Box2dr mBoxGlob;
    Im2D_U_INT2 label;

    void checkParam();
    void computeRE();
    void DetermineMosaicFootprint();
    void GenLabelTable();
    void GenerateTiff();
    void SplitInBoxes();
    void DoMosaicAndFeather(); // for each box
    void banniereFeathering();

};

class  cFeatheringAndMosaicOrtho
{
    public:
    int mNumBox;
    std::string mDir,mTmpDir,mListImFile,mFileModelsRadiomEgal;
    cFeatheringAndMosaicOrtho(int argc,char ** argv);
    void ChamferNoBorder(Im2D<U_INT1,INT> i2d) const;

    void ChamferDist4AllOrt();   // feathering along seam line is determined by the distance from the seamline, which is measured by Chamfer morphological filter
    void WeightingNbIm1and2();   // gaussian-distance weighting of 2 images in feathering area
    void WeightingNbIm3AndMore();       // if 3 images, should first blend 2 ortho and subsequently blend the result with the third ortho
    void ComputeMosaic();
    void ComputeMosaicNoFeathering();
    void loadREModels(); // load radiometric egalisation models in order to apply them prior to mosaicking

    Box2di mBox; // box en pixel
    Box2di mDilat;  // dilatation buffer to remove prior result writing
    Box2di mBox2Save; //box sans la dilatation

    private:
    std::map<int, cImGeo*>      mIms; // key=label
    std::map<int, Im2D_REAL4>   mIm2Ds;
    std::map<int, Im2D_INT2>    mChamferDist;
    std::map<int, Im2D_REAL4>   mImWs;
    std::map<int, Pt2di>        mTrs; // translation from single ortho to mosaic corner
    std::map<int, c2DLineModel> mREMs; // models of Radiom Egalisation

    std::string mNameMosaicOut, mFullDir, mLabel;
    int mDist;
    std::list<std::string> mLFile;
    std::map<int,std::string> mImNameBox;
    cInterfChantierNameManipulateur * mICNM;
    cMyICNM * mKA; // mKey assoc
    Box2dr mBoxOverlapTerrain;
    double mLambda;
    // coin de la mosaique/box
    Pt2dr aCorner;
    Pt2di sz;
    cFileOriMnt MTD;
    bool mDebug,mDoRE;
    Im1D_REAL4 lut_w;
    Im2D_REAL4 mosaic;

    Im2D_INT1  NbIm;
    // sum of chamfer distance , on outside the enveloppe (positive value) and on inside the enveloppe (negative value)
    Im2D_INT2 mSumDistInter;
    Im2D_INT2 mSumDistExt;
    // to check that sum weighting is equal to 1 everywhere
    Im2D_REAL4 mSumWeighting;
    Im2D_REAL4 PondInterne;
    Im2D_U_INT2 label;
    std::string mProgressBar;

    void banniereFeatheringBox();


};



#endif // CFEATHERINGANDMOSAICKING_H