
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058b180(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = vpshufb_avx(*param_2,_DAT_0058b100);
  auVar2 = vpshufb_avx(param_2[1],_DAT_0058b100);
  auVar3 = vpshufb_avx(param_2[2],_DAT_0058b100);
  auVar4 = vpshufb_avx(param_2[3],_DAT_0058b100);
  auVar5 = vpshufb_avx(param_2[4],_DAT_0058b100);
  auVar6 = vpshufb_avx(param_2[5],_DAT_0058b100);
  vpaddq_avx(auVar1,_DAT_0058ac00);
  auVar7 = vpshufb_avx(param_2[6],_DAT_0058b100);
  vpaddq_avx(auVar2,_DAT_0058ac20);
  auVar8 = vpshufb_avx(param_2[7],_DAT_0058b100);
  vpaddq_avx(auVar3,_DAT_0058ac40);
  vpaddq_avx(auVar4,_DAT_0058ac60);
  vpaddq_avx(auVar5,_DAT_0058ac80);
  vpaddq_avx(auVar6,_DAT_0058aca0);
  vpaddq_avx(auVar7,_DAT_0058acc0);
  vpaddq_avx(auVar8,_DAT_0058ace0);
  vpalignr_avx(auVar2,auVar1,8);
  vpalignr_avx(auVar6,auVar5,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

