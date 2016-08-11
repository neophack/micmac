// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cEqAppui_Droite_NoDist__PTInc_M2CDRad5.h"


cEqAppui_Droite_NoDist__PTInc_M2CDRad5::cEqAppui_Droite_NoDist__PTInc_M2CDRad5():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,10));
   AddIntRef (cIncIntervale("Orient",10,16));
   AddIntRef (cIncIntervale("Tmp_PTer",16,19));
   Close(false);
}



void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::ComputeVal()
{
   double tmp0_ = mCompCoord[10];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[12];
   double tmp7_ = mCompCoord[16];
   double tmp8_ = mCompCoord[13];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[17];
   double tmp15_ = mCompCoord[14];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[18];
   double tmp18_ = mCompCoord[15];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = -(tmp3_);
   double tmp21_ = tmp4_*tmp12_;
   double tmp22_ = tmp3_*tmp12_;
   double tmp23_ = tmp20_*tmp11_;
   double tmp24_ = tmp21_*tmp13_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = (tmp25_)*(tmp9_);
   double tmp27_ = tmp4_*tmp11_;
   double tmp28_ = tmp22_*tmp13_;
   double tmp29_ = tmp27_+tmp28_;
   double tmp30_ = (tmp29_)*(tmp16_);
   double tmp31_ = tmp26_+tmp30_;
   double tmp32_ = tmp2_*tmp13_;
   double tmp33_ = tmp32_*(tmp19_);
   double tmp34_ = tmp31_+tmp33_;
   double tmp35_ = tmp4_*tmp2_;
   double tmp36_ = tmp35_*(tmp9_);
   double tmp37_ = tmp3_*tmp2_;
   double tmp38_ = tmp37_*(tmp16_);
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = tmp5_*(tmp19_);
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = (tmp41_)/(tmp34_);
   double tmp43_ = tmp20_*tmp13_;
   double tmp44_ = tmp21_*tmp10_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = (tmp45_)*(tmp9_);
   double tmp47_ = tmp4_*tmp13_;
   double tmp48_ = tmp22_*tmp10_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp16_);
   double tmp51_ = tmp46_+tmp50_;
   double tmp52_ = tmp2_*tmp10_;
   double tmp53_ = tmp52_*(tmp19_);
   double tmp54_ = tmp51_+tmp53_;
   double tmp55_ = (tmp54_)/(tmp34_);

  mVal[0] = (mLocXIm-cos(mLocYIm)*(mLocNDP0_x+mLocNDdx_x*(tmp42_)+mLocNDdy_x*(tmp55_))-sin(mLocYIm)*(mLocNDP0_y+mLocNDdx_y*(tmp42_)+mLocNDdy_y*(tmp55_)))*mLocScNorm;

}


void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[10];
   double tmp1_ = mCompCoord[11];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = sin(tmp0_);
   double tmp4_ = cos(tmp0_);
   double tmp5_ = sin(tmp1_);
   double tmp6_ = mCompCoord[12];
   double tmp7_ = mCompCoord[16];
   double tmp8_ = mCompCoord[13];
   double tmp9_ = tmp7_-tmp8_;
   double tmp10_ = sin(tmp6_);
   double tmp11_ = -(tmp10_);
   double tmp12_ = -(tmp5_);
   double tmp13_ = cos(tmp6_);
   double tmp14_ = mCompCoord[17];
   double tmp15_ = mCompCoord[14];
   double tmp16_ = tmp14_-tmp15_;
   double tmp17_ = mCompCoord[18];
   double tmp18_ = mCompCoord[15];
   double tmp19_ = tmp17_-tmp18_;
   double tmp20_ = -(tmp3_);
   double tmp21_ = tmp4_*tmp12_;
   double tmp22_ = tmp3_*tmp12_;
   double tmp23_ = tmp20_*tmp11_;
   double tmp24_ = tmp21_*tmp13_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = (tmp25_)*(tmp9_);
   double tmp27_ = tmp4_*tmp11_;
   double tmp28_ = tmp22_*tmp13_;
   double tmp29_ = tmp27_+tmp28_;
   double tmp30_ = (tmp29_)*(tmp16_);
   double tmp31_ = tmp26_+tmp30_;
   double tmp32_ = tmp2_*tmp13_;
   double tmp33_ = tmp32_*(tmp19_);
   double tmp34_ = tmp31_+tmp33_;
   double tmp35_ = tmp4_*tmp2_;
   double tmp36_ = tmp35_*(tmp9_);
   double tmp37_ = tmp3_*tmp2_;
   double tmp38_ = tmp37_*(tmp16_);
   double tmp39_ = tmp36_+tmp38_;
   double tmp40_ = tmp5_*(tmp19_);
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = (tmp41_)/(tmp34_);
   double tmp43_ = tmp20_*tmp13_;
   double tmp44_ = tmp21_*tmp10_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = (tmp45_)*(tmp9_);
   double tmp47_ = tmp4_*tmp13_;
   double tmp48_ = tmp22_*tmp10_;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp16_);
   double tmp51_ = tmp46_+tmp50_;
   double tmp52_ = tmp2_*tmp10_;
   double tmp53_ = tmp52_*(tmp19_);
   double tmp54_ = tmp51_+tmp53_;
   double tmp55_ = (tmp54_)/(tmp34_);
   double tmp56_ = -(1);
   double tmp57_ = tmp56_*tmp3_;
   double tmp58_ = -(tmp4_);
   double tmp59_ = tmp57_*tmp12_;
   double tmp60_ = tmp58_*tmp11_;
   double tmp61_ = tmp59_*tmp13_;
   double tmp62_ = tmp60_+tmp61_;
   double tmp63_ = (tmp62_)*(tmp9_);
   double tmp64_ = tmp57_*tmp11_;
   double tmp65_ = tmp64_+tmp24_;
   double tmp66_ = (tmp65_)*(tmp16_);
   double tmp67_ = tmp63_+tmp66_;
   double tmp68_ = ElSquare(tmp34_);
   double tmp69_ = cos(mLocYIm);
   double tmp70_ = tmp57_*tmp2_;
   double tmp71_ = tmp70_*(tmp9_);
   double tmp72_ = tmp35_*(tmp16_);
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp34_);
   double tmp75_ = (tmp41_)*(tmp67_);
   double tmp76_ = tmp74_-tmp75_;
   double tmp77_ = (tmp76_)/tmp68_;
   double tmp78_ = tmp58_*tmp13_;
   double tmp79_ = tmp59_*tmp10_;
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = (tmp80_)*(tmp9_);
   double tmp82_ = tmp57_*tmp13_;
   double tmp83_ = tmp82_+tmp44_;
   double tmp84_ = (tmp83_)*(tmp16_);
   double tmp85_ = tmp81_+tmp84_;
   double tmp86_ = (tmp85_)*(tmp34_);
   double tmp87_ = (tmp54_)*(tmp67_);
   double tmp88_ = tmp86_-tmp87_;
   double tmp89_ = (tmp88_)/tmp68_;
   double tmp90_ = sin(mLocYIm);
   double tmp91_ = tmp56_*tmp5_;
   double tmp92_ = -(tmp2_);
   double tmp93_ = tmp92_*tmp4_;
   double tmp94_ = tmp92_*tmp3_;
   double tmp95_ = tmp93_*tmp13_;
   double tmp96_ = tmp95_*(tmp9_);
   double tmp97_ = tmp94_*tmp13_;
   double tmp98_ = tmp97_*(tmp16_);
   double tmp99_ = tmp96_+tmp98_;
   double tmp100_ = tmp91_*tmp13_;
   double tmp101_ = tmp100_*(tmp19_);
   double tmp102_ = tmp99_+tmp101_;
   double tmp103_ = tmp91_*tmp4_;
   double tmp104_ = tmp103_*(tmp9_);
   double tmp105_ = tmp91_*tmp3_;
   double tmp106_ = tmp105_*(tmp16_);
   double tmp107_ = tmp104_+tmp106_;
   double tmp108_ = tmp2_*(tmp19_);
   double tmp109_ = tmp107_+tmp108_;
   double tmp110_ = (tmp109_)*(tmp34_);
   double tmp111_ = (tmp41_)*(tmp102_);
   double tmp112_ = tmp110_-tmp111_;
   double tmp113_ = (tmp112_)/tmp68_;
   double tmp114_ = tmp93_*tmp10_;
   double tmp115_ = tmp114_*(tmp9_);
   double tmp116_ = tmp94_*tmp10_;
   double tmp117_ = tmp116_*(tmp16_);
   double tmp118_ = tmp115_+tmp117_;
   double tmp119_ = tmp91_*tmp10_;
   double tmp120_ = tmp119_*(tmp19_);
   double tmp121_ = tmp118_+tmp120_;
   double tmp122_ = (tmp121_)*(tmp34_);
   double tmp123_ = (tmp54_)*(tmp102_);
   double tmp124_ = tmp122_-tmp123_;
   double tmp125_ = (tmp124_)/tmp68_;
   double tmp126_ = -(tmp13_);
   double tmp127_ = tmp56_*tmp10_;
   double tmp128_ = tmp126_*tmp20_;
   double tmp129_ = tmp127_*tmp21_;
   double tmp130_ = tmp128_+tmp129_;
   double tmp131_ = (tmp130_)*(tmp9_);
   double tmp132_ = tmp126_*tmp4_;
   double tmp133_ = tmp127_*tmp22_;
   double tmp134_ = tmp132_+tmp133_;
   double tmp135_ = (tmp134_)*(tmp16_);
   double tmp136_ = tmp131_+tmp135_;
   double tmp137_ = tmp127_*tmp2_;
   double tmp138_ = tmp137_*(tmp19_);
   double tmp139_ = tmp136_+tmp138_;
   double tmp140_ = (tmp41_)*(tmp139_);
   double tmp141_ = -(tmp140_);
   double tmp142_ = tmp141_/tmp68_;
   double tmp143_ = tmp127_*tmp20_;
   double tmp144_ = tmp13_*tmp21_;
   double tmp145_ = tmp143_+tmp144_;
   double tmp146_ = (tmp145_)*(tmp9_);
   double tmp147_ = tmp127_*tmp4_;
   double tmp148_ = tmp13_*tmp22_;
   double tmp149_ = tmp147_+tmp148_;
   double tmp150_ = (tmp149_)*(tmp16_);
   double tmp151_ = tmp146_+tmp150_;
   double tmp152_ = tmp13_*tmp2_;
   double tmp153_ = tmp152_*(tmp19_);
   double tmp154_ = tmp151_+tmp153_;
   double tmp155_ = (tmp154_)*(tmp34_);
   double tmp156_ = (tmp54_)*(tmp139_);
   double tmp157_ = tmp155_-tmp156_;
   double tmp158_ = (tmp157_)/tmp68_;
   double tmp159_ = tmp56_*(tmp25_);
   double tmp160_ = tmp56_*tmp35_;
   double tmp161_ = tmp160_*(tmp34_);
   double tmp162_ = (tmp41_)*tmp159_;
   double tmp163_ = tmp161_-tmp162_;
   double tmp164_ = (tmp163_)/tmp68_;
   double tmp165_ = tmp56_*(tmp45_);
   double tmp166_ = tmp165_*(tmp34_);
   double tmp167_ = (tmp54_)*tmp159_;
   double tmp168_ = tmp166_-tmp167_;
   double tmp169_ = (tmp168_)/tmp68_;
   double tmp170_ = tmp56_*(tmp29_);
   double tmp171_ = tmp56_*tmp37_;
   double tmp172_ = tmp171_*(tmp34_);
   double tmp173_ = (tmp41_)*tmp170_;
   double tmp174_ = tmp172_-tmp173_;
   double tmp175_ = (tmp174_)/tmp68_;
   double tmp176_ = tmp56_*(tmp49_);
   double tmp177_ = tmp176_*(tmp34_);
   double tmp178_ = (tmp54_)*tmp170_;
   double tmp179_ = tmp177_-tmp178_;
   double tmp180_ = (tmp179_)/tmp68_;
   double tmp181_ = tmp56_*tmp32_;
   double tmp182_ = tmp91_*(tmp34_);
   double tmp183_ = (tmp41_)*tmp181_;
   double tmp184_ = tmp182_-tmp183_;
   double tmp185_ = (tmp184_)/tmp68_;
   double tmp186_ = tmp56_*tmp52_;
   double tmp187_ = tmp186_*(tmp34_);
   double tmp188_ = (tmp54_)*tmp181_;
   double tmp189_ = tmp187_-tmp188_;
   double tmp190_ = (tmp189_)/tmp68_;
   double tmp191_ = tmp35_*(tmp34_);
   double tmp192_ = (tmp41_)*(tmp25_);
   double tmp193_ = tmp191_-tmp192_;
   double tmp194_ = (tmp193_)/tmp68_;
   double tmp195_ = (tmp45_)*(tmp34_);
   double tmp196_ = (tmp54_)*(tmp25_);
   double tmp197_ = tmp195_-tmp196_;
   double tmp198_ = (tmp197_)/tmp68_;
   double tmp199_ = tmp37_*(tmp34_);
   double tmp200_ = (tmp41_)*(tmp29_);
   double tmp201_ = tmp199_-tmp200_;
   double tmp202_ = (tmp201_)/tmp68_;
   double tmp203_ = (tmp49_)*(tmp34_);
   double tmp204_ = (tmp54_)*(tmp29_);
   double tmp205_ = tmp203_-tmp204_;
   double tmp206_ = (tmp205_)/tmp68_;
   double tmp207_ = tmp5_*(tmp34_);
   double tmp208_ = (tmp41_)*tmp32_;
   double tmp209_ = tmp207_-tmp208_;
   double tmp210_ = (tmp209_)/tmp68_;
   double tmp211_ = tmp52_*(tmp34_);
   double tmp212_ = (tmp54_)*tmp32_;
   double tmp213_ = tmp211_-tmp212_;
   double tmp214_ = (tmp213_)/tmp68_;

  mVal[0] = (mLocXIm-tmp69_*(mLocNDP0_x+mLocNDdx_x*(tmp42_)+mLocNDdy_x*(tmp55_))-tmp90_*(mLocNDP0_y+mLocNDdx_y*(tmp42_)+mLocNDdy_y*(tmp55_)))*mLocScNorm;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = 0;
  mCompDer[0][4] = 0;
  mCompDer[0][5] = 0;
  mCompDer[0][6] = 0;
  mCompDer[0][7] = 0;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = 0;
  mCompDer[0][10] = (-(((tmp77_)*mLocNDdx_x+(tmp89_)*mLocNDdy_x)*tmp69_)-((tmp77_)*mLocNDdx_y+(tmp89_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][11] = (-(((tmp113_)*mLocNDdx_x+(tmp125_)*mLocNDdy_x)*tmp69_)-((tmp113_)*mLocNDdx_y+(tmp125_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][12] = (-(((tmp142_)*mLocNDdx_x+(tmp158_)*mLocNDdy_x)*tmp69_)-((tmp142_)*mLocNDdx_y+(tmp158_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][13] = (-(((tmp164_)*mLocNDdx_x+(tmp169_)*mLocNDdy_x)*tmp69_)-((tmp164_)*mLocNDdx_y+(tmp169_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][14] = (-(((tmp175_)*mLocNDdx_x+(tmp180_)*mLocNDdy_x)*tmp69_)-((tmp175_)*mLocNDdx_y+(tmp180_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][15] = (-(((tmp185_)*mLocNDdx_x+(tmp190_)*mLocNDdy_x)*tmp69_)-((tmp185_)*mLocNDdx_y+(tmp190_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][16] = (-(((tmp194_)*mLocNDdx_x+(tmp198_)*mLocNDdy_x)*tmp69_)-((tmp194_)*mLocNDdx_y+(tmp198_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][17] = (-(((tmp202_)*mLocNDdx_x+(tmp206_)*mLocNDdy_x)*tmp69_)-((tmp202_)*mLocNDdx_y+(tmp206_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
  mCompDer[0][18] = (-(((tmp210_)*mLocNDdx_x+(tmp214_)*mLocNDdy_x)*tmp69_)-((tmp210_)*mLocNDdx_y+(tmp214_)*mLocNDdy_y)*tmp90_)*mLocScNorm;
}


void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Droite_NoDist__PTInc_M2CDRad5 Has no Der Sec");
}

void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetNDP0_x(double aVal){ mLocNDP0_x = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetNDP0_y(double aVal){ mLocNDP0_y = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetNDdx_x(double aVal){ mLocNDdx_x = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetNDdx_y(double aVal){ mLocNDdx_y = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetNDdy_x(double aVal){ mLocNDdy_x = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetNDdy_y(double aVal){ mLocNDdy_y = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_Droite_NoDist__PTInc_M2CDRad5::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_Droite_NoDist__PTInc_M2CDRad5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "NDP0_x") return & mLocNDP0_x;
   if (aName == "NDP0_y") return & mLocNDP0_y;
   if (aName == "NDdx_x") return & mLocNDdx_x;
   if (aName == "NDdx_y") return & mLocNDdx_y;
   if (aName == "NDdy_x") return & mLocNDdy_x;
   if (aName == "NDdy_y") return & mLocNDdy_y;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Droite_NoDist__PTInc_M2CDRad5::mTheAuto("cEqAppui_Droite_NoDist__PTInc_M2CDRad5",cEqAppui_Droite_NoDist__PTInc_M2CDRad5::Alloc);


cElCompiledFonc *  cEqAppui_Droite_NoDist__PTInc_M2CDRad5::Alloc()
{  return new cEqAppui_Droite_NoDist__PTInc_M2CDRad5();
}

