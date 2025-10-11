
ulong FUN_004f3350(long *param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 *param_5,
                  long *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  undefined4 *puVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  long *local_d8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  int local_a0;
  ulong local_88;
  long local_80;
  ulong local_78;
  long local_60;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = FUN_004b7ba0(param_1[2]);
  if ((iVar3 == 0) && (iVar3 = FUN_004b7ba0(param_1[3]), iVar3 == 0)) {
    if (param_1[2] == param_3) {
LAB_004f36d0:
      if (param_3 == 0) goto LAB_004f36dc;
      goto LAB_004f33c1;
    }
    if (param_3 != 0) {
      if (param_4 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar16 = 0;
          goto LAB_004f3e28;
        }
        goto LAB_004f43cd;
      }
      goto LAB_004f36d0;
    }
LAB_004f36dc:
    if (param_4 != 1) goto LAB_004f33b5;
    if (param_1[2] != *param_6) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar16 = *param_5;
        param_3 = *param_6;
LAB_004f3e28:
        uVar9 = FUN_004f2a10(param_1,param_2,param_3,uVar16,param_7);
        return uVar9;
      }
      goto LAB_004f43cd;
    }
LAB_004f3700:
    local_a0 = 0;
    local_b8 = 0;
    local_60 = 0;
    local_88 = 0;
    local_78 = 0;
    local_80 = 0;
    local_b0 = param_4;
LAB_004f3437:
    lVar10 = local_b0 * 8;
    puVar6 = (undefined4 *)FUN_0041ad90(lVar10,"../crypto/ec/ec_mult.c",0x201);
    puVar7 = (ulong *)FUN_0041ad90(lVar10,"../crypto/ec/ec_mult.c",0x202);
    plVar8 = (long *)FUN_0041ad90(lVar10 + 8,"../crypto/ec/ec_mult.c",0x204);
    local_c0 = FUN_0041ad90(lVar10,"../crypto/ec/ec_mult.c",0x205);
    if (plVar8 == (long *)0x0) {
      FUN_0051f420();
      uVar9 = 0;
      FUN_0051f540("../crypto/ec/ec_mult.c",0x20c,"ossl_ec_wNAF_mul");
      FUN_0051f8f0(0x10,0xc0100,0);
      FUN_004efcc0(0);
      FUN_0041ad60(puVar6,"../crypto/ec/ec_mult.c",0x316);
      FUN_0041ad60(puVar7,"../crypto/ec/ec_mult.c",0x317);
    }
    else {
      *plVar8 = 0;
      plVar13 = plVar8;
      if (((puVar6 == (undefined4 *)0x0) || (puVar7 == (ulong *)0x0)) || (local_c0 == 0)) {
        FUN_0051f420();
        uVar9 = 0;
        FUN_0051f540("../crypto/ec/ec_mult.c",0x20c,"ossl_ec_wNAF_mul");
        FUN_0051f8f0(0x10,0xc0100,0);
        FUN_004efcc0(0);
        FUN_0041ad60(puVar6,"../crypto/ec/ec_mult.c",0x316);
        FUN_0041ad60(puVar7,"../crypto/ec/ec_mult.c",0x317);
        lVar10 = *plVar8;
        local_d8 = (long *)0x0;
        if (lVar10 == 0) {
          FUN_0041ad60(plVar8,"../crypto/ec/ec_mult.c",0x31e);
          goto LAB_004f37aa;
        }
LAB_004f3858:
        do {
          FUN_0041ad60(lVar10,"../crypto/ec/ec_mult.c",0x31c);
          lVar10 = plVar13[1];
          plVar13 = plVar13 + 1;
        } while (lVar10 != 0);
        FUN_0041ad60(plVar8,"../crypto/ec/ec_mult.c",0x31e);
        if (local_d8 == (long *)0x0) goto LAB_004f37aa;
      }
      else {
        uVar9 = (long)local_a0 + param_4;
        if (uVar9 == 0) {
          local_50 = 0;
          uVar22 = 0;
        }
        else {
          uVar17 = 0;
          local_50 = 0;
          uVar22 = 0;
          puVar20 = puVar7;
          do {
            lVar10 = param_3;
            if (uVar17 < param_4) {
              uVar4 = FUN_004b7bb0();
              if (uVar4 < 2000) {
                if (uVar4 < 800) goto LAB_004f35d8;
                local_50 = local_50 + 0x10;
                iVar3 = 5;
                *(undefined8 *)(puVar6 + uVar17 * 2) = 5;
                plVar8[uVar17 + 1] = 0;
              }
              else {
                local_50 = local_50 + 0x20;
                iVar3 = 6;
                *(undefined8 *)(puVar6 + uVar17 * 2) = 6;
                plVar8[uVar17 + 1] = 0;
              }
LAB_004f3552:
              lVar10 = param_6[uVar17];
            }
            else {
              uVar4 = FUN_004b7bb0();
              if (uVar4 < 2000) {
                if (uVar4 < 800) {
LAB_004f35d8:
                  if (uVar4 < 300) {
                    if (uVar4 < 0x46) {
                      iVar3 = 2 - (uint)(uVar4 < 0x14);
                      lVar11 = 2 - (ulong)(uVar4 < 0x14);
                      lVar21 = lVar11;
                    }
                    else {
                      iVar3 = 3;
                      lVar21 = 4;
                      lVar11 = 3;
                    }
                  }
                  else {
                    iVar3 = 4;
                    lVar21 = 8;
                    lVar11 = 4;
                  }
                  local_50 = local_50 + lVar21;
                  *(long *)(puVar6 + uVar17 * 2) = lVar11;
                  plVar8[uVar17 + 1] = 0;
                  if (uVar17 < param_4) goto LAB_004f3552;
                }
                else {
                  local_50 = local_50 + 0x10;
                  iVar3 = 5;
                  *(undefined8 *)(puVar6 + uVar17 * 2) = 5;
                  plVar8[uVar17 + 1] = 0;
                }
              }
              else {
                local_50 = local_50 + 0x20;
                iVar3 = 6;
                *(undefined8 *)(puVar6 + uVar17 * 2) = 6;
                plVar8[uVar17 + 1] = 0;
              }
            }
            lVar10 = FUN_004b7020(lVar10,iVar3,puVar20);
            plVar8[uVar17] = lVar10;
            if (lVar10 == 0) goto LAB_004f380d;
            if (uVar22 < *puVar20) {
              uVar22 = *puVar20;
            }
            uVar17 = uVar17 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar9 != uVar17);
        }
        if (local_88 != 0) {
          if (local_b8 == 0) {
            if (local_a0 != 1) {
              FUN_0051f420();
              uVar16 = 0x22a;
              goto LAB_004f3e87;
            }
            goto LAB_004f3bb2;
          }
          local_48 = 0;
          if (local_a0 == 0) {
            uVar16 = *(undefined8 *)(local_b8 + 0x18);
            *(undefined8 *)(puVar6 + param_4 * 2) = uVar16;
            lVar10 = FUN_004b7020(param_3,uVar16,&local_48);
            if (lVar10 != 0) {
              if (uVar22 < local_48) {
                if ((local_48 < local_88 * local_78) &&
                   (uVar17 = ((local_78 - 1) + local_48) / local_78, local_b0 = param_4 + uVar17,
                   *(ulong *)(local_b8 + 0x10) < uVar17)) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/ec/ec_mult.c",0x25e,"ossl_ec_wNAF_mul");
                  FUN_0051f8f0(0x10,0xc0103,0);
                  FUN_0041ad60(lVar10,"../crypto/ec/ec_mult.c",0x25f);
                  goto LAB_004f380d;
                }
                plVar18 = *(long **)(local_b8 + 0x20);
                if (param_4 < local_b0) {
                  uVar17 = param_4;
                  lVar21 = lVar10;
                  do {
                    if (uVar17 < local_b0 - 1) {
                      puVar7[uVar17] = local_78;
                      if (local_48 < local_78) {
                        FUN_0051f420();
                        FUN_0051f540("../crypto/ec/ec_mult.c",0x26d,"ossl_ec_wNAF_mul");
                        FUN_0051f8f0(0x10,0xc0103,0);
                        FUN_0041ad60(lVar10,"../crypto/ec/ec_mult.c",0x26e);
                        goto LAB_004f380d;
                      }
                      local_48 = local_48 - local_78;
                      uVar15 = puVar7[uVar17];
                    }
                    else {
                      puVar7[uVar17] = local_48;
                      uVar15 = local_48;
                    }
                    uVar14 = uVar17 + 1;
                    plVar8[uVar14] = 0;
                    lVar11 = FUN_0041ad90(uVar15,"../crypto/ec/ec_mult.c",0x27a);
                    plVar8[uVar17] = lVar11;
                    if (lVar11 == 0) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/ec/ec_mult.c",0x27c,"ossl_ec_wNAF_mul");
                      FUN_0051f8f0(0x10,0xc0100,0);
                      FUN_0041ad60(lVar10,"../crypto/ec/ec_mult.c",0x27d);
                      goto LAB_004f380d;
                    }
                    thunk_FUN_00713a50(lVar11,lVar21,puVar7[uVar17]);
                    if (uVar22 < puVar7[uVar17]) {
                      uVar22 = puVar7[uVar17];
                    }
                    if (*plVar18 == 0) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/ec/ec_mult.c",0x285,"ossl_ec_wNAF_mul");
                      FUN_0051f8f0(0x10,0xc0103,0);
                      FUN_0041ad60(lVar10,"../crypto/ec/ec_mult.c",0x286);
                      goto LAB_004f380d;
                    }
                    lVar21 = lVar21 + local_78;
                    *(long **)(local_c0 + -8 + uVar14 * 8) = plVar18;
                    plVar18 = plVar18 + local_60;
                    uVar17 = uVar14;
                  } while (uVar14 < local_b0);
                }
                FUN_0041ad60(lVar10,"../crypto/ec/ec_mult.c",0x28d);
              }
              else {
                local_b0 = param_4 + 1;
                plVar8[param_4] = lVar10;
                plVar8[param_4 + 1] = 0;
                uVar16 = *(undefined8 *)(local_b8 + 0x20);
                puVar7[param_4] = local_48;
                *(undefined8 *)(local_c0 + param_4 * 8) = uVar16;
              }
              goto LAB_004f3bb2;
            }
          }
          else {
            FUN_0051f420();
            uVar16 = 0x233;
LAB_004f3e87:
            FUN_0051f540("../crypto/ec/ec_mult.c",uVar16,"ossl_ec_wNAF_mul");
            FUN_0051f8f0(0x10,0xc0103,0);
          }
LAB_004f380d:
          FUN_004efcc0(0);
          FUN_0041ad60(puVar6,"../crypto/ec/ec_mult.c",0x316);
          FUN_0041ad60(puVar7,"../crypto/ec/ec_mult.c",0x317);
          lVar10 = *plVar8;
          if (lVar10 == 0) {
            uVar9 = 0;
            FUN_0041ad60(plVar8,"../crypto/ec/ec_mult.c",0x31e);
            goto LAB_004f37aa;
          }
          local_d8 = (long *)0x0;
          uVar9 = 0;
          goto LAB_004f3858;
        }
LAB_004f3bb2:
        local_d8 = (long *)FUN_0041ad90(local_50 * 8 + 8,"../crypto/ec/ec_mult.c",0x297);
        if (local_d8 == (long *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_mult.c",0x299,"ossl_ec_wNAF_mul");
          FUN_0051f8f0(0x10,0xc0100,0);
          goto LAB_004f380d;
        }
        local_d8[local_50] = 0;
        plVar18 = local_d8;
        if (uVar9 != 0) {
          uVar17 = 0;
          puVar19 = puVar6;
          do {
            uVar15 = 0;
            *(long **)(local_c0 + uVar17 * 8) = plVar18;
            do {
              lVar10 = FUN_004efb90(param_1);
              *plVar18 = lVar10;
              if (lVar10 == 0) {
                uVar9 = 0;
                lVar10 = 0;
                goto LAB_004f3c6b;
              }
              uVar15 = uVar15 + 1;
              plVar18 = plVar18 + 1;
            } while (uVar15 < (ulong)(1L << ((char)*puVar19 - 1U & 0x3f)));
            uVar17 = uVar17 + 1;
            puVar19 = puVar19 + 2;
          } while (uVar9 != uVar17);
        }
        if (local_d8 + local_50 == plVar18) {
          lVar10 = FUN_004efb90(param_1);
          if (lVar10 != 0) {
            uVar17 = 0;
            if (uVar9 != 0) {
              do {
                uVar16 = **(undefined8 **)(local_c0 + uVar17 * 8);
                if (uVar17 < param_4) {
                  uVar4 = FUN_004efec0(uVar16,param_5[uVar17]);
                  if (uVar4 != 0) goto LAB_004f40d4;
LAB_004f4106:
                  uVar9 = (ulong)uVar4;
                  goto LAB_004f3c6b;
                }
                uVar4 = FUN_004efec0(uVar16,local_80);
                if (uVar4 == 0) goto LAB_004f4106;
LAB_004f40d4:
                if (1 < *(ulong *)(puVar6 + uVar17 * 2)) {
                  uVar4 = FUN_004f0b30(param_1,lVar10,**(undefined8 **)(local_c0 + uVar17 * 8),
                                       param_7);
                  if (uVar4 == 0) goto LAB_004f4106;
                  if (puVar6[uVar17 * 2] != 1) {
                    uVar15 = 1;
                    do {
                      lVar21 = *(long *)(local_c0 + uVar17 * 8);
                      iVar3 = FUN_004f0a30(param_1,*(undefined8 *)(lVar21 + uVar15 * 8),
                                           *(undefined8 *)(lVar21 + -8 + uVar15 * 8),lVar10,param_7)
                      ;
                      if (iVar3 == 0) {
                        uVar4 = 0;
                        goto LAB_004f4106;
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < (ulong)(1L << ((char)puVar6[uVar17 * 2] - 1U & 0x3f)));
                  }
                }
                uVar17 = uVar17 + 1;
              } while (uVar9 != uVar17);
            }
            if (*(code **)(*param_1 + 0xd8) != (code *)0x0) {
              uVar4 = (**(code **)(*param_1 + 0xd8))(param_1,local_50,local_d8,param_7);
              uVar9 = (ulong)uVar4;
              if (uVar4 != 0) {
                local_a0 = (int)uVar22 + -1;
                if (-1 < local_a0) {
                  uVar4 = 0;
                  uVar9 = (ulong)local_a0;
                  bVar2 = true;
                  do {
                    uVar22 = 0;
                    if (local_b0 != 0) {
                      do {
                        if (uVar9 < puVar7[uVar22]) {
                          cVar1 = *(char *)(plVar8[uVar22] + uVar9);
                          if (cVar1 != '\0') {
                            uVar5 = (uint)(byte)-cVar1;
                            if ('\0' < cVar1) {
                              uVar5 = (int)cVar1;
                            }
                            if ((uint)(int)cVar1 >> 0x1f != uVar4) {
                              if ((bVar2) ||
                                 (iVar3 = FUN_004f0c10(param_1,param_2,param_7), iVar3 != 0)) {
                                uVar4 = uVar4 ^ 1;
                                goto LAB_004f432c;
                              }
                              uVar5 = 0;
LAB_004f435f:
                              uVar9 = (ulong)uVar5;
                              goto LAB_004f3c6b;
                            }
LAB_004f432c:
                            lVar21 = *(long *)(local_c0 + uVar22 * 8);
                            lVar11 = (long)((int)(uVar5 & 0xff) >> 1);
                            if (bVar2) {
                              uVar5 = FUN_004efec0(param_2,*(undefined8 *)(lVar21 + lVar11 * 8));
                              if (uVar5 == 0) goto LAB_004f435f;
                              iVar3 = FUN_004f1ab0(param_1,param_2,param_7);
                              if (iVar3 == 0) {
                                uVar9 = 0;
                                FUN_0051f420();
                                FUN_0051f540("../crypto/ec/ec_mult.c",0x2fa,"ossl_ec_wNAF_mul");
                                FUN_0051f8f0(0x10,0xa3,0);
                                goto LAB_004f3c6b;
                              }
                              bVar2 = false;
                            }
                            else {
                              uVar5 = FUN_004f0a30(param_1,param_2,param_2,
                                                   *(undefined8 *)(lVar21 + lVar11 * 8),param_7);
                              if (uVar5 == 0) goto LAB_004f435f;
                            }
                          }
                        }
                        uVar22 = uVar22 + 1;
                      } while (local_b0 != uVar22);
                    }
                    local_a0 = local_a0 + -1;
                    if (local_a0 == -1) {
                      if (bVar2) break;
                      uVar9 = 1;
                      if (uVar4 != 0) {
                        iVar3 = FUN_004f0c10(param_1,param_2,param_7);
                        uVar9 = (ulong)(iVar3 != 0);
                      }
                      goto LAB_004f3c6b;
                    }
                    if ((!bVar2) &&
                       (iVar3 = FUN_004f0b30(param_1,param_2,param_2,param_7), iVar3 == 0))
                    goto LAB_004f4432;
                    uVar9 = uVar9 - 1;
                  } while( true );
                }
                iVar3 = FUN_004f0830(param_1,param_2);
                uVar9 = (ulong)(iVar3 != 0);
              }
              goto LAB_004f3c6b;
            }
          }
          uVar9 = 0;
        }
        else {
          FUN_0051f420();
          uVar9 = 0;
          FUN_0051f540("../crypto/ec/ec_mult.c",0x2aa,"ossl_ec_wNAF_mul");
          FUN_0051f8f0(0x10,0xc0103,0);
          lVar10 = 0;
        }
LAB_004f3c6b:
        FUN_004efcc0(lVar10);
        FUN_0041ad60(puVar6,"../crypto/ec/ec_mult.c",0x316);
        FUN_0041ad60(puVar7,"../crypto/ec/ec_mult.c",0x317);
        lVar10 = *plVar8;
        if (lVar10 != 0) goto LAB_004f3858;
        FUN_0041ad60(plVar8,"../crypto/ec/ec_mult.c",0x31e);
      }
      lVar10 = *local_d8;
      plVar8 = local_d8;
      while (lVar10 != 0) {
        FUN_004efdb0();
        plVar13 = plVar8 + 1;
        plVar8 = plVar8 + 1;
        lVar10 = *plVar13;
      }
      FUN_0041ad60(local_d8,"../crypto/ec/ec_mult.c",0x324);
    }
  }
  else {
LAB_004f33b5:
    if (param_3 == 0) goto LAB_004f3700;
LAB_004f33c1:
    local_80 = FUN_004ef780(param_1);
    if (local_80 != 0) {
      local_b8 = param_1[0x14];
      if (local_b8 == 0) {
        local_a0 = 1;
        local_60 = 0;
        local_88 = 1;
        local_b0 = param_4 + 1;
        local_78 = 0;
      }
      else if (*(long *)(local_b8 + 0x10) == 0) {
        local_60 = 0;
        local_a0 = 1;
        local_b8 = 0;
        local_b0 = param_4 + 1;
        local_88 = 1;
        local_78 = 0;
      }
      else {
        iVar3 = FUN_004f10c0(param_1,local_80,**(undefined8 **)(local_b8 + 0x20),param_7);
        if (iVar3 == 0) {
          local_78 = *(ulong *)(local_b8 + 8);
          iVar3 = FUN_004b7bb0(param_3);
          local_88 = *(ulong *)(local_b8 + 0x10);
          bVar12 = (char)*(undefined8 *)(local_b8 + 0x18) - 1;
          if (*(long *)(local_b8 + 0x28) != local_88 << (bVar12 & 0x3f)) {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_mult.c",499,"ossl_ec_wNAF_mul");
            FUN_0051f8f0(0x10,0xc0103,0);
            goto LAB_004f3dcb;
          }
          uVar9 = (ulong)(long)iVar3 / local_78 + 1;
          if (uVar9 <= local_88) {
            local_88 = uVar9;
          }
          local_60 = 1L << (bVar12 & 0x3f);
          local_b0 = local_88 + param_4;
          local_a0 = 0;
        }
        else {
          local_a0 = 1;
          local_b8 = 0;
          local_60 = 0;
          local_b0 = param_4 + 1;
          local_88 = 1;
          local_78 = 0;
        }
      }
      goto LAB_004f3437;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_mult.c",0x1d7,"ossl_ec_wNAF_mul");
    FUN_0051f8f0(0x10,0x71,0);
LAB_004f3dcb:
    uVar9 = 0;
    FUN_004efcc0(0);
    FUN_0041ad60(0,"../crypto/ec/ec_mult.c",0x316);
    FUN_0041ad60(0,"../crypto/ec/ec_mult.c",0x317);
    local_c0 = 0;
  }
LAB_004f37aa:
  FUN_0041ad60(local_c0,"../crypto/ec/ec_mult.c",0x326);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
LAB_004f43cd:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_004f4432:
  uVar9 = 0;
  goto LAB_004f3c6b;
}

