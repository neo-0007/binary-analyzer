
/* WARNING: Removing unreachable block (ram,0x00734b75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00733540(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  
  if ((*(uint *)(**(long **)(in_FS_OFFSET + -0x78) + 0x278) & 1) != 0) {
    if (param_1 == param_2) {
      uVar11 = 0;
    }
    else {
      lVar15 = (*(long **)(in_FS_OFFSET + -0x78))[0xe];
      lVar16 = 0;
      do {
        pbVar1 = *param_1 + lVar16;
        uVar12 = *(int *)(lVar15 + (ulong)*pbVar1 * 4) -
                 *(int *)(lVar15 + (ulong)(byte)(*param_2)[lVar16] * 4);
        uVar11 = (ulong)uVar12;
        if (uVar12 != 0) {
          return uVar11;
        }
        lVar16 = lVar16 + 1;
      } while (*pbVar1 != 0);
    }
    return uVar11;
  }
  uVar12 = (uint)param_2;
  uVar9 = (uint)param_1;
  if (((uVar12 & 0x3f) < 0x31) && ((uVar9 & 0x3f) < 0x31)) {
    auVar2 = *param_1;
    auVar3 = *param_2;
    auVar4 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
    auVar5 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
    auVar6 = vpcmpgtb_avx(auVar3,_DAT_0082bbf0);
    auVar7 = vpcmpgtb_avx(auVar3,_DAT_0082bce0);
    auVar4 = vpandn_avx(auVar5,auVar4);
    auVar5 = vpandn_avx(auVar7,auVar6);
    auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
    auVar5 = vpand_avx(auVar5,_DAT_0082bc10);
    auVar4 = vpor_avx(auVar4,auVar2);
    auVar3 = vpor_avx(auVar5,auVar3);
    auVar2 = vpcmpeqb_avx((undefined1  [16])0x0,auVar4);
    auVar3 = vpcmpeqb_avx(auVar4,auVar3);
    auVar2 = vpsubb_avx(auVar3,auVar2);
    uVar14 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar14 != 0) goto LAB_00734b80;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  param_2 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0);
  uVar12 = uVar12 & 0xf;
  uVar9 = uVar9 & 0xf;
  uVar11 = (ulong)uVar9;
  if (uVar12 != uVar9) {
    uVar10 = uVar11;
    uVar13 = (ulong)uVar12;
    pauVar17 = param_2;
    if (uVar12 <= uVar9) {
      uVar10 = (ulong)uVar12;
      uVar13 = uVar11;
      pauVar17 = param_1;
      param_1 = param_2;
    }
    auVar2 = vpcmpeqb_avx((undefined1  [16])0x0,*pauVar17);
                    /* WARNING: Could not recover jumptable at 0x00733649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*(code *)(&DAT_0082bcf0 + *(int *)(&DAT_0082bcf0 + ((uVar10 + 0xf) - uVar13) * 4)))
                       (auVar2._0_8_,SUB168(*pauVar17,0),*(undefined8 *)*param_1);
    return uVar11;
  }
  auVar2 = *param_2;
  auVar6 = vpcmpeqb_avx((undefined1  [16])0x0,auVar2);
  auVar3 = *param_1;
  auVar4 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
  auVar5 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
  auVar7 = vpcmpgtb_avx(auVar3,_DAT_0082bbf0);
  auVar8 = vpcmpgtb_avx(auVar3,_DAT_0082bce0);
  auVar4 = vpandn_avx(auVar5,auVar4);
  auVar5 = vpandn_avx(auVar8,auVar7);
  auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
  auVar5 = vpand_avx(auVar5,_DAT_0082bc10);
  auVar2 = vpor_avx(auVar4,auVar2);
  auVar3 = vpor_avx(auVar5,auVar3);
  auVar2 = vpcmpeqb_avx(auVar2,auVar3);
  auVar2 = vpsubb_avx(auVar2,auVar6);
  uVar14 = 0xffff >> (sbyte)uVar12;
  uVar9 = (uint)((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) >> (sbyte)uVar12);
  bVar18 = uVar14 < uVar9;
  uVar14 = uVar14 - uVar9;
  bVar19 = uVar14 == 0;
  if (bVar19) {
    lVar15 = 0x10;
    do {
      auVar2 = *(undefined1 (*) [16])(*param_1 + lVar15);
      auVar3 = *(undefined1 (*) [16])(*param_2 + lVar15);
      auVar4 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
      auVar5 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
      auVar6 = vpcmpgtb_avx(auVar3,_DAT_0082bbf0);
      auVar7 = vpcmpgtb_avx(auVar3,_DAT_0082bce0);
      auVar4 = vpandn_avx(auVar5,auVar4);
      auVar5 = vpandn_avx(auVar7,auVar6);
      auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
      auVar5 = vpand_avx(auVar5,_DAT_0082bc10);
      auVar2 = vpor_avx(auVar4,auVar2);
      auVar3 = vpor_avx(auVar5,auVar3);
      vpcmpistri_avx(auVar2,auVar3,0x1a);
      lVar16 = lVar15 + 0x10;
      if (bVar18 || bVar19) break;
      auVar2 = *(undefined1 (*) [16])(param_1[1] + lVar15);
      auVar3 = *(undefined1 (*) [16])(param_2[1] + lVar15);
      auVar4 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
      auVar5 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
      auVar6 = vpcmpgtb_avx(auVar3,_DAT_0082bbf0);
      auVar7 = vpcmpgtb_avx(auVar3,_DAT_0082bce0);
      auVar4 = vpandn_avx(auVar5,auVar4);
      auVar5 = vpandn_avx(auVar7,auVar6);
      auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
      auVar5 = vpand_avx(auVar5,_DAT_0082bc10);
      auVar2 = vpor_avx(auVar4,auVar2);
      auVar3 = vpor_avx(auVar5,auVar3);
      vpcmpistri_avx(auVar2,auVar3,0x1a);
      lVar16 = lVar15 + 0x20;
      lVar15 = lVar16;
    } while (!bVar18 && !bVar19);
    if (bVar18) {
      return (ulong)(uint)(*(int *)(&DAT_00831080 + (ulong)(byte)(*param_1)[lVar16] * 4) -
                          *(int *)(&DAT_00831080 + (ulong)(byte)(*param_2)[lVar16] * 4));
    }
    return 0;
  }
  param_1 = (undefined1 (*) [16])(*param_1 + uVar11);
  param_2 = (undefined1 (*) [16])(*param_2 + uVar12);
LAB_00734b80:
  lVar15 = 0;
  if (uVar14 != 0) {
    for (; (uVar14 >> lVar15 & 1) == 0; lVar15 = lVar15 + 1) {
    }
  }
  return (ulong)(uint)(*(int *)(&DAT_00831080 + (ulong)(byte)(*param_1)[lVar15] * 4) -
                      *(int *)(&DAT_00831080 + (ulong)(byte)(*param_2)[lVar15] * 4));
}

