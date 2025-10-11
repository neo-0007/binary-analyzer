
int FUN_00542bf0(undefined8 param_1,long *param_2,uint param_3,int param_4,ulong param_5,
                ulong param_6,uint *param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  byte *pbVar23;
  int iVar24;
  long in_FS_OFFSET;
  long local_158;
  ushort local_148;
  byte local_140;
  long local_128;
  long local_120;
  long local_118;
  long local_c8;
  uint local_c0;
  int local_bc;
  int local_90;
  undefined4 local_8c;
  byte local_88;
  ushort local_87;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  local_90 = 0;
  local_8c = 0;
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_2 + 8);
  }
  lVar9 = param_2[9];
  *param_7 = 0;
  if (lVar9 == 0) {
    if (param_6 == 0) {
      pcVar22 = "SHA-256";
      param_6 = (-(ulong)(param_5 < 0x800) & 0xffffffffffffffa0) + 0x100;
      if (param_5 < 0x800) {
        pcVar22 = "SHA1";
      }
LAB_00542e6e:
      lVar9 = FUN_004069d0(param_1,pcVar22,param_2[10]);
      goto LAB_00542c9a;
    }
    if (param_6 == 0xa0) {
      pcVar22 = "SHA1";
      goto LAB_00542e6e;
    }
    pcVar22 = "SHA-224";
    if (param_6 == 0xe0) goto LAB_00542e6e;
    if (param_6 == 0x100) {
      pcVar22 = "SHA-256";
      goto LAB_00542e6e;
    }
    lVar9 = 0;
    *param_7 = 0x20;
    lVar10 = 0;
LAB_00542dfa:
    lVar11 = param_2[4];
  }
  else {
    lVar9 = FUN_004069d0(param_1,lVar9,param_2[10]);
LAB_00542c9a:
    if ((lVar9 == 0) || (iVar4 = FUN_0040ac10(lVar9), iVar4 < 1)) {
      lVar10 = 0;
      goto LAB_00542dfa;
    }
    if (param_6 == 0) {
      param_6 = (long)(iVar4 * 8);
    }
    if (param_6 < param_5) {
      if (param_4 == 1) {
        if (((param_5 == 0x400) && (param_6 == 0xa0)) ||
           ((param_5 == 0x800 && ((param_6 - 0xe0 & 0xffffffffffffffdf) == 0)))) {
LAB_00542eec:
          lVar10 = FUN_00405f40();
          if ((lVar10 == 0) || (lVar11 = FUN_004b2a70(param_1), lVar11 == 0)) goto LAB_00542dfa;
          FUN_004b2c00(lVar11);
          lVar12 = FUN_004b2df0(lVar11);
          uVar13 = FUN_004b2df0(lVar11);
          uVar14 = FUN_004b2df0(lVar11);
          uVar15 = FUN_004b2df0(lVar11);
          lVar16 = FUN_004b2df0(lVar11);
          if (lVar16 == 0) {
            local_158 = param_2[4];
            iVar5 = 0;
            local_128 = 0;
            local_120 = 0;
            lVar19 = 0;
LAB_00543010:
            if (local_120 == local_158) goto LAB_005432a8;
            FUN_0041ad60(local_120,"../crypto/ffc/ffc_params_generate.c",0x31a);
            FUN_0041ad60(local_128,"../crypto/ffc/ffc_params_generate.c",0x31b);
          }
          else {
            lVar17 = (long)iVar4;
            if (param_2[5] != 0) {
              lVar17 = param_2[5];
            }
            local_158 = param_2[4];
            if (local_158 != 0) {
              local_120 = local_158;
              if (param_3 == 0) {
                if (((uVar1 & 1) == 0) || (-1 < (int)param_2[6])) goto LAB_005430f9;
LAB_005432f3:
                lVar19 = 0;
                iVar5 = 0;
                local_128 = 0;
                *param_7 = 0x200;
              }
              else {
LAB_00542fd3:
                local_118 = *param_2;
                if ((local_118 == 0) == (param_2[1] == 0)) goto LAB_0054311a;
                lVar19 = 0;
                iVar5 = 0;
                local_128 = 0;
                *param_7 = 0x800;
              }
              goto LAB_00543010;
            }
            if (param_3 != 0) {
              local_120 = 0;
              goto LAB_00542fd3;
            }
            local_120 = 0;
            if ((uVar1 & 1) != 0) goto LAB_005432f3;
LAB_005430f9:
            if (((uVar1 & 2) != 0) && (param_2[2] == 0)) {
              lVar19 = 0;
              iVar5 = 0;
              *param_7 = 0x400;
              local_128 = 0;
              goto LAB_00543010;
            }
            local_118 = *param_2;
LAB_0054311a:
            if ((local_118 != 0) && ((uVar1 & 1) == 0)) {
              local_c8 = param_2[1];
              local_128 = 0;
LAB_00543611:
              lVar19 = FUN_004b9790();
              if (lVar19 == 0) goto LAB_005435e2;
              iVar5 = FUN_004b9860(lVar19,local_118,lVar11);
              if ((iVar5 != 0) &&
                 (((uVar1 & 2) == 0 ||
                  (iVar5 = FUN_00544910(lVar11,lVar19,local_118,local_c8,param_2[2],lVar16,param_7),
                  iVar5 != 0)))) {
                uVar15 = FUN_004b75a0();
                iVar5 = FUN_004b18d0(uVar13,local_118,uVar15);
                if ((iVar5 != 0) &&
                   (iVar5 = FUN_004b34a0(uVar14,0,uVar13,local_c8,lVar11), iVar5 != 0)) {
                  if ((local_120 != 0) && (lVar3 = param_2[7], (int)lVar3 != -1)) {
                    iVar4 = FUN_0040ac10(lVar9);
                    if ((0 < iVar4) && (lVar20 = FUN_00405f40(), lVar20 != 0)) {
                      iVar5 = 1;
                      while( true ) {
                        local_140 = (byte)(int)lVar3;
                        local_88 = local_140;
                        local_148 = (ushort)iVar5;
                        local_87 = local_148 << 8 | local_148 >> 8;
                        iVar8 = FUN_00407430(lVar20,lVar9,0);
                        if (((iVar8 == 0) ||
                            (iVar8 = FUN_00405f60(lVar20,local_120,lVar17), iVar8 == 0)) ||
                           (iVar8 = FUN_00405f60(lVar20,&DAT_00805d20,4), iVar8 == 0)) break;
                        iVar8 = FUN_00405f60(lVar20,&local_88,3);
                        if (((iVar8 == 0) || (iVar8 = FUN_00406090(lVar20,&local_88,0), iVar8 == 0))
                           || ((lVar21 = FUN_004b84d0(&local_88,iVar4,lVar16), lVar21 == 0 ||
                               (iVar8 = FUN_004b4eb0(lVar12,lVar16,uVar14,local_118,lVar11,lVar19),
                               iVar8 == 0)))) break;
                        uVar13 = FUN_004b75a0();
                        iVar8 = FUN_004b7840(lVar12,uVar13);
                        if (0 < iVar8) {
                          FUN_00406b90(lVar20);
                          if (param_3 != 0) {
                            local_c0 = 1;
                            goto LAB_00543bfd;
                          }
                          iVar4 = FUN_004b7840(lVar12,param_2[2]);
                          local_c0 = 1;
                          if (iVar4 == 0) goto LAB_0054391c;
                          iVar5 = 0;
                          *param_7 = 0x8000;
                          local_158 = param_2[4];
                          goto LAB_00543010;
                        }
                        iVar5 = iVar5 + 1;
                        if (iVar5 == 0x10000) break;
                      }
                      FUN_00406b90(lVar20);
                    }
                    iVar5 = 0;
                    *param_7 = 0x400;
                    local_158 = param_2[4];
                    goto LAB_00543010;
                  }
                  local_c0 = param_3;
                  if (param_3 == 0) {
LAB_0054391c:
                    iVar5 = FUN_005c3bd0(param_8,3,1);
                    if (iVar5 != 0) {
LAB_00543949:
                      iVar5 = ((local_c0 ^ 1) & uVar1 >> 1 & 1) + 1;
                    }
                  }
                  else {
                    iVar4 = FUN_00542b20(lVar11,lVar19,lVar12,lVar16,local_118,uVar14,uVar13,
                                         &local_8c);
                    local_c0 = 0;
                    if (iVar4 == 0) {
                      iVar5 = 0;
                    }
                    else {
LAB_00543bfd:
                      iVar5 = FUN_005c3bd0(param_8,3,1);
                      if (iVar5 != 0) {
                        if (*param_2 != local_118) {
                          FUN_004b7fa0();
                          lVar16 = FUN_004b82e0(local_118);
                          *param_2 = lVar16;
                        }
                        if (param_2[1] != local_c8) {
                          FUN_004b7fa0();
                          lVar16 = FUN_004b82e0(local_c8);
                          param_2[1] = lVar16;
                        }
                        if (param_2[2] != lVar12) {
                          FUN_004b7fa0();
                          lVar12 = FUN_004b82e0(lVar12);
                          param_2[2] = lVar12;
                        }
                        if (((*param_2 == 0) || (param_2[1] == 0)) || (param_2[2] == 0)) {
                          local_158 = param_2[4];
                          iVar5 = 0;
                          goto LAB_00543010;
                        }
                        iVar5 = FUN_005421b0(param_2,local_120,lVar17,local_90);
                        if (iVar5 != 0) {
                          *(undefined4 *)((long)param_2 + 0x3c) = local_8c;
                          goto LAB_00543949;
                        }
                      }
                    }
                  }
                }
              }
              local_158 = param_2[4];
              goto LAB_00543010;
            }
            local_118 = FUN_004b2df0(lVar11);
            local_c8 = FUN_004b2df0(lVar11);
            if (local_c8 == 0) {
LAB_00543182:
              local_158 = param_2[4];
              lVar19 = 0;
              iVar5 = 0;
              local_128 = 0;
              goto LAB_00543010;
            }
            if ((ulong)(lVar17 << 3) < param_6) {
              *param_7 = 0x100;
              goto LAB_00543182;
            }
            local_128 = FUN_0041ad90(lVar17,"../crypto/ffc/ffc_params_generate.c",0x283);
            if (local_128 == 0) {
LAB_005435e2:
              local_158 = param_2[4];
              lVar19 = 0;
              iVar5 = 0;
              goto LAB_00543010;
            }
            iVar5 = (int)param_5;
            if (local_120 == 0) {
              if (param_3 != 0) {
                local_120 = FUN_0041ad90(lVar17,"../crypto/ffc/ffc_params_generate.c",0x28e);
                if (local_120 != 0) {
                  local_bc = iVar5 * 4 + -1;
                  goto LAB_005433c5;
                }
                goto LAB_005435e2;
              }
              lVar19 = 0;
              iVar5 = 0;
              *param_7 = 0x200;
              local_158 = param_2[4];
              goto LAB_00543010;
            }
            local_bc = iVar5 * 4 + -1;
            if ((param_3 == 0) &&
               (bVar2 = local_bc < (int)param_2[6], local_bc = (int)param_2[6], bVar2)) {
              iVar5 = 0;
              lVar19 = 0;
              *param_7 = 0x1000;
              local_158 = param_2[4];
              goto LAB_00543010;
            }
LAB_005433c5:
            uVar18 = FUN_004b75a0();
            iVar5 = FUN_004bc220(uVar15,uVar18,iVar5 + -1);
            if (iVar5 == 0) {
LAB_005439f8:
              local_158 = param_2[4];
              lVar19 = 0;
              goto LAB_00543010;
            }
            iVar8 = 0;
            iVar24 = (int)(param_6 >> 3);
            local_158 = param_2[4];
            do {
              iVar6 = FUN_0040ac10(lVar9);
              uVar15 = FUN_004b2fd0(lVar11);
              iVar5 = iVar8;
              while( true ) {
                iVar8 = iVar5 + 1;
                iVar5 = FUN_005c3bd0(param_8,0,iVar5);
                if ((iVar5 == 0) ||
                   (((local_158 != local_120 &&
                     (iVar5 = FUN_00429580(uVar15,local_120,lVar17,0), iVar5 < 0)) ||
                    (iVar5 = FUN_00407440(local_120,lVar17,&local_88,0,lVar9,0), iVar5 == 0))))
                goto LAB_005435e2;
                if (iVar24 < iVar6) {
                  pbVar23 = &local_88 + ((long)iVar6 - (long)iVar24);
                }
                else {
                  pbVar23 = &local_88;
                  if (iVar6 < iVar24) {
                    thunk_FUN_00713720(&local_88 + iVar6,0,(long)(iVar24 - iVar6));
                  }
                }
                *pbVar23 = *pbVar23 | 0x80;
                pbVar23[(long)iVar24 + -1] = pbVar23[(long)iVar24 + -1] | 1;
                lVar19 = FUN_004b84d0(pbVar23,param_6 >> 3 & 0xffffffff,local_c8);
                if (lVar19 == 0) goto LAB_005435e2;
                iVar7 = FUN_005c4db0(local_c8,lVar11,param_8);
                if (0 < iVar7) break;
                if (local_158 == local_120) {
                  lVar19 = 0;
                  iVar5 = 0;
                  *param_7 = *param_7 | 0x10;
                  local_158 = param_2[4];
                  goto LAB_00543010;
                }
                iVar5 = iVar8;
                if (iVar7 != 0) goto LAB_005435e2;
              }
              if ((param_3 == 0) && (iVar5 = FUN_004b7840(local_c8,param_2[1]), iVar5 != 0)) {
                iVar5 = 0;
                lVar19 = 0;
                *param_7 = 0x4000;
                local_158 = param_2[4];
                goto LAB_00543010;
              }
              iVar5 = FUN_005c3bd0(param_8,2,0);
              if ((iVar5 == 0) || (iVar5 = FUN_005c3bd0(param_8,3,0), iVar5 == 0)) {
                lVar19 = 0;
                local_158 = param_2[4];
                goto LAB_00543010;
              }
              thunk_FUN_00713a50(local_128,local_120,lVar17);
              iVar5 = FUN_00542760(lVar11,lVar9,local_bc,
                                   (param_5 - 1) / (ulong)(long)(iVar4 << 3) & 0xffffffff,local_128,
                                   lVar17,local_c8,local_118,param_5 & 0xffffffff,param_8,&local_90,
                                   param_7);
              if (0 < iVar5) {
                iVar5 = FUN_005c3bd0(param_8,2,1);
                if (iVar5 == 0) goto LAB_005439f8;
                if ((param_3 == 0) &&
                   ((local_90 != local_bc || (iVar4 = FUN_004b7840(local_118,*param_2), iVar4 != 0))
                   )) {
                  local_158 = param_2[4];
                  iVar5 = 0;
                  lVar19 = 0;
                  goto LAB_00543010;
                }
                if ((uVar1 & 3) != 1) goto LAB_00543611;
                local_c0 = 0;
                lVar19 = 0;
                goto LAB_00543949;
              }
              local_158 = param_2[4];
              if (iVar5 != 0) {
                lVar19 = 0;
                iVar5 = 0;
                goto LAB_00543010;
              }
            } while (local_158 != local_120);
            iVar5 = 0;
            lVar19 = 0;
            *param_7 = 1;
LAB_005432a8:
            FUN_0041ad60(local_128,"../crypto/ffc/ffc_params_generate.c",0x31b);
          }
          FUN_004b2d50(lVar11);
          goto LAB_00542d9b;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/ffc/ffc_params_generate.c",0x4d,"ffc_validate_LN");
        FUN_0051f8f0(5,0x7f,0);
      }
      else if (param_4 == 0) {
        if ((((0xbff < param_5) && (0xff < param_6)) || ((0x7ff < param_5 && (0xdf < param_6)))) ||
           ((0x3ff < param_5 && (0x9f < param_6)))) goto LAB_00542eec;
        FUN_0051f420();
        FUN_0051f540("../crypto/ffc/ffc_params_generate.c",0x57,"ffc_validate_LN");
        FUN_0051f8f0(10,0x72,0);
      }
    }
    lVar11 = param_2[4];
    lVar10 = 0;
    *param_7 = 0x80;
  }
  if (lVar11 == 0) {
    iVar5 = 0;
    FUN_0041ad60(0,"../crypto/ffc/ffc_params_generate.c",0x31b);
    lVar11 = 0;
    lVar19 = 0;
  }
  else {
    FUN_0041ad60(0,"../crypto/ffc/ffc_params_generate.c",0x31a);
    lVar19 = 0;
    iVar5 = 0;
    FUN_0041ad60(0,"../crypto/ffc/ffc_params_generate.c",0x31b);
    lVar11 = 0;
  }
LAB_00542d9b:
  FUN_004b2b50(lVar11);
  FUN_004b9810(lVar19);
  FUN_00406b90(lVar10);
  FUN_00406a50(lVar9);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

