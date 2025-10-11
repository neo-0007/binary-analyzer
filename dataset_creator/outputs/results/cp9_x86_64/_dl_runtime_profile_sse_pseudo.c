
/* WARNING: Type propagation algorithm not settling */

undefined8
_dl_runtime_profile_sse
          (undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte bVar12;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 unaff_retaddr;
  undefined8 auStack_3a8 [5];
  undefined8 local_380;
  undefined8 local_378;
  long local_10;
  undefined8 *local_8;
  
  uVar14 = (undefined4)((ulong)param_2 >> 0x20);
  uVar13 = (undefined4)param_2;
  bVar12 = 0;
  local_8 = auStack_3a8 + 1;
  auStack_3a8[0] = 0x781a0a;
  auStack_3a8[1] = param_11;
  auStack_3a8[2] = param_13;
  auStack_3a8[3] = param_14;
  auStack_3a8[4] = param_12;
  local_380 = param_10;
  local_378 = param_9;
  UNRECOVERED_JUMPTABLE =
       (code *)_dl_profile_fixup(unaff_retaddr,param_15,param_16,auStack_3a8 + 1,&local_10);
  uVar6 = auStack_3a8[3];
  uVar5 = auStack_3a8[2];
  uVar7 = auStack_3a8[1];
  if (local_10 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00781a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(local_378,local_380,auStack_3a8[1],auStack_3a8[4]);
    return uVar7;
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
  *(undefined8 *)((long)auStack_3a8 + lVar4) = 0x781aa4;
  uVar7 = (*UNRECOVERED_JUMPTABLE)
                    (param_1,uVar13,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,uVar2,
                     uVar7,uVar1,uVar5,uVar6);
  puVar9 = local_8;
  puVar8 = local_8 + 0xffffffffffffffe2;
  local_8[0xffffffffffffffe2] = uVar7;
  puVar9[0xffffffffffffffe3] = extraout_RDX;
  *(undefined4 *)(puVar9 + 0xffffffffffffffe4) = extraout_XMM0_Da;
  *(undefined4 *)((long)puVar9 + -0xdc) = extraout_XMM0_Db;
  *(undefined4 *)(puVar9 + 0xffffffffffffffe5) = extraout_XMM0_Dc;
  *(undefined4 *)((long)puVar9 + -0xd4) = extraout_XMM0_Dd;
  *(undefined4 *)(puVar9 + 0xffffffffffffffe6) = uVar13;
  *(undefined4 *)((long)puVar9 + -0xcc) = uVar14;
  *(undefined4 *)(puVar9 + 0xffffffffffffffe7) = in_XMM1_Dc;
  *(undefined4 *)((long)puVar9 + -0xc4) = in_XMM1_Dd;
  *(unkbyte10 *)(puVar9 + 0xffffffffffffffe8) = in_ST0;
  *(unkbyte10 *)(puVar9 + 0xffffffffffffffea) = in_ST1;
  puVar10 = local_8;
  puVar9[0xffffffffffffffe1] = 0x781ad8;
  _dl_audit_pltexit(unaff_retaddr,param_15,puVar10);
  return *puVar8;
}

