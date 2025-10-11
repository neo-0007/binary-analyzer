
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
_dl_runtime_profile_avx
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte bVar12;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_YMM0_H;
  undefined8 extraout_var;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_YMM1_H;
  undefined8 extraout_var_00;
  undefined1 auVar13 [16];
  undefined8 unaff_retaddr;
  undefined8 auStack_3a8 [5];
  undefined8 local_380;
  undefined8 local_378;
  long local_10;
  undefined8 *local_8;
  
  bVar12 = 0;
  local_8 = auStack_3a8 + 1;
  auStack_3a8[0] = 0x78168a;
  auStack_3a8[1] = param_3;
  auStack_3a8[2] = param_5;
  auStack_3a8[3] = param_6;
  auStack_3a8[4] = param_4;
  local_380 = param_2;
  local_378 = param_1;
  UNRECOVERED_JUMPTABLE =
       (code *)_dl_profile_fixup(unaff_retaddr,param_7,param_8,auStack_3a8 + 1,&local_10);
  uVar6 = auStack_3a8[3];
  uVar5 = auStack_3a8[2];
  uVar7 = auStack_3a8[1];
  if (local_10 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0078188a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar13 = (*UNRECOVERED_JUMPTABLE)(local_378,local_380,auStack_3a8[1],auStack_3a8[4]);
    return auVar13;
  }
  uVar11 = local_10 + 8U & 0xfffffffffffffff0;
  lVar4 = -uVar11;
  puVar9 = (undefined8 *)&stack0x00000018;
  puVar10 = (undefined8 *)((long)auStack_3a8 + lVar4 + 8U);
  for (uVar11 = uVar11 >> 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
    puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
  }
  uVar1 = puVar10[3];
  uVar2 = puVar10[4];
  uVar3 = puVar10[5];
  *(undefined8 *)((long)auStack_3a8 + lVar4) = 0x7818b8;
  uVar7 = (*UNRECOVERED_JUMPTABLE)(uVar3,uVar2,uVar7,uVar1,uVar5,uVar6);
  puVar9 = local_8;
  pauVar8 = (undefined1 (*) [16])(local_8 + 0xffffffffffffffde);
  local_8[0xffffffffffffffde] = uVar7;
  puVar9[0xffffffffffffffdf] = extraout_RDX;
  puVar9[0xffffffffffffffe0] = extraout_XMM0_Qa;
  puVar9[0xffffffffffffffe1] = extraout_XMM0_Qb;
  puVar9[0xffffffffffffffe2] = extraout_XMM1_Qa;
  puVar9[0xffffffffffffffe3] = extraout_XMM1_Qb;
  puVar9[0xffffffffffffffe8] = extraout_XMM0_Qa;
  puVar9[0xffffffffffffffe9] = extraout_XMM0_Qb;
  puVar9[0xffffffffffffffea] = extraout_YMM0_H;
  puVar9[0xffffffffffffffeb] = extraout_var;
  puVar9[0xfffffffffffffff0] = extraout_XMM1_Qa;
  puVar9[0xfffffffffffffff1] = extraout_XMM1_Qb;
  puVar9[0xfffffffffffffff2] = extraout_YMM1_H;
  puVar9[0xfffffffffffffff3] = extraout_var_00;
  puVar9[0xfffffffffffffffc] = extraout_XMM0_Qa;
  puVar9[0xfffffffffffffffd] = extraout_XMM0_Qb;
  puVar9[0xfffffffffffffffe] = extraout_XMM1_Qa;
  puVar9[0xffffffffffffffff] = extraout_XMM1_Qb;
  *(unkbyte10 *)(puVar9 + 0xffffffffffffffe4) = in_ST0;
  *(unkbyte10 *)(puVar9 + 0xffffffffffffffe6) = in_ST1;
  puVar10 = local_8;
  puVar9[0xffffffffffffffdd] = 0x781909;
  _dl_audit_pltexit(unaff_retaddr,param_7,puVar10);
  return *pauVar8;
}

