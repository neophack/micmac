// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_Y_C2MPolyn6.h"


cEqAppui_Y_C2MPolyn6::cEqAppui_Y_C2MPolyn6():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,53));
   AddIntRef (cIncIntervale("Orient",53,59));
   Close(false);
}



void cEqAppui_Y_C2MPolyn6::ComputeVal()
{
   double tmp0_ = mCompCoord[53];
   double tmp1_ = mCompCoord[55];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[54];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[56];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[57];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[58];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn6_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn6_State_0_0;
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = (tmp21_)*(tmp21_);
   double tmp24_ = tmp22_*(tmp20_);
   double tmp25_ = (tmp21_)*(tmp20_);
   double tmp26_ = tmp25_*(tmp20_);
   double tmp27_ = tmp23_*(tmp20_);
   double tmp28_ = (tmp21_)*tmp23_;
   double tmp29_ = tmp24_*(tmp20_);
   double tmp30_ = tmp26_*(tmp20_);
   double tmp31_ = tmp27_*(tmp20_);
   double tmp32_ = tmp28_*(tmp20_);
   double tmp33_ = (tmp21_)*tmp28_;
   double tmp34_ = tmp29_*(tmp20_);
   double tmp35_ = tmp30_*(tmp20_);
   double tmp36_ = tmp31_*(tmp20_);
   double tmp37_ = tmp32_*(tmp20_);
   double tmp38_ = tmp33_*(tmp20_);
   double tmp39_ = (tmp21_)*tmp33_;

  mVal[0] = (mCompCoord[2]+mCompCoord[0]*(((tmp9_*tmp3_+tmp10_*tmp8_)*(tmp12_)+(tmp2_*tmp3_+tmp14_*tmp8_)*(tmp16_)+tmp17_*tmp8_*(tmp19_))/((tmp9_*tmp13_+tmp10_*tmp3_)*(tmp12_)+(tmp2_*tmp13_+tmp14_*tmp3_)*(tmp16_)+tmp17_*tmp3_*(tmp19_))))-((((1-mCompCoord[3])*(tmp21_)+mCompCoord[4]*(tmp20_)+mCompCoord[5]*(tmp20_)*(tmp21_))-mCompCoord[6]*2*tmp23_+mCompCoord[8]*tmp22_)*mLocPolyn6_State_0_0+(mCompCoord[13]*tmp24_+mCompCoord[14]*tmp26_+mCompCoord[15]*tmp27_+mCompCoord[16]*tmp28_+mCompCoord[22]*tmp29_+mCompCoord[23]*tmp30_+mCompCoord[24]*tmp31_+mCompCoord[25]*tmp32_+mCompCoord[26]*tmp33_+mCompCoord[33]*tmp34_+mCompCoord[34]*tmp35_+mCompCoord[35]*tmp36_+mCompCoord[36]*tmp37_+mCompCoord[37]*tmp38_+mCompCoord[38]*tmp39_+mCompCoord[46]*tmp34_*(tmp20_)+mCompCoord[47]*tmp35_*(tmp20_)+mCompCoord[48]*tmp36_*(tmp20_)+mCompCoord[49]*tmp37_*(tmp20_)+mCompCoord[50]*tmp38_*(tmp20_)+mCompCoord[51]*tmp39_*(tmp20_)+mCompCoord[52]*(tmp21_)*tmp39_)*mLocPolyn6_State_0_0);

}


void cEqAppui_Y_C2MPolyn6::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[53];
   double tmp1_ = mCompCoord[55];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[54];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[56];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[57];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[58];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn6_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn6_State_0_0;
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = (tmp21_)*(tmp21_);
   double tmp24_ = tmp22_*(tmp20_);
   double tmp25_ = (tmp21_)*(tmp20_);
   double tmp26_ = tmp25_*(tmp20_);
   double tmp27_ = tmp23_*(tmp20_);
   double tmp28_ = (tmp21_)*tmp23_;
   double tmp29_ = tmp24_*(tmp20_);
   double tmp30_ = tmp26_*(tmp20_);
   double tmp31_ = tmp27_*(tmp20_);
   double tmp32_ = tmp28_*(tmp20_);
   double tmp33_ = (tmp21_)*tmp28_;
   double tmp34_ = tmp29_*(tmp20_);
   double tmp35_ = tmp30_*(tmp20_);
   double tmp36_ = tmp31_*(tmp20_);
   double tmp37_ = tmp32_*(tmp20_);
   double tmp38_ = tmp33_*(tmp20_);
   double tmp39_ = (tmp21_)*tmp33_;
   double tmp40_ = tmp9_*tmp3_;
   double tmp41_ = tmp10_*tmp8_;
   double tmp42_ = tmp40_+tmp41_;
   double tmp43_ = (tmp42_)*(tmp12_);
   double tmp44_ = tmp2_*tmp3_;
   double tmp45_ = tmp14_*tmp8_;
   double tmp46_ = tmp44_+tmp45_;
   double tmp47_ = (tmp46_)*(tmp16_);
   double tmp48_ = tmp43_+tmp47_;
   double tmp49_ = tmp17_*tmp8_;
   double tmp50_ = tmp49_*(tmp19_);
   double tmp51_ = tmp48_+tmp50_;
   double tmp52_ = tmp9_*tmp13_;
   double tmp53_ = tmp10_*tmp3_;
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = (tmp54_)*(tmp12_);
   double tmp56_ = tmp2_*tmp13_;
   double tmp57_ = tmp14_*tmp3_;
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = (tmp58_)*(tmp16_);
   double tmp60_ = tmp55_+tmp59_;
   double tmp61_ = tmp17_*tmp3_;
   double tmp62_ = tmp61_*(tmp19_);
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = (tmp51_)/(tmp63_);
   double tmp65_ = (tmp20_)*(tmp21_);
   double tmp66_ = tmp34_*(tmp20_);
   double tmp67_ = tmp35_*(tmp20_);
   double tmp68_ = tmp36_*(tmp20_);
   double tmp69_ = tmp37_*(tmp20_);
   double tmp70_ = tmp38_*(tmp20_);
   double tmp71_ = tmp39_*(tmp20_);
   double tmp72_ = (tmp21_)*tmp39_;
   double tmp73_ = -(1);
   double tmp74_ = tmp73_*tmp4_;
   double tmp75_ = -(tmp2_);
   double tmp76_ = tmp74_*tmp7_;
   double tmp77_ = mCompCoord[0];
   double tmp78_ = -(tmp17_);
   double tmp79_ = tmp78_*tmp2_;
   double tmp80_ = tmp78_*tmp4_;
   double tmp81_ = tmp73_*tmp6_;
   double tmp82_ = ElSquare(tmp63_);
   double tmp83_ = tmp73_*tmp8_;
   double tmp84_ = -(tmp3_);

  mVal[0] = (mCompCoord[2]+tmp77_*(tmp64_))-((((1-mCompCoord[3])*(tmp21_)+mCompCoord[4]*(tmp20_)+mCompCoord[5]*tmp65_)-mCompCoord[6]*2*tmp23_+mCompCoord[8]*tmp22_)*mLocPolyn6_State_0_0+(mCompCoord[13]*tmp24_+mCompCoord[14]*tmp26_+mCompCoord[15]*tmp27_+mCompCoord[16]*tmp28_+mCompCoord[22]*tmp29_+mCompCoord[23]*tmp30_+mCompCoord[24]*tmp31_+mCompCoord[25]*tmp32_+mCompCoord[26]*tmp33_+mCompCoord[33]*tmp34_+mCompCoord[34]*tmp35_+mCompCoord[35]*tmp36_+mCompCoord[36]*tmp37_+mCompCoord[37]*tmp38_+mCompCoord[38]*tmp39_+mCompCoord[46]*tmp66_+mCompCoord[47]*tmp67_+mCompCoord[48]*tmp68_+mCompCoord[49]*tmp69_+mCompCoord[50]*tmp70_+mCompCoord[51]*tmp71_+mCompCoord[52]*tmp72_)*mLocPolyn6_State_0_0);

  mCompDer[0][0] = tmp64_;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 1;
  mCompDer[0][3] = -(tmp73_*(tmp21_)*mLocPolyn6_State_0_0);
  mCompDer[0][4] = -((tmp20_)*mLocPolyn6_State_0_0);
  mCompDer[0][5] = -(tmp65_*mLocPolyn6_State_0_0);
  mCompDer[0][6] = -(-(2*tmp23_)*mLocPolyn6_State_0_0);
  mCompDer[0][7] = 0;
  mCompDer[0][8] = -(tmp22_*mLocPolyn6_State_0_0);
  mCompDer[0][9] = 0;
  mCompDer[0][10] = 0;
  mCompDer[0][11] = 0;
  mCompDer[0][12] = 0;
  mCompDer[0][13] = -(tmp24_*mLocPolyn6_State_0_0);
  mCompDer[0][14] = -(tmp26_*mLocPolyn6_State_0_0);
  mCompDer[0][15] = -(tmp27_*mLocPolyn6_State_0_0);
  mCompDer[0][16] = -(tmp28_*mLocPolyn6_State_0_0);
  mCompDer[0][17] = 0;
  mCompDer[0][18] = 0;
  mCompDer[0][19] = 0;
  mCompDer[0][20] = 0;
  mCompDer[0][21] = 0;
  mCompDer[0][22] = -(tmp29_*mLocPolyn6_State_0_0);
  mCompDer[0][23] = -(tmp30_*mLocPolyn6_State_0_0);
  mCompDer[0][24] = -(tmp31_*mLocPolyn6_State_0_0);
  mCompDer[0][25] = -(tmp32_*mLocPolyn6_State_0_0);
  mCompDer[0][26] = -(tmp33_*mLocPolyn6_State_0_0);
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mCompDer[0][33] = -(tmp34_*mLocPolyn6_State_0_0);
  mCompDer[0][34] = -(tmp35_*mLocPolyn6_State_0_0);
  mCompDer[0][35] = -(tmp36_*mLocPolyn6_State_0_0);
  mCompDer[0][36] = -(tmp37_*mLocPolyn6_State_0_0);
  mCompDer[0][37] = -(tmp38_*mLocPolyn6_State_0_0);
  mCompDer[0][38] = -(tmp39_*mLocPolyn6_State_0_0);
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = 0;
  mCompDer[0][43] = 0;
  mCompDer[0][44] = 0;
  mCompDer[0][45] = 0;
  mCompDer[0][46] = -(tmp66_*mLocPolyn6_State_0_0);
  mCompDer[0][47] = -(tmp67_*mLocPolyn6_State_0_0);
  mCompDer[0][48] = -(tmp68_*mLocPolyn6_State_0_0);
  mCompDer[0][49] = -(tmp69_*mLocPolyn6_State_0_0);
  mCompDer[0][50] = -(tmp70_*mLocPolyn6_State_0_0);
  mCompDer[0][51] = -(tmp71_*mLocPolyn6_State_0_0);
  mCompDer[0][52] = -(tmp72_*mLocPolyn6_State_0_0);
  mCompDer[0][53] = ((((tmp75_*tmp3_+tmp76_*tmp8_)*(tmp12_)+(tmp74_*tmp3_+tmp41_)*(tmp16_))*(tmp63_)-(tmp51_)*((tmp75_*tmp13_+tmp76_*tmp3_)*(tmp12_)+(tmp74_*tmp13_+tmp53_)*(tmp16_)))/tmp82_)*tmp77_;
  mCompDer[0][54] = (((tmp79_*tmp8_*(tmp12_)+tmp80_*tmp8_*(tmp16_)+tmp81_*tmp8_*(tmp19_))*(tmp63_)-(tmp51_)*(tmp79_*tmp3_*(tmp12_)+tmp80_*tmp3_*(tmp16_)+tmp81_*tmp3_*(tmp19_)))/tmp82_)*tmp77_;
  mCompDer[0][55] = ((((tmp83_*tmp9_+tmp3_*tmp10_)*(tmp12_)+(tmp83_*tmp2_+tmp3_*tmp14_)*(tmp16_)+tmp3_*tmp17_*(tmp19_))*(tmp63_)-(tmp51_)*((tmp84_*tmp9_+tmp83_*tmp10_)*(tmp12_)+(tmp84_*tmp2_+tmp83_*tmp14_)*(tmp16_)+tmp83_*tmp17_*(tmp19_)))/tmp82_)*tmp77_;
  mCompDer[0][56] = ((tmp73_*(tmp42_)*(tmp63_)-(tmp51_)*tmp73_*(tmp54_))/tmp82_)*tmp77_;
  mCompDer[0][57] = ((tmp73_*(tmp46_)*(tmp63_)-(tmp51_)*tmp73_*(tmp58_))/tmp82_)*tmp77_;
  mCompDer[0][58] = ((tmp73_*tmp49_*(tmp63_)-(tmp51_)*tmp73_*tmp61_)/tmp82_)*tmp77_;
}


void cEqAppui_Y_C2MPolyn6::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Y_C2MPolyn6 Has no Der Sec");
}

void cEqAppui_Y_C2MPolyn6::SetPolyn6_State_0_0(double aVal){ mLocPolyn6_State_0_0 = aVal;}
void cEqAppui_Y_C2MPolyn6::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_Y_C2MPolyn6::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_Y_C2MPolyn6::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_Y_C2MPolyn6::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_Y_C2MPolyn6::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_Y_C2MPolyn6::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn6_State_0_0") return & mLocPolyn6_State_0_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Y_C2MPolyn6::mTheAuto("cEqAppui_Y_C2MPolyn6",cEqAppui_Y_C2MPolyn6::Alloc);


cElCompiledFonc *  cEqAppui_Y_C2MPolyn6::Alloc()
{  return new cEqAppui_Y_C2MPolyn6();
}


