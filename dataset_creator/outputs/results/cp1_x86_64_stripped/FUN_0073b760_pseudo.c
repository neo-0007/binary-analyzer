
/* WARNING: Removing unreachable block (ram,0x0073d0ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0073b760(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  
  if ((*(uint *)(**(long **)(in_FS_OFFSET + -0x78) + 0x278) & 1) != 0) {
    if ((param_1 == param_2) || (param_3 == 0)) {
      uVar9 = 0;
    }
    else {
      lVar12 = (*(long **)(in_FS_OFFSET + -0x78))[0xe];
      uVar15 = 0;
      do {
        uVar10 = *(int *)(lVar12 + (ulong)(byte)(*param_1)[uVar15] * 4) -
                 *(int *)(lVar12 + (ulong)(byte)(*param_2)[uVar15] * 4);
        uVar9 = (ulong)uVar10;
        if (uVar10 != 0) {
          return uVar9;
        }
      } while (((*param_1)[uVar15] != 0) && (uVar15 = uVar15 + 1, param_3 != uVar15));
    }
    return uVar9;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    return (ulong)(uint)(*(int *)(&DAT_00831080 + (ulong)(byte)(*param_1)[0] * 4) -
                        *(int *)(&DAT_00831080 + (ulong)(byte)(*param_2)[0] * 4));
  }
  uVar10 = (uint)param_2;
  uVar8 = (uint)param_1;
  if (((uVar10 & 0x3f) < 0x31) && ((uVar8 & 0x3f) < 0x31)) {
    auVar1 = *param_1;
    auVar2 = *param_2;
    auVar3 = vpcmpgtb_avx(auVar1,_DAT_0082bbf0);
    auVar4 = vpcmpgtb_avx(auVar1,_DAT_0082bce0);
    auVar5 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
    auVar6 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
    auVar3 = vpandn_avx(auVar4,auVar3);
    auVar4 = vpandn_avx(auVar6,auVar5);
    auVar3 = vpand_avx(auVar3,_DAT_0082bc10);
    auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
    auVar3 = vpor_avx(auVar3,auVar1);
    auVar2 = vpor_avx(auVar4,auVar2);
    auVar1 = vpcmpeqb_avx((undefined1  [16])0x0,auVar3);
    auVar2 = vpcmpeqb_avx(auVar3,auVar2);
    auVar1 = vpsubb_avx(auVar2,auVar1);
    uVar11 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar11 != 0) goto LAB_0073d0d0;
    bVar16 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar16 || param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  param_2 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0);
  uVar10 = uVar10 & 0xf;
  uVar15 = (ulong)uVar10;
  uVar8 = uVar8 & 0xf;
  uVar9 = (ulong)uVar8;
  if (uVar10 != uVar8) {
    pauVar14 = param_2;
    if (uVar10 <= uVar8) {
      uVar9 = (ulong)uVar10;
      uVar15 = (ulong)uVar8;
      pauVar14 = param_1;
      param_1 = param_2;
    }
    auVar1 = vpcmpeqb_avx((undefined1  [16])0x0,*pauVar14);
                    /* WARNING: Could not recover jumptable at 0x0073b889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*(code *)(&DAT_0082bdf0 + *(int *)(&DAT_0082bdf0 + ((uVar9 + 0xf) - uVar15) * 4)))
                      (auVar1._0_8_,SUB168(*pauVar14,0),*(undefined8 *)*param_1);
    return uVar9;
  }
  auVar1 = *param_2;
  auVar5 = vpcmpeqb_avx((undefined1  [16])0x0,auVar1);
  auVar2 = *param_1;
  auVar3 = vpcmpgtb_avx(auVar1,_DAT_0082bbf0);
  auVar4 = vpcmpgtb_avx(auVar1,_DAT_0082bce0);
  auVar6 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
  auVar7 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
  auVar3 = vpandn_avx(auVar4,auVar3);
  auVar4 = vpandn_avx(auVar7,auVar6);
  auVar3 = vpand_avx(auVar3,_DAT_0082bc10);
  auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
  auVar1 = vpor_avx(auVar3,auVar1);
  auVar2 = vpor_avx(auVar4,auVar2);
  auVar1 = vpcmpeqb_avx(auVar1,auVar2);
  auVar1 = vpsubb_avx(auVar1,auVar5);
  uVar11 = (0xffffU >> (sbyte)uVar10) -
           (uint)((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) >> (sbyte)uVar10);
  if (uVar11 == 0) {
    uVar9 = (uVar15 - 0x10) + param_3;
    if (param_3 < uVar9) {
      return 0;
    }
    bVar16 = false;
    bVar17 = uVar9 == 0;
    if (bVar17) {
      return 0;
    }
    lVar12 = 0x10;
    while( true ) {
      auVar1 = *(undefined1 (*) [16])(*param_1 + lVar12);
      auVar2 = *(undefined1 (*) [16])(*param_2 + lVar12);
      auVar3 = vpcmpgtb_avx(auVar1,_DAT_0082bbf0);
      auVar4 = vpcmpgtb_avx(auVar1,_DAT_0082bce0);
      auVar5 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
      auVar6 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
      auVar3 = vpandn_avx(auVar4,auVar3);
      auVar4 = vpandn_avx(auVar6,auVar5);
      auVar3 = vpand_avx(auVar3,_DAT_0082bc10);
      auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
      auVar1 = vpor_avx(auVar3,auVar1);
      auVar2 = vpor_avx(auVar4,auVar2);
      vpcmpistri_avx(auVar1,auVar2,0x1a);
      lVar13 = lVar12 + 0x10;
      uVar15 = uVar9;
      if (bVar16 || bVar17) break;
      bVar16 = uVar9 < 0x10;
      uVar15 = uVar9 - 0x10;
      if (bVar16 || uVar15 == 0) {
        return 0;
      }
      auVar1 = *(undefined1 (*) [16])(param_1[1] + lVar12);
      auVar2 = *(undefined1 (*) [16])(param_2[1] + lVar12);
      auVar3 = vpcmpgtb_avx(auVar1,_DAT_0082bbf0);
      auVar4 = vpcmpgtb_avx(auVar1,_DAT_0082bce0);
      auVar5 = vpcmpgtb_avx(auVar2,_DAT_0082bbf0);
      auVar6 = vpcmpgtb_avx(auVar2,_DAT_0082bce0);
      auVar3 = vpandn_avx(auVar4,auVar3);
      auVar4 = vpandn_avx(auVar6,auVar5);
      auVar3 = vpand_avx(auVar3,_DAT_0082bc10);
      auVar4 = vpand_avx(auVar4,_DAT_0082bc10);
      auVar1 = vpor_avx(auVar3,auVar1);
      auVar2 = vpor_avx(auVar4,auVar2);
      vpcmpistri_avx(auVar1,auVar2,0x1a);
      lVar13 = lVar12 + 0x20;
      if (bVar16 || uVar15 == 0) break;
      bVar16 = uVar15 < 0x10;
      uVar9 = uVar9 - 0x20;
      bVar17 = uVar9 == 0;
      lVar12 = lVar13;
      if (bVar16 || bVar17) {
        return 0;
      }
    }
    if (!bVar16) {
      return 0;
    }
    if (uVar15 < 0x11) {
      return 0;
    }
    return (ulong)(uint)(*(int *)(&DAT_00831080 + (ulong)(byte)(*param_1)[lVar13] * 4) -
                        *(int *)(&DAT_00831080 + (ulong)(byte)(*param_2)[lVar13] * 4));
  }
  param_1 = (undefined1 (*) [16])(*param_1 + uVar9);
  param_2 = (undefined1 (*) [16])(*param_2 + uVar15);
LAB_0073d0d0:
  uVar9 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  if (param_3 <= uVar9) {
    return 0;
  }
  return (ulong)(uint)(*(int *)(&DAT_00831080 + (ulong)(byte)(*param_1)[uVar9] * 4) -
                      *(int *)(&DAT_00831080 + (ulong)(byte)(*param_2)[uVar9] * 4));
}

