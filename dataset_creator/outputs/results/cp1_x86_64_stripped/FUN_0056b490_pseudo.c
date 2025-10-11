
ulong FUN_0056b490(long param_1,ulong param_2,int param_3,long param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long extraout_RDX;
  long in_FS_OFFSET;
  long local_b0;
  int local_90;
  int local_80;
  int local_6c;
  undefined8 *local_68;
  int local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0056b4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return uVar6;
    }
    goto LAB_0056bc29;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    if ((param_3 == 2) && (0x7ff < (int)param_2)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = FUN_0056e150(param_1,param_2,param_4,param_5);
        return uVar6;
      }
      goto LAB_0056bc29;
    }
    if ((int)param_2 < 0x200) {
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_gen.c",0x5a,"rsa_multiprime_keygen");
      uVar7 = 0x78;
    }
    else {
      if (param_4 != 0) {
        uVar1 = FUN_0056d150(param_4);
        param_2 = param_2 & 0xffffffff;
        uVar6 = (ulong)uVar1;
        if (uVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_gen.c",0x60,"rsa_multiprime_keygen");
          FUN_0051f8f0(4,0xb2,0);
          goto LAB_0056b511;
        }
      }
      if (1 < param_3) {
        iVar2 = FUN_0042d5f0(param_2 & 0xffffffff);
        if (param_3 <= iVar2) {
          local_b0 = FUN_004b2a70(*(undefined8 *)(param_1 + 8));
          if (local_b0 != 0) {
            FUN_004b2c00(local_b0);
            uVar7 = FUN_004b2df0(local_b0);
            uVar8 = FUN_004b2df0(local_b0);
            lVar9 = FUN_004b2df0(local_b0);
            if (lVar9 != 0) {
              lVar15 = 0;
              do {
                local_58[lVar15] =
                     (uint)((int)lVar15 < (int)param_2 % param_3) + (int)param_2 / param_3;
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 < param_3);
              *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
              if (*(long *)(param_1 + 0x28) == 0) {
                lVar15 = FUN_004b7690();
                *(long *)(param_1 + 0x28) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              lVar15 = *(long *)(param_1 + 0x38);
              if (lVar15 == 0) {
                lVar15 = FUN_004b7700();
                *(long *)(param_1 + 0x38) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              FUN_004b7e70(lVar15,4);
              if (*(long *)(param_1 + 0x30) == 0) {
                lVar15 = FUN_004b7690();
                *(long *)(param_1 + 0x30) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              lVar15 = *(long *)(param_1 + 0x40);
              if (lVar15 == 0) {
                lVar15 = FUN_004b7700();
                *(long *)(param_1 + 0x40) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              FUN_004b7e70(lVar15,4);
              lVar15 = *(long *)(param_1 + 0x48);
              if (lVar15 == 0) {
                lVar15 = FUN_004b7700();
                *(long *)(param_1 + 0x48) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              FUN_004b7e70(lVar15,4);
              lVar15 = *(long *)(param_1 + 0x50);
              if (lVar15 == 0) {
                lVar15 = FUN_004b7700();
                *(long *)(param_1 + 0x50) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              FUN_004b7e70(lVar15,4);
              lVar15 = *(long *)(param_1 + 0x58);
              if (lVar15 == 0) {
                lVar15 = FUN_004b7700();
                *(long *)(param_1 + 0x58) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              FUN_004b7e70(lVar15,4);
              lVar15 = *(long *)(param_1 + 0x60);
              if (lVar15 == 0) {
                lVar15 = FUN_004b7700();
                *(long *)(param_1 + 0x60) = lVar15;
                if (lVar15 == 0) goto LAB_0056b790;
              }
              FUN_004b7e70(lVar15,4);
              if (param_3 == 2) {
                local_68 = (undefined8 *)0x0;
                lVar15 = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0x10) = 1;
                lVar15 = FUN_004363b0(0,param_3 + -2);
                if (lVar15 == 0) goto LAB_0056b790;
                if (*(long *)(param_1 + 0x88) != 0) {
                  FUN_00436430(*(long *)(param_1 + 0x88),FUN_0042d3f0);
                }
                *(long *)(param_1 + 0x88) = lVar15;
                iVar2 = 2;
                do {
                  local_68 = (undefined8 *)FUN_0042d420();
                  if (local_68 == (undefined8 *)0x0) goto LAB_0056b790;
                  iVar2 = iVar2 + 1;
                  FUN_00435f80(lVar15,local_68);
                } while (iVar2 < param_3);
              }
              lVar10 = FUN_004b8260(*(undefined8 *)(param_1 + 0x30),param_4);
              if (lVar10 != 0) {
                local_6c = 0;
                iVar2 = 0;
LAB_0056b937:
                if (iVar2 == 0) {
                  uVar12 = *(undefined8 *)(param_1 + 0x40);
                }
                else if (iVar2 == 1) {
                  uVar12 = *(undefined8 *)(param_1 + 0x48);
                }
                else {
                  local_68 = (undefined8 *)FUN_004364a0(lVar15,iVar2 + -2);
                  uVar12 = *local_68;
                }
                FUN_004b7e70(uVar12,4);
                local_60 = 0;
                iVar5 = local_58[iVar2];
                local_80 = 0;
                local_6c = local_6c + iVar5;
                local_90 = iVar5;
LAB_0056b977:
                iVar3 = FUN_005c4410(uVar12,local_90,0,0,0,param_5);
                if (iVar3 == 0) goto LAB_0056b790;
                iVar3 = 0;
                lVar10 = local_b0;
                if (iVar2 != 0) {
                  do {
                    if (iVar3 == 0) {
                      uVar11 = *(undefined8 *)(param_1 + 0x40);
                    }
                    else if (iVar3 == 1) {
                      uVar11 = *(undefined8 *)(param_1 + 0x48);
                    }
                    else {
                      puVar14 = (undefined8 *)FUN_004364a0(lVar15,iVar3 + -2,lVar10);
                      uVar11 = *puVar14;
                    }
                    iVar4 = FUN_004b7840(uVar12,uVar11);
                    if (iVar4 == 0) goto LAB_0056b977;
                    iVar3 = iVar3 + 1;
                    lVar10 = extraout_RDX;
                  } while (iVar3 != iVar2);
                }
                uVar11 = FUN_004b75a0();
                iVar3 = FUN_004b18d0(lVar9,uVar12,uVar11);
                if (iVar3 == 0) goto LAB_0056b790;
                FUN_0051f000();
                FUN_004b7e70(lVar9,4);
                lVar10 = FUN_004b6c40(uVar8,lVar9,*(undefined8 *)(param_1 + 0x30));
                if (lVar10 == 0) {
                  uVar6 = FUN_0051e9f0();
                  if ((((uVar6 & 0x80000000) != 0) || ((char)(uVar6 >> 0x17) != '\x03')) ||
                     (((uint)uVar6 & 0x7fffff) != 0x6c)) goto LAB_0056b790;
                  FUN_0051f050();
                  iVar3 = FUN_005c3bd0(param_5,2);
                  if (iVar3 == 0) goto LAB_0056b790;
                  goto LAB_0056b977;
                }
                if (iVar2 == 1) {
                  iVar3 = FUN_004bacf0(uVar8,*(undefined8 *)(param_1 + 0x40),
                                       *(undefined8 *)(param_1 + 0x48),local_b0);
                }
                else {
                  if (iVar2 == 0) {
                    iVar2 = FUN_005c3bd0(param_5,3,0);
                    if (iVar2 == 0) goto LAB_0056b790;
                    iVar2 = 0;
                    goto LAB_0056bb62;
                  }
                  iVar3 = FUN_004bacf0(uVar8,*(undefined8 *)(param_1 + 0x28),uVar12,local_b0);
                }
                if ((iVar3 == 0) || (iVar3 = FUN_004bc3b0(lVar9,uVar8,local_6c + -4), iVar3 == 0))
                goto LAB_0056b790;
                uVar6 = FUN_004b77c0(lVar9);
                if (uVar6 - 9 < 7) {
                  uVar12 = *(undefined8 *)(param_1 + 0x28);
                  if (1 < iVar2) {
                    lVar10 = FUN_004b8260(local_68[3],uVar12);
                    if (lVar10 == 0) goto LAB_0056b790;
                    uVar12 = *(undefined8 *)(param_1 + 0x28);
                  }
                  lVar10 = FUN_004b8260(uVar12,uVar8);
                  if ((lVar10 == 0) || (iVar5 = FUN_005c3bd0(param_5,3,iVar2), iVar5 == 0))
                  goto LAB_0056b790;
                  iVar2 = iVar2 + 1;
                  if (iVar2 < param_3) goto LAB_0056b937;
                  iVar2 = FUN_004b7840(*(undefined8 *)(param_1 + 0x40),
                                       *(undefined8 *)(param_1 + 0x48));
                  if (iVar2 < 0) {
                    uVar12 = *(undefined8 *)(param_1 + 0x48);
                    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
                    *(undefined8 *)(param_1 + 0x40) = uVar12;
                  }
                  uVar12 = FUN_004b75a0();
                  iVar2 = FUN_004b18d0(uVar8,*(undefined8 *)(param_1 + 0x40),uVar12);
                  if (iVar2 == 0) goto LAB_0056b790;
                  uVar12 = FUN_004b75a0();
                  iVar2 = FUN_004b18d0(lVar9,*(undefined8 *)(param_1 + 0x48),uVar12);
                  if ((iVar2 == 0) || (iVar2 = FUN_004bacf0(uVar7,uVar8,lVar9,local_b0), iVar2 == 0)
                     ) goto LAB_0056b790;
                  iVar2 = 2;
                  goto LAB_0056bd9c;
                }
                iVar3 = FUN_005c3bd0(param_5,2);
                if (iVar3 == 0) goto LAB_0056b790;
                if (param_3 == 5) {
                  if (uVar6 < 9) {
                    local_80 = local_80 + 1;
                    local_90 = local_80 + iVar5;
                  }
                  else {
                    local_80 = local_80 + -1;
                    local_90 = local_80 + iVar5;
                  }
                }
                else if (local_60 == 4) goto LAB_0056bb54;
                local_60 = local_60 + 1;
                goto LAB_0056b977;
              }
            }
          }
          goto LAB_0056b790;
        }
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_gen.c",0x66,"rsa_multiprime_keygen");
      uVar7 = 0xa5;
    }
    uVar6 = 0;
    FUN_0051f8f0(4,uVar7,0);
    local_b0 = 0;
    goto LAB_0056b7c3;
  }
  uVar6 = 0;
  if (param_3 == 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0056b56b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
      return uVar6;
    }
    goto LAB_0056bc29;
  }
  goto LAB_0056b511;
LAB_0056bd9c:
  if (param_3 <= iVar2) goto code_r0x0056bda1;
  puVar14 = (undefined8 *)FUN_004364a0(lVar15,iVar2 + -2);
  uVar12 = FUN_004b75a0();
  iVar5 = FUN_004b18d0(puVar14[1],*puVar14,uVar12);
  if ((iVar5 == 0) || (iVar5 = FUN_004bacf0(uVar7,uVar7,puVar14[1],local_b0), iVar5 == 0))
  goto LAB_0056b790;
  iVar2 = iVar2 + 1;
  goto LAB_0056bd9c;
LAB_0056bb54:
  local_6c = 0;
  iVar2 = -1;
LAB_0056bb62:
  iVar2 = iVar2 + 1;
  goto LAB_0056b937;
code_r0x0056bda1:
  lVar10 = FUN_004b7690();
  if (lVar10 != 0) {
    FUN_004b7d90(lVar10,uVar7,4);
    lVar13 = FUN_004b6c40(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),lVar10,
                          local_b0);
    if (lVar13 == 0) {
LAB_0056bf4b:
      FUN_004b7fa0(lVar10);
    }
    else {
      FUN_004b7fa0(lVar10);
      lVar10 = FUN_004b7690();
      if (lVar10 != 0) {
        FUN_004b7d90(lVar10,*(undefined8 *)(param_1 + 0x38),4);
        iVar2 = FUN_004b34a0(0,*(undefined8 *)(param_1 + 0x50),lVar10,uVar8,local_b0);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_004b34a0(0,*(undefined8 *)(param_1 + 0x58),lVar10,lVar9,local_b0),
           iVar2 == 0)) {
LAB_0056bf55:
          FUN_004b7fa0(lVar10);
        }
        else {
          for (iVar2 = 2; iVar2 < param_3; iVar2 = iVar2 + 1) {
            lVar9 = FUN_004364a0(lVar15,iVar2 + -2);
            iVar5 = FUN_004b34a0(0,*(undefined8 *)(lVar9 + 8),lVar10,*(undefined8 *)(lVar9 + 8),
                                 local_b0);
            if (iVar5 == 0) goto LAB_0056bf55;
          }
          FUN_004b7fa0(lVar10);
          lVar10 = FUN_004b7690();
          if (lVar10 != 0) {
            iVar2 = 2;
            FUN_004b7d90(lVar10,*(undefined8 *)(param_1 + 0x40),4);
            lVar9 = FUN_004b6c40(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),
                                 lVar10,local_b0);
            if (lVar9 == 0) goto LAB_0056bf4b;
            for (; iVar2 < param_3; iVar2 = iVar2 + 1) {
              puVar14 = (undefined8 *)FUN_004364a0(lVar15,iVar2 + -2);
              FUN_004b7d90(lVar10,*puVar14,4);
              lVar9 = FUN_004b6c40(puVar14[2],puVar14[3],lVar10,local_b0);
              if (lVar9 == 0) goto LAB_0056bf4b;
            }
            uVar6 = 1;
            FUN_004b7fa0(lVar10);
            goto LAB_0056b7c3;
          }
        }
      }
    }
  }
LAB_0056b790:
  FUN_0051f420();
  uVar6 = 0;
  FUN_0051f540("../crypto/rsa/rsa_gen.c",0x19f,"rsa_multiprime_keygen");
  FUN_0051f8f0(4,0x80003,0);
LAB_0056b7c3:
  FUN_004b2d50(local_b0);
  FUN_004b2b50(local_b0);
LAB_0056b511:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_0056bc29:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

