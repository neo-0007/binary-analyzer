
bool FUN_005a5040(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
                 uint *param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long in_FS_OFFSET;
  int local_d8;
  uint local_d4;
  uint local_c0;
  uint local_bc;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  uint local_90;
  uint local_8c;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = *param_5;
  local_90 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_d8 = 0;
  lVar10 = *(long *)(param_1 + 0xb8);
  iVar2 = FUN_00436480(param_7);
  if (0 < iVar2) {
    do {
      lVar6 = FUN_004364a0(param_7,local_d8);
      uVar3 = *(uint *)(lVar6 + 0x98);
      if ((uVar3 & 2) == 0) {
        local_bc = *param_6;
        if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x10) == 0) {
          if ((uVar3 & 0x60) == 0) goto LAB_005a5134;
        }
        else if ((uVar3 & 0x40) == 0) {
          if (*(long *)(lVar6 + 0xa8) == 0) goto LAB_005a5134;
        }
        else if ((~local_bc & *(uint *)(lVar6 + 0x9c)) != 0) {
LAB_005a5134:
          uVar7 = FUN_005a9850(lVar6);
          uVar8 = FUN_0059e6c0(lVar10);
          iVar2 = FUN_0059eab0(uVar8,uVar7);
          if (iVar2 == 0) {
            local_d4 = 0x20;
          }
          else {
            if ((*(byte *)(lVar6 + 0x98) & 0x20) == 0) goto LAB_005a5270;
            local_d4 = 0;
          }
          uVar3 = local_d4 | 0x100;
          if ((*(byte *)(lVar6 + 0x85) & 2) != 0) {
            uVar3 = local_d4;
          }
          iVar2 = FUN_005a4ea0(param_1,lVar6,0);
          local_d4 = uVar3 | 0x40;
          if (iVar2 == 0) {
            local_d4 = uVar3;
          }
          uVar7 = FUN_005a9850(lVar6);
          iVar2 = *(int *)(param_1 + 0xac);
          iVar4 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
          iVar13 = iVar4 + -1;
          if (iVar2 != iVar4 + -1) {
            iVar13 = iVar2 + 1;
          }
          uVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
          iVar2 = FUN_0059aef0(uVar8,*(undefined8 *)(lVar6 + 0x88));
          if ((iVar2 == 0) && ((local_d4 & 0x20) != 0)) {
            local_d4 = local_d4 | 0x1c;
            local_b0 = uVar8;
          }
          else {
            do {
              iVar13 = iVar13 + 1;
              iVar2 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
              if (iVar2 <= iVar13) {
                iVar2 = 0;
                if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x10) != 0) goto LAB_005a5444;
                goto LAB_005a525c;
              }
              uVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
              uVar9 = FUN_0059e6d0(uVar8);
              iVar2 = FUN_0059eab0(uVar9,uVar7);
            } while ((iVar2 != 0) ||
                    (iVar2 = FUN_0059aef0(uVar8,*(undefined8 *)(lVar6 + 0x88)), iVar2 != 0));
            local_d4 = local_d4 | 0xc;
            local_b0 = uVar8;
          }
LAB_005a525c:
          if ((local_d4 & 4) != 0) {
LAB_005a5499:
            uVar3 = *(uint *)(lVar6 + 0x98);
            if ((uVar3 & 0x10) == 0) {
              if ((*(byte *)(lVar10 + 0xe8) & 0x10) == 0) {
                uVar3 = uVar3 & 8;
              }
              else {
                uVar3 = uVar3 & 4;
              }
              if (uVar3 == 0) {
                local_8c = *(uint *)(lVar6 + 0x9c);
                iVar2 = 0;
                while (iVar13 = FUN_00436480(*(undefined8 *)(lVar10 + 0x110)), iVar2 < iVar13) {
                  iVar13 = 0;
                  puVar11 = (undefined8 *)FUN_004364a0(*(undefined8 *)(lVar10 + 0x110),iVar2);
                  uVar7 = FUN_005a9850(lVar6);
                  lVar14 = puVar11[2];
                  if (lVar14 == 0) {
                    if ((local_d4 & 0x20) == 0) goto LAB_005a5638;
LAB_005a556c:
                    if (*(undefined8 **)(lVar6 + 0x90) == (undefined8 *)0x0) {
LAB_005a56ba:
                      local_8c = local_8c & *(uint *)(puVar11 + 3);
                      goto LAB_005a56c1;
                    }
                    piVar12 = (int *)**(undefined8 **)(lVar6 + 0x90);
                    piVar1 = (int *)*puVar11;
                    if ((piVar1 == (int *)0x0) || (piVar12 == (int *)0x0)) goto LAB_005a56ba;
                    if (*piVar1 != 1) {
                      iVar13 = 0;
                      if (*piVar12 == 1) {
                        lVar14 = *(long *)(piVar12 + 4);
                        if (lVar14 != 0) {
                          uVar7 = *(undefined8 *)(piVar1 + 2);
                          goto LAB_005a5674;
                        }
                      }
                      else {
                        iVar4 = FUN_00436480(*(undefined8 *)(piVar1 + 2));
                        if (0 < iVar4) {
                          do {
                            uVar7 = FUN_004364a0(*(undefined8 *)(piVar1 + 2),iVar13);
                            for (iVar4 = 0; iVar5 = FUN_00436480(*(undefined8 *)(piVar12 + 2)),
                                iVar4 < iVar5; iVar4 = iVar4 + 1) {
                              uVar8 = FUN_004364a0(*(undefined8 *)(piVar12 + 2),iVar4);
                              iVar5 = FUN_0060e840(uVar7,uVar8);
                              if (iVar5 == 0) goto LAB_005a56ba;
                            }
                            iVar13 = iVar13 + 1;
                            iVar4 = FUN_00436480(*(undefined8 *)(piVar1 + 2));
                          } while (iVar13 < iVar4);
                        }
                      }
                      goto LAB_005a5638;
                    }
                    lVar14 = *(long *)(piVar1 + 4);
                    if (lVar14 == 0) goto LAB_005a5638;
                    if (*piVar12 != 1) {
                      uVar7 = *(undefined8 *)(piVar12 + 2);
LAB_005a5674:
                      for (iVar13 = 0; iVar4 = FUN_00436480(uVar7), iVar13 < iVar4;
                          iVar13 = iVar13 + 1) {
                        piVar12 = (int *)FUN_004364a0(uVar7,iVar13);
                        if ((*piVar12 == 4) &&
                           (iVar4 = FUN_0059eab0(lVar14,*(undefined8 *)(piVar12 + 2)), iVar4 == 0))
                        goto LAB_005a56ba;
                      }
                      goto LAB_005a5638;
                    }
                    if (*(long *)(piVar12 + 4) == 0) goto LAB_005a5638;
                    iVar13 = FUN_0059eab0(lVar14);
                    if (iVar13 == 0) goto LAB_005a56ba;
                    iVar2 = iVar2 + 1;
                  }
                  else {
                    for (; iVar4 = FUN_00436480(lVar14), iVar13 < iVar4; iVar13 = iVar13 + 1) {
                      piVar12 = (int *)FUN_004364a0(puVar11[2],iVar13);
                      if ((*piVar12 == 4) &&
                         (iVar4 = FUN_0059eab0(*(undefined8 *)(piVar12 + 2),uVar7), iVar4 == 0))
                      goto LAB_005a556c;
                      lVar14 = puVar11[2];
                    }
LAB_005a5638:
                    iVar2 = iVar2 + 1;
                  }
                }
                if (((*(long **)(lVar6 + 0x90) == (long *)0x0) || (**(long **)(lVar6 + 0x90) == 0))
                   && ((local_d4 & 0x20) != 0)) {
LAB_005a56c1:
                  if ((local_8c & ~local_bc) == 0) goto LAB_005a5270;
                  local_bc = local_bc | local_8c;
                  local_d4 = local_d4 | 0x80;
                }
              }
            }
            if ((int)local_c0 <= (int)local_d4) {
              if ((local_c0 == local_d4) && (local_b8 != 0)) {
                uVar7 = FUN_005a9810(lVar6);
                uVar8 = FUN_005a9810(local_b8);
                iVar2 = FUN_005b7fc0(&local_48,&local_44,uVar8,uVar7);
                if ((iVar2 == 0) || ((local_48 < 1 && (local_44 < 1)))) goto LAB_005a5270;
              }
              local_a0 = local_b0;
              local_90 = local_bc;
              local_c0 = local_d4;
              local_b8 = lVar6;
            }
          }
        }
      }
LAB_005a5270:
      local_d8 = local_d8 + 1;
      iVar2 = FUN_00436480(param_7);
    } while (local_d8 < iVar2);
  }
  if (local_b8 != 0) {
    FUN_005abf40(*param_2);
    *param_2 = local_b8;
    *param_4 = local_a0;
    *param_5 = local_c0;
    *param_6 = local_90;
    FUN_005a97e0(local_b8);
    FUN_005abf40(*param_3);
    lVar10 = *(long *)(param_1 + 0x20);
    *param_3 = 0;
    if (((*(byte *)(lVar10 + 0x19) & 0x20) != 0) &&
       (((*(uint *)(*(long *)(param_1 + 0xb8) + 0xe8) | *(uint *)(local_b8 + 0x84)) & 0x1000) != 0))
    {
      iVar13 = 0;
      iVar2 = FUN_00436480(param_7);
      if (0 < iVar2) {
        do {
          lVar10 = FUN_004364a0(param_7,iVar13);
          if ((*(long *)(lVar10 + 0xa8) != 0) && (*(long *)(local_b8 + 0xa0) != 0)) {
            uVar7 = FUN_005a9850(lVar10);
            uVar8 = FUN_005a9850(local_b8);
            iVar2 = FUN_0059eab0(uVar8,uVar7);
            if (((iVar2 == 0) &&
                (((iVar2 = FUN_005a2c40(lVar10,local_b8,0x5a), iVar2 != 0 &&
                  (iVar2 = FUN_005a2c40(lVar10,local_b8,0x302), iVar2 != 0)) &&
                 (iVar2 = FUN_0049f320(*(undefined8 *)(lVar10 + 0xa8),
                                       *(undefined8 *)(local_b8 + 0xa0)), iVar2 < 1)))) &&
               (iVar2 = FUN_0049f320(*(undefined8 *)(lVar10 + 0xa0),*(undefined8 *)(local_b8 + 0xa0)
                                    ), 0 < iVar2)) {
              iVar2 = FUN_005a4ea0(param_1,lVar10,0);
              if (iVar2 != 0) {
                *param_5 = *param_5 | 2;
              }
              FUN_005a97e0(lVar10);
              *param_3 = lVar10;
              goto LAB_005a53c0;
            }
          }
          iVar13 = iVar13 + 1;
          iVar2 = FUN_00436480(param_7);
        } while (iVar13 < iVar2);
      }
      *param_3 = 0;
    }
  }
LAB_005a53c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x1bf < (int)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_005a5444:
  iVar13 = FUN_00436480(*(undefined8 *)(param_1 + 0x10));
  if (iVar13 <= iVar2) goto LAB_005a525c;
  uVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x10),iVar2);
  uVar9 = FUN_0059e6d0(uVar8);
  iVar13 = FUN_0059eab0(uVar9,uVar7);
  if ((iVar13 == 0) && (iVar13 = FUN_0059aef0(uVar8,*(undefined8 *)(lVar6 + 0x88)), iVar13 == 0)) {
    local_d4 = local_d4 | 4;
    local_b0 = uVar8;
    goto LAB_005a5499;
  }
  iVar2 = iVar2 + 1;
  goto LAB_005a5444;
}

