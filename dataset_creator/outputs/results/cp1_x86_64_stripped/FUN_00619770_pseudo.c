
bool FUN_00619770(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  bool bVar22;
  bool bVar23;
  long *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  long *local_78;
  uint local_6c;
  
  FUN_004b2c00(param_4);
  lVar8 = FUN_004b2df0(param_4);
  if (lVar8 != 0) {
    do {
      iVar4 = FUN_004b7bb0(param_3);
      iVar4 = FUN_004bb500(lVar8,iVar4 + -1,0xffffffff,0,0,param_4);
      if (iVar4 == 0) goto LAB_006197e0;
      iVar4 = FUN_004b7ba0(lVar8);
    } while (iVar4 != 0);
    bVar23 = false;
    iVar4 = FUN_00619650(param_1,param_2,lVar8,param_3,param_4);
    if (iVar4 != 0) {
      FUN_004b2c00(param_4);
      local_88 = (undefined8 *)FUN_004b2df0(param_4);
      local_80 = (undefined8 *)FUN_004b2df0(param_4);
      local_90 = (long *)FUN_004b2df0(param_4);
      local_78 = (long *)FUN_004b2df0(param_4);
      if ((((local_78 != (long *)0x0) &&
           (iVar4 = FUN_006195a0(local_90,param_1,param_3), iVar4 != 0)) &&
          (iVar4 = FUN_004b7ba0(local_90), iVar4 == 0)) &&
         (lVar9 = FUN_004b8260(local_78,param_3), lVar9 != 0)) {
        iVar5 = FUN_004b7bb0(local_90);
        iVar6 = FUN_004b7bb0(local_78);
        iVar4 = (int)param_3[1];
        lVar9 = FUN_004b8240(local_90,iVar4);
        if (lVar9 != 0) {
          puVar17 = (ulong *)*local_90;
          iVar7 = (int)local_90[1];
          if (iVar7 < iVar4) {
            thunk_FUN_00713720(puVar17 + iVar7,0,(ulong)(uint)((iVar4 + -1) - iVar7) * 8 + 8);
          }
          *(int *)(local_90 + 1) = iVar4;
          lVar9 = FUN_004b8240(local_88,iVar4);
          if (lVar9 != 0) {
            puVar21 = (ulong *)*local_88;
            *puVar21 = 1;
            if (iVar4 < 2) {
              *(int *)(local_88 + 1) = iVar4;
              lVar9 = FUN_004b8240(local_80,iVar4);
              if (lVar9 != 0) {
                puVar10 = (ulong *)*local_80;
                if (iVar4 == 1) {
                  local_6c = 0;
                  goto LAB_006199a7;
                }
                local_6c = iVar4 - 1;
                goto LAB_006199db;
              }
            }
            else {
              local_6c = iVar4 - 1;
              thunk_FUN_00713720(puVar21 + 1,0,(ulong)local_6c << 3);
              *(int *)(local_88 + 1) = iVar4;
              lVar9 = FUN_004b8240(local_80,iVar4);
              if (lVar9 != 0) {
                puVar10 = (ulong *)*local_80;
LAB_006199a7:
                lVar9 = (ulong)local_6c * 8 + 8;
                if (iVar4 < 1) {
                  lVar9 = 8;
                }
                puVar10 = (ulong *)thunk_FUN_00713720(puVar10,0,lVar9);
LAB_006199db:
                *(int *)(local_80 + 1) = iVar4;
                puVar15 = (ulong *)*local_78;
LAB_00619a20:
                while (iVar7 = iVar5, puVar13 = puVar15, puVar14 = puVar10, plVar2 = local_78,
                      puVar3 = local_80, uVar11 = *puVar17, puVar10 = puVar14, puVar15 = puVar13,
                      iVar7 != 0) {
                  if ((uVar11 & 1) != 0) {
                    if (iVar7 < 0x41) goto LAB_00619b50;
                    goto LAB_00619a40;
                  }
                  puVar14 = (ulong *)*param_3;
                  uVar20 = -(ulong)((uint)*puVar21 & 1);
                  uVar19 = *puVar14 & uVar20 ^ *puVar21;
                  puVar13 = puVar21;
                  puVar18 = puVar17;
                  if (1 < iVar4) {
                    lVar9 = 1;
                    uVar16 = uVar11;
                    do {
                      uVar11 = puVar17[lVar9];
                      puVar17[lVar9 + -1] = uVar16 >> 1 | uVar11 << 0x3f;
                      uVar16 = uVar19 >> 1;
                      uVar19 = puVar14[lVar9] & uVar20 ^ puVar21[lVar9];
                      puVar21[lVar9 + -1] = uVar16 | uVar19 << 0x3f;
                      lVar9 = lVar9 + 1;
                      uVar16 = uVar11;
                    } while ((ulong)(iVar4 - 2) + 2 != lVar9);
                    puVar13 = puVar21 + (int)local_6c;
                    puVar18 = puVar17 + (int)local_6c;
                  }
                  *puVar18 = uVar11 >> 1;
                  *puVar13 = uVar19 >> 1;
                  iVar5 = iVar7 + -1;
                }
                if (uVar11 == 0) {
                  FUN_004b2d50(param_4);
                  goto LAB_006197e0;
                }
LAB_00619b50:
                if (uVar11 != 1) {
LAB_00619a40:
                  if (iVar7 < iVar6) {
                    puVar15 = (ulong *)*local_90;
                    puVar10 = (ulong *)*local_88;
                    puVar17 = puVar13;
                    puVar21 = puVar14;
                    if (iVar4 < 1) {
                      local_78 = local_90;
                      local_80 = local_88;
                      iVar5 = iVar6;
                      iVar6 = iVar7;
                      local_90 = plVar2;
                      local_88 = puVar3;
                      goto LAB_00619a20;
                    }
                    local_78 = local_90;
                    local_90 = plVar2;
                    local_80 = local_88;
                    local_88 = puVar3;
                    iVar5 = iVar6;
                    iVar6 = iVar7;
LAB_00619aa1:
                    uVar11 = 0;
                    do {
                      puVar17[uVar11] = puVar17[uVar11] ^ puVar15[uVar11];
                      puVar21[uVar11] = puVar21[uVar11] ^ puVar10[uVar11];
                      bVar22 = uVar11 != local_6c;
                      uVar11 = uVar11 + 1;
                      puVar14 = puVar10;
                      puVar13 = puVar15;
                      iVar7 = iVar5;
                    } while (bVar22);
                  }
                  else {
                    iVar5 = iVar7;
                    if (0 < iVar4) goto LAB_00619aa1;
                  }
                  puVar10 = puVar14;
                  puVar15 = puVar13;
                  iVar5 = iVar7;
                  if (iVar7 == iVar6) {
                    iVar5 = iVar6 + 0x3e;
                    if (-1 < iVar6 + -1) {
                      iVar5 = iVar6 + -1;
                    }
                    iVar5 = iVar5 >> 6;
                    lVar9 = (long)iVar5;
                    if (puVar17[lVar9] == 0) {
                      if (iVar5 != 0) {
                        uVar1 = iVar5 - 1;
                        lVar12 = (long)(int)uVar1;
                        do {
                          iVar5 = (int)lVar12;
                          if (puVar17[lVar12] != 0) goto LAB_00619b29;
                          lVar12 = lVar12 + -1;
                        } while (lVar12 != (lVar9 + -2) - (ulong)uVar1);
                        iVar5 = 0;
                      }
                    }
                    else {
LAB_00619b29:
                      iVar5 = iVar5 << 6;
                    }
                    iVar7 = FUN_004b75b0();
                    iVar5 = iVar7 + iVar5;
                  }
                  goto LAB_00619a20;
                }
                FUN_004b8490(local_88);
                lVar9 = FUN_004b8260(param_1,local_88);
                if (lVar9 != 0) {
                  FUN_004b2d50(param_4);
                  iVar4 = FUN_00619650(param_1,param_1,lVar8,param_3,param_4);
                  bVar23 = iVar4 != 0;
                  goto LAB_006197e3;
                }
              }
            }
          }
        }
      }
      FUN_004b2d50(param_4);
      goto LAB_006197e3;
    }
  }
LAB_006197e0:
  bVar23 = false;
LAB_006197e3:
  FUN_004b2d50(param_4);
  return bVar23;
}

