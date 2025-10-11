
/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
_dl_runtime_profile_avx512
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [64];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar13;
  undefined8 extraout_RDX;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  byte bVar18;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined8 extraout_XMM1_Qa;
  undefined1 in_ZMM1 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM4 [64];
  undefined1 in_ZMM5 [64];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 unaff_retaddr;
  undefined8 auStack_3c8 [5];
  undefined8 local_3a0;
  undefined8 local_398;
  long local_10;
  undefined8 *local_8;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  
  bVar18 = 0;
  local_8 = auStack_3c8 + 1;
  auVar1 = vmovdqa64_avx512f(in_ZMM0);
  auVar19 = vmovdqa64_avx512f(in_ZMM1);
  auVar20 = vmovdqa64_avx512f(in_ZMM2);
  auVar2 = vmovdqa64_avx512f(in_ZMM3);
  auVar3 = vmovdqa64_avx512f(in_ZMM4);
  auVar4 = vmovdqa64_avx512f(in_ZMM5);
  auVar5 = vmovdqa64_avx512f(in_ZMM6);
  auVar6 = vmovdqa64_avx512f(in_ZMM7);
  auStack_3c8[0] = 0x781272;
  auStack_3c8[1] = param_3;
  auStack_3c8[2] = param_5;
  auStack_3c8[3] = param_6;
  auStack_3c8[4] = param_4;
  local_3a0 = param_2;
  local_398 = param_1;
  UNRECOVERED_JUMPTABLE =
       (code *)_dl_profile_fixup(unaff_retaddr,param_7,param_8,auStack_3c8 + 1,&local_10);
  uVar12 = auStack_3c8[3];
  uVar11 = auStack_3c8[2];
  uVar13 = auStack_3c8[1];
  auVar30._8_8_ = 0xffffffffffffffff;
  auVar30._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar1);
  }
  auVar23._8_8_ = 0xffffffffffffffff;
  auVar23._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar19);
  }
  auVar24._8_8_ = 0xffffffffffffffff;
  auVar24._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar20);
  }
  auVar25._8_8_ = 0xffffffffffffffff;
  auVar25._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar2);
  }
  auVar26._8_8_ = 0xffffffffffffffff;
  auVar26._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar3);
  }
  auVar27._8_8_ = 0xffffffffffffffff;
  auVar27._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar4);
  }
  auVar28._8_8_ = 0xffffffffffffffff;
  auVar28._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar5);
  }
  auVar29._8_8_ = 0xffffffffffffffff;
  auVar29._0_8_ = 0xffffffffffffffff;
  if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 | 0xff00) == 0xffff) {
    vmovdqa64_avx512f(auVar6);
  }
  if (-1 < local_10) {
    uVar17 = local_10 + 8U & 0xfffffffffffffff0;
    lVar10 = -uVar17;
    puVar15 = (undefined8 *)&stack0x00000018;
    puVar16 = (undefined8 *)((long)auStack_3c8 + lVar10 + 8U);
    for (uVar17 = uVar17 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + (ulong)bVar18 * -2 + 1;
      puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
    }
    uVar7 = puVar16[3];
    uVar8 = puVar16[4];
    uVar9 = puVar16[5];
    *(undefined8 *)((long)auStack_3c8 + lVar10) = 0x781498;
    uVar13 = (*UNRECOVERED_JUMPTABLE)(uVar9,uVar8,uVar13,uVar7,uVar11,uVar12);
    puVar15 = local_8;
    auVar20._8_56_ = extraout_var_00;
    auVar20._0_8_ = extraout_XMM1_Qa;
    auVar19._8_56_ = extraout_var;
    auVar19._0_8_ = extraout_XMM0_Qa;
    pauVar14 = (undefined1 (*) [16])(local_8 + 0xffffffffffffffde);
    local_8[0xffffffffffffffde] = uVar13;
    puVar15[0xffffffffffffffdf] = extraout_RDX;
    *(undefined1 (*) [16])(puVar15 + 0xffffffffffffffe0) = auVar19._0_16_;
    *(undefined1 (*) [16])(puVar15 + 0xffffffffffffffe2) = auVar20._0_16_;
    auVar1 = vmovdqa64_avx512f(auVar19);
    *(undefined1 (*) [64])(puVar15 + 0xffffffffffffffe8) = auVar1;
    auVar1 = vmovdqa64_avx512f(auVar20);
    *(undefined1 (*) [64])(puVar15 + 0xfffffffffffffff0) = auVar1;
    *(undefined1 (*) [16])(puVar15 + 0xfffffffffffffffc) = auVar19._0_16_;
    *(undefined1 (*) [16])(puVar15 + 0xfffffffffffffffe) = auVar20._0_16_;
    *(unkbyte10 *)(puVar15 + 0xffffffffffffffe4) = in_ST0;
    *(unkbyte10 *)(puVar15 + 0xffffffffffffffe6) = in_ST1;
    puVar16 = local_8;
    puVar15[0xffffffffffffffdd] = 0x7814f0;
    _dl_audit_pltexit(unaff_retaddr,param_7,puVar16);
    auVar21._0_8_ = -(ulong)(puVar15[0xffffffffffffffe0] == puVar15[0xfffffffffffffffc]);
    auVar21._8_8_ = -(ulong)(puVar15[0xffffffffffffffe1] == puVar15[0xfffffffffffffffd]);
    if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)((byte)(auVar21._8_8_ >> 7) & 1) << 8 |
                 (ushort)((byte)(auVar21._8_8_ >> 0xf) & 1) << 9 |
                 (ushort)((byte)(auVar21._8_8_ >> 0x17) & 1) << 10 |
                 (ushort)((byte)(auVar21._8_8_ >> 0x1f) & 1) << 0xb |
                 (ushort)((byte)(auVar21._8_8_ >> 0x27) & 1) << 0xc |
                 (ushort)((byte)(auVar21._8_8_ >> 0x2f) & 1) << 0xd |
                 (ushort)((byte)(auVar21._8_8_ >> 0x37) & 1) << 0xe |
                (ushort)(byte)(auVar21._8_8_ >> 0x3f) << 0xf) == 0xffff) {
      vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar15 + 0xffffffffffffffe8));
    }
    auVar22._0_8_ = -(ulong)(puVar15[0xffffffffffffffe2] == puVar15[0xfffffffffffffffe]);
    auVar22._8_8_ = -(ulong)(puVar15[0xffffffffffffffe3] == puVar15[0xffffffffffffffff]);
    if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                 (ushort)((byte)(auVar22._8_8_ >> 7) & 1) << 8 |
                 (ushort)((byte)(auVar22._8_8_ >> 0xf) & 1) << 9 |
                 (ushort)((byte)(auVar22._8_8_ >> 0x17) & 1) << 10 |
                 (ushort)((byte)(auVar22._8_8_ >> 0x1f) & 1) << 0xb |
                 (ushort)((byte)(auVar22._8_8_ >> 0x27) & 1) << 0xc |
                 (ushort)((byte)(auVar22._8_8_ >> 0x2f) & 1) << 0xd |
                 (ushort)((byte)(auVar22._8_8_ >> 0x37) & 1) << 0xe |
                (ushort)(byte)(auVar22._8_8_ >> 0x3f) << 0xf) == 0xffff) {
      vmovdqa64_avx512f(*(undefined1 (*) [64])(puVar15 + 0xfffffffffffffff0));
    }
    return *pauVar14;
  }
                    /* WARNING: Could not recover jumptable at 0x0078146a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar30 = (*UNRECOVERED_JUMPTABLE)(local_398,local_3a0,auStack_3c8[1],auStack_3c8[4]);
  return auVar30;
}

