
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha512_block_data_order_xop(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = vpshufb_avx(*param_2,_DAT_005fda40);
  auVar2 = vpshufb_avx(param_2[1],_DAT_005fda40);
  auVar3 = vpshufb_avx(param_2[2],_DAT_005fda40);
  auVar4 = vpshufb_avx(param_2[3],_DAT_005fda40);
  auVar5 = vpshufb_avx(param_2[4],_DAT_005fda40);
  auVar6 = vpshufb_avx(param_2[5],_DAT_005fda40);
  vpaddq_avx(auVar1,_K512);
  auVar7 = vpshufb_avx(param_2[6],_DAT_005fda40);
  vpaddq_avx(auVar2,_DAT_005fd560);
  auVar8 = vpshufb_avx(param_2[7],_DAT_005fda40);
  vpaddq_avx(auVar3,_DAT_005fd580);
  vpaddq_avx(auVar4,_DAT_005fd5a0);
  vpaddq_avx(auVar5,_DAT_005fd5c0);
  vpaddq_avx(auVar6,_DAT_005fd5e0);
  vpaddq_avx(auVar7,_DAT_005fd600);
  vpaddq_avx(auVar8,_DAT_005fd620);
  vpalignr_avx(auVar2,auVar1,8);
  vpalignr_avx(auVar6,auVar5,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

