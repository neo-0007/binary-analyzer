
long __mktime_internal(int *param_1,code *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  bool bVar22;
  int local_138;
  long local_d0;
  long local_c8;
  long local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  int local_70;
  uint local_64;
  int local_5c;
  int local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *param_1;
  lVar19 = (long)param_1[2];
  uVar4 = param_1[8];
  iVar13 = param_1[4] % 0xc;
  uVar5 = iVar13 >> 0x1f;
  uVar1 = (long)(int)(param_1[4] / 0xc + uVar5) + (long)param_1[5];
  uVar15 = 0;
  if (((uVar1 & 3) == 0) &&
     (uVar15 = 1,
     (uVar1 * -0x70a3d70a3d70a3d7 + 0x51eb851eb851eb8 >> 2 | uVar1 * -0x70a3d70a3d70a3d7 << 0x3e) <
     0x28f5c28f5c28f5d)) {
    uVar15 = (ulong)(((uint)((long)uVar1 / 100) & 3) == 1);
  }
  bVar22 = false;
  lVar2 = (long)(int)(*(ushort *)
                       (__mon_yday + ((long)(int)((uVar5 & 0xc) + iVar13) + uVar15 * 0xd) * 2) - 1)
          + (long)param_1[3];
  lVar21 = (long)param_1[1];
  local_138 = (int)*param_3;
  iVar16 = ((int)((long)uVar1 >> 2) + 0x1db) - (uint)((uVar1 & 3) == 0);
  iVar7 = (iVar16 - (iVar16 >> 0x1f)) / 0x19 + (iVar16 >> 0x1f);
  iVar14 = iVar7 >> 2;
  iVar13 = 0x3b;
  if (iVar3 < 0x3c) {
    iVar13 = iVar3;
  }
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  lVar20 = (long)iVar13;
  lVar9 = (lVar20 + (lVar21 + (lVar19 + ((long)((iVar16 - iVar7) + -0x1dd + iVar14) +
                                        (uVar1 - 0x46) * 0x16d + lVar2) * 0x18) * 0x3c) * 0x3c) -
          (long)-local_138;
  iVar13 = 6;
  lVar6 = lVar9;
  lVar12 = lVar9;
  local_d0 = lVar9;
  while (lVar17 = lVar6, lVar10 = ranged_convert(param_2,&local_d0,&local_b8), lVar6 = local_d0,
        lVar10 != 0) {
    iVar18 = ((int)((long)(int)uStack_a4 >> 2) + 0x1db) - (uint)((uStack_a4 & 3) == 0);
    iVar8 = (iVar18 - (iVar18 >> 0x1f)) / 0x19 + (iVar18 >> 0x1f);
    lVar11 = (lVar20 + ((lVar21 + ((lVar19 + ((((uVar1 - (long)(int)uStack_a4) * 0x16d + lVar2) -
                                              (long)iStack_9c) +
                                             (long)(((iVar16 - iVar18) - (iVar7 - iVar8)) +
                                                   (iVar14 - (iVar8 >> 2)))) * 0x18) -
                                  (long)iStack_b0) * 0x3c) - (long)iStack_b4) * 0x3c) -
             (long)local_b8;
    lVar10 = local_d0;
    if (lVar11 == 0) {
      bVar22 = uVar4 == 0;
      if ((bVar22 == (local_98 == 0)) || ((int)(local_98 | uVar4) < 0)) goto LAB_007a1108;
      iVar13 = 0x92c70;
      goto LAB_007a12b8;
    }
    if ((lVar12 == local_d0) && (lVar17 != local_d0)) {
      if ((int)local_98 < 0) goto LAB_007a1108;
      if ((int)uVar4 < 0) {
        if (bVar22 <= (local_98 != 0)) goto LAB_007a1108;
      }
      else if ((uVar4 != 0) != (local_98 != 0)) goto LAB_007a1108;
    }
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) goto LAB_007a11b0;
    bVar22 = local_98 != 0;
    lVar12 = lVar17;
    local_d0 = lVar11 + local_d0;
  }
LAB_007a1420:
  lVar10 = -1;
  goto LAB_007a11c5;
LAB_007a1108:
  *param_3 = lVar10 - (lVar9 + -local_138);
  if (iVar3 != local_b8) {
    lVar19 = (long)iVar3 + ((ulong)(iVar3 < 1 && local_b8 == 0x3c) - lVar20);
    bVar22 = SCARRY8(lVar19,lVar10);
    lVar10 = lVar19 + lVar10;
    local_d0 = lVar10;
    if (bVar22) goto LAB_007a11b0;
    local_78 = lVar10;
    lVar19 = (*param_2)(&local_78,&local_b8);
    if (lVar19 == 0) goto LAB_007a1420;
  }
  *(undefined8 *)(param_1 + 0xc) = local_88;
  *(ulong *)param_1 = CONCAT44(iStack_b4,local_b8);
  *(ulong *)(param_1 + 2) = CONCAT44(uStack_ac,iStack_b0);
  *(ulong *)(param_1 + 4) = CONCAT44(uStack_a4,local_a8);
  *(ulong *)(param_1 + 6) = CONCAT44(iStack_9c,uStack_a0);
  *(ulong *)(param_1 + 8) = CONCAT44(uStack_94,local_98);
  *(undefined8 *)(param_1 + 10) = uStack_90;
  goto LAB_007a11c5;
  while( true ) {
    local_c8 = iVar13 + lVar6;
    if (!SCARRY8((long)iVar13,lVar6)) {
      lVar12 = ranged_convert(param_2,&local_c8,&local_78);
      if (lVar12 == 0) goto LAB_007a1420;
      if ((bVar22 == (local_58 == 0)) || (local_58 < 0)) {
        iVar18 = ((int)((long)(int)local_64 >> 2) + 0x1db) - (uint)((local_64 & 3) == 0);
        iVar8 = (iVar18 - (iVar18 >> 0x1f)) / 0x19 + (iVar18 >> 0x1f);
        lVar10 = ((lVar20 + ((lVar21 + ((lVar19 + ((((uVar1 - (long)(int)local_64) * 0x16d + lVar2)
                                                   - (long)local_5c) +
                                                  (long)(((iVar16 - iVar18) - (iVar7 - iVar8)) +
                                                        (iVar14 - (iVar8 >> 2)))) * 0x18) -
                                       (long)local_70) * 0x3c) - (long)local_78._4_4_) * 0x3c) -
                 (long)(int)local_78) + local_c8;
        local_c0 = lVar10;
        lVar12 = (*param_2)(&local_c0,&local_b8);
        if (lVar12 != 0) goto LAB_007a1108;
        if (*(int *)(in_FS_OFFSET + -0x58) != 0x4b) goto LAB_007a1420;
      }
    }
    iVar13 = iVar13 + 0x92c70;
    if (iVar13 == 0x100dc400) break;
LAB_007a12b8:
    local_c8 = -iVar13 + lVar6;
    if (!SCARRY8((long)-iVar13,lVar6)) {
      lVar12 = ranged_convert(param_2,&local_c8,&local_78);
      if (lVar12 == 0) goto LAB_007a1420;
      if ((bVar22 == (local_58 == 0)) || (local_58 < 0)) {
        iVar18 = ((int)((long)(int)local_64 >> 2) + 0x1db) - (uint)((local_64 & 3) == 0);
        iVar8 = (iVar18 - (iVar18 >> 0x1f)) / 0x19 + (iVar18 >> 0x1f);
        lVar10 = ((lVar20 + ((lVar21 + ((lVar19 + ((((uVar1 - (long)(int)local_64) * 0x16d + lVar2)
                                                   - (long)local_5c) +
                                                  (long)(((iVar16 - iVar18) - (iVar7 - iVar8)) +
                                                        (iVar14 - (iVar8 >> 2)))) * 0x18) -
                                       (long)local_70) * 0x3c) - (long)local_78._4_4_) * 0x3c) -
                 (long)(int)local_78) + local_c8;
        local_c0 = lVar10;
        lVar12 = (*param_2)(&local_c0,&local_b8);
        if (lVar12 != 0) goto LAB_007a1108;
        if (*(int *)(in_FS_OFFSET + -0x58) != 0x4b) goto LAB_007a1420;
      }
    }
  }
LAB_007a11b0:
  lVar10 = -1;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
LAB_007a11c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar10;
}

