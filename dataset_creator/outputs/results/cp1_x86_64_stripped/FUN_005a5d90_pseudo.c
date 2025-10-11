
undefined8 FUN_005a5d90(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_64;
  int local_60;
  uint local_5c;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = FUN_005a4030();
  if (0 < (int)uVar6) {
    iVar2 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
    local_5c = 0;
    local_64 = 6;
    if (*(long *)(param_1 + 0xd8) == 0) {
      local_5c = (uint)(*(ulong *)(*(long *)(param_1 + 0x20) + 0x18) >> 6) & 1;
      local_64 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
    }
    if (0 < iVar2) {
      iVar14 = 0;
      iVar5 = -1;
      iVar13 = 0;
      local_60 = 0;
LAB_005a6091:
      do {
        lVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x10) == 0) &&
           ((*(byte *)(lVar8 + 0xe9) & 2) != 0)) {
          *(int *)(param_1 + 0xac) = iVar13;
          *(long *)(param_1 + 0xb8) = lVar8;
          *(undefined4 *)(param_1 + 0xb0) = 0x22;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) goto LAB_005a6220;
        }
        if ((local_5c == 0) && ((*(byte *)(lVar8 + 0xe9) & 4) != 0)) {
          *(int *)(param_1 + 0xac) = iVar13;
          *(long *)(param_1 + 0xb8) = lVar8;
          *(undefined4 *)(param_1 + 0xb0) = 0x28;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) goto LAB_005a6220;
        }
        uVar4 = FUN_0059ba50(lVar8);
        if (iVar5 == -1) {
          if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0) && (1 < uVar4)) {
            *(int *)(param_1 + 0xac) = iVar13;
joined_r0x005a630c:
            lVar7 = lVar8;
            if (lVar8 == 0) {
              lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
            }
            *(long *)(param_1 + 0xb8) = lVar7;
            *(undefined4 *)(param_1 + 0xb0) = 0x4f;
LAB_005a5e52:
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) goto LAB_005a6220;
          }
        }
        else if (iVar5 == 0) {
          if (uVar4 != 0) {
            *(int *)(param_1 + 0xac) = iVar13;
            lVar7 = lVar8;
            if (lVar8 == 0) {
              lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
            }
            *(long *)(param_1 + 0xb8) = lVar7;
            *(undefined4 *)(param_1 + 0xb0) = 0x25;
            goto LAB_005a5e52;
          }
        }
        else if ((uVar4 == 0) ||
                (((iVar13 + 1 < iVar2 || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0)
                  ) && (uVar4 != 1)))) {
          *(int *)(param_1 + 0xac) = iVar13;
          goto joined_r0x005a630c;
        }
        if (iVar2 != 1) {
          lVar7 = FUN_0059ef80(lVar8);
          if (lVar7 == 0) {
LAB_005a64d0:
            *(int *)(param_1 + 0xac) = iVar13;
            lVar7 = lVar8;
            if (lVar8 == 0) {
              lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
            }
            *(long *)(param_1 + 0xb8) = lVar7;
            *(undefined4 *)(param_1 + 0xb0) = 1;
LAB_005a64f5:
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) goto LAB_005a6220;
          }
          else {
            iVar3 = FUN_0040e580();
            if (iVar3 == 0x198) {
              iVar3 = FUN_00411780(lVar7,"decoded-from-explicit",&local_44);
              if (iVar3 < 0) goto LAB_005a64d0;
              if (local_44 == 0) goto LAB_005a5e9b;
              *(int *)(param_1 + 0xac) = iVar13;
              lVar7 = lVar8;
              if (lVar8 == 0) {
                lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
              }
              *(long *)(param_1 + 0xb8) = lVar7;
              *(undefined4 *)(param_1 + 0xb0) = 0x5e;
              goto LAB_005a64f5;
            }
          }
LAB_005a5e9b:
          if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0) {
            if (*(long *)(lVar8 + 0xd8) != -1) {
              if ((*(uint *)(lVar8 + 0xe8) & 0x10) == 0) {
                *(int *)(param_1 + 0xac) = iVar13;
                *(long *)(param_1 + 0xb8) = lVar8;
                *(undefined4 *)(param_1 + 0xb0) = 0x50;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_005a6220;
                bVar1 = *(byte *)(lVar8 + 0xec);
              }
              else {
                bVar1 = *(byte *)(lVar8 + 0xec);
              }
              if ((bVar1 & 4) == 0) {
                *(int *)(param_1 + 0xac) = iVar13;
                *(long *)(param_1 + 0xb8) = lVar8;
                *(undefined4 *)(param_1 + 0xb0) = 0x51;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_005a6220;
              }
            }
            uVar4 = *(uint *)(lVar8 + 0xe8);
            if ((uVar4 & 0x10011) == 0x11) {
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x59;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_005a6220;
              uVar4 = *(uint *)(lVar8 + 0xe8);
            }
            if ((uVar4 & 0x10) == 0) {
              if ((*(byte *)(lVar8 + 0xec) & 4) != 0) {
                *(int *)(param_1 + 0xac) = iVar13;
                *(long *)(param_1 + 0xb8) = lVar8;
                *(undefined4 *)(param_1 + 0xb0) = 0x52;
                goto LAB_005a6487;
              }
            }
            else if ((uVar4 & 2) == 0) {
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x5c;
LAB_005a6487:
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_005a6220;
            }
            uVar6 = FUN_0059e6c0(lVar8);
            iVar3 = FUN_005a9980(uVar6);
            if (iVar3 == 0) {
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x53;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_005a6220;
            }
            if (((*(ulong *)(lVar8 + 0xe8) & 0x200000010) != 0) || (*(long *)(lVar8 + 0x118) == 0))
            {
              uVar6 = FUN_0059e6d0(lVar8);
              iVar3 = FUN_005a9980(uVar6);
              if (iVar3 == 0) {
                *(int *)(param_1 + 0xac) = iVar13;
                *(long *)(param_1 + 0xb8) = lVar8;
                *(undefined4 *)(param_1 + 0xb0) = 0x54;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_005a6220;
              }
            }
            uVar6 = FUN_0059e6d0(lVar8);
            iVar3 = FUN_005a9980(uVar6);
            if (iVar3 == 0) {
              if (*(long *)(lVar8 + 0x118) != 0) {
                if ((*(byte *)(lVar8 + 0xea) & 8) != 0) {
                  iVar3 = FUN_00436480();
                  if (0 < iVar3) goto LAB_005a5f78;
                  goto LAB_005a63ad;
                }
                *(int *)(param_1 + 0xac) = iVar13;
                *(long *)(param_1 + 0xb8) = lVar8;
                *(undefined4 *)(param_1 + 0xb0) = 0x58;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 != 0) goto LAB_005a6390;
                goto LAB_005a6220;
              }
            }
            else {
LAB_005a6390:
              if ((*(long *)(lVar8 + 0x118) != 0) && (iVar3 = FUN_00436480(), iVar3 < 1)) {
LAB_005a63ad:
                *(int *)(param_1 + 0xac) = iVar13;
                *(long *)(param_1 + 0xb8) = lVar8;
                *(undefined4 *)(param_1 + 0xb0) = 0x57;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_005a6220;
              }
            }
LAB_005a5f78:
            iVar3 = FUN_004a89c0(lVar8 + 0x88,lVar8 + 0x20);
            if (iVar3 != 0) {
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x4e;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_005a6220;
            }
            if ((*(long *)(lVar8 + 0x100) != 0) && ((*(byte *)(lVar8 + 0xea) & 2) != 0)) {
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x5a;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_005a6220;
            }
            if ((*(long *)(lVar8 + 0xf8) == 0) || ((*(byte *)(lVar8 + 0xea) & 4) == 0)) {
              lVar7 = FUN_005a1b40(lVar8);
              if (1 < lVar7) goto LAB_005a5fd2;
LAB_005a65ec:
              uVar6 = FUN_005a1bc0(lVar8);
              iVar3 = FUN_00436480(uVar6);
              if (iVar3 < 1) goto LAB_005a6010;
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x5d;
            }
            else {
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x5b;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_005a6220;
              lVar7 = FUN_005a1b40(lVar8);
              if (lVar7 < 2) goto LAB_005a65ec;
LAB_005a5fd2:
              if ((iVar13 + 1 < iVar2) &&
                 ((*(long **)(lVar8 + 0x100) == (long *)0x0 || (**(long **)(lVar8 + 0x100) == 0))))
              {
                *(int *)(param_1 + 0xac) = iVar13;
                *(long *)(param_1 + 0xb8) = lVar8;
                *(undefined4 *)(param_1 + 0xb0) = 0x55;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_005a6220;
              }
              if (((*(byte *)(lVar8 + 0xe8) & 0x10) == 0) || (*(long *)(lVar8 + 0xf8) != 0))
              goto LAB_005a6010;
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x56;
            }
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) goto LAB_005a6220;
          }
        }
LAB_005a6010:
        if (local_64 < 1) {
LAB_005a601c:
          if (1 < iVar13) goto LAB_005a6025;
LAB_005a62cf:
          uVar4 = *(uint *)(lVar8 + 0xe8);
          if (iVar13 != 0) goto LAB_005a604d;
        }
        else {
          if ((iVar13 < *(int *)(param_1 + 0x94)) ||
             (local_64 != *(int *)(*(long *)(param_1 + 0x20) + 0x20))) {
            iVar5 = FUN_0059b9e0(lVar8,local_64,0 < iVar5);
            if (iVar5 != 0) {
LAB_005a6279:
              if ((iVar5 == 1) || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) == 0))
              goto LAB_005a601c;
            }
LAB_005a6290:
            *(int *)(param_1 + 0xac) = iVar13;
          }
          else {
            iVar3 = FUN_00614630(lVar8,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),4);
            if (iVar3 == 1) goto LAB_005a601c;
            if (iVar3 == 2) goto LAB_005a6290;
            iVar5 = FUN_0059b9e0(lVar8,local_64,0 < iVar5);
            if (iVar5 != 0) goto LAB_005a6279;
            *(int *)(param_1 + 0xac) = iVar13;
          }
          lVar7 = lVar8;
          if (lVar8 == 0) {
            lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
          }
          *(long *)(param_1 + 0xb8) = lVar7;
          *(undefined4 *)(param_1 + 0xb0) = 0x1a;
          iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar5 == 0) goto LAB_005a6220;
          if (iVar13 < 2) goto LAB_005a62cf;
LAB_005a6025:
          if ((*(long *)(lVar8 + 0xd8) != -1) &&
             (*(long *)(lVar8 + 0xd8) + (long)iVar14 < (long)local_60)) {
            *(int *)(param_1 + 0xac) = iVar13;
            *(long *)(param_1 + 0xb8) = lVar8;
            *(undefined4 *)(param_1 + 0xb0) = 0x19;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) goto LAB_005a6220;
          }
          uVar4 = *(uint *)(lVar8 + 0xe8);
LAB_005a604d:
          local_60 = local_60 + (uint)((uVar4 & 0x20) == 0);
        }
        if ((uVar4 & 0x400) != 0) {
          lVar7 = *(long *)(lVar8 + 0xe0);
          if (lVar7 != -1) {
            if (lVar7 < iVar14) {
              *(int *)(param_1 + 0xac) = iVar13;
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x26;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_005a6220;
              lVar7 = *(long *)(lVar8 + 0xe0);
            }
            iVar14 = (int)lVar7;
          }
          iVar13 = iVar13 + 1;
          iVar14 = iVar14 + 1;
          iVar5 = 0;
          if (iVar2 == iVar13) break;
          goto LAB_005a6091;
        }
        iVar13 = iVar13 + 1;
        iVar5 = 1;
      } while (iVar2 != iVar13);
    }
    iVar2 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
    if ((*(int *)(*(long *)(param_1 + 0x20) + 0x2c) < 1) || (iVar2 < 1)) {
LAB_005a68e0:
      uVar6 = FUN_005a3830(param_1);
      if (0 < (int)uVar6) {
        iVar2 = FUN_005a5c40(0,*(undefined8 *)(param_1 + 0x98));
        if (iVar2 == 0) {
LAB_005a6c76:
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (**(code **)(param_1 + 0x50))(param_1);
          if (0 < (int)uVar6) {
            iVar2 = FUN_0059f100(param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98),
                                 *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
            if (iVar2 != 0) {
              uVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
              *(int *)(param_1 + 0xb0) = iVar2;
              *(undefined8 *)(param_1 + 0xb8) = uVar6;
              iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar2 == 0) goto LAB_005a6220;
            }
            if (*(code **)(param_1 + 0x30) == (code *)0x0) {
              uVar6 = FUN_005a4b40(param_1);
            }
            else {
              uVar6 = (**(code **)(param_1 + 0x30))(param_1);
            }
            if (0 < (int)uVar6) {
              iVar2 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
              iVar2 = iVar2 + -1;
              if (-1 < iVar2) {
                do {
                  lVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar2);
                  if ((iVar2 == 0) || ((*(uint *)(lVar8 + 0xe8) & 0x20) == 0)) {
                    if ((*(uint *)(lVar8 + 0xe8) & 0x400) != 0) {
                      uVar6 = FUN_0059e6d0(lVar8);
                      uVar9 = FUN_0059e6c0(lVar8);
                      iVar13 = FUN_005a9980(uVar6);
                      iVar5 = iVar13 + -1;
                      if (0 < iVar5) {
                        iVar14 = FUN_005a9980(uVar6);
                        iVar3 = FUN_005a9980(uVar9);
                        if (iVar14 == iVar3 + 1) {
                          uVar10 = FUN_005a9a70(uVar6,iVar5);
                          iVar14 = FUN_005aa300(uVar10);
                          uVar10 = FUN_005a9a70(uVar6,iVar13 + -2);
                          iVar13 = FUN_005aa300(uVar10);
                          if (iVar14 != iVar13) {
                            lVar7 = FUN_005ad800(uVar6);
                            if (lVar7 == 0) {
                              FUN_0051f420();
                              FUN_0051f540("../crypto/x509/x509_vfy.c",0x2c4,
                                           "check_name_constraints");
                              FUN_0051f8f0(0xb,0xc0100,0);
                              uVar6 = 0xffffffff;
                              *(undefined4 *)(param_1 + 0xb0) = 0x11;
                              goto LAB_005a6222;
                            }
                            uVar6 = FUN_005a9ac0(lVar7,iVar5);
                            uVar10 = FUN_005aa1f0(uVar6);
                            iVar13 = FUN_00423da0(uVar10);
                            if ((iVar13 == 0xd) && (iVar13 = FUN_0059eab0(lVar7,uVar9), iVar13 == 0)
                               ) {
                              FUN_005acaf0(uVar6);
                              FUN_005ad580(lVar7);
                              goto LAB_005a6a8e;
                            }
                            FUN_005acaf0(uVar6);
                            FUN_005ad580(lVar7);
                          }
                        }
                      }
                      *(int *)(param_1 + 0xac) = iVar2;
                      *(long *)(param_1 + 0xb8) = lVar8;
                      *(undefined4 *)(param_1 + 0xb0) = 0x48;
                      iVar13 = (**(code **)(param_1 + 0x38))(0,param_1);
                      if (iVar13 == 0) goto LAB_005a6220;
                    }
LAB_005a6a8e:
                    iVar13 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
                    if (iVar2 < iVar13 + -1) {
                      iVar13 = iVar13 + -2;
LAB_005a6aaa:
                      lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13 + 1);
                      lVar7 = *(long *)(lVar7 + 0x120);
                      if (lVar7 != 0) {
                        iVar5 = FUN_006105d0(lVar8,lVar7);
                        if (iVar2 == 0 && iVar5 == 0) {
                          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + 0x40);
                          if ((uVar4 & 0x20) == 0) {
                            if ((uVar4 & 1) == 0) {
                              lVar11 = FUN_0059f590(lVar8,0x55,0,0);
                              iVar5 = 0;
                              if (lVar11 != 0) {
                                for (; iVar14 = FUN_00436480(lVar11), iVar5 < iVar14;
                                    iVar5 = iVar5 + 1) {
                                  piVar12 = (int *)FUN_004364a0(lVar11,iVar5);
                                  if (*piVar12 == 2) {
                                    FUN_0060e7a0(lVar11);
                                    goto LAB_005a6c88;
                                  }
                                }
                                FUN_0060e7a0(lVar11);
                              }
                            }
                            iVar5 = FUN_006107b0(lVar8,lVar7);
                            goto LAB_005a6b6c;
                          }
LAB_005a6c88:
                          if (iVar13 == 0) break;
                          goto LAB_005a6ba7;
                        }
LAB_005a6b6c:
                        if (iVar5 != 0) {
                          if (iVar5 != 0x11) {
                            *(int *)(param_1 + 0xac) = iVar2;
                            *(long *)(param_1 + 0xb8) = lVar8;
                            *(int *)(param_1 + 0xb0) = iVar5;
                            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                            if (iVar5 != 0) goto LAB_005a6b9f;
                            goto LAB_005a6220;
                          }
                          goto LAB_005a6c76;
                        }
                      }
LAB_005a6b9f:
                      if (iVar13 <= iVar2) goto LAB_005a6d20;
LAB_005a6ba7:
                      iVar13 = iVar13 + -1;
                      goto LAB_005a6aaa;
                    }
                  }
LAB_005a6d20:
                  bVar15 = iVar2 != 0;
                  iVar2 = iVar2 + -1;
                } while (bVar15);
              }
              uVar6 = FUN_0060bd10(param_1);
              if (((0 < (int)uVar6) && (uVar6 = FUN_0060a020(param_1), 0 < (int)uVar6)) &&
                 ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x80) != 0)) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x005a6ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar6 = (**(code **)(param_1 + 0x70))(param_1);
                  return uVar6;
                }
                goto LAB_005a6d65;
              }
            }
          }
        }
      }
    }
    else {
      iVar13 = 0;
      lVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
LAB_005a6170:
      do {
        do {
          if (iVar13 < iVar2 + -1) {
            local_44 = -1;
            iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
            if (0 < iVar5) {
              iVar14 = FUN_005a1c60(lVar8,0,0,&local_44,0);
              if (iVar14 != 0) {
                if (5 < iVar5) {
                  iVar5 = 5;
                }
                if (*(int *)(&DAT_0080d2b0 + (long)(iVar5 + -1) * 4) <= local_44)
                goto joined_r0x005a68d2;
              }
              *(int *)(param_1 + 0xac) = iVar13;
              if (lVar8 == 0) {
                lVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
              }
              *(long *)(param_1 + 0xb8) = lVar8;
              *(undefined4 *)(param_1 + 0xb0) = 0x44;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_005a6220;
            }
          }
joined_r0x005a68d2:
          if (iVar2 == iVar13 + 1) goto LAB_005a68e0;
          iVar13 = iVar13 + 1;
          lVar8 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98));
          lVar7 = FUN_0059ef80(lVar8);
          iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
        } while (iVar5 < 1);
        if (lVar7 != 0) {
          iVar14 = FUN_0040de40(lVar7);
          if (5 < iVar5) {
            iVar5 = 5;
          }
          if (*(int *)(&DAT_0080d2b0 + (long)(iVar5 + -1) * 4) <= iVar14) goto LAB_005a6170;
        }
        *(int *)(param_1 + 0xac) = iVar13;
        lVar7 = lVar8;
        if (lVar8 == 0) {
          lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
        }
        *(long *)(param_1 + 0xb8) = lVar7;
        *(undefined4 *)(param_1 + 0xb0) = 0x43;
        iVar5 = (**(code **)(param_1 + 0x38))(0);
      } while (iVar5 != 0);
LAB_005a6220:
      uVar6 = 0;
    }
  }
LAB_005a6222:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_005a6d65:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

