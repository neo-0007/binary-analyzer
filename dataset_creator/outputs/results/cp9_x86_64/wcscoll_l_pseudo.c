
int wcscoll_l(wchar_t *__s1,wchar_t *__s2,__locale_t __loc)

{
  byte bVar1;
  uint uVar2;
  wchar_t wVar3;
  __locale_data *p_Var4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  wchar_t *pwVar18;
  ulong uVar19;
  int iVar20;
  uint *puVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  wchar_t *pwVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  uint *puVar29;
  ulong uVar30;
  wchar_t *pwVar31;
  uint uVar32;
  bool bVar33;
  ulong local_108;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  wchar_t *local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  wchar_t *local_a8;
  uint local_9c;
  uint local_90;
  int local_8c;
  wchar_t *local_88;
  wchar_t *local_80;
  byte local_5d;
  
  p_Var4 = __loc->__locales[3];
  uVar2 = *(uint *)(p_Var4 + 0x40);
  uVar22 = (ulong)uVar2;
  if (uVar22 == 0) {
    iVar10 = wcscmp(__s1,__s2);
    return iVar10;
  }
  if ((*__s1 == L'\0') || (*__s2 == L'\0')) {
    return ((*__s1 != L'\0') - 1) + (uint)(*__s2 == L'\0');
  }
  lVar5 = *(long *)(p_Var4 + 0x48);
  uVar6 = *(ulong *)(p_Var4 + 0x88);
  uVar7 = *(ulong *)(p_Var4 + 0x90);
  uVar8 = *(ulong *)(p_Var4 + 0x98);
  uVar9 = *(ulong *)(p_Var4 + 0xa0);
  if ((uVar6 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((uintptr_t) table) % __alignof__ (table[0]) == 0","../string/strcoll_l.c",0x11f,
                  "__wcscoll_l");
  }
  if ((uVar7 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((uintptr_t) weights) % __alignof__ (weights[0]) == 0","../string/strcoll_l.c",
                  0x120,"__wcscoll_l");
  }
  if ((uVar8 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((uintptr_t) extra) % __alignof__ (extra[0]) == 0","../string/strcoll_l.c",0x121,
                  "__wcscoll_l");
  }
  if ((uVar9 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("((uintptr_t) indirect) % __alignof__ (indirect[0]) == 0","../string/strcoll_l.c",
                  0x122,"__wcscoll_l");
  }
  local_108 = 0;
  uVar24 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_5d = 0;
LAB_0074d876:
  iVar10 = 0;
  uVar19 = 0;
  local_b8 = 0;
  iVar28 = (int)local_108;
  local_b0 = 0;
  bVar1 = *(byte *)(lVar5 + local_108 + uVar24 * uVar22);
  uVar24 = 0;
  local_e0 = 0xffffffffffffffff;
  local_f8 = 0xffffffffffffffff;
  local_8c = 0;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffffffffffff;
  pwVar31 = __s2;
  pwVar18 = __s1;
  do {
    iVar26 = (int)uVar24;
    uVar12 = (uint)uVar19;
    if (iVar10 == 0) {
      local_c0 = 0;
      local_c8 = pwVar18;
      do {
        local_c0 = local_c0 + 1;
        uVar12 = (uint)uVar19;
        if (local_f0 == 0xffffffffffffffff) {
          uVar32 = (uint)local_5d;
          wVar3 = *pwVar18;
          uVar11 = uVar12;
          uVar27 = local_d8;
          while (uVar30 = uVar27, uVar14 = local_b0, wVar3 != L'\0') {
            uVar11 = (uint)uVar19;
            pwVar25 = pwVar18 + 1;
            uVar13 = __collidx_table_lookup(uVar6,wVar3);
            if ((int)uVar13 < 0) {
              puVar21 = (uint *)(uVar8 + (long)(int)-uVar13 * 4);
LAB_0074de69:
              uVar13 = *puVar21;
              uVar19 = (ulong)(int)puVar21[1];
              puVar29 = puVar21 + 2;
              if ((int)uVar13 < 0) goto LAB_0074ded1;
              while( true ) {
                uVar30 = 0xfffffffffffffffe;
                if (uVar19 != 0xffffffffffffffff) {
                  uVar30 = uVar19;
                }
                uVar14 = uVar19;
                if (uVar19 == 0) break;
                uVar17 = 0;
                do {
                  if (puVar21[uVar17 + 2] != pwVar18[uVar17 + 1]) break;
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar30);
                uVar14 = uVar19 * 4;
                if (uVar17 == uVar19) break;
                while( true ) {
                  puVar21 = (uint *)(uVar14 + (long)puVar29);
                  uVar13 = *puVar21;
                  uVar19 = (ulong)(int)puVar21[1];
                  puVar29 = puVar21 + 2;
                  if (-1 < (int)uVar13) break;
LAB_0074ded1:
                  lVar15 = 0;
                  if (uVar19 != 1) {
                    do {
                      if (puVar21[lVar15 + 2] != pwVar18[lVar15 + 1]) {
                        puVar21 = puVar29 + uVar19 * 2;
                        goto LAB_0074de69;
                      }
                      lVar15 = lVar15 + 1;
                    } while (uVar19 - 1 != lVar15);
                  }
                  wVar3 = pwVar18[uVar19];
                  uVar14 = uVar19 * 8;
                  if (((int)puVar29[uVar19 - 1] <= wVar3) &&
                     (wVar3 <= (int)puVar29[uVar19 * 2 + -1])) {
                    pwVar25 = pwVar25 + uVar19;
                    uVar13 = *(uint *)(uVar9 + ((long)(wVar3 - puVar29[uVar19 - 1]) +
                                               (long)(int)-uVar13) * 4);
                    goto LAB_0074df3f;
                  }
                }
              }
              pwVar25 = (wchar_t *)((long)pwVar25 + uVar14);
            }
LAB_0074df3f:
            local_b0 = uVar27 + 1;
            uVar12 = uVar13 & 0xffffff;
            if (uVar27 == 0) {
              uVar32 = (int)uVar13 >> 0x18;
            }
            local_5d = (byte)uVar32;
            uVar30 = local_b0;
            pwVar18 = pwVar25;
            uVar14 = uVar27;
            if ((*(byte *)(lVar5 + (int)((uVar13 >> 0x18) * uVar2 + iVar28)) & 2) == 0) break;
            uVar19 = (ulong)uVar12;
            uVar27 = local_b0;
            wVar3 = *pwVar25;
          }
          local_b0 = uVar14;
          uVar32 = uVar12;
          if (local_d8 < local_b0) {
            local_e8 = local_b0;
            if ((local_b0 < uVar30) &&
               (local_e8 = local_b0 - 1, uVar32 = uVar11, local_90 = uVar12, local_e8 <= local_d8))
            {
              local_88 = local_c8;
              local_f0 = local_d8;
              local_c8 = pwVar18;
            }
            else {
              local_88 = local_c8;
              local_e8 = local_e8 - 1;
              local_f0 = local_d8;
              local_c8 = pwVar18;
            }
          }
          else if ((local_b0 == uVar30) || (local_b0 < local_d8)) {
            iVar10 = 0;
            local_f0 = local_d8;
            local_d8 = uVar30;
            break;
          }
        }
        else {
          uVar30 = local_d8;
          if (local_e8 == local_f0) {
            if (local_d8 <= local_b0) {
              uVar12 = 0;
              iVar10 = 0;
              break;
            }
            local_f0 = 0xffffffffffffffff;
            uVar32 = local_90;
          }
          else {
            uVar19 = local_f0;
            pwVar18 = local_88;
            if (local_f0 < local_e8) {
              do {
                pwVar25 = pwVar18 + 1;
                uVar12 = __collidx_table_lookup(uVar6);
                if ((int)uVar12 < 0) {
                  puVar21 = (uint *)(uVar8 + (long)(int)-uVar12 * 4);
LAB_0074dce2:
                  uVar12 = *puVar21;
                  uVar27 = (ulong)(int)puVar21[1];
                  puVar29 = puVar21 + 2;
                  if ((int)uVar12 < 0) goto LAB_0074dd47;
                  while( true ) {
                    uVar14 = 0xfffffffffffffffe;
                    if (uVar27 != 0xffffffffffffffff) {
                      uVar14 = uVar27;
                    }
                    uVar17 = uVar27;
                    if (uVar27 == 0) break;
                    uVar16 = 0;
                    do {
                      if (puVar21[uVar16 + 2] != pwVar18[uVar16 + 1]) break;
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < uVar14);
                    uVar17 = uVar27 * 4;
                    if (uVar16 == uVar27) break;
                    while( true ) {
                      puVar21 = (uint *)(uVar17 + (long)puVar29);
                      uVar12 = *puVar21;
                      uVar27 = (ulong)(int)puVar21[1];
                      puVar29 = puVar21 + 2;
                      if (-1 < (int)uVar12) break;
LAB_0074dd47:
                      lVar15 = 0;
                      if (uVar27 != 1) {
                        do {
                          if (puVar21[lVar15 + 2] != pwVar18[lVar15 + 1]) {
                            puVar21 = puVar29 + uVar27 * 2;
                            goto LAB_0074dce2;
                          }
                          lVar15 = lVar15 + 1;
                        } while (lVar15 != uVar27 - 1);
                      }
                      wVar3 = pwVar18[uVar27];
                      uVar17 = uVar27 * 8;
                      if (((int)puVar29[uVar27 - 1] <= wVar3) &&
                         (wVar3 <= (int)puVar29[uVar27 * 2 + -1])) {
                        pwVar25 = pwVar25 + uVar27;
                        uVar12 = *(uint *)(uVar9 + ((long)(wVar3 - puVar29[uVar27 - 1]) +
                                                   (long)(int)-uVar12) * 4);
                        goto LAB_0074ddbf;
                      }
                    }
                  }
                  pwVar25 = (wchar_t *)((long)pwVar25 + uVar17);
                }
LAB_0074ddbf:
                uVar19 = uVar19 + 1;
                pwVar18 = pwVar25;
              } while (uVar19 != local_e8);
              uVar12 = uVar12 & 0xffffff;
            }
            local_e8 = local_e8 - 1;
            pwVar18 = local_c8;
            uVar32 = uVar12;
          }
        }
        local_d8 = uVar30;
        uVar19 = (ulong)(uVar32 + 1);
        iVar10 = *(int *)(uVar7 + (long)(int)uVar32 * 4);
        if (local_108 != 0) {
          iVar20 = 0;
          do {
            iVar10 = (int)uVar19 + iVar10;
            iVar20 = iVar20 + 1;
            uVar19 = (ulong)(iVar10 + 1);
            iVar10 = *(int *)(uVar7 + (long)iVar10 * 4);
          } while (iVar20 != iVar28);
        }
        uVar12 = (uint)uVar19;
      } while (iVar10 == 0);
    }
    else {
      local_c0 = 0;
    }
    if (local_8c == 0) {
      local_c8 = (wchar_t *)0x0;
      local_a8 = pwVar31;
      do {
        local_c8 = (wchar_t *)((long)local_c8 + 1);
        uVar11 = (uint)uVar24;
        if (local_e0 == 0xffffffffffffffff) {
          wVar3 = *pwVar31;
          uVar32 = uVar11;
          uVar19 = local_d0;
          while (uVar27 = uVar19, wVar3 != L'\0') {
            uVar32 = (uint)uVar24;
            pwVar25 = pwVar31 + 1;
            uVar13 = __collidx_table_lookup(uVar6);
            if ((int)uVar13 < 0) {
              puVar21 = (uint *)(uVar8 + (long)(int)-uVar13 * 4);
LAB_0074e085:
              uVar13 = *puVar21;
              uVar24 = (ulong)(int)puVar21[1];
              puVar29 = puVar21 + 2;
              if ((int)uVar13 < 0) goto LAB_0074e0e7;
              while( true ) {
                uVar27 = 0xfffffffffffffffe;
                if (uVar24 != 0xffffffffffffffff) {
                  uVar27 = uVar24;
                }
                uVar30 = uVar24;
                if (uVar24 == 0) break;
                uVar14 = 0;
                do {
                  if (puVar21[uVar14 + 2] != pwVar31[uVar14 + 1]) break;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar27);
                uVar30 = uVar24 * 4;
                if (uVar14 == uVar24) break;
                while( true ) {
                  puVar21 = (uint *)(uVar30 + (long)puVar29);
                  uVar13 = *puVar21;
                  uVar24 = (ulong)(int)puVar21[1];
                  puVar29 = puVar21 + 2;
                  if (-1 < (int)uVar13) break;
LAB_0074e0e7:
                  lVar15 = 0;
                  if (uVar24 != 1) {
                    do {
                      if (puVar21[lVar15 + 2] != pwVar31[lVar15 + 1]) {
                        puVar21 = puVar29 + uVar24 * 2;
                        goto LAB_0074e085;
                      }
                      lVar15 = lVar15 + 1;
                    } while (uVar24 - 1 != lVar15);
                  }
                  wVar3 = pwVar31[uVar24];
                  uVar30 = uVar24 * 8;
                  if (((int)puVar29[uVar24 - 1] <= wVar3) &&
                     (wVar3 <= (int)puVar29[uVar24 * 2 + -1])) {
                    pwVar25 = pwVar25 + uVar24;
                    uVar13 = *(uint *)(uVar9 + ((long)(wVar3 - puVar29[uVar24 - 1]) +
                                               (long)(int)-uVar13) * 4);
                    goto LAB_0074e15e;
                  }
                }
              }
              pwVar25 = (wchar_t *)((long)pwVar25 + uVar30);
            }
LAB_0074e15e:
            uVar27 = uVar19 + 1;
            uVar11 = uVar13 & 0xffffff;
            local_b8 = uVar19;
            pwVar31 = pwVar25;
            if ((*(byte *)(lVar5 + (int)(iVar28 + (uVar13 >> 0x18) * uVar2)) & 2) == 0) break;
            uVar24 = (ulong)uVar11;
            uVar19 = uVar27;
            local_b8 = uVar27;
            wVar3 = *pwVar25;
          }
          if (local_d0 < local_b8) {
            uVar13 = uVar11;
            local_f8 = local_b8;
            if ((local_b8 < uVar27) &&
               (local_f8 = local_b8 - 1, uVar13 = uVar32, local_9c = uVar11, local_f8 <= local_d0))
            {
              local_80 = local_a8;
              local_e0 = local_d0;
              local_d0 = uVar27;
              local_a8 = pwVar31;
            }
            else {
              local_80 = local_a8;
              local_f8 = local_f8 - 1;
              local_e0 = local_d0;
              uVar32 = uVar13;
              local_d0 = uVar27;
              local_a8 = pwVar31;
            }
          }
          else if ((local_b8 == uVar27) ||
                  (bVar33 = local_b8 < local_d0, uVar32 = uVar11, local_d0 = uVar27, bVar33))
          goto LAB_0074e3e9;
        }
        else if (local_f8 == local_e0) {
          uVar27 = local_d0;
          if (local_d0 <= local_b8) {
LAB_0074e3e9:
            local_d0 = uVar27;
            if (iVar10 != 0) {
              return 1;
            }
            if ((local_108 == 0) && (iVar10 = wcscmp(__s1,__s2), iVar10 == 0)) {
              return 0;
            }
            local_108 = local_108 + 1;
            uVar24 = (ulong)local_5d;
            if (uVar22 == local_108) {
              return 0;
            }
            goto LAB_0074d876;
          }
          local_e0 = 0xffffffffffffffff;
          uVar32 = local_9c;
        }
        else {
          uVar24 = local_e0;
          pwVar31 = local_80;
          if (local_e0 < local_f8) {
            do {
              pwVar25 = pwVar31 + 1;
              uVar11 = __collidx_table_lookup(uVar6);
              if ((int)uVar11 < 0) {
                puVar21 = (uint *)(uVar8 + (long)(int)-uVar11 * 4);
LAB_0074db63:
                uVar11 = *puVar21;
                uVar19 = (ulong)(int)puVar21[1];
                puVar29 = puVar21 + 2;
                if ((int)uVar11 < 0) goto LAB_0074dbc7;
                while( true ) {
                  uVar27 = 0xfffffffffffffffe;
                  if (uVar19 != 0xffffffffffffffff) {
                    uVar27 = uVar19;
                  }
                  uVar30 = uVar19;
                  if (uVar19 == 0) break;
                  uVar14 = 0;
                  do {
                    if (puVar21[uVar14 + 2] != pwVar31[uVar14 + 1]) break;
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < uVar27);
                  uVar30 = uVar19 * 4;
                  if (uVar19 == uVar14) break;
                  while( true ) {
                    puVar21 = (uint *)(uVar30 + (long)puVar29);
                    uVar11 = *puVar21;
                    uVar19 = (ulong)(int)puVar21[1];
                    puVar29 = puVar21 + 2;
                    if (-1 < (int)uVar11) break;
LAB_0074dbc7:
                    lVar15 = 0;
                    if (uVar19 != 1) {
                      do {
                        if (puVar21[lVar15 + 2] != pwVar31[lVar15 + 1]) {
                          puVar21 = puVar29 + uVar19 * 2;
                          goto LAB_0074db63;
                        }
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != uVar19 - 1);
                    }
                    wVar3 = pwVar31[uVar19];
                    uVar30 = uVar19 * 8;
                    if (((int)puVar29[uVar19 - 1] <= wVar3) &&
                       (wVar3 <= (int)puVar29[uVar19 * 2 + -1])) {
                      pwVar25 = pwVar25 + uVar19;
                      uVar11 = *(uint *)(uVar9 + ((long)(wVar3 - puVar29[uVar19 - 1]) +
                                                 (long)(int)-uVar11) * 4);
                      goto LAB_0074dc3f;
                    }
                  }
                }
                pwVar25 = (wchar_t *)((long)pwVar25 + uVar30);
              }
LAB_0074dc3f:
              uVar24 = uVar24 + 1;
              pwVar31 = pwVar25;
            } while (uVar24 != local_f8);
            uVar11 = uVar11 & 0xffffff;
          }
          local_f8 = local_f8 - 1;
          pwVar31 = local_a8;
          uVar32 = uVar11;
        }
        uVar24 = (ulong)(uVar32 + 1);
        local_8c = *(int *)(uVar7 + (long)(int)uVar32 * 4);
        if (local_108 != 0) {
          iVar26 = 0;
          do {
            local_8c = (int)uVar24 + local_8c;
            iVar26 = iVar26 + 1;
            uVar24 = (ulong)(local_8c + 1);
            local_8c = *(int *)(uVar7 + (long)local_8c * 4);
          } while (iVar26 != iVar28);
        }
        iVar26 = (int)uVar24;
      } while (local_8c == 0);
    }
    else {
      local_c8 = (wchar_t *)0x0;
    }
    if (iVar10 == 0) {
      return -1;
    }
    bVar33 = (bVar1 & 4) != 0;
    if (((wchar_t *)local_c0 != local_c8) && (bVar33)) {
      if (local_c8 < local_c0) {
        return 1;
      }
      return -1;
    }
    uVar30 = (ulong)(int)(uVar12 + 1);
    uVar27 = (ulong)(iVar26 + 1);
    do {
      iVar23 = iVar10;
      iVar20 = local_8c;
      iVar10 = *(int *)((uVar7 - 4) + uVar30 * 4);
      iVar26 = *(int *)((uVar7 - 4) + uVar27 * 4);
      if (iVar10 != iVar26) {
        return iVar10 - iVar26;
      }
      iVar10 = iVar23 + -1;
      uVar19 = uVar30 & 0xffffffff;
      uVar24 = uVar27 & 0xffffffff;
      uVar30 = uVar30 + 1;
      local_8c = iVar20 + -1;
      uVar27 = uVar27 + 1;
    } while ((0 < iVar10) && (0 < local_8c));
    if ((iVar23 != iVar20) && (bVar33)) {
      return iVar23 - iVar20;
    }
  } while( true );
}

