
int strcoll_l(char *__s1,char *__s2,__locale_t __l)

{
  byte bVar1;
  uint uVar2;
  __locale_data *p_Var3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  ulong uVar22;
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
  
  p_Var3 = __l->__locales[3];
  uVar2 = *(uint *)(p_Var3 + 0x40);
  uVar22 = (ulong)uVar2;
  if (uVar22 == 0) {
    iVar13 = strcmp(__s1,__s2);
    return iVar13;
  }
  if ((*__s1 == '\0') || (*__s2 == '\0')) {
    return ((*__s1 != '\0') - 1) + (uint)(*__s2 == '\0');
  }
  lVar4 = *(long *)(p_Var3 + 0x48);
  lVar5 = *(long *)(p_Var3 + 0x60);
  lVar6 = *(long *)(p_Var3 + 0x58);
  uVar7 = *(ulong *)(p_Var3 + 0x50);
  uVar8 = *(ulong *)(p_Var3 + 0x68);
  if ((uVar7 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((uintptr_t) table) % __alignof__ (table[0]) == 0","strcoll_l.c",0x11f,
                  "__strcoll_l");
  }
  if ((uVar8 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((uintptr_t) indirect) % __alignof__ (indirect[0]) == 0","strcoll_l.c",0x122,
                  "__strcoll_l");
  }
  local_108 = 0;
  uVar14 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_3e = 0;
LAB_0070ab05:
  uVar26 = 0;
  uVar12 = 0;
  local_68 = 0;
  iVar13 = (int)local_108;
  uVar31 = 0;
  local_a0 = 0;
  local_f8 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  local_100 = 0xffffffffffffffff;
  local_98 = 0xffffffffffffffff;
  pbVar20 = (byte *)__s2;
  pbVar19 = (byte *)__s1;
LAB_0070ab97:
  local_d8 = 0;
  local_e0 = pbVar19;
LAB_0070abd0:
  local_d8 = local_d8 + 1;
  uVar29 = local_f0;
  if (local_100 != 0xffffffffffffffff) {
    if (local_98 != local_100) {
      pbVar19 = local_b0;
      uVar30 = local_100;
      uVar27 = uVar12;
      if (local_100 < local_98) {
LAB_0070af60:
        pbVar15 = pbVar19 + 1;
        uVar27 = *(uint *)(uVar7 + (ulong)*pbVar19 * 4);
        if ((long)(int)uVar27 < 0) {
          puVar17 = (uint *)(lVar5 - (int)uVar27);
LAB_0070af80:
          do {
            uVar27 = *puVar17;
            bVar1 = (byte)puVar17[1];
            while( true ) {
              uVar23 = (ulong)bVar1;
              if ((int)uVar27 < 0) break;
              if (uVar23 == 0) {
LAB_0070b100:
                pbVar15 = pbVar15 + uVar23;
                goto LAB_0070b03a;
              }
              uVar24 = 0;
              while (*(byte *)((long)puVar17 + uVar24 + 5) == pbVar19[uVar24 + 1]) {
                uVar24 = uVar24 + 1;
                if (uVar23 == uVar24) goto LAB_0070b100;
              }
              puVar17 = (uint *)((long)puVar17 + uVar23 + 5);
              uVar12 = bVar1 + 1 & 3;
              if (uVar12 == 0) goto LAB_0070af80;
              puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar12));
              uVar27 = *puVar17;
              bVar1 = (byte)puVar17[1];
            }
            if (uVar23 == 0) {
LAB_0070b028:
              lVar28 = 0;
              goto LAB_0070b02a;
            }
            uVar24 = 0;
            while( true ) {
              bVar1 = *(byte *)((long)puVar17 + uVar24 + 5);
              if (bVar1 != pbVar19[uVar24 + 1]) break;
              uVar24 = uVar24 + 1;
              if (uVar23 == uVar24) goto LAB_0070b028;
            }
            if (bVar1 <= pbVar19[uVar24 + 1]) {
              uVar24 = 0;
              while (*(byte *)((long)puVar17 + uVar24 + 5 + uVar23) == pbVar19[uVar24 + 1]) {
                uVar24 = uVar24 + 1;
                if (uVar23 == uVar24) goto LAB_0070b09e;
              }
              if ((uVar24 == uVar23) ||
                 (pbVar15[uVar24] <= *(byte *)((long)puVar17 + uVar23 + uVar24 + 5)))
              goto LAB_0070b09e;
            }
            puVar17 = (uint *)((long)puVar17 +
                              (uVar23 * 2 - (ulong)((int)(uVar23 * 2) + 1U & 3)) + 9);
          } while( true );
        }
        goto LAB_0070b03a;
      }
      goto LAB_0070b04e;
    }
    if (local_a0 < local_f0) {
      local_100 = 0xffffffffffffffff;
      uVar27 = local_c4;
      goto LAB_0070ac07;
    }
    uVar21 = 0;
    uVar12 = 0;
    goto LAB_0070ac59;
  }
  bVar1 = *pbVar19;
  uVar27 = (uint)local_3e;
  pbVar15 = pbVar19;
  uVar21 = uVar12;
  if (bVar1 != 0) {
LAB_0070b158:
    uVar21 = uVar12;
    local_a0 = uVar29;
    uVar16 = *(uint *)(uVar7 + (ulong)bVar1 * 4);
    pbVar19 = pbVar15 + 1;
    if ((long)(int)uVar16 < 0) {
      puVar17 = (uint *)(lVar5 - (int)uVar16);
LAB_0070b178:
      do {
        uVar16 = *puVar17;
        bVar1 = (byte)puVar17[1];
        while( true ) {
          uVar29 = (ulong)bVar1;
          if ((int)uVar16 < 0) break;
          if (uVar29 == 0) {
LAB_0070b598:
            pbVar19 = pbVar19 + uVar29;
            goto LAB_0070b233;
          }
          uVar30 = 0;
          while (*(byte *)((long)puVar17 + uVar30 + 5) == pbVar15[uVar30 + 1]) {
            uVar30 = uVar30 + 1;
            if (uVar29 == uVar30) goto LAB_0070b598;
          }
          puVar17 = (uint *)((long)puVar17 + uVar29 + 5);
          uVar12 = bVar1 + 1 & 3;
          if (uVar12 == 0) goto LAB_0070b178;
          puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar12));
          uVar16 = *puVar17;
          bVar1 = (byte)puVar17[1];
        }
        if (uVar29 == 0) {
LAB_0070b220:
          lVar28 = 0;
          goto LAB_0070b223;
        }
        uVar30 = 0;
        while( true ) {
          bVar1 = *(byte *)((long)puVar17 + uVar30 + 5);
          if (bVar1 != pbVar15[uVar30 + 1]) break;
          uVar30 = uVar30 + 1;
          if (uVar29 == uVar30) goto LAB_0070b220;
        }
        if (bVar1 <= pbVar15[uVar30 + 1]) {
          uVar30 = 0;
          while (*(byte *)((long)puVar17 + uVar30 + 5 + uVar29) == pbVar15[uVar30 + 1]) {
            uVar30 = uVar30 + 1;
            if (uVar29 == uVar30) goto LAB_0070b2fe;
          }
          if ((uVar29 == uVar30) ||
             (pbVar19[uVar30] <= *(byte *)((long)puVar17 + uVar30 + uVar29 + 5))) goto LAB_0070b2fe;
        }
        puVar17 = (uint *)((long)puVar17 + (uVar29 * 2 - (ulong)((int)(uVar29 * 2) + 1U & 3)) + 9);
      } while( true );
    }
    goto LAB_0070b233;
  }
LAB_0070b278:
  uVar27 = uVar12;
  if (local_f0 < local_a0) {
LAB_0070b5d8:
    uVar27 = uVar21;
    local_98 = local_a0;
    uVar21 = uVar12;
    if ((local_a0 < uVar29) &&
       (local_98 = local_a0 - 1, uVar21 = uVar27, local_c4 = uVar12, local_98 <= local_f0)) {
      local_b0 = local_e0;
      local_100 = local_f0;
      local_e0 = pbVar19;
    }
    else {
      uVar27 = uVar21;
      local_b0 = local_e0;
      local_98 = local_98 - 1;
      local_100 = local_f0;
      local_e0 = pbVar19;
    }
    goto LAB_0070ac07;
  }
LAB_0070b2a3:
  if ((local_a0 == uVar29) || (local_a0 < local_f0)) {
    local_100 = local_f0;
    uVar21 = 0;
    local_f0 = uVar29;
    uVar12 = uVar27;
    goto LAB_0070ac59;
  }
  goto LAB_0070ac07;
LAB_0070b09e:
  uVar25 = 0;
  uVar24 = uVar25;
  if (pbVar19[1] == *(byte *)((long)puVar17 + 5)) {
    do {
      uVar25 = uVar24 + 1;
      lVar9 = uVar24 + 2;
      lVar28 = uVar24 + 6;
      uVar24 = uVar25;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar19[lVar9]);
  }
  lVar28 = 0;
  do {
    lVar10 = uVar25 + 1;
    lVar9 = uVar25 + 5;
    uVar25 = uVar25 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar19[lVar10] - (uint)*(byte *)((long)puVar17 + lVar9));
  } while (uVar25 < uVar23);
LAB_0070b02a:
  pbVar15 = pbVar15 + uVar23;
  uVar27 = *(uint *)(uVar8 + (lVar28 - (int)uVar27) * 4);
LAB_0070b03a:
  uVar30 = uVar30 + 1;
  pbVar19 = pbVar15;
  if (uVar30 == local_98) goto code_r0x0070b047;
  goto LAB_0070af60;
code_r0x0070b047:
  uVar27 = uVar27 & 0xffffff;
LAB_0070b04e:
  local_98 = local_98 - 1;
  pbVar19 = local_e0;
LAB_0070ac07:
  local_f0 = uVar29;
  uVar12 = uVar27 + 1;
  uVar21 = (uint)*(byte *)(lVar6 + (int)uVar27);
  if (local_108 != 0) {
    iVar18 = 0;
    do {
      iVar11 = uVar12 + uVar21;
      iVar18 = iVar18 + 1;
      uVar12 = iVar11 + 1;
      uVar21 = (uint)*(byte *)(lVar6 + iVar11);
    } while (iVar18 != iVar13);
  }
  if (uVar21 != 0) {
LAB_0070ac59:
    if (uVar31 != 0) goto LAB_0070b700;
LAB_0070ac65:
    local_e0 = (byte *)0x0;
    local_d0 = pbVar20;
LAB_0070aca8:
    local_e0 = (byte *)((long)local_e0 + 1);
    uVar29 = local_e8;
    if (local_f8 == 0xffffffffffffffff) {
      bVar1 = *pbVar20;
      pbVar15 = pbVar20;
      uVar30 = local_e8;
      uVar31 = uVar26;
      if (bVar1 != 0) {
LAB_0070b398:
        uVar31 = uVar26;
        uVar27 = *(uint *)(uVar7 + (ulong)bVar1 * 4);
        pbVar20 = pbVar15 + 1;
        if ((long)(int)uVar27 < 0) {
          puVar17 = (uint *)(lVar5 - (int)uVar27);
LAB_0070b3b8:
          do {
            uVar27 = *puVar17;
            bVar1 = (byte)puVar17[1];
            while( true ) {
              uVar29 = (ulong)bVar1;
              if ((int)uVar27 < 0) break;
              if (uVar29 == 0) {
LAB_0070b588:
                pbVar20 = pbVar20 + uVar29;
                goto LAB_0070b473;
              }
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5) == pbVar15[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar29 == uVar23) goto LAB_0070b588;
              }
              puVar17 = (uint *)((long)puVar17 + uVar29 + 5);
              uVar26 = bVar1 + 1 & 3;
              if (uVar26 == 0) goto LAB_0070b3b8;
              puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar26));
              uVar27 = *puVar17;
              bVar1 = (byte)puVar17[1];
            }
            if (uVar29 == 0) {
LAB_0070b460:
              lVar28 = 0;
              goto LAB_0070b463;
            }
            uVar23 = 0;
            while( true ) {
              bVar1 = *(byte *)((long)puVar17 + uVar23 + 5);
              if (bVar1 != pbVar15[uVar23 + 1]) break;
              uVar23 = uVar23 + 1;
              if (uVar29 == uVar23) goto LAB_0070b460;
            }
            if (bVar1 <= pbVar15[uVar23 + 1]) {
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5 + uVar29) == pbVar15[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar29 == uVar23) goto LAB_0070b52e;
              }
              if ((uVar29 == uVar23) ||
                 (pbVar20[uVar23] <= *(byte *)((long)puVar17 + uVar23 + uVar29 + 5)))
              goto LAB_0070b52e;
            }
            puVar17 = (uint *)((long)puVar17 +
                              (uVar29 * 2 - (ulong)((int)(uVar29 * 2) + 1U & 3)) + 9);
          } while( true );
        }
        goto LAB_0070b473;
      }
joined_r0x0070b642:
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
      goto joined_r0x0070b839;
      goto LAB_0070acdf;
    }
    if (local_50 != local_f8) {
      pbVar20 = local_c0;
      uVar29 = local_f8;
      if (local_f8 < local_50) {
LAB_0070ada8:
        pbVar15 = pbVar20 + 1;
        uVar26 = *(uint *)(uVar7 + (ulong)*pbVar20 * 4);
        if ((long)(int)uVar26 < 0) {
          puVar17 = (uint *)(lVar5 - (int)uVar26);
LAB_0070add0:
          do {
            uVar26 = *puVar17;
            bVar1 = (byte)puVar17[1];
            while( true ) {
              uVar30 = (ulong)bVar1;
              if ((int)uVar26 < 0) break;
              if (uVar30 == 0) {
LAB_0070b110:
                pbVar15 = pbVar15 + uVar30;
                goto LAB_0070ae8a;
              }
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5) == pbVar20[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar30 == uVar23) goto LAB_0070b110;
              }
              puVar17 = (uint *)((long)puVar17 + uVar30 + 5);
              uVar26 = bVar1 + 1 & 3;
              if (uVar26 == 0) goto LAB_0070add0;
              puVar17 = (uint *)((long)puVar17 + (4 - (ulong)uVar26));
              uVar26 = *puVar17;
              bVar1 = (byte)puVar17[1];
            }
            if (uVar30 == 0) {
LAB_0070ae78:
              lVar28 = 0;
              goto LAB_0070ae7a;
            }
            uVar23 = 0;
            while( true ) {
              bVar1 = *(byte *)((long)puVar17 + uVar23 + 5);
              if (bVar1 != pbVar20[uVar23 + 1]) break;
              uVar23 = uVar23 + 1;
              if (uVar30 == uVar23) goto LAB_0070ae78;
            }
            if (bVar1 <= pbVar20[uVar23 + 1]) {
              uVar23 = 0;
              while (*(byte *)((long)puVar17 + uVar23 + 5 + uVar30) == pbVar20[uVar23 + 1]) {
                uVar23 = uVar23 + 1;
                if (uVar30 == uVar23) goto LAB_0070aeee;
              }
              if ((uVar30 == uVar23) ||
                 (pbVar15[uVar23] <= *(byte *)((long)puVar17 + uVar23 + uVar30 + 5)))
              goto LAB_0070aeee;
            }
            puVar17 = (uint *)((long)puVar17 +
                              (uVar30 * 2 - (ulong)((int)(uVar30 * 2) + 1U & 3)) + 9);
          } while( true );
        }
        goto LAB_0070ae8a;
      }
      goto LAB_0070ae9e;
    }
    if (local_68 < local_e8) {
      local_f8 = 0xffffffffffffffff;
      uVar31 = local_a8;
      goto LAB_0070acdf;
    }
joined_r0x0070b839:
    local_e8 = uVar29;
    if (uVar21 != 0) {
      return 1;
    }
    if ((local_108 == 0) && (iVar13 = strcmp(__s1,__s2), iVar13 == 0)) {
      return 0;
    }
    local_108 = local_108 + 1;
    uVar14 = (ulong)local_3e;
    if (uVar22 == local_108) {
      return 0;
    }
    goto LAB_0070ab05;
  }
  goto LAB_0070abd0;
LAB_0070b2fe:
  uVar23 = 0;
  uVar30 = uVar23;
  if (*(byte *)((long)puVar17 + 5) == pbVar15[1]) {
    do {
      uVar23 = uVar30 + 1;
      lVar9 = uVar30 + 2;
      lVar28 = uVar30 + 6;
      uVar30 = uVar23;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar15[lVar9]);
  }
  lVar28 = 0;
  do {
    lVar10 = uVar23 + 1;
    lVar9 = uVar23 + 5;
    uVar23 = uVar23 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar15[lVar10] - (uint)*(byte *)((long)puVar17 + lVar9));
  } while (uVar23 < uVar29);
LAB_0070b223:
  pbVar19 = pbVar19 + uVar29;
  uVar16 = *(uint *)(uVar8 + (lVar28 - (int)uVar16) * 4);
LAB_0070b233:
  uVar29 = local_a0 + 1;
  uVar12 = uVar16 & 0xffffff;
  if (local_a0 == 0) {
    uVar27 = (int)uVar16 >> 0x18;
  }
  local_3e = (byte)uVar27;
  if ((*(byte *)(lVar4 + (int)((uVar16 >> 0x18) * uVar2 + iVar13)) & 2) == 0) {
    uVar27 = uVar12;
    if (local_a0 <= local_f0) goto LAB_0070b2a3;
    goto LAB_0070b5d8;
  }
  bVar1 = *pbVar19;
  pbVar15 = pbVar19;
  local_a0 = uVar29;
  if (bVar1 == 0) goto LAB_0070b278;
  goto LAB_0070b158;
LAB_0070b52e:
  uVar24 = 0;
  uVar23 = uVar24;
  if (*(byte *)((long)puVar17 + 5) == pbVar15[1]) {
    do {
      uVar24 = uVar23 + 1;
      lVar9 = uVar23 + 2;
      lVar28 = uVar23 + 6;
      uVar23 = uVar24;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar15[lVar9]);
  }
  lVar28 = 0;
  do {
    lVar10 = uVar24 + 1;
    lVar9 = uVar24 + 5;
    uVar24 = uVar24 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar15[lVar10] - (uint)*(byte *)((long)puVar17 + lVar9));
  } while (uVar24 < uVar29);
LAB_0070b463:
  pbVar20 = pbVar20 + uVar29;
  uVar27 = *(uint *)(uVar8 + (lVar28 - (int)uVar27) * 4);
LAB_0070b473:
  uVar29 = uVar30 + 1;
  uVar26 = uVar27 & 0xffffff;
  local_68 = uVar30;
  if (((*(byte *)(lVar4 + (int)((uVar27 >> 0x18) * uVar2 + iVar13)) & 2) == 0) ||
     (bVar1 = *pbVar20, pbVar15 = pbVar20, uVar30 = uVar29, local_68 = uVar29, bVar1 == 0))
  goto joined_r0x0070b642;
  goto LAB_0070b398;
LAB_0070aeee:
  uVar24 = 0;
  uVar23 = uVar24;
  if (pbVar20[1] == *(byte *)((long)puVar17 + 5)) {
    do {
      uVar24 = uVar23 + 1;
      lVar9 = uVar23 + 2;
      lVar28 = uVar23 + 6;
      uVar23 = uVar24;
    } while (*(byte *)((long)puVar17 + lVar28) == pbVar20[lVar9]);
  }
  lVar28 = 0;
  do {
    lVar10 = uVar24 + 1;
    lVar9 = uVar24 + 5;
    uVar24 = uVar24 + 1;
    lVar28 = lVar28 * 0x100 +
             (long)(int)((uint)pbVar20[lVar10] - (uint)*(byte *)((long)puVar17 + lVar9));
  } while (uVar24 < uVar30);
LAB_0070ae7a:
  pbVar15 = pbVar15 + uVar30;
  uVar26 = *(uint *)(uVar8 + (lVar28 - (int)uVar26) * 4);
LAB_0070ae8a:
  uVar29 = uVar29 + 1;
  pbVar20 = pbVar15;
  if (uVar29 == local_50) goto code_r0x0070ae97;
  goto LAB_0070ada8;
code_r0x0070ae97:
  uVar26 = uVar26 & 0xffffff;
LAB_0070ae9e:
  local_50 = local_50 - 1;
  pbVar20 = local_d0;
  uVar31 = uVar26;
LAB_0070acdf:
  uVar26 = uVar31 + 1;
  uVar31 = (uint)*(byte *)(lVar6 + (int)uVar31);
  if (local_108 != 0) {
    iVar18 = 0;
    do {
      iVar11 = uVar26 + uVar31;
      iVar18 = iVar18 + 1;
      uVar26 = iVar11 + 1;
      uVar31 = (uint)*(byte *)(lVar6 + iVar11);
    } while (iVar18 != iVar13);
  }
  if (uVar31 != 0) goto LAB_0070ad44;
  goto LAB_0070aca8;
LAB_0070ad44:
  if (uVar21 == 0) {
    return -1;
  }
  bVar32 = (*(byte *)(lVar4 + local_108 + uVar14 * uVar22) & 4) != 0;
  if (((byte *)local_d8 != local_e0) && (bVar32)) {
    return (-(uint)(local_e0 < local_d8) & 2) - 1;
  }
  lVar28 = (long)(int)uVar26;
  uVar30 = (ulong)(int)uVar12;
  pbVar15 = (byte *)(lVar6 + lVar28);
  uVar29 = uVar30;
  do {
    uVar16 = uVar31;
    uVar27 = uVar21;
    uVar12 = (uint)uVar29;
    if (pbVar15[uVar30 - lVar28] != *pbVar15) {
      iVar18 = (uint)pbVar15[uVar30 - lVar28] - (uint)*pbVar15;
      uVar21 = uVar27;
      uVar31 = uVar16;
      if (iVar18 != 0) {
        return iVar18;
      }
      goto LAB_0070b6db;
    }
    uVar21 = uVar27 - 1;
    uVar12 = uVar12 + 1;
    uVar29 = (ulong)uVar12;
    uVar26 = uVar26 + 1;
    pbVar15 = pbVar15 + 1;
    uVar31 = uVar16 - 1;
  } while ((0 < (int)uVar21) && (0 < (int)uVar31));
  if ((uVar27 != uVar16) && (bVar32)) {
    return uVar27 - uVar16;
  }
LAB_0070b6db:
  if (uVar21 == 0) goto LAB_0070ab97;
  local_d8 = 0;
  if (uVar31 == 0) goto LAB_0070ac65;
LAB_0070b700:
  local_e0 = (byte *)0x0;
  goto LAB_0070ad44;
}

