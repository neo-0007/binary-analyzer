
/* WARNING: Removing unreachable block (ram,0x007168cd) */

ulong __strncmp_sse42(byte *param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    return (ulong)((uint)*param_1 - (uint)*param_2);
  }
  uVar3 = (uint)param_2;
  uVar1 = (uint)param_1;
  if (((uVar3 & 0x3f) < 0x31) && ((uVar1 & 0x3f) < 0x31)) {
    auVar12[0] = (*param_1 == 0) - (*param_1 == *param_2);
    auVar12[1] = (param_1[1] == 0) - (param_1[1] == param_2[1]);
    auVar12[2] = (param_1[2] == 0) - (param_1[2] == param_2[2]);
    auVar12[3] = (param_1[3] == 0) - (param_1[3] == param_2[3]);
    auVar12[4] = (param_1[4] == 0) - (param_1[4] == param_2[4]);
    auVar12[5] = (param_1[5] == 0) - (param_1[5] == param_2[5]);
    auVar12[6] = (param_1[6] == 0) - (param_1[6] == param_2[6]);
    auVar12[7] = (param_1[7] == 0) - (param_1[7] == param_2[7]);
    auVar12[8] = (param_1[8] == 0) - (param_1[8] == param_2[8]);
    auVar12[9] = (param_1[9] == 0) - (param_1[9] == param_2[9]);
    auVar12[10] = (param_1[10] == 0) - (param_1[10] == param_2[10]);
    auVar12[0xb] = (param_1[0xb] == 0) - (param_1[0xb] == param_2[0xb]);
    auVar12[0xc] = (param_1[0xc] == 0) - (param_1[0xc] == param_2[0xc]);
    auVar12[0xd] = (param_1[0xd] == 0) - (param_1[0xd] == param_2[0xd]);
    auVar12[0xe] = (param_1[0xe] == 0) - (param_1[0xe] == param_2[0xe]);
    auVar12[0xf] = (param_1[0xf] == 0) - (param_1[0xf] == param_2[0xf]);
    uVar4 = (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar12[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar4 != 0) goto LAB_007168d0;
    bVar10 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar10 || param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
  }
  pcVar7 = (char *)((ulong)param_2 & 0xfffffffffffffff0);
  pcVar8 = (char *)((ulong)param_1 & 0xfffffffffffffff0);
  uVar3 = uVar3 & 0xf;
  uVar9 = (ulong)uVar3;
  uVar1 = uVar1 & 0xf;
  uVar2 = (ulong)uVar1;
  if (uVar3 != uVar1) {
    if (uVar3 <= uVar1) {
      uVar2 = (ulong)uVar3;
      uVar9 = (ulong)uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x007159d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_00820c10 + *(int *)(&DAT_00820c10 + ((uVar2 + 0xf) - uVar9) * 4)))();
    return uVar2;
  }
  auVar13[0] = (*pcVar7 == '\0') - (*pcVar7 == *pcVar8);
  auVar13[1] = (pcVar7[1] == '\0') - (pcVar7[1] == pcVar8[1]);
  auVar13[2] = (pcVar7[2] == '\0') - (pcVar7[2] == pcVar8[2]);
  auVar13[3] = (pcVar7[3] == '\0') - (pcVar7[3] == pcVar8[3]);
  auVar13[4] = (pcVar7[4] == '\0') - (pcVar7[4] == pcVar8[4]);
  auVar13[5] = (pcVar7[5] == '\0') - (pcVar7[5] == pcVar8[5]);
  auVar13[6] = (pcVar7[6] == '\0') - (pcVar7[6] == pcVar8[6]);
  auVar13[7] = (pcVar7[7] == '\0') - (pcVar7[7] == pcVar8[7]);
  auVar13[8] = (pcVar7[8] == '\0') - (pcVar7[8] == pcVar8[8]);
  auVar13[9] = (pcVar7[9] == '\0') - (pcVar7[9] == pcVar8[9]);
  auVar13[10] = (pcVar7[10] == '\0') - (pcVar7[10] == pcVar8[10]);
  auVar13[0xb] = (pcVar7[0xb] == '\0') - (pcVar7[0xb] == pcVar8[0xb]);
  auVar13[0xc] = (pcVar7[0xc] == '\0') - (pcVar7[0xc] == pcVar8[0xc]);
  auVar13[0xd] = (pcVar7[0xd] == '\0') - (pcVar7[0xd] == pcVar8[0xd]);
  auVar13[0xe] = (pcVar7[0xe] == '\0') - (pcVar7[0xe] == pcVar8[0xe]);
  auVar13[0xf] = (pcVar7[0xf] == '\0') - (pcVar7[0xf] == pcVar8[0xf]);
  uVar4 = (0xffffU >> (sbyte)uVar3) -
          (uint)((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar13[0xf] >> 7) << 0xf) >> (sbyte)uVar3);
  if (uVar4 == 0) {
    uVar2 = (uVar9 - 0x10) + param_3;
    if (param_3 < uVar2) {
      return 0;
    }
    bVar10 = false;
    bVar11 = uVar2 == 0;
    if (bVar11) {
      return 0;
    }
    lVar5 = 0x10;
    while( true ) {
      uVar3 = pcmpistri(*(undefined1 (*) [16])(pcVar8 + lVar5),
                        *(undefined1 (*) [16])(pcVar7 + lVar5),0x1a);
      lVar6 = lVar5 + 0x10;
      uVar9 = uVar2;
      if (bVar10 || bVar11) break;
      bVar10 = uVar2 < 0x10;
      uVar9 = uVar2 - 0x10;
      if (bVar10 || uVar9 == 0) {
        return 0;
      }
      uVar3 = pcmpistri(*(undefined1 (*) [16])(pcVar8 + lVar6),
                        *(undefined1 (*) [16])(pcVar7 + lVar6),0x1a);
      lVar6 = lVar5 + 0x20;
      if (bVar10 || uVar9 == 0) break;
      bVar10 = uVar9 < 0x10;
      uVar2 = uVar2 - 0x20;
      bVar11 = uVar2 == 0;
      lVar5 = lVar6;
      if (bVar10 || bVar11) {
        return 0;
      }
    }
    if (!bVar10) {
      return 0;
    }
    if (uVar9 <= uVar3) {
      return 0;
    }
    lVar5 = lVar6 + -0x10 + (ulong)uVar3;
    return (ulong)((uint)(byte)pcVar8[lVar5] - (uint)(byte)pcVar7[lVar5]);
  }
  param_1 = (byte *)(pcVar8 + uVar2);
  param_2 = (byte *)(pcVar7 + uVar9);
LAB_007168d0:
  uVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (param_3 <= uVar2) {
    return 0;
  }
  return (ulong)((uint)param_1[uVar2] - (uint)param_2[uVar2]);
}

