
ulong FUN_00714450(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  bool bVar32;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  byte *local_e0;
  ulong local_d8;
  byte *local_d0;
  uint local_c4;
  byte *local_c0;
  byte *local_b0;
  uint local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_68;
  ulong local_50;
  byte local_3e;
  
  lVar28 = *(long *)(param_3 + 0x18);
  uVar2 = *(uint *)(lVar28 + 0x40);
  uVar14 = (ulong)uVar2;
  if (uVar14 == 0) {
    uVar14 = thunk_FUN_00712780();
    return uVar14;
  }
  if ((*param_1 == 0) || (*param_2 == 0)) {
    return (ulong)(((*param_1 != 0) - 1) + (uint)(*param_2 == 0));
  }
  lVar3 = *(long *)(lVar28 + 0x48);
  lVar4 = *(long *)(lVar28 + 0x60);
  lVar5 = *(long *)(lVar28 + 0x58);
  uVar6 = *(ulong *)(lVar28 + 0x50);
  uVar7 = *(ulong *)(lVar28 + 0x68);
  if ((uVar6 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("((uintptr_t) table) % __alignof__ (table[0]) == 0","strcoll_l.c",0x11f,
                 "__strcoll_l");
  }
  if ((uVar7 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("((uintptr_t) indirect) % __alignof__ (indirect[0]) == 0","strcoll_l.c",0x122,
                 "__strcoll_l");
  }
  local_108 = 0;
  uVar15 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_3e = 0;
LAB_00714515:
  uVar26 = 0;
  uVar11 = 0;
  local_68 = 0;
  iVar21 = (int)local_108;
  uVar31 = 0;
  local_a0 = 0;
  local_f8 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  local_100 = 0xffffffffffffffff;
  local_98 = 0xffffffffffffffff;
  pbVar20 = param_2;
  pbVar19 = param_1;
LAB_007145a7:
  local_d8 = 0;
  local_e0 = pbVar19;
LAB_007145e0:
  local_d8 = local_d8 + 1;
  uVar29 = local_f0;
  if (local_100 != 0xffffffffffffffff) {
    if (local_98 != local_100) {
      pbVar19 = local_b0;
      uVar30 = local_100;
      uVar27 = uVar11;
      if (local_100 < local_98) {
LAB_00714970:
        pbVar13 = pbVar19 + 1;
        uVar27 = *(uint *)(uVar6 + (ulong)*pbVar19 * 4);
        if ((long)(int)uVar27 < 0) {
          puVar17 = (uint *)(lVar4 - (int)uVar27);
LAB_00714990:
          do {
            uVar27 = *puVar17;
            bVar1 = (byte)puVar17[1];
            while( true ) {
              uVar23 = (ulong)bVar1;
              if ((int)uVar27 < 0) break;
              if (uVar23 == 0) {
LAB_00714b10:
                pbVar13 = pbVar13 + uVar23;
                goto LAB_00714a4a;
              }
              uVar24 = 0;
              while (*(byte *)((long)puVar17 + uVar24 + 5) == pbVar19[uVar24 + 1]) {
                uVar24 = uVar24 + 1;
                if (uVar23 == uVar24) goto LAB_00714b10;
              }
              puVar17 = (uint *)((long)puVar17 + uVar23 + 5);
              uVar11 = bVar1 + 1 & 3;
              if (uVar11 == 0) goto LAB_00714990;
              puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar11));
              uVar27 = *puVar17;
              bVar1 = (byte)puVar17[1];
            }
            if (uVar23 == 0) {
LAB_00714a38:
              lVar28 = 0;
              goto LAB_00714a3a;
            }
            uVar24 = 0;
            while( true ) {
              bVar1 = *(byte *)((long)puVar17 + uVar24 + 5);
              if (bVar1 != pbVar19[uVar24 + 1]) break;
              uVar24 = uVar24 + 1;
              if (uVar23 == uVar24) goto LAB_00714a38;
            }
            if (bVar1 <= pbVar19[uVar24 + 1]) {
              uVar24 = 0;
              while (*(byte *)((long)puVar17 + uVar24 + 5 + uVar23) == pbVar19[uVar24 + 1]) {
                uVar24 = uVar24 + 1;
                if (uVar23 == uVar24) goto LAB_00714aae;
              }
              if ((uVar24 == uVar23) ||
                 (pbVar13[uVar24] <= *(byte *)((long)puVar17 + uVar23 + uVar24 + 5)))
              goto LAB_00714aae;
            }
            puVar17 = (uint *)((long)puVar17 +
                              (uVar23 * 2 - (ulong)((int)(uVar23 * 2) + 1U & 3)) + 9);
          } while( true );
        }
        goto LAB_00714a4a;
      }
      goto LAB_00714a5e;
    }
    if (local_a0 < local_f0) {
      local_100 = 0xffffffffffffffff;
      uVar27 = local_c4;
      goto LAB_00714617;
    }
    uVar22 = 0;
    uVar11 = 0;
    goto LAB_00714669;
  }
  bVar1 = *pbVar19;
  uVar27 = (uint)local_3e;
  pbVar13 = pbVar19;
  uVar22 = uVar11;
  if (bVar1 != 0) {
LAB_00714b68:
    uVar22 = uVar11;
    local_a0 = uVar29;
    uVar16 = *(uint *)(uVar6 + (ulong)bVar1 * 4);
    pbVar19 = pbVar13 + 1;
    if ((long)(int)uVar16 < 0) {
      puVar17 = (uint *)(lVar4 - (int)uVar16);
LAB_00714b88:
      do {
        uVar16 = *puVar17;
        bVar1 = (byte)puVar17[1];
        while( true ) {
          uVar29 = (ulong)bVar1;
          if ((int)uVar16 < 0) break;
          if (uVar29 == 0) {
LAB_00714fa8:
            pbVar19 = pbVar19 + uVar29;
            goto LAB_00714c43;
          }
          uVar30 = 0;
          while (*(byte *)((long)puVar17 + uVar30 + 5) == pbVar13[uVar30 + 1]) {
            uVar30 = uVar30 + 1;
            if (uVar29 == uVar30) goto LAB_00714fa8;
          }
          puVar17 = (uint *)((long)puVar17 + uVar29 + 5);
          uVar11 = bVar1 + 1 & 3;
          if (uVar11 == 0) goto LAB_00714b88;
          puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar11));
          uVar16 = *puVar17;
          bVar1 = (byte)puVar17[1];
        }
        if (uVar29 == 0) {
LAB_00714c30:
          lVar28 = 0;
          goto LAB_00714c33;
        }
        uVar30 = 0;
        while( true ) {
          bVar1 = *(byte *)((long)puVar17 + uVar30 + 5);
          if (bVar1 != pbVar13[uVar30 + 1]) break;
          uVar30 = uVar30 + 1;
          if (uVar29 == uVar30) goto LAB_00714c30;
        }
        if (bVar1 <= pbVar13[uVar30 + 1]) {
          uVar30 = 0;
          while (*(byte *)((long)puVar17 + uVar30 + 5 + uVar29) == pbVar13[uVar30 + 1]) {
            uVar30 = uVar30 + 1;
            if (uVar29 == uVar30) goto LAB_00714d0e;
          }
          if ((uVar29 == uVar30) ||
             (pbVar19[uVar30] <= *(byte *)((long)puVar17 + uVar30 + uVar29 + 5))) goto LAB_00714d0e;
        }
        puVar17 = (uint *)((long)puVar17 + (uVar29 * 2 - (ulong)((int)(uVar29 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_00714c43;
  }
LAB_00714c88:
  uVar27 = uVar11;
  if (local_f0 < local_a0) {
LAB_00714fe8:
    uVar27 = uVar22;
    local_98 = local_a0;
    uVar22 = uVar11;
    if ((local_a0 < uVar29) &&
       (local_98 = local_a0 - 1, uVar22 = uVar27, local_c4 = uVar11, local_98 <= local_f0)) {
      local_b0 = local_e0;
      local_100 = local_f0;
      local_e0 = pbVar19;
    }
    else {
      uVar27 = uVar22;
      local_b0 = local_e0;
      local_98 = local_98 - 1;
      local_100 = local_f0;
      local_e0 = pbVar19;
    }
    goto LAB_00714617;
  }
LAB_00714cb3:
  if ((local_a0 == uVar29) || (local_a0 < local_f0)) {
    local_100 = local_f0;
    uVar22 = 0;
    local_f0 = uVar29;
    uVar11 = uVar27;
    goto LAB_00714669;
  }
  goto LAB_00714617;
LAB_00714aae:
  uVar25 = 0;
  uVar24 = uVar25;
  if (pbVar19[1] == *(byte *)((long)puVar17 + 5)) {
    do {
      uVar25 = uVar24 + 1;
      lVar8 = uVar24 + 2;
      lVar28 = uVar24 + 6;
      uVar24 = uVar25;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar19[lVar8]);
  }
  lVar28 = 0;
  do {
    lVar9 = uVar25 + 1;
    lVar8 = uVar25 + 5;
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar19[lVar9] - (uint)*(byte *)((long)puVar17 + lVar8));
  } while (uVar25 < uVar23);
LAB_00714a3a:
  pbVar13 = pbVar13 + uVar23;
  uVar27 = *(uint *)(uVar7 + (lVar28 - (int)uVar27) * 4);
LAB_00714a4a:
  uVar30 = uVar30 + 1;
  pbVar19 = pbVar13;
  if (uVar30 == local_98) goto code_r0x00714a57;
  goto LAB_00714970;
code_r0x00714a57:
  uVar27 = uVar27 & 0xffffff;
LAB_00714a5e:
  local_98 = local_98 - 1;
  pbVar19 = local_e0;
LAB_00714617:
  local_f0 = uVar29;
  uVar11 = uVar27 + 1;
  uVar22 = (uint)*(byte *)(lVar5 + (int)uVar27);
  if (local_108 != 0) {
    iVar18 = 0;
    do {
      iVar10 = uVar11 + uVar22;
      iVar18 = iVar18 + 1;
      uVar11 = iVar10 + 1;
      uVar22 = (uint)*(byte *)(lVar5 + iVar10);
    } while (iVar18 != iVar21);
  }
  if (uVar22 != 0) {
LAB_00714669:
    if (uVar31 != 0) goto LAB_00715110;
LAB_00714675:
    local_e0 = (byte *)0x0;
    local_d0 = pbVar20;
LAB_007146b8:
    local_e0 = (byte *)((long)local_e0 + 1);
    uVar29 = local_e8;
    if (local_f8 == 0xffffffffffffffff) {
      bVar1 = *pbVar20;
      pbVar13 = pbVar20;
      uVar30 = local_e8;
      uVar31 = uVar26;
      if (bVar1 != 0) {
LAB_00714da8:
        uVar31 = uVar26;
        uVar27 = *(uint *)(uVar6 + (ulong)bVar1 * 4);
        pbVar20 = pbVar13 + 1;
        if ((long)(int)uVar27 < 0) {
          puVar17 = (uint *)(lVar4 - (int)uVar27);
LAB_00714dc8:
          do {
            uVar27 = *puVar17;
            bVar1 = (byte)puVar17[1];
            while( true ) {
              uVar29 = (ulong)bVar1;
              if ((int)uVar27 < 0) break;
              if (uVar29 == 0) {
LAB_00714f98:
                pbVar20 = pbVar20 + uVar29;
                goto LAB_00714e83;
              }
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5) == pbVar13[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar29 == uVar23) goto LAB_00714f98;
              }
              puVar17 = (uint *)((long)puVar17 + uVar29 + 5);
              uVar26 = bVar1 + 1 & 3;
              if (uVar26 == 0) goto LAB_00714dc8;
              puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar26));
              uVar27 = *puVar17;
              bVar1 = (byte)puVar17[1];
            }
            if (uVar29 == 0) {
LAB_00714e70:
              lVar28 = 0;
              goto LAB_00714e73;
            }
            uVar23 = 0;
            while( true ) {
              bVar1 = *(byte *)((long)puVar17 + uVar23 + 5);
              if (bVar1 != pbVar13[uVar23 + 1]) break;
              uVar23 = uVar23 + 1;
              if (uVar29 == uVar23) goto LAB_00714e70;
            }
            if (bVar1 <= pbVar13[uVar23 + 1]) {
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5 + uVar29) == pbVar13[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar29 == uVar23) goto LAB_00714f3e;
              }
              if ((uVar29 == uVar23) ||
                 (pbVar20[uVar23] <= *(byte *)((long)puVar17 + uVar23 + uVar29 + 5)))
              goto LAB_00714f3e;
            }
            puVar17 = (uint *)((long)puVar17 +
                              (uVar29 * 2 - (ulong)((int)(uVar29 * 2) + 1U & 3)) + 9);
          } while( true );
        }
        goto LAB_00714e83;
      }
joined_r0x00715052:
      if (local_e8 < local_68) {
        local_50 = local_68;
        uVar27 = uVar26;
        if ((local_68 < uVar29) &&
           (local_50 = local_68 - 1, uVar27 = uVar31, local_a8 = uVar26, local_50 <= local_e8)) {
          local_c0 = local_d0;
          local_f8 = local_e8;
          local_e8 = uVar29;
          local_d0 = pbVar20;
        }
        else {
          local_c0 = local_d0;
          local_50 = local_50 - 1;
          local_f8 = local_e8;
          uVar31 = uVar27;
          local_e8 = uVar29;
          local_d0 = pbVar20;
        }
      }
      else if ((local_68 == uVar29) ||
              (bVar32 = local_68 < local_e8, uVar31 = uVar26, local_e8 = uVar29, bVar32))
      goto joined_r0x00715249;
      goto LAB_007146ef;
    }
    if (local_50 != local_f8) {
      pbVar20 = local_c0;
      uVar29 = local_f8;
      if (local_f8 < local_50) {
LAB_007147b8:
        pbVar13 = pbVar20 + 1;
        uVar26 = *(uint *)(uVar6 + (ulong)*pbVar20 * 4);
        if ((long)(int)uVar26 < 0) {
          puVar17 = (uint *)(lVar4 - (int)uVar26);
LAB_007147e0:
          do {
            uVar26 = *puVar17;
            bVar1 = (byte)puVar17[1];
            while( true ) {
              uVar30 = (ulong)bVar1;
              if ((int)uVar26 < 0) break;
              if (uVar30 == 0) {
LAB_00714b20:
                pbVar13 = pbVar13 + uVar30;
                goto LAB_0071489a;
              }
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5) == pbVar20[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar30 == uVar23) goto LAB_00714b20;
              }
              puVar17 = (uint *)((long)puVar17 + uVar30 + 5);
              uVar26 = bVar1 + 1 & 3;
              if (uVar26 == 0) goto LAB_007147e0;
              puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar26));
              uVar26 = *puVar17;
              bVar1 = (byte)puVar17[1];
            }
            if (uVar30 == 0) {
LAB_00714888:
              lVar28 = 0;
              goto LAB_0071488a;
            }
            uVar23 = 0;
            while( true ) {
              bVar1 = *(byte *)((long)puVar17 + uVar23 + 5);
              if (bVar1 != pbVar20[uVar23 + 1]) break;
              uVar23 = uVar23 + 1;
              if (uVar30 == uVar23) goto LAB_00714888;
            }
            if (bVar1 <= pbVar20[uVar23 + 1]) {
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5 + uVar30) == pbVar20[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar30 == uVar23) goto LAB_007148fe;
              }
              if ((uVar30 == uVar23) ||
                 (pbVar13[uVar23] <= *(byte *)((long)puVar17 + uVar23 + uVar30 + 5)))
              goto LAB_007148fe;
            }
            puVar17 = (uint *)((long)puVar17 +
                              (uVar30 * 2 - (ulong)((int)(uVar30 * 2) + 1U & 3)) + 9);
          } while( true );
        }
        goto LAB_0071489a;
      }
      goto LAB_007148ae;
    }
    if (local_68 < local_e8) {
      local_f8 = 0xffffffffffffffff;
      uVar31 = local_a8;
      goto LAB_007146ef;
    }
joined_r0x00715249:
    local_e8 = uVar29;
    if (uVar22 != 0) {
      return 1;
    }
    if ((local_108 == 0) && (uVar15 = thunk_FUN_00712780(param_1,param_2), (int)uVar15 == 0)) {
      return uVar15;
    }
    local_108 = local_108 + 1;
    uVar15 = (ulong)local_3e;
    if (uVar14 == local_108) {
      return 0;
    }
    goto LAB_00714515;
  }
  goto LAB_007145e0;
LAB_00714d0e:
  uVar23 = 0;
  uVar30 = uVar23;
  if (*(byte *)((long)puVar17 + 5) == pbVar13[1]) {
    do {
      uVar23 = uVar30 + 1;
      lVar8 = uVar30 + 2;
      lVar28 = uVar30 + 6;
      uVar30 = uVar23;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar13[lVar8]);
  }
  lVar28 = 0;
  do {
    lVar9 = uVar23 + 1;
    lVar8 = uVar23 + 5;
    uVar23 = uVar23 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar13[lVar9] - (uint)*(byte *)((long)puVar17 + lVar8));
  } while (uVar23 < uVar29);
LAB_00714c33:
  pbVar19 = pbVar19 + uVar29;
  uVar16 = *(uint *)(uVar7 + (lVar28 - (int)uVar16) * 4);
LAB_00714c43:
  uVar29 = local_a0 + 1;
  uVar11 = uVar16 & 0xffffff;
  if (local_a0 == 0) {
    uVar27 = (int)uVar16 >> 0x18;
  }
  local_3e = (byte)uVar27;
  if ((*(byte *)(lVar3 + (int)((uVar16 >> 0x18) * uVar2 + iVar21)) & 2) == 0) {
    uVar27 = uVar11;
    if (local_a0 <= local_f0) goto LAB_00714cb3;
    goto LAB_00714fe8;
  }
  bVar1 = *pbVar19;
  pbVar13 = pbVar19;
  local_a0 = uVar29;
  if (bVar1 == 0) goto LAB_00714c88;
  goto LAB_00714b68;
LAB_00714f3e:
  uVar24 = 0;
  uVar23 = uVar24;
  if (*(byte *)((long)puVar17 + 5) == pbVar13[1]) {
    do {
      uVar24 = uVar23 + 1;
      lVar8 = uVar23 + 2;
      lVar28 = uVar23 + 6;
      uVar23 = uVar24;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar13[lVar8]);
  }
  lVar28 = 0;
  do {
    lVar9 = uVar24 + 1;
    lVar8 = uVar24 + 5;
    uVar24 = uVar24 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar13[lVar9] - (uint)*(byte *)((long)puVar17 + lVar8));
  } while (uVar24 < uVar29);
LAB_00714e73:
  pbVar20 = pbVar20 + uVar29;
  uVar27 = *(uint *)(uVar7 + (lVar28 - (int)uVar27) * 4);
LAB_00714e83:
  uVar29 = uVar30 + 1;
  uVar26 = uVar27 & 0xffffff;
  local_68 = uVar30;
  if (((*(byte *)(lVar3 + (int)((uVar27 >> 0x18) * uVar2 + iVar21)) & 2) == 0) ||
     (bVar1 = *pbVar20, pbVar13 = pbVar20, uVar30 = uVar29, local_68 = uVar29, bVar1 == 0))
  goto joined_r0x00715052;
  goto LAB_00714da8;
LAB_007148fe:
  uVar24 = 0;
  uVar23 = uVar24;
  if (pbVar20[1] == *(byte *)((long)puVar17 + 5)) {
    do {
      uVar24 = uVar23 + 1;
      lVar8 = uVar23 + 2;
      lVar28 = uVar23 + 6;
      uVar23 = uVar24;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar20[lVar8]);
  }
  lVar28 = 0;
  do {
    lVar9 = uVar24 + 1;
    lVar8 = uVar24 + 5;
    uVar24 = uVar24 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar20[lVar9] - (uint)*(byte *)((long)puVar17 + lVar8));
  } while (uVar24 < uVar30);
LAB_0071488a:
  pbVar13 = pbVar13 + uVar30;
  uVar26 = *(uint *)(uVar7 + (lVar28 - (int)uVar26) * 4);
LAB_0071489a:
  uVar29 = uVar29 + 1;
  pbVar20 = pbVar13;
  if (uVar29 == local_50) goto code_r0x007148a7;
  goto LAB_007147b8;
code_r0x007148a7:
  uVar26 = uVar26 & 0xffffff;
LAB_007148ae:
  local_50 = local_50 - 1;
  pbVar20 = local_d0;
  uVar31 = uVar26;
LAB_007146ef:
  uVar26 = uVar31 + 1;
  uVar31 = (uint)*(byte *)(lVar5 + (int)uVar31);
  if (local_108 != 0) {
    iVar18 = 0;
    do {
      iVar10 = uVar26 + uVar31;
      iVar18 = iVar18 + 1;
      uVar26 = iVar10 + 1;
      uVar31 = (uint)*(byte *)(lVar5 + iVar10);
    } while (iVar18 != iVar21);
  }
  if (uVar31 != 0) goto LAB_00714754;
  goto LAB_007146b8;
LAB_00714754:
  if (uVar22 == 0) {
    return 0xffffffff;
  }
  bVar32 = (*(byte *)(lVar3 + local_108 + uVar15 * uVar14) & 4) != 0;
  if (((byte *)local_d8 != local_e0) && (bVar32)) {
    return (ulong)((-(uint)(local_e0 < local_d8) & 2) - 1);
  }
  lVar28 = (long)(int)uVar26;
  uVar30 = (ulong)(int)uVar11;
  pbVar13 = (byte *)(lVar5 + lVar28);
  uVar29 = uVar30;
  do {
    uVar16 = uVar31;
    uVar27 = uVar22;
    uVar11 = (uint)uVar29;
    if (pbVar13[uVar30 - lVar28] != *pbVar13) {
      uVar12 = (uint)pbVar13[uVar30 - lVar28] - (uint)*pbVar13;
      uVar22 = uVar27;
      uVar31 = uVar16;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto LAB_007150eb;
    }
    uVar22 = uVar27 - 1;
    uVar11 = uVar11 + 1;
    uVar29 = (ulong)uVar11;
    uVar26 = uVar26 + 1;
    pbVar13 = pbVar13 + 1;
    uVar31 = uVar16 - 1;
  } while ((0 < (int)uVar22) && (0 < (int)uVar31));
  if ((uVar27 != uVar16) && (bVar32)) {
    return (ulong)(uVar27 - uVar16);
  }
LAB_007150eb:
  if (uVar22 == 0) goto LAB_007145a7;
  local_d8 = 0;
  if (uVar31 == 0) goto LAB_00714675;
LAB_00715110:
  local_e0 = (byte *)0x0;
  goto LAB_00714754;
}

