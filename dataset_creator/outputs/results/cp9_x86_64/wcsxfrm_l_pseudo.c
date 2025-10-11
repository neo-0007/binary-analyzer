
size_t wcsxfrm_l(wchar_t *__s1,wchar_t *__s2,size_t __n,__locale_t __loc)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  __locale_data *p_Var3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  wchar_t wVar7;
  int iVar8;
  wchar_t wVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  wchar_t *pwVar14;
  int iVar15;
  wchar_t wVar16;
  int iVar17;
  ulong uVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  long lVar22;
  wchar_t *pwVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  wchar_t *pwVar33;
  long lVar34;
  byte *pbVar35;
  long in_FS_OFFSET;
  bool bVar36;
  undefined1 local_40e8 [16376];
  undefined *local_f0;
  undefined1 auStack_e8 [8];
  ulong local_e0;
  long local_d8;
  wchar_t *local_d0;
  long local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  ulong local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  wchar_t *local_70;
  ulong local_68;
  wchar_t *local_60;
  byte *local_58;
  ulong local_50;
  long local_40;
  undefined1 *puVar27;
  
  puVar28 = auStack_e8;
  puVar25 = auStack_e8;
  local_80 = __s1;
  local_98 = __s2;
  local_78 = (wchar_t *)__n;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var3 = __loc->__locales[3];
  local_88 = (ulong)*(uint *)(p_Var3 + 0x40);
  if ((ulong)*(uint *)(p_Var3 + 0x40) == 0) {
    local_f0 = (undefined *)0x74e79f;
    local_60 = (wchar_t *)wcslen(__s2);
    puVar28 = auStack_e8;
    pwVar33 = local_60;
    if (local_78 != (wchar_t *)0x0) {
      pwVar33 = local_78;
      if ((wchar_t *)((long)local_60 + 1) <= local_78) {
        pwVar33 = (wchar_t *)((long)local_60 + 1);
      }
      local_f0 = (undefined *)0x74e7cc;
      wcpncpy(local_80,local_98,(size_t)pwVar33);
      puVar28 = auStack_e8;
      pwVar33 = local_60;
    }
  }
  else {
    if (*__s2 != L'\0') {
      uVar4 = *(ulong *)(p_Var3 + 0x90);
      local_c8 = *(long *)(p_Var3 + 0x48);
      local_68 = *(ulong *)(p_Var3 + 0x98);
      local_50 = *(ulong *)(p_Var3 + 0x88);
      local_70 = *(wchar_t **)(p_Var3 + 0xa0);
      if ((*(ulong *)(p_Var3 + 0x88) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = (undefined *)0x74e7f5;
        __assert_fail("((uintptr_t) l_data.table) % __alignof__ (l_data.table[0]) == 0",
                      "../string/strxfrm_l.c",0x2c0,__PRETTY_FUNCTION___0);
      }
      if ((uVar4 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = (undefined *)0x74e814;
        __assert_fail("((uintptr_t) l_data.weights) % __alignof__ (l_data.weights[0]) == 0",
                      "../string/strxfrm_l.c",0x2c1,__PRETTY_FUNCTION___0);
      }
      if ((*(ulong *)(p_Var3 + 0x98) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = (undefined *)0x74e833;
        __assert_fail("((uintptr_t) l_data.extra) % __alignof__ (l_data.extra[0]) == 0",
                      "../string/strxfrm_l.c",0x2c2,__PRETTY_FUNCTION___0);
      }
      if (((ulong)*(wchar_t **)(p_Var3 + 0xa0) & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        local_f0 = &UNK_0074e852;
        __assert_fail("((uintptr_t) l_data.indirect) % __alignof__ (l_data.indirect[0]) == 0",
                      "../string/strxfrm_l.c",0x2c3,__PRETTY_FUNCTION___0);
      }
      puVar6 = auStack_e8;
      while (puVar25 != local_40e8) {
        puVar28 = puVar6 + -0x1000;
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        puVar25 = puVar6 + -0x1000;
        puVar6 = puVar6 + -0x1000;
      }
      puVar26 = puVar28 + -0x10;
      *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
      uVar10 = (ulong)(puVar28 + -1) & 0xfffffffffffffff0;
      puVar27 = puVar28 + -0x10;
      puVar6 = puVar28 + -0x10;
      while (puVar27 != puVar28 + -0x1010) {
        puVar26 = puVar6 + -0x1000;
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        puVar27 = puVar6 + -0x1000;
        puVar6 = puVar6 + -0x1000;
      }
      *(undefined8 *)(puVar26 + -8) = *(undefined8 *)(puVar26 + -8);
      local_58 = (byte *)((ulong)(puVar26 + -1) & 0xfffffffffffffff0);
      pwVar33 = local_98;
      uVar31 = 0;
LAB_0074e69c:
      wVar7 = *pwVar33;
      pwVar20 = pwVar33 + 1;
      *(undefined8 *)(puVar26 + -0x18) = 0x74e6ab;
      wVar7 = __collidx_table_lookup(local_50,wVar7);
      if (wVar7 < L'\0') {
        pwVar19 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074e6c1:
        wVar7 = *pwVar19;
        uVar18 = (ulong)pwVar19[1];
        pwVar23 = pwVar19 + 2;
        if (wVar7 < L'\0') goto LAB_0074e727;
        while( true ) {
          uVar13 = 0xfffffffffffffffe;
          if (uVar18 != 0xffffffffffffffff) {
            uVar13 = uVar18;
          }
          uVar12 = uVar18;
          if (uVar18 == 0) break;
          uVar11 = 0;
          do {
            if (pwVar19[uVar11 + 2] != pwVar33[uVar11 + 1]) break;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar13);
          uVar12 = uVar18 * 4;
          if (uVar18 == uVar11) break;
          while( true ) {
            pwVar19 = (wchar_t *)(uVar12 + (long)pwVar23);
            wVar7 = *pwVar19;
            uVar18 = (ulong)pwVar19[1];
            pwVar23 = pwVar19 + 2;
            if (L'\xffffffff' < wVar7) break;
LAB_0074e727:
            lVar24 = 0;
            if (uVar18 != 1) {
              do {
                if (pwVar19[lVar24 + 2] != pwVar33[lVar24 + 1]) {
                  pwVar19 = pwVar23 + uVar18 * 2;
                  goto LAB_0074e6c1;
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 != uVar18 - 1);
            }
            wVar9 = pwVar33[uVar18];
            uVar12 = uVar18 * 8;
            if ((pwVar23[uVar18 - 1] <= wVar9) && (wVar9 <= pwVar23[uVar18 * 2 + -1])) {
              pwVar20 = pwVar20 + uVar18;
              wVar7 = local_70[(long)(wVar9 - pwVar23[uVar18 - 1]) + (long)-wVar7];
              goto LAB_0074e89c;
            }
          }
        }
        pwVar20 = (wchar_t *)((long)pwVar20 + uVar12);
      }
LAB_0074e89c:
      wVar9 = *pwVar20;
      *(wchar_t *)(uVar10 + uVar31 * 4) = wVar7 & 0xffffff;
      local_58[uVar31] = (byte)((uint)wVar7 >> 0x18);
      local_b0 = uVar31 + 1;
      if (wVar9 != L'\0') goto code_r0x0074e8c1;
      lVar24 = uVar31 * 4 + -4;
      local_58[local_b0] = 0;
      local_d0 = (wchar_t *)(uVar10 + lVar24);
      local_c0 = (wchar_t *)(uVar10 + 4 + lVar24);
      local_a0 = (wchar_t *)0x0;
      local_d8 = *local_58 * local_88 + local_c8;
      local_50 = 0;
      pwVar33 = (wchar_t *)(uVar10 - 4);
      pwVar20 = local_a0;
      do {
        local_a0 = pwVar20;
        uVar30 = (uint)*(byte *)(local_d8 + local_50);
        local_60 = local_a0;
        if ((*(byte *)(local_d8 + local_50) & 4) == 0) {
          uVar10 = 0xffffffffffffffff;
          local_90 = (wchar_t *)(local_50 + local_c8);
          pwVar20 = pwVar33;
          uVar18 = 0;
          do {
            if ((uVar30 & 1) == 0) {
              if (uVar10 == 0xffffffffffffffff) {
                uVar10 = uVar18;
              }
            }
            else {
              if ((uVar10 != 0xffffffffffffffff) && (uVar10 < uVar18)) {
                local_70 = pwVar33 + uVar10;
                pwVar19 = pwVar20;
                do {
                  while( true ) {
                    wVar7 = *pwVar19;
                    uVar30 = *(uint *)(uVar4 + (long)wVar7 * 4);
                    uVar10 = (ulong)uVar30;
                    wVar9 = wVar7 + L'\x01';
                    lVar24 = (long)wVar7 * 4;
                    *pwVar19 = wVar9;
                    pwVar23 = (wchar_t *)(uVar10 + (long)local_60);
                    local_a8 = pwVar20;
                    if (pwVar23 < local_78) break;
                    *pwVar19 = wVar9 + uVar30;
                    local_60 = pwVar23;
LAB_0074ffb2:
                    pwVar19 = pwVar19 + -1;
                    if (local_70 == pwVar19) goto LAB_0074ff17;
                  }
                  uVar13 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_0074ffb2;
                  local_98 = (wchar_t *)((long)local_60 * 4);
                  if (((long)(local_80 + (long)local_60) - (uVar4 + 8 + lVar24) < 9) || (uVar13 < 3)
                     ) {
                    pwVar14 = local_60;
                    do {
                      pwVar21 = (wchar_t *)((long)pwVar14 + 1);
                      local_80[(long)pwVar14] =
                           *(wchar_t *)
                            (lVar24 + (long)local_60 * -4 + uVar4 + 4 + (long)pwVar14 * 4);
                      pwVar14 = pwVar21;
                    } while (pwVar23 != pwVar21);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar24 + lVar32);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)(local_80 + (long)local_60) + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while (lVar32 != (ulong)(uVar30 >> 2) * 0x10);
                    uVar12 = uVar10 & 0xfffffffffffffffc;
                    pbVar35 = (byte *)((long)local_60 + uVar12);
                    iVar17 = wVar9 + (int)uVar12;
                    if (uVar10 != uVar12) {
                      local_80[(long)pbVar35] = *(wchar_t *)(uVar4 + (long)iVar17 * 4);
                      if (uVar13 != uVar12) {
                        lVar24 = (long)(iVar17 + 1);
                        local_80[(long)(pbVar35 + 1)] = *(wchar_t *)(uVar4 + lVar24 * 4);
                        if (uVar13 - uVar12 != 1) {
                          local_80[(long)(pbVar35 + 2)] = *(wchar_t *)(uVar4 + 4 + lVar24 * 4);
                        }
                      }
                    }
                  }
                  pwVar14 = pwVar19 + -1;
                  *pwVar19 = wVar7 + L'\x02' + (int)uVar13;
                  pwVar19 = pwVar14;
                  local_60 = pwVar23;
                } while (local_70 != pwVar14);
              }
LAB_0074ff17:
              wVar7 = pwVar20[1];
              wVar9 = wVar7 + L'\x01';
              lVar24 = (long)wVar7 * 4;
              uVar30 = *(uint *)(uVar4 + (long)wVar7 * 4);
              uVar10 = (ulong)uVar30;
              pwVar20[1] = wVar9;
              pwVar19 = (wchar_t *)(uVar10 + (long)local_60);
              if (pwVar19 < local_78) {
                uVar13 = uVar10 - 1;
                if (uVar10 == 0) {
                  uVar10 = 0xffffffffffffffff;
                }
                else {
                  local_70 = (wchar_t *)((long)local_60 * 4);
                  if ((((long)local_70 + (long)local_80) - (uVar4 + 8 + lVar24) < 9) || (uVar13 < 3)
                     ) {
                    pwVar23 = local_60;
                    do {
                      pwVar14 = (wchar_t *)((long)pwVar23 + 1);
                      local_80[(long)pwVar23] =
                           *(wchar_t *)
                            (lVar24 + (long)local_60 * -4 + uVar4 + 4 + (long)pwVar23 * 4);
                      pwVar23 = pwVar14;
                    } while (pwVar19 != pwVar14);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar24 + lVar32);
                      uVar5 = puVar1[1];
                      pbVar35 = (byte *)((long)((long)local_70 + (long)local_80) + lVar32);
                      *(undefined8 *)pbVar35 = *puVar1;
                      *(undefined8 *)(pbVar35 + 8) = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while ((ulong)(uVar30 >> 2) * 0x10 != lVar32);
                    uVar12 = uVar10 & 0xfffffffffffffffc;
                    pbVar35 = (byte *)((long)local_60 + uVar12);
                    iVar17 = wVar9 + (int)uVar12;
                    if (uVar10 != uVar12) {
                      local_80[(long)pbVar35] = *(wchar_t *)(uVar4 + (long)iVar17 * 4);
                      if (uVar13 != uVar12) {
                        lVar24 = (long)(iVar17 + 1);
                        local_80[(long)(pbVar35 + 1)] = *(wchar_t *)(uVar4 + lVar24 * 4);
                        if (uVar13 - uVar12 != 1) {
                          local_80[(long)(pbVar35 + 2)] = *(wchar_t *)(uVar4 + 4 + lVar24 * 4);
                        }
                      }
                    }
                  }
                  pwVar20[1] = wVar7 + L'\x02' + (int)uVar13;
                  uVar10 = 0xffffffffffffffff;
                  local_60 = pwVar19;
                }
              }
              else {
                pwVar20[1] = wVar9 + uVar30;
                uVar10 = 0xffffffffffffffff;
                local_60 = pwVar19;
              }
            }
            pwVar20 = pwVar20 + 1;
            uVar30 = (uint)(byte)*(wchar_t *)((long)local_90 + local_58[uVar18 + 1] * local_88);
            bVar36 = uVar31 != uVar18;
            uVar18 = uVar18 + 1;
          } while (bVar36);
          if ((uVar10 != 0xffffffffffffffff) && (uVar10 < local_b0)) {
            local_70 = pwVar33 + uVar10;
            pwVar20 = local_c0;
            do {
              wVar7 = *pwVar20;
              uVar30 = *(uint *)(uVar4 + (long)wVar7 * 4);
              uVar10 = (ulong)uVar30;
              wVar9 = wVar7 + L'\x01';
              lVar24 = (long)wVar7 * 4;
              *pwVar20 = wVar9;
              pwVar19 = (wchar_t *)(uVar10 + (long)local_60);
              if (pwVar19 < local_78) {
                uVar18 = uVar10 - 1;
                if (uVar10 != 0) {
                  if (((long)local_80 + ((long)local_60 * 4 - (uVar4 + 8 + lVar24)) < 9) ||
                     (uVar18 < 3)) {
                    pwVar23 = local_60;
                    do {
                      pwVar14 = (wchar_t *)((long)pwVar23 + 1);
                      local_80[(long)pwVar23] =
                           *(wchar_t *)
                            (lVar24 + (long)local_60 * -4 + uVar4 + 4 + (long)pwVar23 * 4);
                      pwVar23 = pwVar14;
                    } while (pwVar19 != pwVar14);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar24 + lVar32);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar32 + (long)local_60 * 4);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while (lVar32 != (ulong)(uVar30 >> 2) * 0x10);
                    uVar13 = uVar10 & 0xfffffffffffffffc;
                    pbVar35 = (byte *)((long)local_60 + uVar13);
                    iVar17 = wVar9 + (int)uVar13;
                    if (uVar10 != uVar13) {
                      local_80[(long)pbVar35] = *(wchar_t *)(uVar4 + (long)iVar17 * 4);
                      if (uVar18 != uVar13) {
                        lVar24 = (long)(iVar17 + 1);
                        local_80[(long)(pbVar35 + 1)] = *(wchar_t *)(uVar4 + lVar24 * 4);
                        if (uVar18 - uVar13 != 1) {
                          local_80[(long)(pbVar35 + 2)] = *(wchar_t *)(uVar4 + 4 + lVar24 * 4);
                        }
                      }
                    }
                  }
                  *pwVar20 = wVar7 + L'\x02' + (int)uVar18;
                  local_60 = pwVar19;
                }
              }
              else {
                *pwVar20 = wVar9 + uVar30;
                local_60 = pwVar19;
              }
              pwVar20 = pwVar20 + -1;
            } while (local_70 != pwVar20);
          }
        }
        else {
          wVar7 = L'\x01';
          local_90 = (wchar_t *)(local_c8 + local_50);
          uVar10 = 0xffffffffffffffff;
          uVar18 = 0;
          local_70 = pwVar33;
          do {
            local_98 = (wchar_t *)(CONCAT44(local_98._4_4_,uVar30) & 0xffffffff00000001);
            if ((uVar30 & 1) == 0) {
              if (uVar10 == 0xffffffffffffffff) {
                uVar10 = uVar18;
              }
            }
            else {
              if ((uVar10 != 0xffffffffffffffff) && (uVar10 < uVar18)) {
                pwVar20 = local_70;
                pwVar19 = local_60;
                wVar9 = wVar7;
                do {
                  while( true ) {
                    wVar7 = *pwVar20 + L'\x01';
                    lVar24 = (long)*pwVar20 * 4;
                    *pwVar20 = wVar7;
                    uVar30 = *(uint *)(uVar4 + lVar24);
                    uVar13 = (ulong)uVar30;
                    local_e0 = uVar18;
                    if (uVar13 != 0) break;
                    pwVar20 = pwVar20 + -1;
                    local_60 = pwVar19;
                    wVar7 = wVar9 + L'\x01';
                    wVar9 = wVar9 + L'\x01';
                    if (pwVar33 + uVar10 == pwVar20) goto LAB_00750102;
                  }
                  local_60 = (wchar_t *)((long)pwVar19 + uVar13 + 1);
                  if (local_60 < local_78) {
                    local_b8 = local_80 + (long)pwVar19;
                    *local_b8 = wVar9;
                    lVar32 = (long)pwVar19 * 4 + 4;
                    lVar22 = (long)wVar7;
                    if (((long)local_80 + (lVar32 - (uVar4 + 8 + lVar24)) < 9) || (uVar13 - 1 < 3))
                    {
                      uVar12 = 0;
                      do {
                        local_b8[uVar12 + 1] = ((uint *)(uVar4 + lVar24))[uVar12 + 1];
                        uVar12 = uVar12 + 1;
                      } while (uVar13 != uVar12);
                    }
                    else {
                      lVar34 = 0;
                      do {
                        puVar1 = (undefined8 *)(uVar4 + 4 + lVar24 + lVar34);
                        uVar5 = puVar1[1];
                        puVar2 = (undefined8 *)((long)local_80 + lVar34 + lVar32);
                        *puVar2 = *puVar1;
                        puVar2[1] = uVar5;
                        lVar34 = lVar34 + 0x10;
                      } while ((ulong)(uVar30 >> 2) * 0x10 != lVar34);
                      uVar12 = uVar13 & 0xfffffffffffffffc;
                      if (uVar13 != uVar12) {
                        local_80[(long)((long)pwVar19 + uVar12 + 1)] =
                             *(wchar_t *)(uVar4 + (uVar12 + lVar22) * 4);
                        if (uVar12 + 1 < uVar13) {
                          local_80[(long)((long)pwVar19 + uVar12 + 2)] =
                               *(wchar_t *)(uVar4 + (uVar12 + 1 + lVar22) * 4);
                          if (uVar12 + 2 < uVar13) {
                            local_80[(long)((long)pwVar19 + uVar12 + 3)] =
                                 *(wchar_t *)(uVar4 + (uVar12 + 2 + lVar22) * 4);
                          }
                        }
                      }
                    }
                  }
                  pwVar23 = pwVar20 + -1;
                  *pwVar20 = wVar7 + uVar30;
                  pwVar20 = pwVar23;
                  pwVar19 = local_60;
                  wVar7 = (wchar_t)local_98;
                  wVar9 = (wchar_t)local_98;
                } while (pwVar33 + uVar10 != pwVar23);
              }
LAB_00750102:
              lVar24 = (long)local_70[1] * 4;
              wVar16 = local_70[1] + L'\x01';
              local_a8 = (wchar_t *)(uVar4 + lVar24);
              local_70[1] = wVar16;
              wVar9 = *local_a8;
              uVar10 = (ulong)(uint)wVar9;
              if (uVar10 == 0) {
                wVar7 = wVar7 + L'\x01';
                uVar10 = 0xffffffffffffffff;
              }
              else {
                pwVar20 = (wchar_t *)(uVar10 + 1 + (long)local_60);
                if (pwVar20 < local_78) {
                  lVar22 = (long)wVar16;
                  local_80[(long)local_60] = wVar7;
                  lVar32 = (long)local_60 * 4 + 4;
                  if (((long)local_80 + (lVar32 - (uVar4 + 8 + lVar24)) < 9) || (uVar10 - 1 < 3)) {
                    uVar13 = 0;
                    do {
                      (local_80 + (long)local_60)[uVar13 + 1] = local_a8[uVar13 + 1];
                      uVar13 = uVar13 + 1;
                    } while (uVar10 != uVar13);
                  }
                  else {
                    lVar34 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar24 + lVar34);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar34 + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar34 = lVar34 + 0x10;
                    } while ((ulong)((uint)wVar9 >> 2) << 4 != lVar34);
                    uVar13 = uVar10 & 0xfffffffffffffffc;
                    if (uVar10 != uVar13) {
                      local_80[(long)((long)local_60 + uVar13 + 1)] =
                           *(wchar_t *)(uVar4 + (uVar13 + lVar22) * 4);
                      if (uVar13 + 1 < uVar10) {
                        local_80[(long)((long)local_60 + uVar13 + 2)] =
                             *(wchar_t *)(uVar4 + (uVar13 + 1 + lVar22) * 4);
                        if (uVar13 + 2 < uVar10) {
                          local_80[(long)((long)local_60 + uVar13 + 3)] =
                               *(wchar_t *)(uVar4 + (uVar13 + 2 + lVar22) * 4);
                        }
                      }
                    }
                  }
                }
                local_70[1] = wVar16 + wVar9;
                uVar10 = 0xffffffffffffffff;
                local_60 = pwVar20;
                wVar7 = (wchar_t)local_98;
              }
            }
            local_70 = local_70 + 1;
            uVar30 = (uint)(byte)*(wchar_t *)((long)local_90 + local_58[uVar18 + 1] * local_88);
            bVar36 = uVar31 != uVar18;
            uVar18 = uVar18 + 1;
          } while (bVar36);
          if ((uVar10 != 0xffffffffffffffff) && (uVar10 < uVar31)) {
            local_90 = pwVar33 + uVar10;
            pwVar20 = local_60;
            pwVar19 = local_d0;
            do {
              lVar24 = (long)*pwVar19 * 4;
              wVar9 = *pwVar19 + L'\x01';
              *pwVar19 = wVar9;
              uVar30 = *(uint *)(uVar4 + lVar24);
              uVar10 = (ulong)uVar30;
              local_70 = (wchar_t *)CONCAT44(local_70._4_4_,uVar30);
              if (uVar10 == 0) {
                wVar7 = wVar7 + L'\x01';
                local_60 = pwVar20;
              }
              else {
                local_60 = (wchar_t *)((long)pwVar20 + uVar10 + 1);
                if (local_60 < local_78) {
                  lVar22 = (long)wVar9;
                  lVar32 = (long)pwVar20 * 4 + 4;
                  local_80[(long)pwVar20] = wVar7;
                  if (((long)local_80 + (lVar32 - (uVar4 + 8 + lVar24)) < 9) || (uVar10 - 1 < 3)) {
                    uVar18 = 0;
                    do {
                      (local_80 + (long)pwVar20)[uVar18 + 1] =
                           ((uint *)(uVar4 + lVar24))[uVar18 + 1];
                      uVar18 = uVar18 + 1;
                    } while (uVar10 != uVar18);
                  }
                  else {
                    lVar34 = 0;
                    do {
                      puVar1 = (undefined8 *)(uVar4 + 4 + lVar24 + lVar34);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar34 + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar34 = lVar34 + 0x10;
                    } while ((ulong)(uVar30 >> 2) * 0x10 != lVar34);
                    uVar18 = uVar10 & 0xfffffffffffffffc;
                    if (uVar10 != uVar18) {
                      local_80[(long)((long)pwVar20 + uVar18 + 1)] =
                           *(wchar_t *)(uVar4 + (uVar18 + lVar22) * 4);
                      if (uVar18 + 1 < uVar10) {
                        local_80[(long)((long)pwVar20 + uVar18 + 2)] =
                             *(wchar_t *)(uVar4 + (uVar18 + 1 + lVar22) * 4);
                        if (uVar18 + 2 < uVar10) {
                          local_80[(long)((long)pwVar20 + uVar18 + 3)] =
                               *(wchar_t *)(uVar4 + (uVar18 + 2 + lVar22) * 4);
                        }
                      }
                    }
                  }
                }
                wVar7 = L'\x01';
                *pwVar19 = wVar9 + uVar30;
              }
              pwVar19 = pwVar19 + -1;
              pwVar20 = local_60;
            } while (local_90 != pwVar19);
          }
        }
        local_50 = local_50 + 1;
        if (local_60 < local_78) {
          local_80[(long)local_60] = (uint)(local_50 < local_88);
        }
        pwVar20 = (wchar_t *)((long)local_60 + 1);
      } while (local_88 != local_50);
      puVar28 = puVar26 + -0x10;
      local_68 = uVar31;
      pwVar33 = local_60;
      if ((((wchar_t *)((long)local_60 + 1) < (wchar_t *)0x3) ||
          (puVar28 = puVar26 + -0x10, local_60 != local_a0)) ||
         (pwVar33 = (wchar_t *)((long)local_60 + -1), puVar28 = puVar26 + -0x10, local_78 < local_60
         )) goto LAB_0074e771;
      goto LAB_0074fe1c;
    }
    local_60 = (wchar_t *)0x0;
    puVar28 = auStack_e8;
    pwVar33 = local_60;
    if (__n != 0) {
      *__s1 = L'\0';
      puVar28 = auStack_e8;
    }
  }
  goto LAB_0074e771;
code_r0x0074e8c1:
  pwVar33 = pwVar20;
  uVar31 = local_b0;
  if (local_b0 == 0xfff) goto LAB_0074e8df;
  goto LAB_0074e69c;
LAB_0074e8df:
  local_58[0xfff] = 0;
  local_d0 = (wchar_t *)0x0;
  local_b0 = 0;
  pwVar33 = local_d0;
  do {
    local_d0 = pwVar33;
    pwVar33 = local_98;
    lVar24 = (long)(int)local_b0;
    wVar7 = *local_98;
    *(undefined8 *)(puVar26 + -0x18) = 0x74e919;
    wVar7 = __collidx_table_lookup(local_50,wVar7);
    if (wVar7 < L'\0') {
      pwVar20 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074e932:
      wVar7 = *pwVar20;
      wVar9 = pwVar20[1];
      while( true ) {
        uVar10 = (ulong)wVar9;
        if (wVar7 < L'\0') break;
        uVar31 = 0xfffffffffffffffe;
        if (uVar10 != 0xffffffffffffffff) {
          uVar31 = uVar10;
        }
        if (uVar10 == 0) goto LAB_0074e9f5;
        uVar18 = 0;
        do {
          if (pwVar20[uVar18 + 2] != pwVar33[uVar18 + 1]) break;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar31);
        if (uVar10 == uVar18) goto LAB_0074e9f5;
        pwVar20 = pwVar20 + uVar10 + 2;
        wVar7 = *pwVar20;
        wVar9 = pwVar20[1];
      }
      lVar32 = 0;
      if (uVar10 != 1) {
        do {
          if (pwVar20[lVar32 + 2] != pwVar33[lVar32 + 1]) {
            pwVar20 = pwVar20 + uVar10 * 2 + 2;
            goto LAB_0074e932;
          }
          lVar32 = lVar32 + 1;
        } while (uVar10 - 1 != lVar32);
      }
      wVar9 = pwVar33[uVar10];
      if ((wVar9 < pwVar20[uVar10 + 1]) || (pwVar20[uVar10 * 2 + 1] < wVar9)) {
        pwVar20 = pwVar20 + uVar10 * 2 + 2;
        goto LAB_0074e932;
      }
      wVar7 = local_70[(long)(wVar9 - pwVar20[uVar10 + 1]) + (long)-wVar7];
    }
LAB_0074e9f5:
    wVar9 = *local_98;
    if ((*(byte *)((uint)(wVar7 >> 0x18 & 0xff) * local_88 + local_c8 + lVar24) & 4) == 0) {
      if (wVar9 == L'\0') goto LAB_0074fe31;
      pwVar33 = (wchar_t *)0x0;
      local_58 = (byte *)0x0;
      local_60 = local_d0;
      iVar17 = (int)local_b0;
      local_d8 = local_b0 + local_c8;
      local_90 = local_98;
      do {
        pwVar20 = local_90 + 1;
        *(undefined8 *)(puVar26 + -0x18) = 0x74f1d4;
        wVar7 = __collidx_table_lookup(local_50);
        if (wVar7 < L'\0') {
          pwVar19 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074f1f1:
          wVar7 = *pwVar19;
          uVar10 = (ulong)pwVar19[1];
          pwVar23 = pwVar19 + 2;
          if (wVar7 < L'\0') goto LAB_0074f255;
          while( true ) {
            uVar31 = 0xfffffffffffffffe;
            if (uVar10 != 0xffffffffffffffff) {
              uVar31 = uVar10;
            }
            uVar18 = uVar10;
            if (uVar10 == 0) break;
            uVar13 = 0;
            do {
              if (pwVar19[uVar13 + 2] != local_90[uVar13 + 1]) break;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar31);
            uVar18 = uVar10 * 4;
            if (uVar13 == uVar10) break;
            while( true ) {
              pwVar19 = (wchar_t *)(uVar18 + (long)pwVar23);
              wVar7 = *pwVar19;
              uVar10 = (ulong)pwVar19[1];
              pwVar23 = pwVar19 + 2;
              if (L'\xffffffff' < wVar7) break;
LAB_0074f255:
              lVar24 = 0;
              if (uVar10 != 1) {
                do {
                  if (pwVar19[lVar24 + 2] != local_90[lVar24 + 1]) {
                    pwVar19 = pwVar23 + uVar10 * 2;
                    goto LAB_0074f1f1;
                  }
                  lVar24 = lVar24 + 1;
                } while (lVar24 != uVar10 - 1);
              }
              wVar9 = local_90[uVar10];
              uVar18 = uVar10 * 8;
              if ((pwVar23[uVar10 - 1] <= wVar9) && (wVar9 <= pwVar23[uVar10 * 2 + -1])) {
                pwVar20 = pwVar20 + uVar10;
                wVar7 = local_70[(long)(wVar9 - pwVar23[uVar10 - 1]) + (long)-wVar7];
                goto LAB_0074f2bf;
              }
            }
          }
          pwVar20 = (wchar_t *)((long)pwVar20 + uVar18);
        }
LAB_0074f2bf:
        iVar15 = (wVar7 & 0xffffffU) + 1;
        pwVar19 = (wchar_t *)(ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
        if (0 < iVar17) {
          iVar8 = 0;
          do {
            iVar29 = iVar15 + (int)pwVar19;
            iVar8 = iVar8 + 1;
            iVar15 = iVar29 + 1;
            pwVar19 = (wchar_t *)(ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
          } while (iVar8 != iVar17);
        }
        if ((*(byte *)(local_d8 + (uint)(wVar7 >> 0x18 & 0xff) * local_88) & 1) == 0) {
          wVar7 = *pwVar20;
          if (pwVar33 == (wchar_t *)0x0) {
            pwVar33 = local_90;
          }
          local_58 = local_58 + (long)pwVar19;
          pwVar19 = local_90;
          pwVar23 = local_80;
        }
        else {
          if (pwVar33 != (wchar_t *)0x0) {
            if (local_58 != (byte *)0x0) {
              local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,iVar15);
              pbVar35 = local_58;
              local_a8 = pwVar20;
              local_90 = pwVar19;
              do {
                pwVar20 = pwVar33 + 1;
                *(undefined8 *)(puVar26 + -0x18) = 0x74f47f;
                wVar7 = __collidx_table_lookup(local_50);
                if (wVar7 < L'\0') {
                  pwVar19 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074f496:
                  wVar7 = *pwVar19;
                  wVar9 = pwVar19[1];
                  while( true ) {
                    uVar10 = (ulong)wVar9;
                    if (wVar7 < L'\0') break;
                    uVar31 = 0xfffffffffffffffe;
                    if (uVar10 != 0xffffffffffffffff) {
                      uVar31 = uVar10;
                    }
                    uVar18 = uVar10;
                    if (uVar10 == 0) {
LAB_0074f6ce:
                      pwVar20 = (wchar_t *)((long)pwVar20 + uVar18);
                      goto LAB_0074f56b;
                    }
                    uVar13 = 0;
                    do {
                      if (pwVar19[uVar13 + 2] != pwVar33[uVar13 + 1]) break;
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < uVar31);
                    uVar18 = uVar10 * 4;
                    if (uVar10 == uVar13) goto LAB_0074f6ce;
                    pwVar19 = pwVar19 + uVar10 + 2;
                    wVar7 = *pwVar19;
                    wVar9 = pwVar19[1];
                  }
                  lVar24 = 0;
                  if (uVar10 != 1) {
                    do {
                      if (pwVar19[lVar24 + 2] != pwVar33[lVar24 + 1]) {
                        pwVar19 = pwVar19 + uVar10 * 2 + 2;
                        goto LAB_0074f496;
                      }
                      lVar24 = lVar24 + 1;
                    } while (lVar24 != uVar10 - 1);
                  }
                  wVar9 = pwVar33[uVar10];
                  if ((wVar9 < pwVar19[uVar10 + 1]) || (pwVar19[uVar10 * 2 + 1] < wVar9)) {
                    pwVar19 = pwVar19 + uVar10 * 2 + 2;
                    goto LAB_0074f496;
                  }
                  pwVar20 = pwVar20 + uVar10;
                  wVar7 = local_70[(long)(wVar9 - pwVar19[uVar10 + 1]) + (long)-wVar7];
                }
LAB_0074f56b:
                iVar15 = (wVar7 & 0xffffffU) + 1;
                uVar10 = (ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
                if (0 < iVar17) {
                  iVar8 = 0;
                  do {
                    iVar29 = (int)uVar10 + iVar15;
                    iVar8 = iVar8 + 1;
                    iVar15 = iVar29 + 1;
                    uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
                  } while (iVar8 != iVar17);
                }
                pwVar33 = (wchar_t *)(pbVar35 + (long)local_60);
                if ((pwVar33 < local_78) && (uVar10 != 0)) {
                  pwVar19 = local_80 + ((long)pwVar33 - uVar10);
                  lVar24 = (long)iVar15 * 4 + 4;
                  if (((long)pwVar19 - (uVar4 + lVar24) < 9) || (uVar10 - 1 < 3)) {
                    pwVar23 = (wchar_t *)((uVar4 - 4) + lVar24);
                    do {
                      wVar7 = *pwVar23;
                      pwVar14 = pwVar19 + 1;
                      pwVar23 = pwVar23 + 1;
                      *pwVar19 = wVar7;
                      pwVar19 = pwVar14;
                    } while (local_80 + (long)pwVar33 != pwVar14);
                  }
                  else {
                    lVar32 = 0;
                    do {
                      puVar1 = (undefined8 *)((uVar4 - 4) + lVar24 + lVar32);
                      uVar5 = puVar1[1];
                      *(undefined8 *)((long)pwVar19 + lVar32) = *puVar1;
                      ((undefined8 *)((long)pwVar19 + lVar32))[1] = uVar5;
                      lVar32 = lVar32 + 0x10;
                    } while (lVar32 != (uVar10 >> 2) * 0x10);
                    uVar31 = uVar10 & 0xfffffffffffffffc;
                    iVar15 = iVar15 + (int)uVar31;
                    if (uVar10 != uVar31) {
                      local_80[(long)((uVar31 - uVar10) + (long)pwVar33)] =
                           *(wchar_t *)(uVar4 + (long)iVar15 * 4);
                      lVar24 = (uVar10 - uVar31) + -1;
                      if (lVar24 != 0) {
                        lVar32 = (long)(iVar15 + 1);
                        local_80[(long)pwVar33 - lVar24] = *(wchar_t *)(uVar4 + lVar32 * 4);
                        lVar24 = (uVar10 - uVar31) + -2;
                        if (lVar24 != 0) {
                          local_80[(long)pwVar33 - lVar24] = *(wchar_t *)(uVar4 + 4 + lVar32 * 4);
                        }
                      }
                    }
                  }
                }
                pbVar35 = pbVar35 + -uVar10;
                pwVar33 = pwVar20;
              } while (pbVar35 != (byte *)0x0);
              pwVar19 = local_90;
              pwVar20 = local_a8;
              iVar15 = (int)local_a0;
            }
            local_60 = (wchar_t *)(local_58 + (long)local_60);
            local_58 = (byte *)0x0;
          }
          pwVar33 = (wchar_t *)((long)local_60 + (long)pwVar19);
          pwVar23 = pwVar33;
          if ((pwVar33 < local_78) &&
             (pwVar14 = (wchar_t *)((long)pwVar19 + -1), pwVar23 = local_60,
             pwVar19 != (wchar_t *)0x0)) {
            lVar24 = (long)iVar15 * 4 + 4;
            if (((long)local_80 + ((long)local_60 * 4 - (uVar4 + lVar24)) < 9) ||
               (pwVar14 < (wchar_t *)0x3)) {
              pwVar19 = local_60;
              do {
                pwVar14 = (wchar_t *)((long)pwVar19 + 1);
                local_80[(long)pwVar19] =
                     *(wchar_t *)
                      ((long)iVar15 * 4 + (long)local_60 * -4 + uVar4 + (long)pwVar19 * 4);
                pwVar19 = pwVar14;
                pwVar23 = pwVar33;
              } while (pwVar33 != pwVar14);
            }
            else {
              lVar32 = 0;
              do {
                puVar1 = (undefined8 *)((uVar4 - 4) + lVar24 + lVar32);
                uVar5 = puVar1[1];
                puVar2 = (undefined8 *)((long)local_80 + lVar32 + (long)local_60 * 4);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                lVar32 = lVar32 + 0x10;
              } while (((ulong)pwVar19 >> 2) * 0x10 != lVar32);
              pwVar21 = (wchar_t *)((ulong)pwVar19 & 0xfffffffffffffffc);
              iVar15 = iVar15 + (int)pwVar21;
              pbVar35 = (byte *)((long)local_60 + (long)pwVar21);
              pwVar23 = pwVar33;
              if (pwVar19 != pwVar21) {
                local_80[(long)pbVar35] = *(wchar_t *)(uVar4 + (long)iVar15 * 4);
                if (pwVar14 != pwVar21) {
                  lVar24 = (long)(iVar15 + 1);
                  local_80[(long)(pbVar35 + 1)] = *(wchar_t *)(uVar4 + lVar24 * 4);
                  if ((long)pwVar14 - (long)pwVar21 != 1) {
                    local_80[(long)(pbVar35 + 2)] = *(wchar_t *)(uVar4 + 4 + lVar24 * 4);
                  }
                }
              }
            }
          }
          local_60 = pwVar23;
          pwVar33 = (wchar_t *)0x0;
          wVar7 = *pwVar20;
          pwVar19 = local_90;
          pwVar23 = local_80;
        }
        local_90 = pwVar20;
        local_80 = pwVar23;
      } while (wVar7 != L'\0');
      local_90 = pwVar19;
      pbVar35 = local_58;
      if (pwVar33 != (wchar_t *)0x0) {
        for (; pbVar35 != (byte *)0x0; pbVar35 = pbVar35 + -uVar10) {
          wVar7 = *pwVar33;
          local_90 = pwVar33 + 1;
          *(undefined8 *)(puVar26 + -0x18) = 0x74f388;
          wVar7 = __collidx_table_lookup(local_50,wVar7);
          pwVar20 = local_90;
          if (wVar7 < L'\0') {
            pwVar20 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074f3a5:
            wVar7 = *pwVar20;
            uVar10 = (ulong)pwVar20[1];
            pwVar19 = pwVar20 + 2;
            if (wVar7 < L'\0') goto LAB_0074f407;
            while( true ) {
              uVar31 = 0xfffffffffffffffe;
              if (uVar10 != 0xffffffffffffffff) {
                uVar31 = uVar10;
              }
              uVar18 = uVar10;
              if (uVar10 == 0) break;
              uVar13 = 0;
              do {
                if (pwVar20[uVar13 + 2] != pwVar33[uVar13 + 1]) break;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar31);
              uVar18 = uVar10 * 4;
              if (uVar10 == uVar13) break;
              while( true ) {
                pwVar20 = (wchar_t *)(uVar18 + (long)pwVar19);
                wVar7 = *pwVar20;
                uVar10 = (ulong)pwVar20[1];
                pwVar19 = pwVar20 + 2;
                if (L'\xffffffff' < wVar7) break;
LAB_0074f407:
                lVar24 = 0;
                if (uVar10 != 1) {
                  do {
                    if (pwVar20[lVar24 + 2] != pwVar33[lVar24 + 1]) {
                      pwVar20 = pwVar19 + uVar10 * 2;
                      goto LAB_0074f3a5;
                    }
                    lVar24 = lVar24 + 1;
                  } while (lVar24 != uVar10 - 1);
                }
                wVar9 = pwVar33[uVar10];
                uVar18 = uVar10 * 8;
                if ((pwVar19[uVar10 - 1] <= wVar9) && (wVar9 <= pwVar19[uVar10 * 2 + -1])) {
                  wVar7 = local_70[(long)(wVar9 - pwVar19[uVar10 - 1]) + (long)-wVar7];
                  pwVar20 = local_90 + uVar10;
                  goto LAB_0074f725;
                }
              }
            }
            pwVar20 = (wchar_t *)((long)local_90 + uVar18);
          }
LAB_0074f725:
          iVar15 = (wVar7 & 0xffffffU) + 1;
          uVar10 = (ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
          if (0 < iVar17) {
            iVar8 = 0;
            do {
              iVar29 = (int)uVar10 + iVar15;
              iVar8 = iVar8 + 1;
              iVar15 = iVar29 + 1;
              uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
            } while (iVar8 != iVar17);
          }
          pwVar33 = (wchar_t *)(pbVar35 + (long)local_60);
          if ((pwVar33 < local_78) && (uVar10 != 0)) {
            lVar24 = (long)iVar15 * 4 + 4;
            pwVar19 = pwVar23 + ((long)pwVar33 - uVar10);
            if (((long)pwVar19 - (uVar4 + lVar24) < 9) || (uVar10 - 1 < 3)) {
              pwVar14 = (wchar_t *)((uVar4 - 4) + lVar24);
              do {
                wVar7 = *pwVar14;
                pwVar21 = pwVar19 + 1;
                pwVar14 = pwVar14 + 1;
                *pwVar19 = wVar7;
                pwVar19 = pwVar21;
              } while (pwVar21 != pwVar23 + (long)pwVar33);
            }
            else {
              lVar32 = 0;
              do {
                puVar1 = (undefined8 *)((uVar4 - 4) + lVar24 + lVar32);
                uVar5 = puVar1[1];
                *(undefined8 *)((long)pwVar19 + lVar32) = *puVar1;
                ((undefined8 *)((long)pwVar19 + lVar32))[1] = uVar5;
                lVar32 = lVar32 + 0x10;
              } while (lVar32 != (uVar10 >> 2) * 0x10);
              uVar31 = uVar10 & 0xfffffffffffffffc;
              iVar15 = iVar15 + (int)uVar31;
              if (uVar10 != uVar31) {
                pwVar23[(long)((uVar31 - uVar10) + (long)pwVar33)] =
                     *(wchar_t *)(uVar4 + (long)iVar15 * 4);
                lVar24 = (uVar10 - uVar31) + -1;
                if (lVar24 != 0) {
                  lVar32 = (long)(iVar15 + 1);
                  pwVar23[(long)pwVar33 - lVar24] = *(wchar_t *)(uVar4 + lVar32 * 4);
                  lVar24 = (uVar10 - uVar31) + -2;
                  if (lVar24 != 0) {
                    pwVar23[(long)pwVar33 - lVar24] = *(wchar_t *)(uVar4 + 4 + lVar32 * 4);
                  }
                }
              }
            }
          }
          pwVar33 = pwVar20;
        }
        local_60 = (wchar_t *)((long)local_60 + (long)local_58);
      }
    }
    else if (wVar9 == L'\0') {
LAB_0074fe31:
      local_60 = local_d0;
    }
    else {
      pwVar33 = (wchar_t *)0x0;
      local_58 = (byte *)0x0;
      local_60 = local_d0;
      local_90 = (wchar_t *)CONCAT44(local_90._4_4_,1);
      local_d8 = local_b0 + local_c8;
      pwVar20 = local_98;
      uVar10 = local_b0;
      do {
        local_a0 = pwVar20 + 1;
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,(int)uVar10);
        *(undefined8 *)(puVar26 + -0x18) = 0x74ea8f;
        wVar7 = __collidx_table_lookup(local_50,wVar9);
        uVar10 = (ulong)local_a8;
        iVar17 = (int)local_a8;
        if (wVar7 < L'\0') {
          pwVar19 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074eaab:
          wVar7 = *pwVar19;
          uVar31 = (ulong)pwVar19[1];
          pwVar23 = pwVar19 + 2;
          if (wVar7 < L'\0') goto LAB_0074eb0e;
          while( true ) {
            uVar18 = 0xfffffffffffffffe;
            if (uVar31 != 0xffffffffffffffff) {
              uVar18 = uVar31;
            }
            uVar13 = uVar31;
            if (uVar31 == 0) break;
            uVar12 = 0;
            do {
              if (pwVar19[uVar12 + 2] != pwVar20[uVar12 + 1]) break;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar18);
            uVar13 = uVar31 * 4;
            if (uVar31 == uVar12) break;
            while( true ) {
              pwVar19 = (wchar_t *)(uVar13 + (long)pwVar23);
              wVar7 = *pwVar19;
              uVar31 = (ulong)pwVar19[1];
              pwVar23 = pwVar19 + 2;
              if (L'\xffffffff' < wVar7) break;
LAB_0074eb0e:
              lVar24 = 0;
              if (uVar31 != 1) {
                do {
                  if (pwVar19[lVar24 + 2] != pwVar20[lVar24 + 1]) {
                    pwVar19 = pwVar23 + uVar31 * 2;
                    goto LAB_0074eaab;
                  }
                  lVar24 = lVar24 + 1;
                } while (uVar31 - 1 != lVar24);
              }
              wVar9 = pwVar20[uVar31];
              uVar13 = uVar31 * 8;
              if ((pwVar23[uVar31 - 1] <= wVar9) && (wVar9 <= pwVar23[uVar31 * 2 + -1])) {
                local_a0 = local_a0 + uVar31;
                wVar7 = local_70[(long)(wVar9 - pwVar23[uVar31 - 1]) + (long)-wVar7];
                goto LAB_0074eb7d;
              }
            }
          }
          local_a0 = (wchar_t *)((long)local_a0 + uVar13);
        }
LAB_0074eb7d:
        iVar15 = (wVar7 & 0xffffffU) + 1;
        pwVar19 = (wchar_t *)(ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
        if (0 < (int)local_a8) {
          iVar8 = 0;
          do {
            iVar29 = (int)pwVar19 + iVar15;
            iVar8 = iVar8 + 1;
            iVar15 = iVar29 + 1;
            pwVar19 = (wchar_t *)(ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
          } while (iVar8 != (int)local_a8);
        }
        local_a8 = pwVar19;
        local_e0 = CONCAT44(local_e0._4_4_,iVar15);
        if ((*(byte *)(local_d8 + (uint)(wVar7 >> 0x18 & 0xff) * local_88) & 1) == 0) {
          if (pwVar33 == (wchar_t *)0x0) {
            pwVar33 = pwVar20;
          }
          local_58 = local_58 + 1;
          wVar9 = *local_a0;
          pwVar20 = local_a0;
        }
        else {
          if ((pwVar33 != (wchar_t *)0x0) && (local_58 != (byte *)0x0)) {
            local_b8 = pwVar33 + 1;
            do {
              *(undefined8 *)(puVar26 + -0x18) = 0x74ed79;
              wVar7 = __collidx_table_lookup(local_50);
              pwVar20 = local_b8;
              if (wVar7 < L'\0') {
                pwVar20 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074ed97:
                wVar7 = *pwVar20;
                uVar31 = (ulong)pwVar20[1];
                pwVar19 = pwVar20 + 2;
                if (wVar7 < L'\0') goto LAB_0074edf6;
                while( true ) {
                  uVar18 = 0xfffffffffffffffe;
                  if (uVar31 != 0xffffffffffffffff) {
                    uVar18 = uVar31;
                  }
                  uVar13 = uVar31;
                  if (uVar31 == 0) break;
                  uVar12 = 0;
                  do {
                    if (pwVar20[uVar12 + 2] != pwVar33[uVar12 + 1]) break;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < uVar18);
                  uVar13 = uVar31 * 4;
                  if (uVar12 == uVar31) break;
                  while( true ) {
                    pwVar20 = (wchar_t *)(uVar13 + (long)pwVar19);
                    wVar7 = *pwVar20;
                    uVar31 = (ulong)pwVar20[1];
                    pwVar19 = pwVar20 + 2;
                    if (L'\xffffffff' < wVar7) break;
LAB_0074edf6:
                    lVar24 = 0;
                    if (uVar31 != 1) {
                      do {
                        if (pwVar20[lVar24 + 2] != pwVar33[lVar24 + 1]) {
                          pwVar20 = pwVar19 + uVar31 * 2;
                          goto LAB_0074ed97;
                        }
                        lVar24 = lVar24 + 1;
                      } while (uVar31 - 1 != lVar24);
                    }
                    wVar9 = pwVar33[uVar31];
                    uVar13 = uVar31 * 8;
                    if ((pwVar19[uVar31 - 1] <= wVar9) && (wVar9 <= pwVar19[uVar31 * 2 + -1])) {
                      pwVar20 = local_b8 + uVar31;
                      wVar7 = local_70[(long)(wVar9 - pwVar19[uVar31 - 1]) + (long)-wVar7];
                      goto LAB_0074ee69;
                    }
                  }
                }
                pwVar20 = (wchar_t *)((long)local_b8 + uVar13);
              }
LAB_0074ee69:
              iVar15 = (wVar7 & 0xffffffU) + 1;
              uVar31 = (ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
              if (0 < iVar17) {
                iVar8 = 0;
                do {
                  iVar29 = (int)uVar31 + iVar15;
                  iVar8 = iVar8 + 1;
                  iVar15 = iVar29 + 1;
                  uVar31 = (ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
                } while (iVar8 != iVar17);
              }
              if (local_58 != (byte *)0x1) {
                pbVar35 = (byte *)0x1;
                local_c0 = pwVar33;
                do {
                  pwVar19 = pwVar20 + 1;
                  *(undefined8 *)(puVar26 + -0x18) = 0x74eed0;
                  wVar7 = __collidx_table_lookup(local_50);
                  if (wVar7 < L'\0') {
                    pwVar33 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074eee7:
                    wVar7 = *pwVar33;
                    wVar9 = pwVar33[1];
                    while( true ) {
                      uVar31 = (ulong)wVar9;
                      if (wVar7 < L'\0') break;
                      uVar18 = 0xfffffffffffffffe;
                      if (uVar31 != 0xffffffffffffffff) {
                        uVar18 = uVar31;
                      }
                      uVar13 = uVar31;
                      if (uVar31 == 0) {
LAB_0074f06b:
                        pwVar19 = (wchar_t *)((long)pwVar19 + uVar13);
                        goto LAB_0074efc5;
                      }
                      uVar12 = 0;
                      do {
                        if (pwVar33[uVar12 + 2] != pwVar20[uVar12 + 1]) break;
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < uVar18);
                      uVar13 = uVar31 * 4;
                      if (uVar31 == uVar12) goto LAB_0074f06b;
                      pwVar33 = pwVar33 + uVar31 + 2;
                      wVar7 = *pwVar33;
                      wVar9 = pwVar33[1];
                    }
                    lVar24 = 0;
                    if (uVar31 != 1) {
                      do {
                        if (pwVar33[lVar24 + 2] != pwVar20[lVar24 + 1]) {
                          pwVar33 = pwVar33 + uVar31 * 2 + 2;
                          goto LAB_0074eee7;
                        }
                        lVar24 = lVar24 + 1;
                      } while (uVar31 - 1 != lVar24);
                    }
                    wVar9 = pwVar20[uVar31];
                    if ((wVar9 < pwVar33[uVar31 + 1]) || (pwVar33[uVar31 * 2 + 1] < wVar9)) {
                      pwVar33 = pwVar33 + uVar31 * 2 + 2;
                      goto LAB_0074eee7;
                    }
                    pwVar19 = pwVar19 + uVar31;
                    wVar7 = local_70[(long)(wVar9 - pwVar33[uVar31 + 1]) + (long)-wVar7];
                  }
LAB_0074efc5:
                  iVar15 = (wVar7 & 0xffffffU) + 1;
                  uVar31 = (ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
                  if (0 < iVar17) {
                    iVar8 = 0;
                    do {
                      iVar29 = (int)uVar31 + iVar15;
                      iVar8 = iVar8 + 1;
                      iVar15 = iVar29 + 1;
                      uVar31 = (ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
                    } while (iVar8 != iVar17);
                  }
                  pbVar35 = pbVar35 + 1;
                  pwVar33 = local_c0;
                  pwVar20 = pwVar19;
                } while (pbVar35 != local_58);
              }
              if (uVar31 == 0) {
                local_90 = (wchar_t *)CONCAT44(local_90._4_4_,(wchar_t)local_90 + L'\x01');
              }
              else {
                pwVar20 = (wchar_t *)((long)local_60 + uVar31 + 1);
                if (pwVar20 < local_78) {
                  lVar32 = (long)local_60 * 4 + 4;
                  local_80[(long)local_60] = (wchar_t)local_90;
                  lVar22 = (long)iVar15;
                  lVar24 = lVar22 * 4 + 4;
                  if (((long)local_80 + (lVar32 - (uVar4 + lVar24)) < 9) || (uVar31 - 1 < 3)) {
                    uVar18 = 0;
                    do {
                      (local_80 + (long)local_60)[uVar18 + 1] =
                           *(wchar_t *)((uVar4 - 4) + lVar24 + uVar18 * 4);
                      uVar18 = uVar18 + 1;
                    } while (uVar31 != uVar18);
                  }
                  else {
                    lVar34 = 0;
                    do {
                      puVar1 = (undefined8 *)((uVar4 - 4) + lVar24 + lVar34);
                      uVar5 = puVar1[1];
                      puVar2 = (undefined8 *)((long)local_80 + lVar34 + lVar32);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar5;
                      lVar34 = lVar34 + 0x10;
                    } while (lVar34 != (uVar31 >> 2) * 0x10);
                    uVar18 = uVar31 & 0xfffffffffffffffc;
                    if (uVar31 != uVar18) {
                      local_80[(long)((long)local_60 + uVar18 + 1)] =
                           *(wchar_t *)(uVar4 + (uVar18 + lVar22) * 4);
                      if (uVar18 + 1 < uVar31) {
                        local_80[(long)((long)local_60 + uVar18 + 2)] =
                             *(wchar_t *)(uVar4 + (uVar18 + 1 + lVar22) * 4);
                        if (uVar18 + 2 < uVar31) {
                          local_80[(long)((long)local_60 + uVar18 + 3)] =
                               *(wchar_t *)(uVar4 + (uVar18 + 2 + lVar22) * 4);
                        }
                      }
                    }
                  }
                }
                local_90 = (wchar_t *)CONCAT44(local_90._4_4_,1);
                local_60 = pwVar20;
              }
              local_58 = local_58 + -1;
            } while (local_58 != (byte *)0x0);
          }
          if (local_a8 == (wchar_t *)0x0) {
            local_90 = (wchar_t *)CONCAT44(local_90._4_4_,(wchar_t)local_90 + L'\x01');
          }
          else {
            if ((byte *)((long)local_a8 + 1) + (long)local_60 < local_78) {
              pbVar35 = (byte *)((long)local_60 + 1);
              lVar32 = (long)local_60 * 4 + 4;
              local_80[(long)local_60] = (wchar_t)local_90;
              lVar22 = (long)(int)local_e0;
              lVar24 = lVar22 * 4 + 4;
              if (((long)local_80 + (lVar32 - (uVar4 + lVar24)) < 9) ||
                 ((byte *)((long)local_a8 + -1) < (byte *)0x3)) {
                pwVar33 = (wchar_t *)0x0;
                do {
                  (local_80 + (long)local_60)[(long)((long)pwVar33 + 1)] =
                       *(wchar_t *)((uVar4 - 4) + lVar24 + (long)pwVar33 * 4);
                  pwVar33 = (wchar_t *)((long)pwVar33 + 1);
                } while (local_a8 != pwVar33);
              }
              else {
                lVar34 = 0;
                do {
                  puVar1 = (undefined8 *)((uVar4 - 4) + lVar24 + lVar34);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)((long)local_80 + lVar34 + lVar32);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  lVar34 = lVar34 + 0x10;
                } while (((ulong)local_a8 >> 2) << 4 != lVar34);
                pwVar33 = (wchar_t *)((ulong)local_a8 & 0xfffffffffffffffc);
                if (local_a8 != pwVar33) {
                  local_80[(long)((long)pwVar33 + (long)pbVar35)] =
                       *(wchar_t *)(uVar4 + (long)((long)pwVar33 + lVar22) * 4);
                  pwVar20 = (wchar_t *)((long)pwVar33 + 1);
                  if (pwVar20 < local_a8) {
                    pwVar33 = (wchar_t *)((long)pwVar33 + 2);
                    local_80[(long)((long)pwVar20 + (long)pbVar35)] =
                         *(wchar_t *)(uVar4 + (long)((long)pwVar20 + lVar22) * 4);
                    if (pwVar33 < local_a8) {
                      local_80[(long)(pbVar35 + (long)pwVar33)] =
                           *(wchar_t *)(uVar4 + (long)((long)pwVar33 + lVar22) * 4);
                    }
                  }
                }
              }
            }
            local_90 = (wchar_t *)CONCAT44(local_90._4_4_,1);
            local_60 = (wchar_t *)((byte *)((long)local_a8 + 1) + (long)local_60);
          }
          pwVar33 = (wchar_t *)0x0;
          wVar9 = *local_a0;
          pwVar20 = local_a0;
        }
      } while (wVar9 != L'\0');
      local_a0 = pwVar20;
      if ((pwVar33 != (wchar_t *)0x0) && (local_58 != (byte *)0x0)) {
        local_a0 = pwVar33 + 1;
        do {
          *(undefined8 *)(puVar26 + -0x18) = 0x74ec8b;
          wVar7 = __collidx_table_lookup(local_50);
          pwVar20 = local_a0;
          if (wVar7 < L'\0') {
            pwVar20 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074eca8:
            wVar7 = *pwVar20;
            uVar10 = (ulong)pwVar20[1];
            pwVar19 = pwVar20 + 2;
            if (wVar7 < L'\0') goto LAB_0074ed0e;
            while( true ) {
              uVar31 = 0xfffffffffffffffe;
              if (uVar10 != 0xffffffffffffffff) {
                uVar31 = uVar10;
              }
              uVar18 = uVar10;
              if (uVar10 == 0) break;
              uVar13 = 0;
              do {
                if (pwVar20[uVar13 + 2] != pwVar33[uVar13 + 1]) break;
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar31);
              uVar18 = uVar10 * 4;
              if (uVar10 == uVar13) break;
              while( true ) {
                pwVar20 = (wchar_t *)(uVar18 + (long)pwVar19);
                wVar7 = *pwVar20;
                uVar10 = (ulong)pwVar20[1];
                pwVar19 = pwVar20 + 2;
                if (L'\xffffffff' < wVar7) break;
LAB_0074ed0e:
                lVar24 = 0;
                if (uVar10 != 1) {
                  do {
                    if (pwVar20[lVar24 + 2] != pwVar33[lVar24 + 1]) {
                      pwVar20 = pwVar19 + uVar10 * 2;
                      goto LAB_0074eca8;
                    }
                    lVar24 = lVar24 + 1;
                  } while (lVar24 != uVar10 - 1);
                }
                wVar9 = pwVar33[uVar10];
                uVar18 = uVar10 * 8;
                if ((pwVar19[uVar10 - 1] <= wVar9) && (wVar9 <= pwVar19[uVar10 * 2 + -1])) {
                  pwVar20 = local_a0 + uVar10;
                  wVar7 = local_70[(long)(wVar9 - pwVar19[uVar10 - 1]) + (long)-wVar7];
                  goto LAB_0074f814;
                }
              }
            }
            pwVar20 = (wchar_t *)((long)local_a0 + uVar18);
          }
LAB_0074f814:
          iVar15 = (wVar7 & 0xffffffU) + 1;
          uVar10 = (ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
          if (0 < iVar17) {
            iVar8 = 0;
            do {
              iVar29 = (int)uVar10 + iVar15;
              iVar8 = iVar8 + 1;
              iVar15 = iVar29 + 1;
              uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
            } while (iVar8 != iVar17);
          }
          if (local_58 != (byte *)0x1) {
            pbVar35 = (byte *)0x1;
            local_a8 = pwVar33;
            do {
              pwVar19 = pwVar20 + 1;
              *(undefined8 *)(puVar26 + -0x18) = 0x74f874;
              wVar7 = __collidx_table_lookup(local_50);
              if (wVar7 < L'\0') {
                pwVar33 = (wchar_t *)(local_68 + (long)-wVar7 * 4);
LAB_0074f88b:
                wVar7 = *pwVar33;
                wVar9 = pwVar33[1];
                while( true ) {
                  uVar10 = (ulong)wVar9;
                  if (wVar7 < L'\0') break;
                  uVar31 = 0xfffffffffffffffe;
                  if (uVar10 != 0xffffffffffffffff) {
                    uVar31 = uVar10;
                  }
                  uVar18 = uVar10;
                  if (uVar10 == 0) {
LAB_0074fa04:
                    pwVar19 = (wchar_t *)((long)pwVar19 + uVar18);
                    goto LAB_0074f963;
                  }
                  uVar13 = 0;
                  do {
                    if (pwVar33[uVar13 + 2] != pwVar20[uVar13 + 1]) break;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < uVar31);
                  uVar18 = uVar10 * 4;
                  if (uVar10 == uVar13) goto LAB_0074fa04;
                  pwVar33 = pwVar33 + uVar10 + 2;
                  wVar7 = *pwVar33;
                  wVar9 = pwVar33[1];
                }
                lVar24 = 0;
                if (uVar10 != 1) {
                  do {
                    if (pwVar33[lVar24 + 2] != pwVar20[lVar24 + 1]) {
                      pwVar33 = pwVar33 + uVar10 * 2 + 2;
                      goto LAB_0074f88b;
                    }
                    lVar24 = lVar24 + 1;
                  } while (uVar10 - 1 != lVar24);
                }
                wVar9 = pwVar20[uVar10];
                if ((wVar9 < pwVar33[uVar10 + 1]) || (pwVar33[uVar10 * 2 + 1] < wVar9)) {
                  pwVar33 = pwVar33 + uVar10 * 2 + 2;
                  goto LAB_0074f88b;
                }
                pwVar19 = pwVar19 + uVar10;
                wVar7 = local_70[(long)(wVar9 - pwVar33[uVar10 + 1]) + (long)-wVar7];
              }
LAB_0074f963:
              iVar15 = (wVar7 & 0xffffffU) + 1;
              uVar10 = (ulong)*(uint *)(uVar4 + (long)(wVar7 & 0xffffffU) * 4);
              if (0 < iVar17) {
                iVar8 = 0;
                do {
                  iVar29 = (int)uVar10 + iVar15;
                  iVar8 = iVar8 + 1;
                  iVar15 = iVar29 + 1;
                  uVar10 = (ulong)*(uint *)(uVar4 + (long)iVar29 * 4);
                } while (iVar8 != iVar17);
              }
              pbVar35 = pbVar35 + 1;
              pwVar33 = local_a8;
              pwVar20 = pwVar19;
            } while (pbVar35 != local_58);
          }
          if (uVar10 == 0) {
            local_90 = (wchar_t *)CONCAT44(local_90._4_4_,(wchar_t)local_90 + L'\x01');
          }
          else {
            pwVar20 = (wchar_t *)((long)local_60 + uVar10 + 1);
            if (pwVar20 < local_78) {
              lVar22 = (long)iVar15;
              lVar32 = (long)local_60 * 4 + 4;
              lVar24 = lVar22 * 4 + 4;
              local_80[(long)local_60] = (wchar_t)local_90;
              if (((long)local_80 + (lVar32 - (uVar4 + lVar24)) < 9) || (uVar10 - 1 < 3)) {
                uVar31 = 0;
                do {
                  (local_80 + (long)local_60)[uVar31 + 1] =
                       *(wchar_t *)((uVar4 - 4) + lVar24 + uVar31 * 4);
                  uVar31 = uVar31 + 1;
                } while (uVar10 != uVar31);
              }
              else {
                lVar34 = 0;
                do {
                  puVar1 = (undefined8 *)((uVar4 - 4) + lVar24 + lVar34);
                  uVar5 = puVar1[1];
                  puVar2 = (undefined8 *)((long)local_80 + lVar34 + lVar32);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar5;
                  lVar34 = lVar34 + 0x10;
                } while ((uVar10 >> 2) * 0x10 != lVar34);
                uVar31 = uVar10 & 0xfffffffffffffffc;
                if (uVar10 != uVar31) {
                  local_80[(long)((long)local_60 + uVar31 + 1)] =
                       *(wchar_t *)(uVar4 + (uVar31 + lVar22) * 4);
                  if (uVar31 + 1 < uVar10) {
                    local_80[(long)((long)local_60 + uVar31 + 2)] =
                         *(wchar_t *)(uVar4 + (uVar31 + 1 + lVar22) * 4);
                    if (uVar31 + 2 < uVar10) {
                      local_80[(long)((long)local_60 + uVar31 + 3)] =
                           *(wchar_t *)(uVar4 + (uVar31 + 2 + lVar22) * 4);
                    }
                  }
                }
              }
            }
            local_90 = (wchar_t *)CONCAT44(local_90._4_4_,1);
            local_60 = pwVar20;
          }
          local_58 = local_58 + -1;
        } while (local_58 != (byte *)0x0);
        local_58 = (byte *)0x0;
      }
    }
    local_b0 = local_b0 + 1;
    if (local_60 < local_78) {
      local_80[(long)local_60] = (uint)(local_b0 < local_88);
    }
    pwVar33 = (wchar_t *)((long)local_60 + 1);
  } while (local_88 != local_b0);
  puVar28 = puVar26 + -0x10;
  pwVar33 = local_60;
  if (((&_nl_current_LC_PAPER_used < (wchar_t *)((long)local_60 + 1)) &&
      (puVar28 = puVar26 + -0x10, local_60 == local_d0)) &&
     (pwVar33 = (wchar_t *)((long)local_60 + -1), puVar28 = puVar26 + -0x10, local_60 <= local_78))
  {
LAB_0074fe1c:
    local_80[(long)((long)local_60 + -1)] = L'\0';
    puVar28 = puVar26 + -0x10;
  }
LAB_0074e771:
  local_60 = pwVar33;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (size_t)local_60;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar28 + -8) = 0x750821;
  __stack_chk_fail_local();
}

