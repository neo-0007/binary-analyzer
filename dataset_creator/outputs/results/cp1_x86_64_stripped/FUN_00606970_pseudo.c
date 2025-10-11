
int FUN_00606970(long *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                ulong param_5)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long in_FS_OFFSET;
  bool bVar24;
  long local_90;
  long local_80;
  int local_78;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  *param_2 = 0;
  local_48 = 0;
  uVar5 = FUN_00436480(param_3);
  uVar23 = (ulong)uVar5;
  if ((param_5 & 0x100) != 0) {
    uVar23 = 0;
  }
  uVar19 = uVar5;
  if ((param_5 & 0x200) != 0) {
    uVar19 = 0;
  }
  uVar3 = 0;
  if ((param_5 & 0x400) == 0) {
    uVar3 = uVar5;
  }
  if (uVar5 == 1) {
LAB_00606d04:
    local_90 = 0;
LAB_00606d0d:
    iVar21 = 1;
    FUN_006068a0(local_90);
    goto LAB_00606a44;
  }
  iVar6 = uVar5 - 2;
  iVar21 = iVar6;
  if (iVar6 < 0) {
    bVar18 = (-((int)uVar23 == 0) & 4U) + 1;
LAB_00606b5a:
    local_90 = FUN_0041aec0(0x40,"../crypto/x509/pcy_tree.c",0xac);
    if (local_90 == 0) {
      FUN_0051f420();
      uVar8 = 0xad;
LAB_006074c0:
      FUN_0051f540("../crypto/x509/pcy_tree.c",uVar8,"tree_init");
      FUN_0051f8f0(0x22,0xc0100,0);
LAB_00606a41:
      iVar21 = 0;
      goto LAB_00606a44;
    }
    *(undefined8 *)(local_90 + 8) = 1000;
    puVar10 = (undefined8 *)FUN_0041aec0((long)(int)uVar5 << 5,"../crypto/x509/pcy_tree.c",0xbb);
    *(undefined8 **)(local_90 + 0x10) = puVar10;
    if (puVar10 == (undefined8 *)0x0) {
      FUN_0041ad60(local_90,"../crypto/x509/pcy_tree.c",0xbc);
      FUN_0051f420();
      uVar8 = 0xbd;
      goto LAB_006074c0;
    }
    *(uint *)(local_90 + 0x18) = uVar5;
    uVar8 = FUN_004239c0(0x2ea);
    lVar9 = FUN_006064f0(0,uVar8,0);
    if (lVar9 != 0) {
      lVar11 = FUN_0061b780(puVar10,lVar9,0,local_90,1);
      if (lVar11 != 0) {
        if (-1 < iVar6) {
          uVar23 = (ulong)uVar3;
          do {
            uVar8 = FUN_004364a0(param_3,iVar6);
            uVar5 = FUN_0059bb60(uVar8);
            plVar12 = (long *)FUN_00605fc0(uVar8);
            FUN_005a1b20(uVar8);
            lVar9 = *plVar12;
            puVar10[4] = uVar8;
            if (lVar9 == 0) {
              *(uint *)(puVar10 + 7) = *(uint *)(puVar10 + 7) | 0x200;
            }
            uVar5 = uVar5 & 0x20;
            iVar21 = (int)uVar23;
            if (uVar19 == 0) {
              if ((iVar6 == 0) || (uVar5 == 0)) {
                *(uint *)(puVar10 + 7) = *(uint *)(puVar10 + 7) | 0x200;
                goto LAB_00606cc4;
              }
              if (iVar21 == 0) goto LAB_00606c3c;
LAB_00606cd5:
              uVar2 = plVar12[4];
              if ((-1 < (long)uVar2) && ((long)uVar2 < (long)(int)uVar23)) {
                uVar23 = uVar2 & 0xffffffff;
              }
            }
            else {
              lVar9 = plVar12[2];
              uVar19 = uVar19 - (uVar5 == 0);
              if ((-1 < lVar9) && (lVar9 < (int)uVar19)) {
                uVar19 = (uint)lVar9;
              }
LAB_00606cc4:
              if (iVar21 != 0) {
                uVar23 = (ulong)(iVar21 - (uint)(uVar5 == 0));
                goto LAB_00606cd5;
              }
LAB_00606c3c:
              *(uint *)(puVar10 + 7) = *(uint *)(puVar10 + 7) | 0x400;
              uVar23 = 0;
            }
            bVar24 = iVar6 != 0;
            iVar6 = iVar6 + -1;
            puVar10 = puVar10 + 4;
          } while (bVar24);
        }
        bVar4 = bVar18 & 4;
        if (bVar4 == 0) goto LAB_006073d4;
        goto LAB_00606e4d;
      }
      FUN_00606480(lVar9);
    }
LAB_00606e28:
    iVar21 = 0;
    FUN_006068a0(local_90);
    goto LAB_00606a44;
  }
  do {
    uVar8 = FUN_004364a0(param_3,iVar21);
    FUN_0059b9e0(uVar8,0xffffffff,0);
    lVar9 = FUN_00605fc0(uVar8);
    if (lVar9 == 0) goto LAB_00606a41;
    bVar24 = iVar21 != 0;
    iVar21 = iVar21 + -1;
  } while (bVar24);
  bVar18 = 1;
  iVar20 = iVar6;
LAB_00606ad5:
  do {
    iVar22 = (int)uVar23;
    if (iVar22 < 1) {
      if (bVar18 != 1) {
        if (iVar22 != 0) goto LAB_00606d04;
        *param_2 = 1;
        goto LAB_00607429;
      }
      uVar8 = FUN_004364a0(param_3,iVar20);
      uVar7 = FUN_0059bb60(uVar8);
      if ((uVar7 & 0x800) != 0) goto LAB_00606a44;
      bVar18 = 2;
      lVar9 = FUN_00605fc0(uVar8);
      if (*(long *)(lVar9 + 8) != 0) goto LAB_00606ac4;
    }
    else {
      uVar8 = FUN_004364a0(param_3,iVar20);
      uVar7 = FUN_0059bb60(uVar8);
      if ((uVar7 & 0x800) != 0) goto LAB_00606a44;
      lVar9 = FUN_00605fc0(uVar8);
      if ((bVar18 == 1) && (*(long *)(lVar9 + 8) != 0)) {
LAB_00606ac4:
        bVar18 = 1;
        if (iVar22 < 1) goto LAB_00606acf;
      }
      else {
        bVar18 = 2;
      }
      uVar2 = *(ulong *)(lVar9 + 0x18);
      uVar7 = iVar22 - (uint)((uVar7 & 0x20) == 0);
      uVar23 = (ulong)uVar7;
      if (-1 < (long)uVar2) {
        uVar23 = (ulong)uVar7;
        if ((long)uVar2 < (long)(int)uVar7) {
          uVar23 = uVar2 & 0xffffffff;
        }
        iVar22 = (int)uVar23;
        bVar24 = iVar20 == 0;
        iVar20 = iVar20 + -1;
        if (bVar24) break;
        goto LAB_00606ad5;
      }
    }
LAB_00606acf:
    iVar22 = (int)uVar23;
    bVar24 = iVar20 != 0;
    iVar20 = iVar20 + -1;
  } while (bVar24);
  bVar4 = bVar18 & 1;
  if (iVar22 == 0) {
    bVar18 = bVar18 | 4;
    if (bVar4 != 0) goto LAB_00606b5a;
    local_90 = 0;
    bVar4 = 4;
LAB_00606e4d:
    *param_2 = 1;
    if ((bVar18 & 2) == 0) goto LAB_00606e61;
LAB_00607429:
    iVar21 = -2;
  }
  else {
    if (bVar4 != 0) goto LAB_00606b5a;
    local_90 = 0;
LAB_006073d4:
    bVar4 = bVar18 & 2;
    if (bVar4 != 0) goto LAB_00606d0d;
LAB_00606e61:
    if (*(int *)(local_90 + 0x18) < 2) {
      if (*(long *)(*(long *)(local_90 + 0x10) + -0x10 + (long)*(int *)(local_90 + 0x18) * 0x20) !=
          0) goto LAB_0060735b;
LAB_006071af:
      iVar6 = 1;
      uVar8 = *(undefined8 *)(local_90 + 0x28);
      local_48 = uVar8;
      iVar21 = FUN_00436480(param_4);
      if (0 < iVar21) goto LAB_006071d5;
    }
    else {
      local_78 = 1;
      local_80 = *(long *)(local_90 + 0x10);
      do {
        lVar9 = local_80 + 0x20;
        puVar10 = (undefined8 *)FUN_00605fc0(*(undefined8 *)(local_80 + 0x20));
        for (iVar21 = 0; iVar6 = FUN_00436480(puVar10[1]), iVar21 < iVar6; iVar21 = iVar21 + 1) {
          bVar24 = false;
          lVar11 = FUN_004364a0(puVar10[1],iVar21);
          for (iVar6 = 0; iVar20 = FUN_00436480(*(undefined8 *)(local_80 + 8)), iVar6 < iVar20;
              iVar6 = iVar6 + 1) {
            uVar8 = FUN_004364a0(*(undefined8 *)(local_80 + 8),iVar6);
            iVar20 = FUN_0061b970(local_80,uVar8,*(undefined8 *)(lVar11 + 8));
            if (iVar20 != 0) {
              lVar15 = FUN_0061b780(lVar9,lVar11,uVar8,local_90,0);
              if (lVar15 == 0) goto LAB_00606e28;
              bVar24 = true;
            }
          }
          if (((!bVar24) && (*(long *)(local_80 + 0x10) != 0)) &&
             (lVar11 = FUN_0061b780(lVar9,lVar11,*(long *)(local_80 + 0x10),local_90,0), lVar11 == 0
             )) goto LAB_00606e28;
        }
        uVar5 = *(uint *)(local_80 + 0x38);
        if ((uVar5 & 0x200) == 0) {
          for (iVar21 = 0; iVar6 = FUN_00436480(*(undefined8 *)(local_80 + 8)), iVar21 < iVar6;
              iVar21 = iVar21 + 1) {
            puVar13 = (undefined8 *)FUN_004364a0(*(undefined8 *)(local_80 + 8),iVar21);
            if (((*(byte *)(local_80 + 0x19) & 4) == 0) && ((*(byte *)*puVar13 & 1) != 0)) {
              uVar8 = *(undefined8 *)((byte *)*puVar13 + 0x18);
              iVar6 = *(int *)(puVar13 + 2);
              iVar20 = FUN_00436480(uVar8);
              if (iVar20 != iVar6) {
                for (iVar6 = 0; iVar20 = FUN_00436480(uVar8), iVar6 < iVar20; iVar6 = iVar6 + 1) {
                  uVar14 = FUN_004364a0(uVar8,iVar6);
                  lVar11 = FUN_0061b6e0(lVar9,puVar13,uVar14);
                  if ((lVar11 == 0) &&
                     (iVar20 = FUN_00606780(lVar9,puVar10,uVar14,puVar13), iVar20 == 0))
                  goto LAB_00606e28;
                }
              }
            }
            else if ((*(int *)(puVar13 + 2) == 0) &&
                    (iVar6 = FUN_00606780(lVar9,puVar10,0,puVar13), iVar6 == 0)) goto LAB_00606e28;
          }
          if ((*(long *)(local_80 + 0x10) != 0) &&
             (lVar11 = FUN_0061b780(lVar9,*puVar10,*(long *)(local_80 + 0x10),local_90,0),
             lVar11 == 0)) goto LAB_00606e28;
          uVar5 = *(uint *)(local_80 + 0x38);
        }
        lVar11 = lVar9;
        if ((uVar5 & 0x400) != 0) {
          uVar8 = *(undefined8 *)(local_80 + 0x28);
          iVar21 = FUN_00436480(uVar8);
          iVar21 = iVar21 + -1;
          if (-1 < iVar21) {
            do {
              puVar10 = (undefined8 *)FUN_004364a0(uVar8,iVar21);
              if ((*(byte *)*puVar10 & 3) != 0) {
                *(int *)(puVar10[1] + 0x10) = *(int *)(puVar10[1] + 0x10) + -1;
                FUN_0041ad60(puVar10,"../crypto/x509/pcy_tree.c",0x1a0);
                FUN_00435ec0(uVar8,iVar21);
              }
              bVar24 = iVar21 != 0;
              iVar21 = iVar21 + -1;
            } while (bVar24);
          }
        }
        do {
          uVar8 = *(undefined8 *)(lVar11 + -0x18);
          lVar15 = lVar11 + -0x20;
          iVar21 = FUN_00436480(uVar8);
          iVar21 = iVar21 + -1;
          if (-1 < iVar21) {
            do {
              while (lVar16 = FUN_004364a0(uVar8,iVar21), *(int *)(lVar16 + 0x10) != 0) {
                bVar24 = iVar21 == 0;
                iVar21 = iVar21 + -1;
                if (bVar24) goto LAB_00607021;
              }
              piVar1 = (int *)(*(long *)(lVar16 + 8) + 0x10);
              *piVar1 = *piVar1 + -1;
              FUN_0041ad60(lVar16,"../crypto/x509/pcy_tree.c",0x1ad);
              FUN_00435ec0(uVar8,iVar21);
              bVar24 = iVar21 != 0;
              iVar21 = iVar21 + -1;
            } while (bVar24);
          }
LAB_00607021:
          lVar16 = *(long *)(lVar11 + -0x10);
          if ((lVar16 != 0) && (*(int *)(lVar16 + 0x10) == 0)) {
            if (*(long *)(lVar16 + 8) != 0) {
              piVar1 = (int *)(*(long *)(lVar16 + 8) + 0x10);
              *piVar1 = *piVar1 + -1;
            }
            FUN_0041ad60(lVar16,"../crypto/x509/pcy_tree.c",0x1b4);
            *(undefined8 *)(lVar11 + -0x10) = 0;
          }
          lVar16 = *(long *)(local_90 + 0x10);
          lVar11 = lVar15;
        } while (lVar15 != lVar16);
        if (*(long *)(lVar16 + 0x10) == 0) {
          FUN_006068a0(local_90);
          if (bVar4 == 0) goto LAB_006073c2;
          goto LAB_00607429;
        }
        local_78 = local_78 + 1;
        iVar21 = *(int *)(local_90 + 0x18);
        local_80 = lVar9;
      } while (local_78 < iVar21);
      puVar10 = (undefined8 *)(local_90 + 0x28);
      if (*(long *)(lVar16 + -0x10 + (long)iVar21 * 0x20) == 0) {
        if (iVar21 < 2) goto LAB_006071af;
LAB_006070b0:
        iVar21 = 1;
        do {
          lVar9 = *(long *)(lVar16 + 0x10);
          if (lVar9 == 0) break;
          for (iVar6 = 0; iVar20 = FUN_00436480(*(undefined8 *)(lVar16 + 0x28)), iVar6 < iVar20;
              iVar6 = iVar6 + 1) {
            lVar11 = FUN_004364a0(*(undefined8 *)(lVar16 + 0x28),iVar6);
            if ((lVar9 == *(long *)(lVar11 + 8)) &&
               (iVar20 = FUN_00606840(puVar10,lVar11), iVar20 == 0)) {
              if (puVar10 == &local_48) {
                FUN_004360b0(local_48);
              }
              goto LAB_00606e28;
            }
          }
          iVar21 = iVar21 + 1;
          lVar16 = lVar16 + 0x20;
        } while (iVar21 < *(int *)(local_90 + 0x18));
        if (puVar10 != &local_48) goto LAB_006071af;
      }
      else {
LAB_0060735b:
        iVar21 = FUN_00606840(local_90 + 0x28);
        if (iVar21 == 0) goto LAB_00606e28;
        puVar10 = &local_48;
        lVar16 = *(long *)(local_90 + 0x10);
        if (1 < *(int *)(local_90 + 0x18)) goto LAB_006070b0;
      }
      uVar8 = local_48;
      iVar6 = 2;
      iVar21 = FUN_00436480(param_4);
      if (0 < iVar21) {
LAB_006071d5:
        plVar12 = *(long **)((long)*(int *)(local_90 + 0x18) * 0x20 + *(long *)(local_90 + 0x10) +
                            -0x10);
        for (iVar21 = 0; iVar20 = FUN_00436480(param_4), iVar21 < iVar20; iVar21 = iVar21 + 1) {
          uVar14 = FUN_004364a0(param_4,iVar21);
          iVar20 = FUN_00423da0(uVar14);
          if (iVar20 == 0x2ea) {
            *(uint *)(local_90 + 0x38) = *(uint *)(local_90 + 0x38) | 2;
            goto LAB_006072f8;
          }
        }
        for (iVar21 = 0; iVar20 = FUN_00436480(param_4), iVar21 < iVar20; iVar21 = iVar21 + 1) {
          uVar14 = FUN_004364a0(param_4,iVar21);
          lVar9 = FUN_0061b680(uVar8,uVar14);
          if (lVar9 == 0) {
            if (plVar12 != (long *)0x0) {
              puVar17 = (undefined4 *)FUN_006064f0(0,uVar14,*(uint *)*plVar12 & 0x10);
              if (puVar17 != (undefined4 *)0x0) {
                lVar9 = plVar12[1];
                uVar14 = *(undefined8 *)(*plVar12 + 0x10);
                *puVar17 = 0xc;
                *(undefined8 *)(puVar17 + 4) = uVar14;
                lVar9 = FUN_0061b780(0,puVar17,lVar9,local_90,1);
                lVar11 = *(long *)(local_90 + 0x30);
                goto joined_r0x00607237;
              }
              goto LAB_00607463;
            }
          }
          else {
            lVar11 = *(long *)(local_90 + 0x30);
joined_r0x00607237:
            if (lVar11 == 0) {
              lVar11 = FUN_00436410();
              *(long *)(local_90 + 0x30) = lVar11;
              if (lVar11 == 0) break;
            }
            iVar20 = FUN_00435f80(lVar11,lVar9);
            if (iVar20 == 0) {
LAB_00607463:
              if (iVar6 == 2) {
                FUN_004360b0(uVar8);
              }
              goto LAB_00606e28;
            }
          }
        }
LAB_006072f8:
        if (iVar6 != 2) goto LAB_00607302;
      }
      FUN_004360b0(uVar8);
    }
LAB_00607302:
    *param_1 = local_90;
    if (bVar4 != 0) {
      uVar8 = FUN_0061b550(local_90);
      iVar21 = FUN_00436480(uVar8);
      if (iVar21 < 1) goto LAB_00607429;
    }
LAB_006073c2:
    iVar21 = 1;
  }
LAB_00606a44:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

