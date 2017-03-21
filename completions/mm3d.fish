function __fish_using_command
    set cmd (commandline -opc)
    if [ (count $cmd) -eq (count $argv) ]
        for i in (seq (count $argv))
            if [ $cmd[$i] != $argv[$i] ]
                return 1
            end
        end
        return 0
    end
    return 1
end

complete -c mm3d -n "__fish_using_command mm3d" -f -a "AllDev" -d "Force development of all tif/xif file"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Ann" -d "matches points of interest of two images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "AperiCloud" -d "Visualization of camera in ply file"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Apero" -d "Compute external and internal orientations"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Apero2Meshlab" -d "Convert Orientation from Apero-Micmac workflow to a meshlab-compatible format"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Apero2NVM" -d "Matthieu"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Apero2PMVS" -d "Convert Orientation from Apero-Micmac workflow to PMVS format"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "AperoChImSecMM" -d "Select secondary images for MicMac"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Arsenic" -d "IN DEV : Radiometric equalization from tie points"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Aspro" -d "Init External orientation of calibrated camera from GCP"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Bascule" -d "Generate orientations coherent with some physical information on the scene"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "BatchFDC" -d "Tool for batching a set of commands"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Blinis" -d "Block Initialisation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "C3DC" -d "Automatic Matching from Culture 3D Cloud project"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CalibFinale" -d "Compute Final Radial distortion model"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CalibInit" -d "Compute Initial Radial distortion model"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Campari" -d "Interface to Apero, for compensation of heterogeneous measures"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CASA" -d "Analytic Surface Estimation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CatImSaisie" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CenterBascule" -d "Relative to absolute using embedded GPS"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ChantierClip" -d "Clip Chantier"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CheckDependencies" -d "check dependencies to third-party tools"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ChgSysCo" -d "Change coordinate system of orientation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CleanPatByOri" -d "Clean a pattern of image by Ori-XXX folder"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ClipIm" -d "Clip Chantier"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CmpCalib" -d "Compare two calibrations"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CmpIm" -d "Basic tool for images comparison"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CmpOri" -d "Compare two sets of orientation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "cod" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CoherEpip" -d "Test coherence between conjugate epipolar depth-map"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Compens" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ContrastFilter" -d "Some contrast filtering"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Convert2GenBundle" -d "Import RPC or other to MicMac format, for adjustment, matching ..."
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ConvertCalib" -d "Conversion of calibration from one model 2 the other"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ConvertIm" -d "Tool for convertion inside tiff-format"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ConvertPolygone" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "CreateEpip" -d "Create epipolar images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Dequant" -d "Tool for dequantifying an image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Devlop" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Digeo" -d "In development- Will compute tie points"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "DIV" -d "Videos development (require ffmpeg)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Donuts" -d "Cyl to Torus (Donuts like)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Drunk" -d "Images distortion removing tool"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ElDcraw" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ExtractAppui3D" -d "Extract points from a 3D appui points xml file"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ExtractMesure2D" -d "Extract points from a 2D measures xml file"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "FFTKugelhupf" -d "Version of Kugelhupf using FFT, expecetd faster when it works (if ever ...)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "FieldDep3d" -d "To export results of matching as 3D shifting"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "FusionDepl" -d "Fusion carte de deplacement"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GCPBascule" -d "Relative to absolute using GCP"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GCPConvert" -d "Convert GCP from Txt 2 XML"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GCPCtrl" -d "Control accuracy with GCP"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GCPVisib" -d "Print a list of GCP visibility in images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GenCode" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Genepi" -d "Generate 3D/2d synthetical points from orientation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GenerateBorderCam" -d "Generate the polygone of image contour undistorded"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Genere_Header_TiffFile" -d "Generate Header for internal tiling format"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "genmail" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GenPairsFile" -d "Generate pairs files between one image and a pattern"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GenXML2Cpp" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GrapheHom" -d "Compute XML-Visibility graph from approximate orientation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Gri2Bin" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "GrShade" -d "Compute shading from depth image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Homol2GND" -d "Creates fake ground points for aerotriangulation wedge"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "HomolFilterMasq" -d "Tool for filter homologous points according to masq"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "HomolMergePDVUnik" -d "Tool for merge homologous point from unik point of view"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Im2XYZ" -d "tool to transform a 2D point (text file) to their 3D cloud homologous"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ImMire" -d "For generation of some synthetic calibration image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Impaint" -d "Basic Impainting"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ImRandGray" -d "Generate Random Gray Textured Images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Init11P" -d "Init Internal & External from GCP using 11-parameters algo"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "InitOriLinear" -d "Initialize orientation for linear acquisition"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Kugelhupf" -d "Semi-automatic fiducial points determination"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Liquor" -d "Orientation specialized for linear acquisition"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "LumRas" -d "Compute image mixing with raking light"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MakeGrid" -d "Generate orientations in a grid format"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Malt" -d "Simplified matching (interface to MicMac)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MapCmd" -d "Transforms a command working on a single file in a command working on a set of files"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Martini" -d "New orientation initialisation (uncomplete, still in dev...)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MartiniGin" -d "New orientation initialisation (uncomplete, still in dev...)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MasqMaker" -d "Create Mask form image values"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MergeDepthMap" -d "Merging of individual, stackable, depth maps"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MergeHomol" -d "Merge Homol dir"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MergePly" -d "Merge ply files"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MeshProjOnImg" -d "Reproject mesh on image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MICMAC" -d "Computes image matching from oriented images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MM1P" -d "Matching One Pair of images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MM2DPosSism" -d "Simplified interface for post 2D post sismic deformation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMByP" -d "Matching By Pair of images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMCalcSzWCor" -d "Compute Image of Size of correlation windows (Atomic tool, for adaptive window in geom image)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMHomCorOri" -d "Tool to compute homologues for correcting orientation in epip matching"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMInitialModel" -d "Initial Model for MicMac"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMMergeCloud" -d "Merging of low resol cloud, in preparation 2 MicMac"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMPyram" -d "Computes pyram for micmac (internal use)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMTestAllAuto" -d "Full automatic version for 1 view point, test mode"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMTestOrient" -d "Tool for testing quality of orientation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MMXmlXif" -d "Generate Xml from Xif (internal use mainly)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "mmxv" -d "Interface to xv (due to problem in tiff lib)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Morito" -d "Merge set of Orientations with common values"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MpDcraw" -d "Interface to dcraw"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MPDtest" -d "My own test"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "MyRename" -d "File renaming using posix regular expression"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "NewTapas" -d "Replace OldTapas - now same as Tapas"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Nuage2Ply" -d "Convert depth map into point cloud"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "NuageBascule" -d "To Change geometry of depth map"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "OldTapas" -d "Interface to Apero to compute external and internal orientations"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Ori2Xml" -d "Convert historical"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "OriConvert" -d "Convert Orientation from Txt 2 XML"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "OriExport" -d "Export orientation from XML to XML or TXT with specified convention"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "OriRedTieP" -d "Tie points filtering, using Martini results"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PanelIm" -d "Tool for creating a panel of images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Pasta" -d "Compute external calibration and radial basic internal calibration"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PastDevlop" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Pastis" -d "Tie points detection"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PatFromOri" -d "Get pattern of images from Ori folder"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PHO_MI" -d "Filter homologue points from initial orientation to reduce number of observations"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PIMs" -d "Per Image Matchings"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PIMs2Mnt" -d "Generate Mnt from Per Image Matchings"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PIMs2Ply" -d "Generate Ply from Per Image Matchings"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "PointeInitPolyg" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Porto" -d "Generates a global ortho-photo"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Prep4masq" -d "Generates files for making Masks (if SaisieMasq unavailable)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Ratafia" -d "Some stuff to be described later"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "RechCibleDRad" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "RechCibleInit" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "RedTieP" -d "Test tie points filtering"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Reduc2MM" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ReducHom" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "RepLocBascule" -d "Tool to define a local repair without changing the orientation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ReprojImg" -d "Reproject an image into geometry of another"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ReSampFid" -d "Resampling using one fiducial mark"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieAppuisInit" -d "Interactive tool for initial capture of GCP"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieAppuisInitQT" -d "Interactive tool for initial capture of GCP"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieAppuisPredic" -d "Interactive tool for assisted capture of GCP"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieAppuisPredicQT" -d "Interactive tool for assisted capture of GCP"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieBasc" -d "Interactive tool to capture information on the scene"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieBascQT" -d "Interactive tool to capture information on the scene"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieBoxQT" -d "Interactive tool to capture 2D box"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieCyl" -d "Interactive tool to capture information on the scene for cylinders"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieCylQT" -d "Interactive tool to capture information on the scene for cylinders"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieMasq" -d "Interactive tool to capture masq"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisieMasqQT" -d "Interactive tool to capture masq"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SaisiePts" -d "Tool to capture GCP (low level, not recommended)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Sake" -d "Simplified MicMac interface for satellite images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SateLib" -d "Library of satellite images meta-data handling - early work in progress!"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SBGlobBascule" -d "Tool for scene based global bascule"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ScaleIm" -d "Tool for image scaling"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ScaleNuage" -d "Tool for scaling internal representation of point cloud"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Schnaps" -d "Reduction of homologue points in image geometry"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "ScriptCalib" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SEL" -d "Tool to visualize tie points"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SetExif" -d "Modification of exif file (requires exiv2)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SetGpsExif" -d "Add GPS infos in images exif meta-data (requires exiv2)"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Sift" -d "Tool for extracting points of interest using"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SimplePredict" -d "Project ground points on oriented cameras"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SMDM" -d "Simplified Merging of individual, stackable, depth maps"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SplitMPO" -d "tool to develop MPO stereo format in pair of images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "StackFlatField" -d "Basic Flat Field estimation by image stacking"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "StatIm" -d "Tool for basic stat on an image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SupMntIm" -d "Tool for superposition of Mnt Im & level curve"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "SysCoordPolyn" -d "Tool for creating a polynomial coordinate system from a set of known pair of coordinate"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Tapas" -d "NEW version !! Compatible . Call OldTapas if problem specific to this version"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Tapioca" -d "Interface to Pastis for tie point detection and matching"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Tarama" -d "Compute a rectified image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Tawny" -d "Interface to Porto to generate ortho-image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Tequila" -d "Texture mesh"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestBundleInter" -d "Block Initialisation"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestCam" -d "Test camera orientation convention"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestChantier" -d "Test global acquisition"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestCmds" -d "Test MM3D commands on micmac_data sets"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestDistM2C" -d "Basic Test for problematic camera"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestKey" -d "Test Keys for Sets and Assoc"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestLib" -d "To call the program illustrating the library"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestMTD" -d "Test meta data of image"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestNameCalib" -d "Test Name of calibration"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestPbRPC" -d "Test possible Problems on RPC"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TestRegEx" -d "Test regular expression"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TiePAll" -d "matches points of interest of two images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TiePByMesh" -d "Raffiner pts homologue par mesh"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TiePLine" -d "matches points of interest of two images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TiePMS" -d "matches points of interest of two images"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TifDev" -d "Develop raw-jpg-tif, in suitable tiff file"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "tiff_info" -d "Tool for giving information about a tiff file"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TiPunch" -d "Compute mesh"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "to8Bits" -d "Tool for converting 16 or 32 bit image in a 8 bit image."
complete -c mm3d -n "__fish_using_command mm3d" -f -a "TripleSec" -d "Test Non Regression"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Undist" -d "Tool for removing images distortion"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "vic" -d "Do some stuff"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Vino" -d "Image Viewer"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "VisuRedHom" -d "Create a visualisation of residual on tie points"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Vodka" -d "IN DEV : Compute the vignette correction parameters from tie points"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "VV" -d "A very simplified tool for 3D model of visage out of video, just for fun"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "XifGps2Txt" -d "Export embedded EXIF GPS data 2 Txt"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "XifGps2Xml" -d "Create MicMac-Xml struct from GPS embedded in EXIF"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "XLib" -d "Xeres Lib - early work in progress!"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "XYZ2Im" -d "tool to transform a 3D point (text file) to their 2D proj in cam or cloud"
complete -c mm3d -n "__fish_using_command mm3d" -f -a "Zlimit" -d "Crop Depth image (or DEM) in Z"