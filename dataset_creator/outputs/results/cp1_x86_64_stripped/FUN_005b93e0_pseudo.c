
uint FUN_005b93e0(long param_1,long *param_2,long param_3,int param_4,int param_5,int param_6,
                 uint param_7)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  int *piVar17;
  char *pcVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  byte *pbVar23;
  int *piVar24;
  long in_FS_OFFSET;
  uint *local_168;
  uint local_134;
  long local_130;
  int local_f0;
  uint local_ec;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  if (param_5 == 0x81) {
    uVar11 = 0;
    FUN_004ab870(param_1,"BAD RECURSION DEPTH\n");
    goto LAB_005b9a9f;
  }
  local_e8 = (byte *)*param_2;
  pbVar1 = local_e8 + param_3;
  if (0 < param_3) {
    iVar7 = 0;
    if (param_6 != 0) {
      iVar7 = param_5;
    }
LAB_005b94a6:
    pbVar19 = local_e8;
    uVar8 = FUN_004a1ba0(&local_e8,&local_d8,&local_f0,&local_ec);
    uVar3 = local_ec;
    iVar10 = local_f0;
    if ((uVar8 & 0x80) != 0) {
      piVar24 = (int *)0x0;
      uVar11 = 0;
      FUN_004ab870(param_1,"Error in encoding\n");
      piVar17 = (int *)0x0;
      local_168 = (uint *)0x0;
      goto LAB_005b9a69;
    }
    puVar15 = local_c8;
    lVar22 = (long)((int)local_e8 - (int)pbVar19);
    param_3 = param_3 - lVar22;
    pcVar12 = "prim: ";
    if ((uVar8 & 0x20) != 0) {
      pcVar12 = "cons: ";
    }
    if (uVar8 == 0x21) {
      pcVar18 = "%5ld:d=%-2d hl=%ld l=inf  %s";
    }
    else {
      pcVar18 = "%5ld:d=%-2d hl=%ld l=%4ld %s";
      pcVar12 = (char *)local_d8;
    }
    iVar9 = FUN_004aeb30(puVar15,0x80,pcVar18,pbVar19 + ((long)param_4 - *param_2),param_5,lVar22,
                         pcVar12);
    uVar11 = 0;
    if (iVar9 < 1) {
      piVar24 = (int *)0x0;
      FUN_004ab560(0);
      piVar17 = (int *)0x0;
      local_168 = (uint *)0x0;
      goto LAB_005b9a69;
    }
    if (param_1 == 0) {
      local_168 = (uint *)0x0;
      lVar13 = 0;
      bVar4 = false;
      local_130 = -1;
LAB_005b97cd:
      pcVar12 = "priv [ %d ] ";
      if ((uVar3 & 0xc0) == 0xc0) {
LAB_005b9827:
        FUN_004aeb30(puVar15,0x80,pcVar12);
      }
      else {
        if ((uVar3 & 0x80) != 0) {
          pcVar12 = "cont [ %d ]";
          goto LAB_005b9827;
        }
        pcVar12 = "appl [ %d ]";
        if (((uVar3 & 0x40) != 0) || (pcVar12 = "<ASN1 %d>", 0x1e < iVar10)) goto LAB_005b9827;
        puVar15 = (undefined1 *)FUN_005b93a0(iVar10);
      }
      iVar10 = FUN_004ae9e0(lVar13,"%-18s",puVar15);
      local_134 = (uint)(0 < iVar10);
    }
    else {
      lVar13 = FUN_004abd40(param_1,0x4f,0,puVar15);
      if (lVar13 < 1) {
        uVar16 = FUN_004aaa40();
        local_168 = (uint *)FUN_004ab550(uVar16);
        if (local_168 == (uint *)0x0) {
          piVar24 = (int *)0x0;
          FUN_004ab560(0);
          piVar17 = (int *)0x0;
          local_168 = (uint *)0x0;
          goto LAB_005b9a69;
        }
        lVar13 = FUN_004ac2c0(local_168,param_1);
        if (lVar13 == 0) {
          FUN_004ab560(local_168);
          piVar17 = (int *)0x0;
          local_168 = (uint *)0x0;
          piVar24 = (int *)0x0;
          goto LAB_005b9a69;
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
        local_168 = (uint *)0x0;
        lVar13 = param_1;
      }
      local_130 = FUN_004abd40(lVar13,0x51,0,0);
      lVar14 = FUN_004abd40(lVar13,0x4f,0,puVar15);
      local_134 = 0;
      if ((0 < lVar14) && (lVar14 = FUN_004abd40(lVar13,0x50,(long)iVar7,0), -1 < lVar14))
      goto LAB_005b97cd;
    }
    if (-1 < local_130) {
      FUN_004abd40(lVar13,0x50,local_130,0);
    }
    if (bVar4) {
      FUN_004ac310(lVar13);
    }
    FUN_004ab560(local_168);
    pbVar6 = local_d8;
    pbVar5 = local_e8;
    if (local_134 == 0) {
LAB_005ba215:
      uVar11 = 0;
      piVar17 = (int *)0x0;
      piVar24 = (int *)0x0;
      local_168 = (uint *)0x0;
      goto LAB_005b9a69;
    }
    if ((uVar8 & 0x20) != 0) {
      iVar10 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
      if (iVar10 < 1) goto LAB_005b9b60;
      if ((long)local_d8 <= param_3) {
        if ((local_d8 == (byte *)0x0) && (uVar8 == 0x21)) {
          do {
            uVar11 = FUN_005b93e0(param_1,&local_e8,(long)pbVar1 - (long)local_e8,
                                  ((int)local_e8 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                  param_7);
            if (uVar11 == 0) goto LAB_005b9bd8;
          } while ((uVar11 != 2) && (local_e8 < pbVar1));
          local_d8 = local_e8 + -(long)pbVar5;
        }
        else {
          pbVar19 = local_e8;
          pbVar23 = local_d8;
          while (local_e8 = pbVar19, pbVar19 < pbVar5 + (long)pbVar6) {
            uVar11 = FUN_005b93e0(param_1,&local_e8,pbVar23,((int)pbVar19 - (int)*param_2) + param_4
                                  ,param_5 + 1,param_6,param_7);
            if (uVar11 == 0) goto LAB_005b9bd8;
            pbVar23 = pbVar23 + -((long)local_e8 - (long)pbVar19);
            pbVar19 = local_e8;
          }
        }
        goto LAB_005b9720;
      }
      piVar24 = (int *)0x0;
      FUN_004ae9e0(param_1,"length is greater than %ld\n",param_3);
      piVar17 = (int *)0x0;
      local_168 = (uint *)0x0;
      goto LAB_005b9a69;
    }
    if (local_ec != 0) {
      local_e8 = local_e8 + (long)local_d8;
      iVar10 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
      if (iVar10 < 1) goto LAB_005ba215;
      goto LAB_005b9720;
    }
    uVar11 = 0;
    if ((local_f0 - 0x13U < 2) || (local_f0 == 0x16)) {
LAB_005b9b10:
      iVar10 = FUN_004ab7e0(param_1,":",1);
      if (0 < iVar10) {
        if (0 < (long)local_d8) {
          iVar10 = FUN_004ab7e0(param_1,local_e8);
          if (iVar10 != (int)local_d8) goto LAB_005b9b60;
        }
        goto LAB_005b96e0;
      }
      goto LAB_005b9b60;
    }
    if (local_f0 != 6) {
      if (6 < local_f0) {
        if (local_f0 - 10U < 0x15) {
          uVar20 = 1L << ((byte)local_f0 & 0x3f);
          uVar21 = (ulong)((uint)uVar20 & 0x5841000);
          if ((uVar20 & 0x5841000) != 0) goto LAB_005b9b10;
          if (local_f0 == 0x1e) goto LAB_005b96e0;
          if (local_f0 == 10) {
            local_e0 = pbVar19;
            piVar17 = (int *)FUN_004a7730(0,&local_e0,local_d8 + lVar22);
            if (piVar17 == (int *)0x0) {
              iVar10 = FUN_004ab870(param_1,":BAD ENUMERATED");
              if (0 < iVar10) {
                thunk_FUN_004a2270(0);
                goto LAB_005b9ebe;
              }
            }
            else {
              iVar10 = FUN_004ab7e0(param_1,":",1);
              if ((0 < iVar10) &&
                 ((piVar17[1] != 0x10a ||
                  (iVar10 = FUN_004ab7e0(param_1,&DAT_0080b56c,1), 0 < iVar10)))) {
                iVar10 = *piVar17;
                if (0 < iVar10) {
                  do {
                    iVar10 = FUN_004ae9e0(param_1,&DAT_0081d195,
                                          *(undefined1 *)(*(long *)(piVar17 + 2) + uVar21));
                    if (iVar10 < 1) goto LAB_005b9dfa;
                    iVar10 = *piVar17;
                    uVar21 = uVar21 + 1;
                  } while ((int)uVar21 < iVar10);
                }
                if ((iVar10 != 0) || (iVar10 = FUN_004ab7e0(param_1,"00",2), 0 < iVar10)) {
                  thunk_FUN_004a2270(piVar17);
                  goto LAB_005b96e0;
                }
                uVar11 = 0;
                piVar24 = (int *)0x0;
                local_168 = (uint *)0x0;
                goto LAB_005b9a69;
              }
            }
LAB_005b9dfa:
            piVar24 = (int *)0x0;
            local_168 = (uint *)0x0;
            goto LAB_005b9a69;
          }
        }
LAB_005b96c0:
        if (((long)local_d8 < 1) || (param_7 == 0)) goto LAB_005b96e0;
        iVar10 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
        if (iVar10 < 1) goto LAB_005b9b60;
        if ((param_7 == 0xffffffff) ||
           (uVar20 = (ulong)param_7, (long)local_d8 < (long)(int)param_7)) {
          uVar20 = (ulong)local_d8 & 0xffffffff;
        }
        iVar10 = FUN_004aae10(param_1,local_e8,uVar20,6);
        if (iVar10 < 1) goto LAB_005b9b60;
        goto LAB_005b96fc;
      }
      if (local_f0 != 2) {
        if (local_f0 == 4) {
          local_e0 = pbVar19;
          local_168 = (uint *)FUN_004a7610(0,&local_e0,local_d8 + lVar22);
          if (local_168 == (uint *)0x0) {
            thunk_FUN_004a2270(0);
            goto LAB_005b96e0;
          }
          if (0 < (int)*local_168) {
            local_e0 = *(byte **)(local_168 + 2);
            pbVar19 = local_e0;
            do {
              bVar2 = *pbVar19;
              if ((bVar2 < 0x20) && (bVar2 != 10)) {
                if ((bVar2 & 0xfb) != 9) {
LAB_005ba0d3:
                  if (param_7 == 0) {
                    iVar10 = FUN_004ab7e0(param_1,"[HEX DUMP]:",0xb);
                    if (iVar10 < 1) goto LAB_005ba353;
                    if ((int)*local_168 < 1) goto LAB_005b9799;
                    lVar22 = 0;
                    goto LAB_005ba336;
                  }
                  iVar10 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
                  if (iVar10 < 1) goto LAB_005ba1ff;
                  uVar3 = *local_168;
                  uVar8 = uVar3;
                  if ((int)param_7 < (int)uVar3) {
                    uVar8 = param_7;
                  }
                  if (param_7 != 0xffffffff) {
                    uVar3 = uVar8;
                  }
                  iVar10 = FUN_004aae10(param_1,local_e0,uVar3,6);
                  if (iVar10 < 1) goto LAB_005ba1ff;
                  thunk_FUN_004a2270(local_168);
                  goto LAB_005b96fc;
                }
              }
              else if (0x7e < bVar2) goto LAB_005ba0d3;
              pbVar19 = pbVar19 + 1;
            } while (local_e0 + (ulong)(*local_168 - 1) + 1 != pbVar19);
            iVar10 = FUN_004ab7e0(param_1,":",1);
            if ((iVar10 < 1) || (iVar10 = FUN_004ab7e0(param_1,local_e0,*local_168), iVar10 < 1))
            goto LAB_005ba1ff;
          }
          goto LAB_005b9799;
        }
        if (local_f0 != 1) goto LAB_005b96c0;
        if (local_d8 != (byte *)0x1) {
          iVar10 = FUN_004ab870(param_1,":BAD BOOLEAN");
          if (iVar10 < 1) goto LAB_005b9b60;
          if (0 < (long)local_d8) {
            FUN_004ae9e0(param_1,&DAT_0080f410,*local_e8);
          }
          goto LAB_005b9ebe;
        }
        FUN_004ae9e0(param_1,&DAT_0080f410,*local_e8);
        goto LAB_005b96e0;
      }
      local_e0 = pbVar19;
      piVar24 = (int *)FUN_004a76a0(0,&local_e0,local_d8 + lVar22);
      if (piVar24 == (int *)0x0) {
        iVar10 = FUN_004ab870(param_1,":BAD INTEGER");
        if (0 < iVar10) {
          thunk_FUN_004a2270(0);
          goto LAB_005b9ebe;
        }
      }
      else {
        iVar10 = FUN_004ab7e0(param_1,":",1);
        if ((0 < iVar10) &&
           ((piVar24[1] != 0x102 || (iVar10 = FUN_004ab7e0(param_1,&DAT_0080b56c,1), 0 < iVar10))))
        {
          iVar10 = *piVar24;
          if (0 < iVar10) {
            lVar22 = 0;
            do {
              iVar10 = FUN_004ae9e0(param_1,&DAT_0081d195,
                                    *(undefined1 *)(*(long *)(piVar24 + 2) + lVar22));
              if (iVar10 < 1) goto LAB_005b9d32;
              iVar10 = *piVar24;
              lVar22 = lVar22 + 1;
            } while ((int)lVar22 < iVar10);
          }
          if ((iVar10 != 0) || (iVar10 = FUN_004ab7e0(param_1,"00",2), 0 < iVar10)) {
            thunk_FUN_004a2270(piVar24);
            goto LAB_005b96e0;
          }
          uVar11 = 0;
          piVar17 = (int *)0x0;
          local_168 = (uint *)0x0;
          goto LAB_005b9a69;
        }
      }
LAB_005b9d32:
      piVar17 = (int *)0x0;
      local_168 = (uint *)0x0;
      goto LAB_005b9a69;
    }
    local_e0 = pbVar19;
    lVar13 = FUN_004a0a40(&local_d0,&local_e0,local_d8 + lVar22);
    if (lVar13 == 0) {
      iVar10 = FUN_004ab870(param_1,":BAD OBJECT");
      local_168 = (uint *)0x0;
      if (0 < iVar10) {
LAB_005b9ebe:
        iVar10 = FUN_004ab870(param_1,&DAT_0080f40d);
        if (0 < iVar10) {
          lVar13 = 0;
          if (0 < (long)local_d8) {
            do {
              iVar10 = FUN_004ae9e0(param_1,&DAT_0081d195,pbVar19[lVar13 + lVar22]);
              if (iVar10 < 1) goto LAB_005b9b60;
              lVar13 = lVar13 + 1;
            } while (lVar13 < (long)local_d8);
          }
          iVar10 = FUN_004ab870(param_1,"]");
          if (0 < iVar10) goto LAB_005b96e0;
        }
        goto LAB_005b9b60;
      }
LAB_005ba1ff:
      piVar17 = (int *)0x0;
      piVar24 = (int *)0x0;
      goto LAB_005b9a69;
    }
    iVar10 = FUN_004ab7e0(param_1,":",1);
    if (0 < iVar10) {
      FUN_004a0450(param_1,local_d0);
      goto LAB_005b96e0;
    }
    goto LAB_005b9b60;
  }
  piVar17 = (int *)0x0;
  piVar24 = (int *)0x0;
  uVar11 = 1;
  local_168 = (uint *)0x0;
  goto LAB_005b9a69;
LAB_005b9bd8:
  piVar17 = (int *)0x0;
  piVar24 = (int *)0x0;
  local_168 = (uint *)0x0;
  goto LAB_005b9a69;
  while (lVar22 = lVar22 + 1, (int)lVar22 < (int)*local_168) {
LAB_005ba336:
    iVar10 = FUN_004ae9e0(param_1,&DAT_0081d195,local_e0[lVar22]);
    if (iVar10 < 1) goto LAB_005ba353;
  }
LAB_005b9799:
  thunk_FUN_004a2270(local_168);
LAB_005b96e0:
  iVar10 = FUN_004ab7e0(param_1,&DAT_008243ea,1);
  if (0 < iVar10) {
LAB_005b96fc:
    local_e8 = local_e8 + (long)local_d8;
    if (local_f0 == 0 && local_ec == 0) {
      local_168 = (uint *)0x0;
      piVar17 = (int *)0x0;
      piVar24 = (int *)0x0;
      uVar11 = 2;
      goto LAB_005b9a69;
    }
LAB_005b9720:
    param_3 = param_3 - (long)local_d8;
    if (param_3 < 1) goto LAB_005b9fe8;
    goto LAB_005b94a6;
  }
LAB_005b9b60:
  uVar11 = 0;
  piVar17 = (int *)0x0;
  piVar24 = (int *)0x0;
  local_168 = (uint *)0x0;
  goto LAB_005b9a69;
LAB_005ba353:
  uVar11 = 0;
  piVar17 = (int *)0x0;
  piVar24 = (int *)0x0;
  goto LAB_005b9a69;
LAB_005b9fe8:
  local_168 = (uint *)0x0;
  piVar17 = (int *)0x0;
  piVar24 = (int *)0x0;
  uVar11 = local_134;
LAB_005b9a69:
  FUN_004a06b0(local_d0);
  thunk_FUN_004a2270(local_168);
  thunk_FUN_004a2270(piVar24);
  thunk_FUN_004a2270(piVar17);
  *param_2 = (long)local_e8;
LAB_005b9a9f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

