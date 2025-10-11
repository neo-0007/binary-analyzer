
ulong * FUN_006e2ab0(long param_1,long param_2,ulong *param_3,int param_4,ulong *param_5)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  long *plVar28;
  ulong *puVar29;
  long in_FS_OFFSET;
  bool bVar30;
  undefined1 auStack_c8 [8];
  ulong *local_c0;
  long local_b8;
  int local_ac;
  long local_a8;
  long local_a0;
  long local_98;
  ulong *local_90;
  long *local_88;
  ulong *local_80;
  ulong local_78;
  ulong *local_70;
  ulong *local_68;
  long *local_60;
  ulong local_58 [2];
  undefined1 local_48;
  long local_40;
  undefined1 *puVar23;
  
  puVar12 = auStack_c8;
  puVar23 = auStack_c8;
  puVar22 = auStack_c8;
  puVar24 = auStack_c8;
  puVar21 = auStack_c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = param_5;
  local_b8 = param_2;
  local_ac = param_4;
  local_98 = param_1;
  if (*(int *)(param_1 + 8) < 1) {
    FUN_006e3fa0();
  }
  plVar2 = *(long **)(local_98 + 0x10);
  puVar20 = auStack_c8;
  if (plVar2 != (long *)0x0) {
    local_70 = (ulong *)CONCAT44(local_70._4_4_,*(uint *)(plVar2 + 5));
    if (plVar2[0xc] != 0) {
      uVar4 = thunk_FUN_007129d0(param_3);
      local_80 = (ulong *)CONCAT44(local_80._4_4_,uVar4);
      uVar5 = FUN_006e8260(param_3);
      uVar26 = *(uint *)(plVar2 + 0xb);
      lVar10 = plVar2[0xd];
      uVar16 = (ulong)uVar5 % (ulong)uVar26;
      lVar11 = plVar2[0xc];
      local_88 = (long *)(ulong)uVar4;
      iVar17 = uVar5 % (uVar26 - 2) + 1;
      iVar18 = iVar17 - uVar26;
      local_78 = CONCAT44(local_78._4_4_,uVar26 - iVar17);
      local_90 = param_3;
      do {
        uVar26 = *(uint *)(lVar11 + uVar16 * 4);
        if ((int)lVar10 != 0) {
          uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                   uVar26 << 0x18;
        }
        puVar20 = auStack_c8;
        if (uVar26 == 0) goto LAB_006e2c9f;
        uVar26 = uVar26 - 1;
        uVar19 = (ulong)uVar26;
        if (uVar26 < (uint)local_70) {
          puVar1 = (uint *)(plVar2[6] + uVar19 * 8);
          uVar26 = *puVar1;
          if ((int)plVar2[3] == 0) {
            if ((uint)local_80 <= uVar26) {
              lVar25 = *plVar2;
              uVar26 = puVar1[1];
              goto LAB_006e2bb0;
            }
          }
          else if ((uint)local_80 <=
                   (uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                   uVar26 << 0x18)) {
            uVar26 = puVar1[1];
            lVar25 = *plVar2;
            uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                     uVar26 << 0x18;
LAB_006e2bb0:
            lVar25 = (ulong)uVar26 + lVar25;
            goto LAB_006e2bc1;
          }
        }
        else {
          puVar8 = (undefined8 *)((ulong)(uVar26 - (uint)local_70) * 0x10 + plVar2[9]);
          if ((long *)*puVar8 <= local_88) goto LAB_006e2be3;
          lVar25 = puVar8[1];
LAB_006e2bc1:
          local_a8 = CONCAT44(local_a8._4_4_,iVar18);
          local_a0 = lVar11;
          iVar6 = thunk_FUN_00712780(local_90,lVar25);
          lVar11 = local_a0;
          iVar18 = (int)local_a8;
          if (iVar6 == 0) goto LAB_006e2cf0;
        }
LAB_006e2be3:
        iVar6 = iVar18;
        if ((uint)uVar16 < (uint)local_78) {
          iVar6 = iVar17;
        }
        uVar16 = (ulong)((uint)uVar16 + iVar6);
      } while( true );
    }
    local_78 = (ulong)*(uint *)(plVar2 + 5);
    uVar16 = 0;
    uVar19 = local_78;
    while (uVar27 = uVar19, puVar20 = auStack_c8, uVar16 < uVar27) {
      while( true ) {
        uVar19 = uVar27 + uVar16 >> 1;
        uVar26 = *(uint *)(plVar2[6] + 4 + uVar19 * 8);
        if ((int)plVar2[3] != 0) {
          uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                   uVar26 << 0x18;
        }
        iVar18 = thunk_FUN_00712780(param_3,*plVar2 + (ulong)uVar26);
        if (iVar18 < 0) break;
        if (iVar18 == 0) goto LAB_006e2cfa;
        uVar16 = uVar19 + 1;
        puVar20 = auStack_c8;
        if (uVar27 <= uVar16) goto LAB_006e2c9f;
      }
    }
  }
LAB_006e2c9f:
  puVar29 = (ulong *)0x0;
  puVar21 = puVar20;
  goto LAB_006e2ca2;
LAB_006e2e77:
  plVar28 = plVar3;
  puVar9 = local_80;
  puVar29 = local_90;
  if (lVar10 != 0) goto LAB_006e2e58;
  if (local_a8 == 0) {
    lVar10 = FUN_007101b0(local_a0 + 0x18);
  }
  else {
    lVar10 = FUN_00710840();
  }
  if (lVar10 == 0) {
LAB_006e32fb:
    puVar29 = (ulong *)0xffffffffffffffff;
    FUN_0070b100(local_88);
    goto LAB_006e2ca2;
  }
  plVar2[0xe] = lVar10;
  lVar11 = FUN_007128a0(lVar11);
  if (lVar11 == 0) goto LAB_006e32fb;
  plVar28 = (long *)(lVar10 + local_a0);
  *plVar28 = lVar11;
  plVar28[1] = -1;
  lVar10 = FUN_006e2ab0(local_98,local_b8,&DAT_0083e5c2,0,&local_60);
  if (lVar10 == -1) goto LAB_006e326a;
  puVar12 = auStack_c8;
  if ((lVar10 != 0) && (lVar10 = FUN_004011e0(lVar10,"charset="), puVar12 = auStack_c8, lVar10 != 0)
     ) {
    local_80 = (ulong *)(lVar10 + 8);
    lVar10 = thunk_FUN_00712880(local_80,&DAT_008243e8);
    puVar13 = local_80;
    puVar12 = auStack_c8;
    while (puVar23 != auStack_c8 + -(lVar10 + 0x18U & 0xfffffffffffff000)) {
      puVar22 = puVar12 + -0x1000;
      *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
      puVar23 = puVar12 + -0x1000;
      puVar12 = puVar12 + -0x1000;
    }
    uVar16 = (ulong)((uint)(lVar10 + 0x18U) & 0xff0);
    lVar25 = -uVar16;
    if (uVar16 != 0) {
      *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
    }
    local_80 = (ulong *)((ulong)(puVar22 + lVar25 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar22 + lVar25 + -8) = 0x6e2fa8;
    puVar12 = (undefined1 *)thunk_FUN_00713820(local_80,puVar13,lVar10);
    puVar13 = local_80;
    local_80 = local_58;
    *puVar12 = 0;
    *(undefined8 *)(puVar22 + lVar25 + -8) = 0x6e2fbf;
    FUN_006de650(local_80,puVar13,lVar11);
    local_48 = 1;
    local_90 = local_80;
    *(undefined8 *)(puVar22 + lVar25 + -8) = 0x6e2fdd;
    uVar7 = FUN_006d2a00(local_80,plVar28 + 1,1);
    local_80 = (ulong *)CONCAT44(local_80._4_4_,uVar7);
    *(undefined8 *)(puVar22 + lVar25 + -8) = 0x6e2fec;
    FUN_006de940(local_90);
    puVar12 = puVar22 + lVar25;
    if ((uint)local_80 != 0) {
      if ((uint)local_80 == -1) {
        plVar28[1] = -1;
        puVar12 = puVar22 + lVar25;
        goto LAB_006e2ff7;
      }
      *(undefined8 *)(puVar22 + lVar25 + -8) = 0x6e33f9;
      FUN_0070b100(local_88);
      *(undefined8 *)(puVar22 + lVar25 + -8) = 0x6e3401;
      FUN_007104f0(lVar11);
      puVar20 = puVar22 + lVar25;
      goto LAB_006e2c9f;
    }
  }
LAB_006e2ff7:
  plVar28[2] = 0;
  plVar2[0xf] = plVar2[0xf] + 1;
LAB_006e3005:
  plVar3 = local_88;
  *(undefined8 *)(puVar12 + -8) = 0x6e300e;
  FUN_0070b100(plVar3);
  puVar24 = puVar12;
  goto LAB_006e3079;
LAB_006e2e58:
  lVar10 = lVar10 + -1;
  iVar18 = thunk_FUN_00712780(*plVar28,lVar11);
  puVar9 = local_80;
  puVar29 = local_90;
  plVar3 = plVar28 + -3;
  if (iVar18 == 0) goto LAB_006e3005;
  goto LAB_006e2e77;
LAB_006e2cf0:
  local_78 = (ulong)local_70 & 0xffffffff;
LAB_006e2cfa:
  if (uVar19 < local_78) {
    puVar1 = (uint *)(plVar2[7] + uVar19 * 8);
    uVar26 = puVar1[1];
    uVar4 = *puVar1;
    if ((int)plVar2[3] == 0) {
      puVar29 = (ulong *)(*plVar2 + (ulong)uVar26);
      local_78 = (ulong)(uVar4 + 1);
    }
    else {
      puVar29 = (ulong *)(*plVar2 +
                         (ulong)(uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8
                                | uVar26 << 0x18));
      local_78 = (ulong)((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                         uVar4 << 0x18) + 1);
    }
  }
  else {
    puVar9 = (ulong *)((uVar19 - local_78) * 0x10 + plVar2[10]);
    puVar29 = (ulong *)puVar9[1];
    local_78 = *puVar9;
  }
  puVar20 = auStack_c8;
  if (local_ac != 0) {
    if ((local_b8 == 0) || (lVar11 = *(long *)(local_b8 + 0x10), *(long *)(local_b8 + 0x10) == 0)) {
      if (DAT_00946308 == 0) {
        pcVar14 = (char *)FUN_006e8e30("OUTPUT_CHARSET");
        lVar11 = DAT_00946300;
        if ((pcVar14 != (char *)0x0) && (*pcVar14 != '\0')) {
          lVar11 = thunk_FUN_007129d0(pcVar14);
          local_80 = (ulong *)(lVar11 + 1);
          lVar11 = FUN_007101b0(local_80);
          if (lVar11 != 0) {
            thunk_FUN_00713a50(lVar11,pcVar14,local_80);
          }
        }
        DAT_00946300 = lVar11;
        DAT_00946308 = 1;
      }
      lVar11 = DAT_00946300;
      if (DAT_00946300 == 0) {
        lVar11 = *(long *)(**(long **)(in_FS_OFFSET + -0xd8) + 0xb0);
      }
    }
    local_88 = plVar2 + 0x10;
    FUN_0070af10(local_88);
    lVar10 = plVar2[0xf];
    local_80 = (ulong *)uVar19;
    do {
      puVar9 = local_80;
      plVar3 = local_88;
      if (lVar10 == 0) {
        FUN_0070b100(local_88);
        FUN_0070b2d0(plVar3);
        lVar10 = plVar2[0xf];
        local_a8 = plVar2[0xe];
        local_a0 = lVar10 * 0x18;
        plVar3 = (long *)(local_a8 + -0x18 + local_a0);
        local_90 = puVar29;
        local_80 = puVar9;
        goto LAB_006e2e77;
      }
      lVar10 = lVar10 + -1;
      plVar28 = (long *)(plVar2[0xe] + lVar10 * 0x18);
      iVar18 = thunk_FUN_00712780(*plVar28,lVar11);
      puVar9 = local_80;
    } while (iVar18 != 0);
    FUN_0070b100(local_88);
    puVar24 = auStack_c8;
LAB_006e3079:
    puVar20 = puVar24;
    if (plVar28[1] != -1) {
      lVar11 = plVar28[2];
      if (lVar11 == 0) {
        LOCK();
        bVar30 = DAT_00946320 == 0;
        if (bVar30) {
          DAT_00946320 = 1;
        }
        UNLOCK();
        if (!bVar30) {
          *(undefined8 *)(puVar24 + -8) = 0x6e33e6;
          FUN_00709590(&DAT_00946320);
        }
        if (plVar28[2] != 0) {
LAB_006e3295:
          uVar26 = DAT_00946320;
          LOCK();
          DAT_00946320 = 0;
          UNLOCK();
          if (1 < (int)uVar26) {
            *(undefined8 *)(puVar24 + -8) = 0x6e3417;
            FUN_00709660(&DAT_00946320);
          }
          lVar11 = plVar28[2];
          goto LAB_006e3093;
        }
        iVar18 = (uint)local_70 + (int)plVar2[8];
        *(undefined8 *)(puVar24 + -8) = 0x6e33be;
        lVar11 = FUN_00711600(iVar18,8);
        plVar28[2] = lVar11;
        if (lVar11 == 0) {
          plVar28[2] = -1;
          goto LAB_006e3295;
        }
      }
      else {
LAB_006e3093:
        if (lVar11 == -1) {
LAB_006e326a:
          puVar29 = (ulong *)0xffffffffffffffff;
          puVar21 = puVar24;
          goto LAB_006e2ca2;
        }
        puVar13 = *(ulong **)(lVar11 + (long)puVar9 * 8);
        if (puVar13 != (ulong *)0x0) {
LAB_006e30a6:
          puVar29 = puVar13 + 1;
          local_78 = *puVar13;
          goto LAB_006e2d24;
        }
        LOCK();
        bVar30 = DAT_00946320 == 0;
        if (bVar30) {
          DAT_00946320 = 1;
        }
        UNLOCK();
        if (!bVar30) {
          *(undefined8 *)(puVar24 + -8) = 0x6e33a8;
          FUN_00709590(&DAT_00946320);
        }
      }
      iVar18 = 0;
      local_60 = DAT_00946318 + 1;
      local_80 = puVar9;
      local_70 = puVar29;
      local_68 = puVar29;
LAB_006e3185:
      if (7 < DAT_00946310) {
        lVar10 = plVar28[1];
        lVar25 = local_78 + (long)local_68;
        lVar11 = (long)local_60 + (DAT_00946310 - 8);
        *(undefined8 *)(puVar24 + -8) = 0x6e31b0;
        uVar26 = FUN_006d2e40(lVar10,&local_68,lVar25,&local_60,lVar11,local_58);
        uVar4 = uVar26 & 0xfffffffb;
        if (uVar4 == 0) {
          lVar11 = (long)local_80 * 8;
          *DAT_00946318 = ((long)local_60 - (long)DAT_00946318) + -8;
          lVar10 = plVar28[2];
          *(long **)(lVar10 + (long)local_80 * 8) = DAT_00946318;
          uVar16 = DAT_00946310 - ((long)local_60 - (long)DAT_00946318);
          DAT_00946310 = uVar16 & 0xfffffffffffffff8;
          DAT_00946318 = (long *)((long)local_60 + (ulong)((uint)uVar16 & 7));
          LOCK();
          UNLOCK();
          bVar30 = 1 < (int)DAT_00946320;
          DAT_00946320 = uVar4;
          if (bVar30) {
            *(undefined8 *)(puVar24 + -8) = 0x6e3436;
            FUN_00709660(&DAT_00946320);
            lVar10 = plVar28[2];
          }
          puVar13 = *(ulong **)(lVar10 + lVar11);
          goto LAB_006e30a6;
        }
        if (uVar26 != 5) {
          LOCK();
          UNLOCK();
          puVar29 = (ulong *)0x0;
          goto joined_r0x006e331e;
        }
        local_68 = local_70;
      }
      puVar8 = DAT_00946328;
      if (iVar18 == 0) {
        DAT_00946310 = 0xff0;
        *(undefined8 *)(puVar24 + -8) = 0x6e31ea;
        puVar15 = (undefined8 *)FUN_007101b0(0xff0);
        if (puVar15 == (undefined8 *)0x0) goto LAB_006e322b;
        iVar18 = 1;
        *puVar15 = DAT_00946328;
        DAT_00946310 = 0xfe8;
LAB_006e3164:
        DAT_00946318 = puVar15 + 1;
        local_60 = puVar15 + 2;
        DAT_00946328 = puVar15;
        goto LAB_006e3185;
      }
      iVar18 = iVar18 + 1;
      lVar11 = (long)(iVar18 * 0xff0);
      *(undefined8 *)(puVar24 + -8) = 0x6e3157;
      DAT_00946310 = lVar11;
      puVar15 = (undefined8 *)FUN_00710840(DAT_00946328,lVar11);
      if (puVar15 != (undefined8 *)0x0) {
        DAT_00946310 = lVar11 - 8;
        goto LAB_006e3164;
      }
      DAT_00946328 = (undefined8 *)*puVar8;
      *(undefined8 *)(puVar24 + -8) = 0x6e322b;
      FUN_007104f0(puVar8);
LAB_006e322b:
      DAT_00946318 = (long *)0x0;
      DAT_00946310 = 0;
      LOCK();
      UNLOCK();
      puVar29 = (ulong *)0xffffffffffffffff;
joined_r0x006e331e:
      bVar30 = 1 < (int)DAT_00946320;
      DAT_00946320 = 0;
      puVar21 = puVar24;
      if (bVar30) {
        DAT_00946320 = 0;
        *(undefined8 *)(puVar24 + -8) = 0x6e3265;
        FUN_00709660(&DAT_00946320);
      }
      goto LAB_006e2ca2;
    }
  }
LAB_006e2d24:
  *local_c0 = local_78;
  puVar21 = puVar20;
LAB_006e2ca2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar21 + -8) = 0x6e340b;
    FUN_00771f60();
  }
  return puVar29;
}

