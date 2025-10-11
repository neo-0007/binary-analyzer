
ulong FUN_005a4030(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  byte bVar14;
  int local_80;
  int local_7c;
  long local_70;
  uint local_68;
  uint local_50;
  long local_48;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  if ((iVar6 == 1) && (*(int *)(param_1 + 0x94) == 1)) {
    bVar14 = *(long *)(param_1 + 0x10) != 0;
    if (((lVar2 == 0) || ((*(uint *)(lVar2 + 0x28) & 3) != 0)) ||
       ((*(uint *)(lVar2 + 0x28) & 0xc) == 0)) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (uVar10 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18), (uVar10 & 0x8000) != 0)) {
        local_50 = 0;
        bVar14 = bVar14 | 2;
      }
      else {
        local_50 = ((uint)(uVar10 >> 0x14) ^ 1) & 1;
      }
      local_70 = FUN_00436410();
      if (local_70 == 0) goto LAB_005a4acc;
      bVar5 = true;
      if (lVar2 != 0) goto LAB_005a40f5;
LAB_005a4124:
      iVar6 = FUN_0059ea50(local_70,*(undefined8 *)(param_1 + 0x10),0);
      if (iVar6 == 0) goto LAB_005a4947;
      local_80 = *(int *)(*(long *)(param_1 + 0x20) + 0x28);
      if (local_80 < 0x40000000) {
        local_80 = local_80 + 1;
      }
      else {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = 0x3fffffff;
        local_80 = 0x40000000;
      }
      if (bVar14 == 0) {
        FUN_004360b0(local_70);
        iVar6 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
        if (iVar6 <= local_80) {
          if (lVar2 != 0) {
LAB_005a43ab:
            if ((*(byte *)(lVar2 + 0x28) & 4) != 0) {
              iVar7 = *(int *)(param_1 + 0x94) + -1;
              lVar4 = *(long *)(param_1 + 0xf0);
              uVar9 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar7);
              iVar12 = FUN_00436480(*(undefined8 *)(lVar4 + 8));
              if (0 < iVar12) {
                iVar13 = 0;
                do {
                  psVar11 = (short *)FUN_004364a0(*(undefined8 *)(lVar4 + 8),iVar13);
                  if (((*psVar11 == 0x102) && ((char)psVar11[1] == '\0')) &&
                     (iVar8 = FUN_005aa400(uVar9,*(undefined8 *)(psVar11 + 0xc)), 0 < iVar8)) {
                    FUN_005b0200(*(undefined8 *)(lVar4 + 0x20));
                    *(undefined8 *)(lVar4 + 0x20) = 0;
                    *(undefined4 *)(param_1 + 0xf8) = 1;
                    uVar9 = *(undefined8 *)(param_1 + 0x98);
                    *(int *)(lVar4 + 0x2c) = iVar7;
                    *(short **)(lVar4 + 0x18) = psVar11;
                    iVar6 = FUN_00436480(uVar9);
                    if (*(int *)(param_1 + 0x94) < iVar6) {
                      do {
                        iVar6 = iVar6 + -1;
                        uVar9 = FUN_00436020(*(undefined8 *)(param_1 + 0x98));
                        FUN_005b0200(uVar9);
                      } while (*(int *)(param_1 + 0x94) < iVar6);
                    }
                    goto LAB_005a48b0;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar12 != iVar13);
              }
            }
          }
LAB_005a43c1:
          if (*(int *)(param_1 + 0x94) == iVar6) {
            local_68 = FUN_005a3520(param_1,iVar6);
            goto LAB_005a44f8;
          }
          iVar7 = *(int *)(param_1 + 0xb0);
          if (10 < iVar7) goto LAB_005a48eb;
          if (8 < iVar7) goto LAB_005a450e;
          iVar12 = iVar6 + -1;
          if (iVar7 == 0) goto LAB_005a43f3;
          goto LAB_005a48f7;
        }
        iVar7 = *(int *)(param_1 + 0xb0);
        if (iVar7 != 0) goto LAB_005a49c8;
        iVar12 = iVar6 + -1;
LAB_005a4a61:
        if (iVar12 < 0) {
          iVar7 = *(int *)(param_1 + 0xac);
        }
        else {
          *(int *)(param_1 + 0xac) = iVar12;
          iVar7 = iVar12;
        }
        uVar9 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar7);
        *(undefined4 *)(param_1 + 0xb0) = 0x16;
        *(undefined8 *)(param_1 + 0xb8) = uVar9;
        iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar7 == 0) goto LAB_005a450e;
LAB_005a43f3:
        if (((lVar2 != 0) && (iVar7 = FUN_00436480(*(undefined8 *)(lVar2 + 8)), 0 < iVar7)) &&
           (((*(byte *)(lVar2 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar2 + 0x30))))) {
          if (iVar12 < 0) {
            iVar7 = *(int *)(param_1 + 0xac);
          }
          else {
            *(int *)(param_1 + 0xac) = iVar12;
            iVar7 = iVar12;
          }
          uVar9 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar7);
          *(undefined4 *)(param_1 + 0xb0) = 0x41;
          *(undefined8 *)(param_1 + 0xb8) = uVar9;
          iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar7 == 0) goto LAB_005a450e;
        }
        uVar9 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar12);
        iVar7 = FUN_005a3a10(uVar9,0);
        if (iVar7 < 1) {
          iVar7 = 2;
          if (iVar6 <= *(int *)(param_1 + 0x94)) {
            iVar7 = 0x14;
          }
          if (-1 < iVar12) goto LAB_005a4496;
          iVar12 = *(int *)(param_1 + 0xac);
        }
        else {
          if (iVar6 == 1) {
            iVar7 = 0x12;
          }
          else {
            if (iVar12 < 0) {
              iVar12 = *(int *)(param_1 + 0xac);
              iVar7 = 0x13;
              goto LAB_005a449d;
            }
            iVar7 = 0x13;
          }
LAB_005a4496:
          *(int *)(param_1 + 0xac) = iVar12;
        }
LAB_005a449d:
        uVar9 = *(undefined8 *)(param_1 + 0x98);
      }
      else {
        local_68 = 3;
        iVar6 = 0;
LAB_005a4178:
        do {
          do {
            local_48 = 0;
            iVar7 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
            iVar12 = iVar7 + -1;
            *(int *)(param_1 + 0xac) = iVar12;
            if ((bVar14 & 2) != 0) {
              iVar13 = iVar12;
              local_7c = iVar7;
              if ((bVar14 & 4) != 0) {
                iVar13 = iVar6 + -1;
                local_7c = iVar6;
              }
              uVar9 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar13);
              if (local_80 < iVar7) {
LAB_005a4348:
                if ((bVar14 & 1) != 0) break;
LAB_005a4355:
                if ((bVar14 & 4) != 0) {
                  iVar6 = iVar6 + -1;
                  if (iVar6 < 1) goto LAB_005a4367;
                  goto LAB_005a4178;
                }
              }
              else {
                uVar3 = *(undefined8 *)(param_1 + 0x98);
                *(undefined8 *)(param_1 + 0x98) = 0;
                iVar13 = (**(code **)(param_1 + 0x40))(&local_48,param_1,uVar9);
                *(undefined8 *)(param_1 + 0x98) = uVar3;
                if (iVar13 < 0) {
                  *(undefined4 *)(param_1 + 0xb0) = 0x46;
                  FUN_004360b0(local_70);
                  local_68 = 0xffffffff;
                  goto LAB_005a4520;
                }
                if (iVar13 == 0) goto LAB_005a4348;
                iVar13 = FUN_005a3a10(uVar9,0);
                if (iVar13 < 0) {
LAB_005a477c:
                  FUN_005b0200(local_48);
                  goto LAB_005a4786;
                }
                if ((bVar14 & 4) != 0) {
                  if ((iVar7 <= local_7c || local_7c < 1) || (iVar13 != 0)) goto LAB_005a477c;
                  bVar14 = bVar14 & 0xfb;
                  iVar13 = iVar7;
                  do {
                    iVar13 = iVar13 + -1;
                    uVar9 = FUN_00436020(*(undefined8 *)(param_1 + 0x98));
                    FUN_005b0200(uVar9);
                  } while (local_7c < iVar13);
                  iVar13 = local_7c - iVar12;
                  if (iVar7 <= local_7c) {
                    iVar13 = 0;
                  }
                  iVar7 = iVar12 + iVar13;
                  *(int *)(param_1 + 0x94) = iVar7;
                  if (lVar2 != 0) {
                    iVar12 = FUN_00436480(*(undefined8 *)(lVar2 + 8));
                    if ((0 < iVar12) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x2c))) {
                      *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
                      FUN_005b0200(*(undefined8 *)(lVar2 + 0x20));
                      *(undefined8 *)(lVar2 + 0x20) = 0;
                    }
                    iVar12 = FUN_00436480(*(undefined8 *)(lVar2 + 8));
                    if ((0 < iVar12) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x30))) {
                      *(undefined4 *)(lVar2 + 0x30) = 0xffffffff;
                    }
                  }
LAB_005a46c5:
                  iVar12 = iVar7;
                  iVar7 = FUN_00435f80(*(undefined8 *)(param_1 + 0x98),local_48);
                  if (iVar7 == 0) {
                    FUN_005b0200(local_48);
                    goto LAB_005a4947;
                  }
                  iVar13 = FUN_005a3a10(local_48,0);
                  if (iVar13 < 0) goto LAB_005a4786;
LAB_005a46ef:
                  if (iVar12 < *(int *)(param_1 + 0x94)) goto LAB_005a4786;
                  bVar14 = bVar14 & 0xfe;
                  local_68 = FUN_005a3520(param_1,iVar12);
                  if (local_68 == 3) {
                    if (iVar13 == 0) goto LAB_005a4728;
                    goto LAB_005a4355;
                  }
                  goto LAB_005a4367;
                }
                if (iVar13 == 0) goto LAB_005a46c5;
                iVar7 = FUN_0059e700(uVar9);
                if (iVar7 == 0) {
                  FUN_005b0200(uVar9);
                  *(int *)(param_1 + 0x94) = iVar12;
                  FUN_004364d0(*(undefined8 *)(param_1 + 0x98),iVar12,local_48);
                  goto LAB_005a46ef;
                }
                FUN_005b0200(local_48);
                if ((bVar14 & 1) != 0) break;
              }
              if ((local_50 == 0) || (*(int *)(param_1 + 0x94) < 2)) goto LAB_005a4367;
              bVar14 = bVar14 | 4;
              iVar6 = *(int *)(param_1 + 0x94) + -1;
              goto LAB_005a4178;
            }
          } while ((bVar14 & 1) == 0);
          iVar7 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
          if (*(int *)(param_1 + 0x94) != iVar7) goto LAB_005a4786;
          uVar9 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar7 + -1);
          iVar12 = FUN_005a3a10(uVar9,0);
          if (((0 < iVar12) || (local_80 < iVar7)) ||
             (local_48 = FUN_005a3ed0(param_1,local_70,uVar9), local_48 == 0)) {
            bVar14 = bVar14 & 0xfe;
            if (bVar5) {
              bVar14 = bVar14 | 2;
            }
            else {
LAB_005a4728:
              if (bVar14 == 0) break;
            }
            goto LAB_005a4178;
          }
          FUN_00435e40(local_70,local_48);
          iVar7 = FUN_0059e7e0(*(undefined8 *)(param_1 + 0x98),local_48,1);
          if (iVar7 == 0) goto LAB_005a4786;
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
          local_68 = FUN_005a3240(param_1);
        } while (1 < local_68 - 1);
LAB_005a4367:
        FUN_004360b0(local_70);
        if ((int)local_68 < 0) goto LAB_005a4520;
        iVar6 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
        if (iVar6 <= local_80) {
          if (lVar2 == 0) {
            if (local_68 == 3) goto LAB_005a43c1;
          }
          else if (local_68 == 3) goto LAB_005a43ab;
        }
LAB_005a44f8:
        if (local_68 == 1) {
LAB_005a48b0:
          local_68 = 1;
          *(undefined4 *)(param_1 + 0xb0) = uVar1;
          goto LAB_005a4520;
        }
        if (local_68 == 2) goto LAB_005a450e;
        iVar7 = *(int *)(param_1 + 0xb0);
        if (iVar7 == 0) {
          iVar12 = iVar6 + -1;
          if (local_80 < iVar6) goto LAB_005a4a61;
          goto LAB_005a43f3;
        }
LAB_005a49c8:
        if (-1 < iVar7) {
          if (iVar7 < 0xb) {
            if (8 < iVar7) {
LAB_005a450e:
              local_68 = 0;
              goto LAB_005a4520;
            }
          }
          else {
LAB_005a48eb:
            if (iVar7 - 0xdU < 2) goto LAB_005a450e;
          }
        }
LAB_005a48f7:
        iVar12 = iVar6 + -1;
        if (iVar12 < 0) {
          iVar12 = *(int *)(param_1 + 0xac);
        }
        else {
          *(int *)(param_1 + 0xac) = iVar12;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x98);
      }
      uVar9 = FUN_004364a0(uVar9,iVar12);
      *(int *)(param_1 + 0xb0) = iVar7;
      *(undefined8 *)(param_1 + 0xb8) = uVar9;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x005a44e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar10;
      }
      goto LAB_005a4afa;
    }
    local_70 = FUN_00436410();
    if (local_70 == 0) {
LAB_005a4acc:
      local_70 = 0;
    }
    else {
      local_50 = 0;
      bVar5 = false;
LAB_005a40f5:
      iVar6 = FUN_00436480(*(undefined8 *)(lVar2 + 8));
      if (((iVar6 < 1) || (*(long *)(lVar2 + 0x10) == 0)) ||
         (iVar6 = FUN_0059ea50(local_70,*(long *)(lVar2 + 0x10),0), iVar6 != 0)) goto LAB_005a4124;
    }
LAB_005a4947:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0xd04,"build_chain");
    FUN_0051f8f0(0xb,0xc0100,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    FUN_004360b0(local_70);
    local_68 = 0xffffffff;
  }
  else {
    local_70 = 0;
LAB_005a4786:
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0xcfe,"build_chain");
    FUN_0051f8f0(0xb,0xc0103,0);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    FUN_004360b0(local_70);
    local_68 = 0xffffffff;
  }
LAB_005a4520:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_68;
  }
LAB_005a4afa:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

