
ulong printf_positional(long param_1,wchar_t *param_2,uint param_3,undefined8 param_4,
                       undefined1 (*param_5) [16],undefined4 param_6,int param_7,int *param_8,
                       char *param_9,int param_10,char *param_11,undefined4 param_12,uint param_13)

{
  int iVar1;
  wint_t *pwVar2;
  long *plVar3;
  uint *puVar4;
  ulong uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  wint_t wVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  code *pcVar15;
  ulong uVar16;
  wchar_t *pwVar17;
  long lVar18;
  size_t sVar19;
  undefined4 *puVar20;
  unkbyte10 *pVar21;
  uint *puVar22;
  undefined1 (*pauVar23) [16];
  long lVar24;
  undefined1 (*pauVar25) [16];
  undefined *puVar26;
  int *piVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 (*pauVar30) [16];
  undefined4 *puVar31;
  wchar_t *pwVar32;
  uint *puVar33;
  undefined1 *puVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  byte bVar38;
  uint uVar39;
  uint uVar40;
  undefined1 (*pauVar41) [16];
  uint uVar42;
  int iVar43;
  ulong uVar44;
  uint uVar45;
  undefined1 (**ppauVar46) [16];
  undefined1 (*pauVar47) [16];
  ulong uVar48;
  uint uVar49;
  long in_FS_OFFSET;
  bool bVar50;
  undefined1 auStack_978 [12];
  int local_96c;
  undefined1 (*local_968) [16];
  wchar_t *local_960;
  long local_958;
  uint local_950;
  uint local_94c;
  wchar_t *local_948;
  uint local_940;
  uint local_93c;
  char *local_938;
  undefined1 (*local_930) [16];
  wchar_t *local_928;
  undefined1 (*local_920) [16];
  uint local_918;
  uint local_914;
  char *local_910;
  undefined8 local_908;
  ulong local_900;
  undefined1 (*local_8f8) [16];
  byte local_8ef;
  byte local_8ee;
  byte local_8ed;
  uint local_8ec;
  uint local_8e8;
  uint local_8e4;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined1 (*local_8c8) [16];
  long local_8c0;
  undefined1 (*local_8b8) [16];
  undefined8 local_8b0;
  undefined1 (*local_8a8) [16];
  undefined1 (*local_8a0 [5]) [16];
  undefined4 auStack_874 [3];
  undefined1 (*local_868) [16];
  ulong local_860;
  undefined1 local_858 [1024];
  undefined1 (*local_458) [16];
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  puVar29 = auStack_978;
  local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,param_6);
  local_938 = param_9;
  local_910 = param_11;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8f8 = (undefined1 (*) [16])local_858;
  local_860 = 0x400;
  local_930 = (undefined1 (*) [16])local_448;
  local_450 = 0x400;
  local_8a8 = (undefined1 (*) [16])0x0;
  if (param_11 == (char *)0xffffffffffffffff) {
    param_12 = *(undefined4 *)(**(long **)(in_FS_OFFSET + -0xc0) + 0x60);
    local_910 = *(char **)(**(long **)(in_FS_OFFSET + -0xc0) + 0x50);
    if ((*local_910 == '\0') || (*local_910 == '\x7f')) {
      local_910 = (char *)0x0;
    }
  }
  local_948 = param_2;
  local_93c = param_3;
  local_8d0 = param_5;
  local_8c0 = param_1;
  local_868 = local_8f8;
  local_458 = local_930;
  if (*param_8 == 0) {
    pauVar41 = (undefined1 (*) [16])0x0;
    pauVar25 = local_8f8;
    pauVar23 = (undefined1 (*) [16])0x0;
  }
  else {
    pauVar14 = (undefined1 (*) [16])0x0;
    pauVar41 = (undefined1 (*) [16])0x0;
    local_8b8 = (undefined1 (*) [16])0xe;
    local_8b0 = local_8f8;
    while( true ) {
      puVar26 = (undefined *)((long)local_8b0 + (long)pauVar41 * 0x48);
      pauVar41 = (undefined1 (*) [16])(*pauVar41 + 1);
      lVar13 = __parse_one_specwc(param_8,pauVar14,puVar26,&local_8a8);
      param_8 = *(int **)(puVar26 + 0x20);
      pauVar14 = (undefined1 (*) [16])(*pauVar14 + lVar13);
      if (*param_8 == 0) break;
      if (local_8b8 == pauVar41) {
        cVar9 = __libc_scratch_buffer_grow_preserve(&local_868);
        puVar28 = auStack_978;
        if (cVar9 == '\0') goto LAB_00791e50;
        local_8b8 = (undefined1 (*) [16])(local_860 / 0x48);
        local_8b0 = local_868;
      }
    }
    pauVar25 = local_8b0;
    pauVar23 = local_8a8;
    if (local_8a8 <= pauVar14) {
      pauVar23 = pauVar14;
    }
  }
  local_8ee = __libc_scratch_buffer_set_array_size(&local_458,pauVar23,0x18);
  puVar28 = auStack_978;
  if (local_8ee == 0) {
LAB_00791e50:
    local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,0xffffffff);
    puVar29 = puVar28;
    goto LAB_00791e5a;
  }
  local_8b0 = local_458 + (long)pauVar23;
  local_8c8 = local_458;
  puVar26 = *local_8b0 + (long)pauVar23 * 4;
  local_940 = param_13 & 2;
  memset(puVar26,-(uint)(local_940 != 0),(long)pauVar23 * 4);
  pauVar14 = local_8b0;
  if (pauVar41 == (undefined1 (*) [16])0x0) {
    puVar29 = auStack_978;
    if (pauVar23 != (undefined1 (*) [16])0x0) goto LAB_00792000;
  }
  else {
    pauVar30 = (undefined1 (*) [16])0x0;
    local_8b8 = pauVar25;
    local_8e0 = pauVar23;
    do {
      while( true ) {
        if (*(int *)(pauVar25[2] + 0xc) != -1) {
          *(undefined4 *)(puVar26 + (long)*(int *)(pauVar25[2] + 0xc) * 4) = 0;
        }
        if (*(int *)(pauVar25[2] + 8) != -1) {
          *(undefined4 *)(puVar26 + (long)*(int *)(pauVar25[2] + 8) * 4) = 0;
        }
        lVar13 = *(long *)(pauVar25[3] + 8);
        if (lVar13 != 0) break;
LAB_00791f77:
        pauVar30 = (undefined1 (*) [16])(*pauVar30 + 1);
        pauVar25 = (undefined1 (*) [16])(pauVar25[4] + 8);
        if (pauVar30 == pauVar41) goto LAB_00791fe3;
      }
      if (lVar13 == 1) {
        *(undefined4 *)(puVar26 + (long)*(int *)pauVar25[3] * 4) = *(undefined4 *)(pauVar25[3] + 4);
        *(undefined4 *)(*pauVar14 + (long)*(int *)pauVar25[3] * 4) = *(undefined4 *)pauVar25[4];
        goto LAB_00791f77;
      }
      pauVar30 = (undefined1 (*) [16])(*pauVar30 + 1);
      lVar24 = (long)*(int *)pauVar25[3] * 4;
      (**(code **)(__printf_arginfo_table + (long)*(int *)(*pauVar25 + 8) * 8))
                (pauVar25,lVar13,puVar26 + lVar24,*pauVar14 + lVar24);
      pauVar25 = (undefined1 (*) [16])(pauVar25[4] + 8);
    } while (pauVar30 != pauVar41);
LAB_00791fe3:
    pauVar25 = local_8b8;
    pauVar23 = local_8e0;
    if (local_8e0 != (undefined1 (*) [16])0x0) {
LAB_00792000:
      pauVar47 = (undefined1 (*) [16])0x0;
      uVar40 = param_13 & 1;
      uVar42 = param_13 & 8;
      pauVar14 = local_8c8;
      puVar29 = auStack_978;
      pauVar30 = local_8d0;
      do {
        uVar39 = *(uint *)(puVar26 + (long)pauVar47 * 4);
        if ((int)uVar39 < 8) {
          if ((int)uVar39 < -1) {
LAB_00792640:
            if ((uVar39 & 0x800) != 0) goto switchD_00792056_caseD_3;
LAB_00792650:
            if ((__printf_va_arg_table == 0) ||
               (*(long *)(__printf_va_arg_table + -0x40 + (long)(int)uVar39 * 8) == 0)) {
              *pauVar14 = (undefined1  [16])0x0;
            }
            else {
              uVar48 = (long)*(int *)(*local_8b0 + (long)pauVar47 * 4) + 0x17;
              for (puVar28 = puVar29; puVar28 != puVar29 + -(uVar48 & 0xfffffffffffff000);
                  puVar28 = puVar28 + -0x1000) {
                *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
              }
              uVar48 = (ulong)((uint)uVar48 & 0xff0);
              lVar13 = -uVar48;
              puVar29 = puVar28 + lVar13;
              if (uVar48 != 0) {
                *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(puVar28 + -8);
              }
              local_8e0 = (undefined1 (*) [16])CONCAT71(local_8e0._1_7_,(char)uVar40);
              *(ulong *)*pauVar14 = (ulong)(puVar28 + lVar13 + 0xf) & 0xfffffffffffffff0;
              pcVar15 = *(code **)(__printf_va_arg_table + -0x40 +
                                  (long)*(int *)(puVar26 + (long)pauVar47 * 4) * 8);
              *(undefined8 *)(puVar28 + lVar13 + -8) = 0x794209;
              local_8e4 = uVar42;
              local_8d0 = pauVar14;
              local_8b8 = pauVar30;
              (*pcVar15)();
              uVar40 = (uint)(byte)local_8e0;
              pauVar14 = local_8d0;
              pauVar30 = local_8b8;
              uVar42 = local_8e4;
            }
          }
          else {
            switch(uVar39) {
            case 0:
            case 1:
            case 2:
switchD_00792056_caseD_0:
              uVar39 = *(uint *)*pauVar30;
              if (uVar39 < 0x30) {
                puVar37 = (undefined4 *)((ulong)uVar39 + *(long *)pauVar30[1]);
                *(uint *)*pauVar30 = uVar39 + 8;
              }
              else {
                puVar37 = *(undefined4 **)(*pauVar30 + 8);
                *(undefined4 **)(*pauVar30 + 8) = puVar37 + 2;
              }
              *(undefined4 *)*pauVar14 = *puVar37;
              break;
            case 3:
            case 4:
            case 5:
              goto switchD_00792056_caseD_3;
            case 6:
            case 7:
              uVar39 = *(uint *)(*pauVar30 + 4);
              if (uVar39 < 0xb0) {
                puVar36 = (undefined8 *)((ulong)uVar39 + *(long *)pauVar30[1]);
                *(uint *)(*pauVar30 + 4) = uVar39 + 0x10;
              }
              else {
                puVar36 = *(undefined8 **)(*pauVar30 + 8);
                *(undefined8 **)(*pauVar30 + 8) = puVar36 + 1;
              }
              *(undefined8 *)*pauVar14 = *puVar36;
              break;
            default:
              if (local_940 == 0) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar29 + -8) = &UNK_0079268f;
                __assert_fail("(mode_flags & PRINTF_FORTIFY) != 0","vfprintf-internal.c",0x70f,
                              "printf_positional");
              }
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar29 + -8) = 0x7925fa;
              __libc_fatal("*** invalid %N$ use detected ***\n");
            }
          }
        }
        else if (uVar39 == 0x107) {
          if ((char)uVar40 == '\0') {
            if (uVar42 == 0) {
              pVar21 = (unkbyte10 *)(*(long *)(*pauVar30 + 8) + 0xfU & 0xfffffffffffffff0);
              *(unkbyte10 **)(*pauVar30 + 8) = pVar21 + 1;
              *(unkbyte10 *)*pauVar14 = *pVar21;
            }
            else {
              uVar39 = *(uint *)(*pauVar30 + 4);
              if (uVar39 < 0xb0) {
                puVar36 = (undefined8 *)((ulong)uVar39 + *(long *)pauVar30[1]);
                *(uint *)(*pauVar30 + 4) = uVar39 + 0x10;
              }
              else {
                puVar36 = (undefined8 *)(*(long *)(*pauVar30 + 8) + 0xfU & 0xfffffffffffffff0);
                *(undefined8 **)(*pauVar30 + 8) = puVar36 + 2;
              }
              uVar35 = puVar36[1];
              *(undefined8 *)*pauVar14 = *puVar36;
              *(undefined8 *)(*pauVar14 + 8) = uVar35;
            }
          }
          else {
            uVar39 = *(uint *)(*pauVar30 + 4);
            if (uVar39 < 0xb0) {
              puVar36 = (undefined8 *)((ulong)uVar39 + *(long *)pauVar30[1]);
              *(uint *)(*pauVar30 + 4) = uVar39 + 0x10;
            }
            else {
              puVar36 = *(undefined8 **)(*pauVar30 + 8);
              *(undefined8 **)(*pauVar30 + 8) = puVar36 + 1;
            }
            *(undefined8 *)*pauVar14 = *puVar36;
            *(uint *)(puVar26 + (long)pauVar47 * 4) =
                 *(uint *)(puVar26 + (long)pauVar47 * 4) & 0xfffffeff;
          }
        }
        else {
          if ((int)uVar39 < 0x108) {
            if (uVar39 != 0x100) goto LAB_00792650;
          }
          else if (uVar39 != 0x200) {
            if (uVar39 == 0x400) goto switchD_00792056_caseD_0;
            goto LAB_00792640;
          }
switchD_00792056_caseD_3:
          uVar39 = *(uint *)*pauVar30;
          if (uVar39 < 0x30) {
            puVar36 = (undefined8 *)((ulong)uVar39 + *(long *)pauVar30[1]);
            *(uint *)*pauVar30 = uVar39 + 8;
          }
          else {
            puVar36 = *(undefined8 **)(*pauVar30 + 8);
            *(undefined8 **)(*pauVar30 + 8) = puVar36 + 1;
          }
          *(undefined8 *)*pauVar14 = *puVar36;
        }
        pauVar47 = (undefined1 (*) [16])(*pauVar47 + 1);
        pauVar14 = pauVar14 + 1;
      } while (pauVar47 < pauVar23);
    }
    local_8b8 = (undefined1 (*) [16])(long)param_7;
    if (local_8b8 < pauVar41) {
      local_920 = pauVar41;
      local_928 = (wchar_t *)(local_938 + 1000);
      local_958 = (long)(local_938 + 1000) - (long)(local_938 + 0x3e4);
      local_960 = (wchar_t *)(local_938 + 0x3e4);
      local_8ef = (byte)param_13 & 1;
      local_950 = param_13 & 8;
      piVar27 = (int *)((long)pauVar25 + (long)local_8b8 * 0x48);
      lVar13 = local_958 >> 2;
      local_968 = (undefined1 (*) [16])0x0;
      if (lVar13 < 1) {
        local_968 = (undefined1 (*) [16])-lVar13;
      }
      local_96c = (int)local_968;
      local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(uint)local_8d8);
LAB_00792138:
      bVar10 = *(byte *)(piVar27 + 3);
      iVar43 = piVar27[1];
      uVar44 = (ulong)*piVar27;
      uVar42 = piVar27[2];
      uVar39 = bVar10 >> 3 & 1;
      uVar40 = bVar10 & 1;
      local_8ed = bVar10 >> 7;
      uVar49 = bVar10 >> 2 & 1;
      pwVar32 = (wchar_t *)(ulong)uVar49;
      local_8e8 = uVar39;
      local_8e4 = bVar10 >> 4 & 1;
      local_8d8 = (undefined1 (*) [16])
                  (CONCAT44(local_8d8._4_4_,(uint)(bVar10 >> 5)) & 0xffffffff00000001);
      local_8e0 = (undefined1 (*) [16])
                  (CONCAT44(local_8e0._4_4_,(uint)(bVar10 >> 6)) & 0xffffffff00000001);
      uVar45 = *(byte *)((long)piVar27 + 0xd) >> 3 & 1;
      uVar48 = (ulong)uVar45;
      local_914 = bVar10 >> 1 & 1;
      local_908 = (undefined1 (*) [16])
                  (CONCAT44(local_908._4_4_,(uint)(*(byte *)((long)piVar27 + 0xd) >> 1)) &
                  0xffffffff00000001);
      local_8d0 = (undefined1 (*) [16])
                  (CONCAT44(local_8d0._4_4_,(uint)(bVar10 >> 2)) & 0xffffffff00000001);
      local_8ec = CONCAT31(local_8ec._1_3_,(char)piVar27[4]);
      if (piVar27[0xb] != -1) {
        iVar43 = *(int *)local_8c8[piVar27[0xb]];
        if (iVar43 < 0) {
          local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,1);
          iVar43 = -iVar43;
          piVar27[1] = iVar43;
          *(byte *)(piVar27 + 3) = bVar10 | 0x20;
        }
        else {
          piVar27[1] = iVar43;
        }
      }
      if (piVar27[10] != -1) {
        uVar44 = (ulong)*(int *)local_8c8[piVar27[10]];
        if (*(int *)local_8c8[piVar27[10]] < 0) {
          uVar44 = 0xffffffffffffffff;
        }
        *piVar27 = (int)uVar44;
      }
      puVar28 = puVar29;
      if (((int)uVar42 < 0x100) && (__printf_function_table != 0)) {
        pcVar15 = *(code **)(__printf_function_table + (long)(int)uVar42 * 8);
        local_900 = (long)(int)uVar42;
        if (pcVar15 == (code *)0x0) goto LAB_00792266;
        uVar5 = *(ulong *)(piVar27 + 0xe);
        uVar16 = uVar5 * 8 + 0x17;
        for (puVar34 = puVar29; puVar34 != puVar29 + -(uVar16 & 0xfffffffffffff000);
            puVar34 = puVar34 + -0x1000) {
          *(undefined8 *)(puVar34 + -8) = *(undefined8 *)(puVar34 + -8);
        }
        uVar16 = (ulong)((uint)uVar16 & 0xff0);
        lVar13 = -uVar16;
        puVar29 = puVar34 + lVar13;
        if (uVar16 != 0) {
          *(undefined8 *)(puVar34 + -8) = *(undefined8 *)(puVar34 + -8);
        }
        if (uVar5 != 0) {
          local_918._1_3_ = (undefined3)(local_918 >> 8);
          local_918 = CONCAT31(local_918._1_3_,(char)uVar39);
          iVar11 = piVar27[0xc];
          uVar16 = 0;
          do {
            *(undefined1 (**) [16])
             (((ulong)(puVar34 + lVar13 + 0xf) & 0xfffffffffffffff0) + uVar16 * 8) =
                 local_8c8 + (uint)(iVar11 + (int)uVar16);
            uVar16 = (ulong)((int)uVar16 + 1);
          } while (uVar16 < uVar5);
          pcVar15 = *(code **)(__printf_function_table + local_900 * 8);
        }
        local_918 = CONCAT31(local_918._1_3_,(char)uVar40);
        uVar16 = local_900 >> 8;
        local_900 = CONCAT71((int7)uVar16,(char)uVar39);
        *(undefined8 *)(puVar34 + lVar13 + -8) = 0x7930f7;
        local_94c = uVar42;
        iVar11 = (*pcVar15)(local_8c0,piVar27,(ulong)(puVar34 + lVar13 + 0xf) & 0xfffffffffffffff0);
        uVar39 = (uint)(byte)local_900;
        uVar40 = local_918 & 0xff;
        puVar28 = puVar34 + lVar13;
        uVar42 = local_94c;
        if (iVar11 == -2) goto LAB_00792266;
        puVar28 = puVar34 + lVar13;
        if (iVar11 < 0) goto LAB_00791e50;
        if (-1 < (int)local_8b0) {
          bVar50 = SCARRY4(iVar11,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar11 + (int)local_8b0);
          puVar29 = puVar34 + lVar13;
          puVar28 = puVar34 + lVar13;
          if (!bVar50) goto LAB_00792778;
          goto LAB_00791e3f;
        }
        goto LAB_00791e5a;
      }
LAB_00792266:
      puVar29 = puVar28;
      lVar13 = local_8c0;
      pcVar7 = local_938;
      pwVar17 = local_948;
      bVar10 = (byte)uVar39;
      local_918 = uVar42;
      iVar11 = (int)uVar44;
      puVar28 = puVar29;
      switch(uVar42) {
      default:
        uVar44 = *(ulong *)(piVar27 + 0xe);
        uVar48 = uVar44 * 8 + 0x17;
        for (puVar34 = puVar29; puVar34 != puVar29 + -(uVar48 & 0xfffffffffffff000);
            puVar34 = puVar34 + -0x1000) {
          *(undefined8 *)(puVar34 + -8) = *(undefined8 *)(puVar34 + -8);
        }
        uVar48 = (ulong)((uint)uVar48 & 0xff0);
        lVar13 = -uVar48;
        puVar29 = puVar34 + lVar13;
        if (uVar48 != 0) {
          *(undefined8 *)(puVar34 + -8) = *(undefined8 *)(puVar34 + -8);
        }
        if (uVar44 != 0) {
          iVar43 = piVar27[0xc];
          uVar48 = 0;
          do {
            *(undefined1 (**) [16])
             (((ulong)(puVar34 + lVar13 + 0xf) & 0xfffffffffffffff0) + uVar48 * 8) =
                 local_8c8 + (uint)(iVar43 + (int)uVar48);
            uVar48 = (ulong)((int)uVar48 + 1);
          } while (uVar48 < uVar44);
        }
        lVar24 = *(long *)(local_8c0 + 0xa0);
        if (lVar24 == 0) {
LAB_00794090:
          *(undefined8 *)(puVar34 + lVar13 + -8) = 0x7940a1;
          iVar43 = __woverflow(local_8c0,0x25);
          puVar28 = puVar34 + lVar13;
          if (iVar43 == -1) goto LAB_00791e50;
          bVar10 = *(byte *)(piVar27 + 3);
          if ((bVar10 & 8) == 0) {
            iVar11 = 2;
            iVar43 = 1;
          }
          else {
            lVar24 = *(long *)(local_8c0 + 0xa0);
            if (lVar24 != 0) {
              puVar20 = *(undefined4 **)(lVar24 + 0x20);
              puVar31 = *(undefined4 **)(lVar24 + 0x28);
              goto LAB_0079234b;
            }
LAB_007940cd:
            *(undefined8 *)(puVar34 + lVar13 + -8) = 0x7940de;
            iVar43 = __woverflow(local_8c0,0x23);
            puVar28 = puVar34 + lVar13;
            if (iVar43 == -1) goto LAB_00791e50;
            bVar10 = *(byte *)(piVar27 + 3);
            iVar11 = 3;
            iVar43 = 2;
          }
          if (-1 < (char)bVar10) goto LAB_00792374;
          lVar24 = *(long *)(local_8c0 + 0xa0);
          iVar43 = iVar11;
          if (lVar24 != 0) goto LAB_00793d80;
LAB_00794118:
          *(undefined8 *)(puVar34 + lVar13 + -8) = 0x794129;
          iVar11 = __woverflow(local_8c0,0x27);
          puVar28 = puVar34 + lVar13;
          if (iVar11 == -1) goto LAB_00791e50;
LAB_00793d9c:
          bVar10 = *(byte *)(piVar27 + 3);
        }
        else {
          puVar37 = *(undefined4 **)(lVar24 + 0x20);
          puVar31 = *(undefined4 **)(lVar24 + 0x28);
          if (puVar31 <= puVar37) goto LAB_00794090;
          puVar20 = puVar37 + 1;
          *(undefined4 **)(lVar24 + 0x20) = puVar20;
          *puVar37 = 0x25;
          bVar10 = *(byte *)(piVar27 + 3);
          if ((bVar10 & 8) == 0) {
            iVar43 = 1;
            if ((char)bVar10 < '\0') {
              iVar43 = 2;
LAB_00793d80:
              puVar37 = *(undefined4 **)(lVar24 + 0x20);
              if (*(undefined4 **)(lVar24 + 0x28) <= puVar37) goto LAB_00794118;
              *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
              *puVar37 = 0x27;
              goto LAB_00793d9c;
            }
          }
          else {
LAB_0079234b:
            if (puVar31 <= puVar20) goto LAB_007940cd;
            iVar43 = 2;
            *(undefined4 **)(lVar24 + 0x20) = puVar20 + 1;
            *puVar20 = 0x23;
            bVar10 = *(byte *)(piVar27 + 3);
            if ((char)bVar10 < '\0') {
              iVar43 = 3;
              goto LAB_00793d80;
            }
          }
        }
LAB_00792374:
        if ((bVar10 & 0x40) == 0) {
          if ((bVar10 & 0x10) != 0) {
            lVar24 = *(long *)(local_8c0 + 0xa0);
            if ((lVar24 == 0) ||
               (puVar37 = *(undefined4 **)(lVar24 + 0x20),
               *(undefined4 **)(lVar24 + 0x28) <= puVar37)) {
              *(undefined8 *)(puVar34 + lVar13 + -8) = 0x7944cd;
              iVar11 = __woverflow(local_8c0,0x20);
              goto joined_r0x007944d0;
            }
            *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
            *puVar37 = 0x20;
            goto LAB_007923af;
          }
        }
        else {
          lVar24 = *(long *)(local_8c0 + 0xa0);
          if ((lVar24 == 0) ||
             (puVar37 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar37)
             ) {
            *(undefined8 *)(puVar34 + lVar13 + -8) = 0x794337;
            iVar11 = __woverflow(local_8c0,0x2b);
joined_r0x007944d0:
            puVar28 = puVar34 + lVar13;
            if (iVar11 == -1) goto LAB_00791e50;
          }
          else {
            *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
            *puVar37 = 0x2b;
          }
LAB_007923af:
          bVar10 = *(byte *)(piVar27 + 3);
          iVar43 = iVar43 + 1;
        }
        if ((bVar10 & 0x20) != 0) {
          lVar24 = *(long *)(local_8c0 + 0xa0);
          if ((lVar24 == 0) ||
             (puVar37 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar37)
             ) {
            *(undefined8 *)(puVar34 + lVar13 + -8) = 0x794359;
            iVar11 = __woverflow(local_8c0,0x2d);
            puVar28 = puVar34 + lVar13;
            if (iVar11 == -1) goto LAB_00791e50;
          }
          else {
            *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
            *puVar37 = 0x2d;
          }
          iVar43 = iVar43 + 1;
        }
        if (piVar27[4] == 0x30) {
          lVar24 = *(long *)(local_8c0 + 0xa0);
          if ((lVar24 == 0) ||
             (puVar37 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar37)
             ) {
            *(undefined8 *)(puVar34 + lVar13 + -8) = 0x79447b;
            iVar11 = __woverflow(local_8c0,0x30);
            puVar28 = puVar34 + lVar13;
            if (iVar11 == -1) goto LAB_00791e50;
          }
          else {
            *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
            *puVar37 = 0x30;
          }
          iVar43 = iVar43 + 1;
        }
        if ((*(byte *)((long)piVar27 + 0xd) & 8) != 0) {
          lVar24 = *(long *)(local_8c0 + 0xa0);
          if ((lVar24 == 0) ||
             (puVar37 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar37)
             ) {
            *(undefined8 *)(puVar34 + lVar13 + -8) = 0x794381;
            iVar11 = __woverflow(local_8c0,0x49);
            puVar28 = puVar34 + lVar13;
            if (iVar11 == -1) goto LAB_00791e50;
          }
          else {
            *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
            *puVar37 = 0x49;
          }
          iVar43 = iVar43 + 1;
        }
        lVar24 = local_8c0;
        if (piVar27[1] != 0) {
          uVar48 = (long)piVar27[1];
          ppauVar46 = &local_868;
          do {
            ppauVar46 = (undefined1 (**) [16])((long)ppauVar46 - 4);
            *(int *)ppauVar46 = *(int *)(_itowa_lower_digits + (uVar48 % 10) * 4);
            bVar50 = 9 < uVar48;
            uVar48 = uVar48 / 10;
          } while (bVar50);
          while (ppauVar46 < &local_868) {
            lVar18 = *(long *)(lVar24 + 0xa0);
            iVar11 = *(int *)ppauVar46;
            if ((lVar18 == 0) ||
               (piVar6 = *(int **)(lVar18 + 0x20), *(int **)(lVar18 + 0x28) <= piVar6)) {
              *(undefined8 *)(puVar34 + lVar13 + -8) = 0x7924f3;
              iVar11 = __woverflow(lVar24);
            }
            else {
              *(int **)(lVar18 + 0x20) = piVar6 + 1;
              *piVar6 = iVar11;
            }
            puVar28 = puVar34 + lVar13;
            if ((iVar11 == -1) || (puVar28 = puVar34 + lVar13, iVar43 == 0x7fffffff))
            goto LAB_00791e50;
            iVar43 = iVar43 + 1;
            ppauVar46 = (undefined1 (**) [16])((long)ppauVar46 + 4);
          }
        }
        if (*piVar27 != -1) {
          lVar24 = *(long *)(local_8c0 + 0xa0);
          if ((lVar24 == 0) ||
             (puVar37 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar37)
             ) {
            *(undefined8 *)(puVar34 + lVar13 + -8) = 0x7943a1;
            iVar11 = __woverflow(local_8c0,0x2e);
            puVar28 = puVar34 + lVar13;
            if (iVar11 == -1) goto LAB_00791e50;
          }
          else {
            *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
            *puVar37 = 0x2e;
          }
          lVar24 = local_8c0;
          puVar28 = puVar34 + lVar13;
          if (iVar43 == 0x7fffffff) goto LAB_00791e50;
          uVar48 = (long)*piVar27;
          ppauVar46 = &local_868;
          do {
            ppauVar46 = (undefined1 (**) [16])((long)ppauVar46 - 4);
            *(int *)ppauVar46 = *(int *)(_itowa_lower_digits + (uVar48 % 10) * 4);
            bVar50 = 9 < uVar48;
            uVar48 = uVar48 / 10;
          } while (bVar50);
          while (iVar43 = iVar43 + 1, ppauVar46 < &local_868) {
            lVar18 = *(long *)(lVar24 + 0xa0);
            iVar11 = *(int *)ppauVar46;
            if ((lVar18 == 0) ||
               (piVar6 = *(int **)(lVar18 + 0x20), *(int **)(lVar18 + 0x28) <= piVar6)) {
              *(undefined8 *)(puVar34 + lVar13 + -8) = 0x793cb3;
              iVar11 = __woverflow(lVar24);
            }
            else {
              *(int **)(lVar18 + 0x20) = piVar6 + 1;
              *piVar6 = iVar11;
            }
            puVar28 = puVar34 + lVar13;
            if ((iVar11 == -1) ||
               (puVar28 = puVar34 + lVar13, ppauVar46 = (undefined1 (**) [16])((long)ppauVar46 + 4),
               iVar43 == 0x7fffffff)) goto LAB_00791e50;
          }
        }
        iVar11 = piVar27[2];
        if (iVar11 != 0) {
          lVar24 = *(long *)(local_8c0 + 0xa0);
          if ((lVar24 == 0) ||
             (piVar6 = *(int **)(lVar24 + 0x20), *(int **)(lVar24 + 0x28) <= piVar6)) {
            *(undefined8 *)(puVar34 + lVar13 + -8) = 0x79451f;
            iVar11 = __woverflow(local_8c0);
          }
          else {
            *(int **)(lVar24 + 0x20) = piVar6 + 1;
            *piVar6 = iVar11;
          }
          puVar28 = puVar34 + lVar13;
          if ((iVar11 == -1) || (puVar28 = puVar34 + lVar13, iVar43 == 0x7fffffff))
          goto LAB_00791e50;
          iVar43 = iVar43 + 1;
        }
        if (-1 < (int)local_8b0) {
          bVar50 = SCARRY4(iVar43,(int)local_8b0);
          iVar43 = iVar43 + (int)local_8b0;
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43);
          puVar29 = puVar34 + lVar13;
          puVar28 = puVar34 + lVar13;
          if (!bVar50) goto joined_r0x00792782;
          goto LAB_00791e3f;
        }
        goto LAB_00791e5a;
      case 0x25:
        lVar24 = *(long *)(local_8c0 + 0xa0);
        if ((lVar24 == 0) ||
           (puVar37 = *(undefined4 **)(lVar24 + 0x20), *(undefined4 **)(lVar24 + 0x28) <= puVar37))
        {
          *(undefined8 *)(puVar29 + -8) = 0x794151;
          iVar43 = __woverflow(lVar13,0x25);
          if (iVar43 == -1) goto LAB_00791e50;
        }
        else {
          *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
          *puVar37 = 0x25;
        }
        if ((int)local_8b0 == 0x7fffffff) goto LAB_00791e50;
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
        break;
      case 0x41:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x67:
        local_8a0[0] = local_8c8 + piVar27[0xc];
        if (local_8ef != 0) {
          *(byte *)(piVar27 + 3) = *(byte *)(piVar27 + 3) & 0xfe;
          piVar27[0xd] = 7;
        }
        if (local_950 == 0) {
          uVar40 = 0;
        }
        *(byte *)((long)piVar27 + 0xd) =
             *(byte *)((long)piVar27 + 0xd) & 0xef | (byte)((uVar40 & 1) << 4);
        if ((piVar27[2] & 0xffffffdfU) == 0x41) {
          *(undefined8 *)(puVar29 + -8) = 0x792752;
          iVar43 = __printf_fphex();
        }
        else {
          *(undefined8 *)(puVar29 + -8) = 0x7936e5;
          iVar43 = __printf_fp(lVar13,piVar27,local_8a0);
        }
        if (iVar43 < 0) goto LAB_00791e50;
        if ((int)local_8b0 < 0) goto LAB_00791e5a;
        bVar50 = SCARRY4(iVar43,(int)local_8b0);
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43 + (int)local_8b0);
        if (bVar50) goto LAB_00791e3f;
LAB_00792778:
        iVar43 = (int)local_8b0;
joined_r0x00792782:
        puVar29 = puVar28;
        if (-1 < iVar43) {
          pauVar25 = (undefined1 (*) [16])0x828;
          goto LAB_00792799;
        }
        goto LAB_00791e5a;
      case 0x42:
      case 0x62:
        local_900 = CONCAT44(local_900._4_4_,2);
        goto LAB_00792b40;
      case 0x43:
code_r0x00792844:
        iVar43 = iVar43 + -1;
        if ((uint)local_8d8 == 0) {
          if (0 < iVar43) {
            *(undefined8 *)(puVar29 + -8) = 0x793aca;
            lVar13 = _IO_wpadn(lVar13,0x20,(long)iVar43);
            if (iVar43 != lVar13) goto LAB_00791e50;
            if ((int)local_8b0 < 0) goto LAB_00791e5a;
            bVar50 = SCARRY4(iVar43,(int)local_8b0);
            uVar44 = (ulong)(uint)(iVar43 + (int)local_8b0);
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43 + (int)local_8b0);
            if (bVar50) goto LAB_00791e3f;
          }
          if ((int)local_8b0 < 0) goto LAB_00791e5a;
        }
        lVar24 = local_8c0;
        iVar11 = *(int *)local_8c8[piVar27[0xc]];
        lVar13 = *(long *)(local_8c0 + 0xa0);
        if ((lVar13 == 0) || (piVar6 = *(int **)(lVar13 + 0x20), *(int **)(lVar13 + 0x28) <= piVar6)
           ) {
          *(undefined8 *)(puVar29 + -8) = 0x79406c;
          iVar11 = __woverflow(lVar24);
          lVar13 = local_8c0;
        }
        else {
          *(int **)(lVar13 + 0x20) = piVar6 + 1;
          *piVar6 = iVar11;
          lVar13 = local_8c0;
        }
        local_8c0 = lVar13;
        if ((iVar11 == -1) || ((int)local_8b0 == 0x7fffffff)) goto LAB_00791e50;
        local_8b0._4_4_ = (undefined4)((ulong)local_8b0 >> 0x20);
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
        if ((uint)local_8d8 != 0) {
          if (iVar43 < 1) goto LAB_00792778;
          *(undefined8 *)(puVar29 + -8) = 0x793d20;
          lVar13 = _IO_wpadn(lVar13,0x20,(long)iVar43);
          if (iVar43 != lVar13) goto LAB_00791e50;
          if ((int)local_8b0 < 0) goto LAB_00791e5a;
          bVar50 = SCARRY4(iVar43,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43 + (int)local_8b0);
          if (bVar50) goto LAB_00791e3f;
          goto LAB_00792778;
        }
        break;
      case 0x53:
      case 0x73:
        pwVar32 = (wchar_t *)(ulong)(uVar49 ^ 1);
        pauVar25 = *(undefined1 (**) [16])local_8c8[piVar27[0xc]];
        if (pauVar25 != (undefined1 (*) [16])0x0) {
LAB_00792a7d:
          lVar13 = local_8c0;
          if ((uVar42 == 0x53) || ((char)pwVar32 == '\0')) {
            if (iVar11 != -1) goto LAB_00791d11;
            local_8d0 = pauVar25;
            *(undefined8 *)(puVar29 + -8) = 0x79394f;
            uVar48 = wcslen((wchar_t *)pauVar25);
            pauVar25 = local_8d0;
            goto LAB_00791d2d;
          }
          uVar16 = (ulong)local_8b0 & 0xffffffff;
          uVar48 = (ulong)local_8d8 & 0xffffffff;
          *(undefined8 *)(puVar29 + -8) = 0x792ab3;
          iVar43 = outstring_converted_wide_string
                             (lVar13,pauVar25,uVar44 & 0xffffffff,iVar43,uVar48,uVar16);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43);
          puVar28 = puVar29;
          goto joined_r0x00792782;
        }
        if ((iVar11 == -1) || (5 < iVar11)) {
          uVar48 = 6;
          pauVar25 = (undefined1 (*) [16])null;
        }
        else {
          uVar48 = 0;
          pauVar25 = (undefined1 (*) [16])&DAT_00813874;
        }
LAB_00791d2d:
        lVar13 = local_8c0;
        iVar43 = iVar43 - (int)uVar48;
        if (iVar43 < 0) {
          if ((int)local_8b0 < 0) goto LAB_0079360e;
          lVar13 = *(long *)(local_8c0 + 0xd8);
          pauVar23 = (undefined1 (*) [16])0x828;
          if (0x827 < lVar13 - 0x932180U) {
            local_8d8 = (undefined1 (*) [16])0x828;
            local_8d0 = pauVar25;
            *(undefined8 *)(puVar29 + -8) = 0x7944f3;
            _IO_vtable_check();
            pauVar23 = local_8d8;
            pauVar25 = local_8d0;
          }
          lVar24 = local_8c0;
          pcVar15 = *(code **)(lVar13 + 0x38);
          local_8d0 = pauVar23;
          *(undefined8 *)(puVar29 + -8) = 0x793df9;
          uVar44 = (*pcVar15)(lVar24,pauVar25,uVar48);
          if (uVar48 == uVar44) goto LAB_00792f29;
          goto LAB_00791e50;
        }
        pwVar32 = (wchar_t *)((ulong)local_8d8 & 0xffffffff);
        if ((uint)local_8d8 == 0) {
          if (iVar43 != 0) {
            local_8d0 = pauVar25;
            *(undefined8 *)(puVar29 + -8) = 0x793a4e;
            lVar13 = _IO_wpadn(lVar13,0x20,(long)iVar43);
            if (iVar43 != lVar13) goto LAB_00791e50;
            if ((int)local_8b0 < 0) goto LAB_00791e5a;
            bVar50 = SCARRY4(iVar43,(int)local_8b0);
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43 + (int)local_8b0);
            pauVar25 = local_8d0;
            if (bVar50) goto LAB_00791e3f;
          }
          if ((int)local_8b0 < 0) goto LAB_00791e5a;
        }
        else if ((int)local_8b0 < 0) goto LAB_0079360e;
        lVar13 = *(long *)(local_8c0 + 0xd8);
        pauVar23 = (undefined1 (*) [16])0x828;
        if (0x827 < lVar13 - 0x932180U) {
          local_8e0 = (undefined1 (*) [16])0x828;
          local_8d0 = pauVar25;
          *(undefined8 *)(puVar29 + -8) = 0x794303;
          _IO_vtable_check();
          pauVar23 = local_8e0;
          pauVar25 = local_8d0;
        }
        lVar24 = local_8c0;
        pcVar15 = *(code **)(lVar13 + 0x38);
        local_8d0 = pauVar23;
        *(undefined8 *)(puVar29 + -8) = 0x791da5;
        uVar44 = (*pcVar15)(lVar24,pauVar25,uVar48);
        lVar13 = local_8c0;
        if (uVar48 != uVar44) goto LAB_00791e50;
        bVar50 = false;
        uVar44 = (long)(int)local_8b0 + uVar48;
        if (((long)uVar44 < 0) || (uVar44 < uVar48)) {
          bVar50 = true;
        }
        iVar11 = (int)uVar44;
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar11);
        if (uVar44 != (long)iVar11) {
          bVar50 = true;
        }
        if (bVar50) goto LAB_00791e3f;
        if (-1 < iVar11) {
          pauVar25 = local_8d0;
          if (((uint)local_8d8 == 0) || (iVar43 == 0)) goto LAB_00792799;
          *(undefined8 *)(puVar29 + -8) = 0x791e23;
          lVar13 = _IO_wpadn(lVar13,0x20,(long)iVar43);
          if (iVar43 == lVar13) {
            bVar50 = SCARRY4(iVar43,(int)local_8b0);
            uVar42 = iVar43 + (int)local_8b0;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,uVar42);
            uVar44 = (ulong)uVar42;
            if (bVar50) goto LAB_00791e3f;
            goto LAB_007932eb;
          }
          goto LAB_00791e50;
        }
        goto LAB_00791e5a;
      case 0x58:
      case 0x78:
        local_900 = CONCAT44(local_900._4_4_,0x10);
        goto LAB_00792b40;
      case 99:
        if ((uint)local_8d0 != 0) goto code_r0x00792844;
        uVar42 = iVar43 - 1;
        uVar44 = (ulong)uVar42;
        if ((uint)local_8d8 == 0) {
          if (0 < (int)uVar42) {
            *(undefined8 *)(puVar29 + -8) = 0x79428b;
            lVar13 = _IO_wpadn(lVar13,0x20,(long)(int)uVar42);
            if ((int)uVar42 != lVar13) goto LAB_00791e50;
            if ((int)local_8b0 < 0) goto LAB_00791e5a;
            bVar50 = SCARRY4(uVar42,(int)local_8b0);
            uVar48 = (ulong)(uVar42 + (int)local_8b0);
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,uVar42 + (int)local_8b0);
            if (bVar50) goto LAB_00791e3f;
          }
          if ((int)local_8b0 < 0) goto LAB_00791e5a;
        }
        bVar10 = local_8c8[piVar27[0xc]][0];
        *(undefined8 *)(puVar29 + -8) = 0x79297d;
        wVar12 = btowc((uint)bVar10);
        lVar24 = local_8c0;
        lVar13 = *(long *)(local_8c0 + 0xa0);
        if ((lVar13 == 0) ||
           (pwVar2 = *(wint_t **)(lVar13 + 0x20), *(wint_t **)(lVar13 + 0x28) <= pwVar2)) {
          *(undefined8 *)(puVar29 + -8) = 0x7942db;
          wVar12 = __woverflow(lVar24);
          lVar13 = local_8c0;
        }
        else {
          *(wint_t **)(lVar13 + 0x20) = pwVar2 + 1;
          *pwVar2 = wVar12;
          lVar13 = local_8c0;
        }
        local_8c0 = lVar13;
        if ((wVar12 == 0xffffffff) || ((int)local_8b0 == 0x7fffffff)) goto LAB_00791e50;
        local_8b0._4_4_ = (undefined4)((ulong)local_8b0 >> 0x20);
        local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
        if ((uint)local_8d8 != 0) {
          if ((int)uVar42 < 1) goto LAB_00792778;
          *(undefined8 *)(puVar29 + -8) = 0x7929fc;
          lVar13 = _IO_wpadn(lVar13,0x20,(long)(int)uVar42);
          if ((int)uVar42 != lVar13) goto LAB_00791e50;
          if ((int)local_8b0 < 0) goto LAB_00791e5a;
          bVar50 = SCARRY4(uVar42,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,uVar42 + (int)local_8b0);
          if (bVar50) goto LAB_00791e3f;
          goto LAB_00792778;
        }
        break;
      case 100:
      case 0x69:
        if ((uint)local_8d0 == 0) {
          iVar1 = *(int *)local_8c8[piVar27[0xc]];
          if ((int)local_908 == 0) {
            pauVar25 = (undefined1 (*) [16])(long)(short)iVar1;
            if (local_914 == 0) {
              pauVar25 = (undefined1 (*) [16])(long)iVar1;
            }
          }
          else {
            pauVar25 = (undefined1 (*) [16])(long)(char)iVar1;
          }
        }
        else {
          pauVar25 = *(undefined1 (**) [16])local_8c8[piVar27[0xc]];
        }
        if ((long)pauVar25 < 0) {
          local_900 = CONCAT44(local_900._4_4_,10);
          pauVar25 = (undefined1 (*) [16])-(long)pauVar25;
          local_8d0 = (undefined1 (*) [16])CONCAT44(local_8d0._4_4_,1);
        }
        else {
          local_900 = CONCAT44(local_900._4_4_,10);
          local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
        }
        goto LAB_00792b80;
      case 0x6d:
        local_900 = CONCAT44(local_900._4_4_,uVar42);
        local_8d0 = (undefined1 (*) [16])CONCAT71(local_8d0._1_7_,bVar10);
        if (local_8e8 == 0) {
          *(undefined8 *)(puVar29 + -8) = 0x793864;
          pauVar25 = (undefined1 (*) [16])strerror_r(param_10,pcVar7,1000);
          uVar42 = (uint)local_900;
          bVar10 = (byte)local_8d0;
        }
        else {
          *(undefined8 *)(puVar29 + -8) = 0x792a5a;
          pauVar25 = (undefined1 (*) [16])__get_errname(param_10);
          uVar42 = (uint)local_900;
          bVar10 = (byte)local_8d0;
        }
        pauVar23 = local_8d0;
        pwVar32 = (wchar_t *)(ulong)local_8ee;
        if (pauVar25 != (undefined1 (*) [16])0x0) goto LAB_00792a7d;
        pauVar25 = (undefined1 (*) [16])(long)param_10;
        local_900 = CONCAT44(local_900._4_4_,10);
        local_8d0 = (undefined1 (*) [16])((ulong)local_8d0 & 0xffffffff00000000);
        if (param_10 < 0) {
          local_8d0._4_4_ = SUB84(pauVar23,4);
          local_8d0 = (undefined1 (*) [16])CONCAT44(local_8d0._4_4_,1);
          pauVar25 = (undefined1 (*) [16])-(long)pauVar25;
        }
        goto LAB_00792b80;
      case 0x6e:
        if (local_940 != 0) {
          uVar48 = (ulong)local_93c;
          if (local_93c == 0) {
            *(undefined8 *)(puVar29 + -8) = 0x793b0f;
            sVar19 = wcslen(pwVar17);
            *(undefined8 *)(puVar29 + -8) = 0x793b1f;
            local_93c = __readonly_area(pwVar17,sVar19 * 4 + 4);
            pwVar32 = pwVar17;
          }
          uVar44 = (ulong)local_93c;
          if ((int)local_93c < 0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar29 + -8) = 0x79454b;
            __libc_fatal("*** %n in writable segment detected ***\n");
          }
        }
        plVar3 = *(long **)local_8c8[piVar27[0xc]];
        if ((uint)local_8d0 == 0) {
          if ((int)local_908 == 0) {
            if (local_914 == 0) {
              *(int *)plVar3 = (int)local_8b0;
            }
            else {
              *(undefined2 *)plVar3 = (undefined2)local_8b0;
            }
          }
          else {
            *(undefined1 *)plVar3 = (undefined1)local_8b0;
          }
        }
        else {
          *plVar3 = (long)(int)local_8b0;
        }
        break;
      case 0x6f:
        local_900 = CONCAT44(local_900._4_4_,8);
        goto LAB_00792b40;
      case 0x70:
        pauVar25 = *(undefined1 (**) [16])local_8c8[piVar27[0xc]];
        if (pauVar25 == (undefined1 (*) [16])0x0) {
          pauVar25 = (undefined1 (*) [16])&DAT_00834e74;
          uVar44 = uVar44 & 0xffffffff;
          if (iVar11 < 5) {
            uVar44 = 5;
          }
LAB_00791d11:
          local_8d0 = pauVar25;
          *(undefined8 *)(puVar29 + -8) = 0x791d23;
          uVar48 = wcsnlen((wchar_t *)pauVar25,(long)(int)uVar44);
          pauVar25 = local_8d0;
          goto LAB_00791d2d;
        }
        bVar10 = local_8ee;
        if (-1 < iVar11) {
          if (iVar11 != 0) {
            local_918 = 0x78;
            uVar42 = 0x78;
            local_8ed = 0;
            local_900 = CONCAT44(local_900._4_4_,0x10);
            local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
            local_8e8 = 1;
            goto LAB_00792ca0;
          }
          local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
          bVar38 = 0;
          uVar44 = 0;
          uVar42 = 0x78;
          local_918 = 0x78;
          local_900 = CONCAT44(local_900._4_4_,0x10);
          local_8ec = CONCAT31(local_8ec._1_3_,0x20);
          local_8e8 = 1;
          goto LAB_007933a0;
        }
        local_918 = 0x78;
        bVar38 = 0;
        local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
        uVar44 = 1;
        uVar42 = 0x78;
        puVar34 = _itowa_lower_digits;
        local_8e8 = 1;
        pwVar17 = local_928;
        pauVar23 = pauVar25;
        goto LAB_007935d0;
      case 0x75:
        local_900 = CONCAT44(local_900._4_4_,10);
LAB_00792b40:
        if ((uint)local_8d0 == 0) {
          uVar40 = *(uint *)local_8c8[piVar27[0xc]];
          pauVar25 = (undefined1 (*) [16])(ulong)uVar40;
          if ((int)local_908 == 0) {
            if (local_914 != 0) {
              pauVar25 = (undefined1 (*) [16])(ulong)(ushort)uVar40;
            }
            local_8e0 = (undefined1 (*) [16])((ulong)local_8e0._4_4_ << 0x20);
            local_8e4 = 0;
          }
          else {
            local_8e0 = (undefined1 (*) [16])((ulong)local_8e0._4_4_ << 0x20);
            pauVar25 = (undefined1 (*) [16])(ulong)(byte)uVar40;
            local_8e4 = 0;
          }
        }
        else {
          local_8e0 = (undefined1 (*) [16])((ulong)local_8e0 & 0xffffffff00000000);
          pauVar25 = *(undefined1 (**) [16])local_8c8[piVar27[0xc]];
          local_8e4 = 0;
          local_8d0 = (undefined1 (*) [16])((ulong)local_8d0._4_4_ << 0x20);
        }
LAB_00792b80:
        if (iVar11 < 0) {
          uVar44 = 1;
LAB_00792ca7:
          pwVar32 = L"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          bVar38 = local_910 != (char *)0x0 & local_8ed;
          if (uVar42 == 0x58) {
            pwVar17 = local_928;
            pauVar23 = pauVar25;
            if ((uint)local_900 == 10) goto LAB_007933c0;
LAB_00792cda:
            pwVar17 = local_928;
            pauVar23 = pauVar25;
            puVar34 = (undefined1 *)pwVar32;
            if ((uint)local_900 == 0x10) {
LAB_007935d0:
              do {
                pwVar17 = pwVar17 + -1;
                *pwVar17 = *(wchar_t *)((long)puVar34 + (ulong)((uint)pauVar25 & 0xf) * 4);
                bVar50 = (undefined1 (*) [16])0xf < pauVar25;
                pauVar25 = (undefined1 (*) [16])((ulong)pauVar25 >> 4);
              } while (bVar50);
              local_900 = CONCAT44(local_900._4_4_,0x10);
            }
            else if ((uint)local_900 == 8) {
              do {
                pwVar17 = pwVar17 + -1;
                *pwVar17 = pwVar32[(uint)pauVar25 & 7];
                bVar50 = (undefined1 (*) [16])0x7 < pauVar25;
                pauVar25 = (undefined1 (*) [16])((ulong)pauVar25 >> 3);
              } while (bVar50);
            }
            else {
              pauVar41 = (undefined1 (*) [16])(long)(int)(uint)local_900;
              do {
                pwVar17 = pwVar17 + -1;
                *pwVar17 = pwVar32[(ulong)pauVar25 % (ulong)pauVar41];
                bVar50 = pauVar41 <= pauVar25;
                pauVar25 = (undefined1 (*) [16])((ulong)pauVar25 / (ulong)pauVar41);
              } while (bVar50);
            }
            if (bVar38 != 0) goto LAB_007933fd;
          }
          else {
LAB_007933a0:
            pwVar32 = (wchar_t *)_itowa_lower_digits;
            pwVar17 = local_928;
            pauVar23 = pauVar25;
            if ((uint)local_900 != 10) goto LAB_00792cda;
LAB_007933c0:
            do {
              pwVar17 = pwVar17 + -1;
              *pwVar17 = pwVar32[(ulong)pauVar25 % 10];
              bVar50 = (undefined1 (*) [16])0x9 < pauVar25;
              pauVar25 = (undefined1 (*) [16])((ulong)pauVar25 / 10);
            } while (bVar50);
            if (bVar38 != 0) {
LAB_007933fd:
              local_8ed = bVar10;
              pcVar8 = local_910;
              pwVar32 = local_928;
              pcVar7 = local_938;
              local_914 = uVar42;
              local_908 = pauVar23;
              *(undefined8 *)(puVar29 + -8) = 0x793433;
              pwVar17 = (wchar_t *)group_number(pcVar7,pwVar17,pwVar32,pcVar8,param_12);
              pauVar23 = local_908;
              uVar42 = local_914;
              bVar10 = local_8ed;
            }
            pwVar32 = local_928;
            if (((uint)local_900 == 10) && ((char)uVar45 != '\0')) {
              local_914 = uVar42;
              local_908 = pauVar23;
              local_8ed = bVar10;
              *(undefined8 *)(puVar29 + -8) = 0x793489;
              pwVar17 = (wchar_t *)_i18n_number_rewrite(pwVar17,pwVar32,pwVar32);
              pauVar23 = local_908;
              uVar42 = local_914;
              bVar10 = local_8ed;
            }
          }
          lVar13 = (long)local_928 - (long)pwVar17;
          if (lVar13 >> 2 < (long)uVar44) goto LAB_00792d43;
          if (pauVar23 != (undefined1 (*) [16])0x0) {
            pwVar32 = pwVar17;
            if (((uint)local_900 == 8) && (bVar10 != 0)) {
              pwVar32 = pwVar17 + -1;
              pwVar17[-1] = L'0';
              lVar13 = (long)local_928 - (long)pwVar32;
            }
            uVar48 = lVar13 >> 2;
            pauVar25 = (undefined1 (*) [16])(uVar44 - uVar48);
            if ((long)pauVar25 < 0) {
              pauVar25 = (undefined1 (*) [16])0x0;
            }
            uVar44 = (ulong)(int)pauVar25;
            if ((uint)local_8d8 != 0) goto LAB_00793148;
            iVar43 = (iVar43 - (int)uVar48) - (int)pauVar25;
            goto LAB_00792d78;
          }
          pauVar25 = (undefined1 (*) [16])(uVar44 - (lVar13 >> 2));
          if ((long)pauVar25 < 0) {
            pauVar25 = (undefined1 (*) [16])0x0;
          }
          uVar44 = (ulong)(int)pauVar25;
LAB_007936fc:
          pauVar23 = (undefined1 (*) [16])0x0;
          pwVar32 = pwVar17;
          if ((uint)local_8d8 == 0) {
            uVar48 = lVar13 >> 2;
            pauVar23 = (undefined1 (*) [16])0x0;
            iVar43 = (iVar43 - (int)pauVar25) - (int)uVar48;
            goto LAB_00792d9b;
          }
LAB_00793148:
          lVar24 = local_8c0;
          if ((uint)local_8d0 == 0) {
            if ((uint)local_8e0 != 0) {
              lVar18 = *(long *)(local_8c0 + 0xa0);
              if ((lVar18 == 0) ||
                 (puVar37 = *(undefined4 **)(lVar18 + 0x20),
                 *(undefined4 **)(lVar18 + 0x28) <= puVar37)) {
                uVar35 = 0x2b;
                goto LAB_0079402a;
              }
              *(undefined4 **)(lVar18 + 0x20) = puVar37 + 1;
              *puVar37 = 0x2b;
              goto LAB_00793189;
            }
            if (local_8e4 != 0) {
              lVar18 = *(long *)(local_8c0 + 0xa0);
              if ((lVar18 == 0) ||
                 (puVar37 = *(undefined4 **)(lVar18 + 0x20),
                 *(undefined4 **)(lVar18 + 0x28) <= puVar37)) {
                uVar35 = 0x20;
                goto LAB_0079402a;
              }
              *(undefined4 **)(lVar18 + 0x20) = puVar37 + 1;
              *puVar37 = 0x20;
              goto LAB_00793189;
            }
          }
          else {
            lVar18 = *(long *)(local_8c0 + 0xa0);
            if ((lVar18 == 0) ||
               (puVar37 = *(undefined4 **)(lVar18 + 0x20),
               *(undefined4 **)(lVar18 + 0x28) <= puVar37)) {
              uVar35 = 0x2d;
LAB_0079402a:
              local_8e0 = (undefined1 (*) [16])CONCAT44(local_8e0._4_4_,uVar42);
              local_8d8 = pauVar23;
              local_8d0 = pauVar25;
              *(undefined8 *)(puVar29 + -8) = 0x794036;
              iVar11 = __woverflow(lVar24,uVar35);
              pauVar25 = local_8d0;
              pauVar23 = local_8d8;
              uVar42 = (uint)local_8e0;
              if (iVar11 == -1) goto LAB_00791e50;
            }
            else {
              *(undefined4 **)(lVar18 + 0x20) = puVar37 + 1;
              *puVar37 = 0x2d;
            }
LAB_00793189:
            if ((int)local_8b0 == 0x7fffffff) goto LAB_00791e50;
            iVar43 = iVar43 + -1;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
          }
          lVar24 = local_8c0;
          if (((pauVar23 != (undefined1 (*) [16])0x0) && (local_8e8 != 0)) &&
             ((0x10004UL >> (local_900 & 0x3f) & 1) != 0)) {
            lVar18 = *(long *)(local_8c0 + 0xa0);
            if (lVar18 == 0) {
LAB_00794400:
              local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,uVar42);
              local_8d0 = pauVar25;
              *(undefined8 *)(puVar29 + -8) = 0x79441f;
              iVar11 = __woverflow(lVar24,0x30);
              if ((iVar11 == -1) || ((int)local_8b0 == 0x7fffffff)) goto LAB_00791e50;
              lVar18 = *(long *)(local_8c0 + 0xa0);
              pauVar25 = local_8d0;
              if (lVar18 != 0) {
                puVar22 = *(uint **)(lVar18 + 0x20);
                puVar33 = *(uint **)(lVar18 + 0x28);
                uVar42 = (uint)local_8d8;
                goto LAB_007937d9;
              }
LAB_007943c8:
              lVar24 = local_8c0;
              uVar42 = local_918;
              local_8d0 = pauVar25;
              *(undefined8 *)(puVar29 + -8) = 0x7943e1;
              iVar11 = __woverflow(lVar24,uVar42);
              pauVar25 = local_8d0;
              if (iVar11 == -1) goto LAB_00791e50;
            }
            else {
              puVar4 = *(uint **)(lVar18 + 0x20);
              puVar33 = *(uint **)(lVar18 + 0x28);
              if (puVar33 <= puVar4) goto LAB_00794400;
              puVar22 = puVar4 + 1;
              *(uint **)(lVar18 + 0x20) = puVar22;
              *puVar4 = 0x30;
              if ((int)local_8b0 == 0x7fffffff) goto LAB_00791e50;
LAB_007937d9:
              if (puVar33 <= puVar22) goto LAB_007943c8;
              *(uint **)(lVar18 + 0x20) = puVar22 + 1;
              *puVar22 = uVar42;
            }
            if ((int)local_8b0 == 0x7ffffffe) goto LAB_00791e50;
            iVar43 = iVar43 + -2;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 2);
          }
          lVar24 = local_8c0;
          uVar48 = lVar13 >> 2;
          iVar43 = iVar43 - ((int)pauVar25 + (int)uVar48);
          iVar11 = (int)uVar44;
          if (iVar11 < 1) {
            if (-1 < (int)local_8b0) goto LAB_00793211;
            goto LAB_0079360e;
          }
          *(undefined8 *)(puVar29 + -8) = 0x7931e1;
          uVar16 = _IO_wpadn(lVar24,0x30,uVar44);
          if (uVar44 != uVar16) goto LAB_00791e50;
          if (-1 < (int)local_8b0) {
            bVar50 = SCARRY4(iVar11,(int)local_8b0);
            iVar11 = iVar11 + (int)local_8b0;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar11);
            if (bVar50) goto LAB_00791e3f;
            if (-1 < iVar11) {
LAB_00793211:
              local_8d0 = *(undefined1 (**) [16])(local_8c0 + 0xd8);
              pauVar25 = (undefined1 (*) [16])0x828;
              if (0x827 < (long)local_8d0 - 0x932180U) {
                local_8d8 = (undefined1 (*) [16])0x828;
                *(undefined8 *)(puVar29 + -8) = 0x793fc2;
                _IO_vtable_check();
                pauVar25 = local_8d8;
              }
              lVar13 = local_8c0;
              pcVar15 = *(code **)((long)local_8d0 + 0x38);
              local_8d0 = pauVar25;
              *(undefined8 *)(puVar29 + -8) = 0x793256;
              uVar44 = (*pcVar15)(lVar13,pwVar32,uVar48);
              lVar13 = local_8c0;
              if (uVar44 != uVar48) goto LAB_00791e50;
              bVar50 = false;
              uVar44 = (long)(int)local_8b0 + uVar48;
              if (((long)uVar44 < 0) || (uVar44 < uVar48)) {
                bVar50 = true;
              }
              iVar11 = (int)uVar44;
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar11);
              if (uVar44 != (long)iVar11) {
                bVar50 = true;
              }
              if (bVar50) goto LAB_00791e3f;
              if (-1 < iVar11) {
                pauVar25 = local_8d0;
                if (iVar43 < 1) goto LAB_00792799;
                *(undefined8 *)(puVar29 + -8) = 0x7932cf;
                lVar13 = _IO_wpadn(lVar13,0x20,(long)iVar43);
                if (iVar43 == lVar13) {
                  local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43 + iVar11);
                  uVar44 = (ulong)(uint)(iVar43 + iVar11);
                  if (SCARRY4(iVar43,iVar11)) goto LAB_00791e3f;
                  goto LAB_007932eb;
                }
                goto LAB_00791e50;
              }
            }
          }
        }
        else {
          if (iVar11 != 0) {
LAB_00792ca0:
            local_8ec = CONCAT31(local_8ec._1_3_,0x20);
            goto LAB_00792ca7;
          }
          if (pauVar25 != (undefined1 (*) [16])0x0) {
            uVar44 = 0;
            goto LAB_00792ca0;
          }
          if (((uint)local_900 != 8) || (bVar10 == 0)) {
            local_8ec = CONCAT31(local_8ec._1_3_,0x20);
            pauVar25 = (undefined1 (*) [16])0x0;
            lVar13 = 0;
            pwVar17 = local_928;
            goto LAB_007936fc;
          }
          local_938[0x3e4] = '0';
          local_938[0x3e5] = '\0';
          local_938[0x3e6] = '\0';
          local_938[999] = '\0';
          lVar13 = local_958;
          pwVar17 = local_960;
          if (-1 < local_958) {
            local_8ec = CONCAT31(local_8ec._1_3_,0x20);
            uVar44 = (ulong)local_96c;
            local_900 = CONCAT44(local_900._4_4_,8);
            pauVar25 = local_968;
            goto LAB_007936fc;
          }
          local_900 = CONCAT44(local_900._4_4_,8);
          pauVar23 = (undefined1 (*) [16])0x0;
          uVar44 = 0;
          local_8ec = CONCAT31(local_8ec._1_3_,0x20);
LAB_00792d43:
          uVar48 = lVar13 >> 2;
          pauVar25 = (undefined1 (*) [16])(uVar44 - uVar48);
          if ((long)pauVar25 < 0) {
            pauVar25 = (undefined1 (*) [16])0x0;
          }
          uVar44 = (ulong)(int)pauVar25;
          pwVar32 = pwVar17;
          if ((uint)local_8d8 != 0) goto LAB_00793148;
          iVar43 = (iVar43 - (int)uVar48) - (int)pauVar25;
          if (pauVar23 != (undefined1 (*) [16])0x0) {
LAB_00792d78:
            if (local_8e8 != 0) {
              if ((0x10004UL >> ((byte)local_900 & 0x3f) & 1) != 0) {
                iVar43 = iVar43 + -2;
              }
            }
          }
LAB_00792d9b:
          lVar13 = local_8c0;
          if ((local_8e4 == 0 && (uint)local_8e0 == 0) && (uint)local_8d0 == 0) {
            if ((char)local_8ec == ' ') goto LAB_0079359d;
LAB_00792e21:
            lVar13 = local_8c0;
            if (((pauVar23 != (undefined1 (*) [16])0x0) && (local_8e8 != 0)) &&
               ((0x10004UL >> (local_900 & 0x3f) & 1) != 0)) {
              lVar24 = *(long *)(local_8c0 + 0xa0);
              if (lVar24 == 0) {
LAB_00793b41:
                local_8d0 = (undefined1 (*) [16])CONCAT44(local_8d0._4_4_,uVar42);
                *(undefined8 *)(puVar29 + -8) = 0x793b59;
                iVar11 = __woverflow(lVar13,0x30);
                if ((iVar11 == -1) || ((int)local_8b0 == 0x7fffffff)) goto LAB_00791e50;
                lVar24 = *(long *)(local_8c0 + 0xa0);
                if (lVar24 != 0) {
                  puVar22 = *(uint **)(lVar24 + 0x20);
                  puVar33 = *(uint **)(lVar24 + 0x28);
                  uVar42 = (uint)local_8d0;
                  goto LAB_00792e8f;
                }
LAB_00793b90:
                lVar13 = local_8c0;
                uVar42 = local_918;
                *(undefined8 *)(puVar29 + -8) = 0x793ba2;
                iVar11 = __woverflow(lVar13,uVar42);
                if (iVar11 == -1) goto LAB_00791e50;
              }
              else {
                puVar4 = *(uint **)(lVar24 + 0x20);
                puVar33 = *(uint **)(lVar24 + 0x28);
                if (puVar33 <= puVar4) goto LAB_00793b41;
                puVar22 = puVar4 + 1;
                *(uint **)(lVar24 + 0x20) = puVar22;
                *puVar4 = 0x30;
                if ((int)local_8b0 == 0x7fffffff) goto LAB_00791e50;
LAB_00792e8f:
                if (puVar33 <= puVar22) goto LAB_00793b90;
                *(uint **)(lVar24 + 0x20) = puVar22 + 1;
                *puVar22 = uVar42;
              }
              if ((int)local_8b0 == 0x7ffffffe) goto LAB_00791e50;
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 2);
            }
            iVar43 = (int)uVar44 + iVar43;
            if (0 < iVar43) goto LAB_00793618;
            goto LAB_00792ecc;
          }
          iVar43 = iVar43 + -1;
          if ((char)local_8ec != ' ') {
LAB_00792dc4:
            lVar13 = local_8c0;
            if ((uint)local_8d0 == 0) {
              if ((uint)local_8e0 == 0) {
                if (local_8e4 == 0) goto LAB_00792e21;
                lVar24 = *(long *)(local_8c0 + 0xa0);
                if ((lVar24 == 0) ||
                   (puVar37 = *(undefined4 **)(lVar24 + 0x20),
                   *(undefined4 **)(lVar24 + 0x28) <= puVar37)) {
                  uVar35 = 0x20;
                  goto LAB_00793fe8;
                }
                *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
                *puVar37 = 0x20;
              }
              else {
                lVar24 = *(long *)(local_8c0 + 0xa0);
                if ((lVar24 == 0) ||
                   (puVar37 = *(undefined4 **)(lVar24 + 0x20),
                   *(undefined4 **)(lVar24 + 0x28) <= puVar37)) {
                  uVar35 = 0x2b;
                  goto LAB_00793fe8;
                }
                *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
                *puVar37 = 0x2b;
              }
            }
            else {
              lVar24 = *(long *)(local_8c0 + 0xa0);
              if ((lVar24 == 0) ||
                 (puVar37 = *(undefined4 **)(lVar24 + 0x20),
                 *(undefined4 **)(lVar24 + 0x28) <= puVar37)) {
                uVar35 = 0x2d;
LAB_00793fe8:
                local_8d8 = (undefined1 (*) [16])CONCAT44(local_8d8._4_4_,uVar42);
                local_8d0 = pauVar23;
                *(undefined8 *)(puVar29 + -8) = 0x793ff4;
                iVar11 = __woverflow(lVar13,uVar35);
                pauVar23 = local_8d0;
                uVar42 = (uint)local_8d8;
                if (iVar11 == -1) goto LAB_00791e50;
              }
              else {
                *(undefined4 **)(lVar24 + 0x20) = puVar37 + 1;
                *puVar37 = 0x2d;
              }
            }
            if ((int)local_8b0 != 0x7fffffff) {
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)local_8b0 + 1);
              goto LAB_00792e21;
            }
            goto LAB_00791e50;
          }
LAB_0079359d:
          if (iVar43 < 1) {
LAB_007935a6:
            if (-1 < (int)local_8b0) {
              iVar43 = 0;
              goto LAB_00792dc4;
            }
          }
          else {
            local_8ec = uVar42;
            local_8d8 = pauVar23;
            *(undefined8 *)(puVar29 + -8) = 0x7939f0;
            lVar13 = _IO_wpadn(lVar13,0x20,(long)iVar43);
            if (iVar43 != lVar13) goto LAB_00791e50;
            if (-1 < (int)local_8b0) {
              bVar50 = SCARRY4(iVar43,(int)local_8b0);
              local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43 + (int)local_8b0);
              pauVar23 = local_8d8;
              uVar42 = local_8ec;
              if (!bVar50) goto LAB_007935a6;
              goto LAB_00791e3f;
            }
          }
        }
        goto LAB_00791e5a;
      }
      pauVar23 = *(undefined1 (**) [16])(piVar27 + 6);
      lVar13 = *(long *)(piVar27 + 8) - (long)pauVar23;
      if ((int)local_8b0 < 0) {
LAB_0079360e:
        iVar43 = (int)uVar44;
        *(undefined8 *)(puVar29 + -8) = 0x793613;
        outstring_func_part_0();
LAB_00793618:
        lVar13 = local_8c0;
        *(undefined8 *)(puVar29 + -8) = 0x79362f;
        lVar13 = _IO_wpadn(lVar13,0x30,(long)iVar43);
        if (iVar43 != lVar13) goto LAB_00791e50;
        if (-1 < (int)local_8b0) {
          bVar50 = SCARRY4(iVar43,(int)local_8b0);
          local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43 + (int)local_8b0);
          if (!bVar50) {
LAB_00792ecc:
            if ((int)local_8b0 < 0) goto LAB_00791e5a;
            lVar13 = *(long *)(local_8c0 + 0xd8);
            local_8d0 = (undefined1 (*) [16])0x828;
            if (0x827 < lVar13 - 0x932180U) {
              local_8d0 = (undefined1 (*) [16])0x828;
              *(undefined8 *)(puVar29 + -8) = 0x793fa3;
              _IO_vtable_check();
            }
            lVar24 = local_8c0;
            pcVar15 = *(code **)(lVar13 + 0x38);
            *(undefined8 *)(puVar29 + -8) = 0x792f20;
            uVar44 = (*pcVar15)(lVar24,pwVar32,uVar48);
            if (uVar48 != uVar44) goto LAB_00791e50;
LAB_00792f29:
            uVar44 = (long)(int)local_8b0 + uVar48;
            local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(int)uVar44);
            if (uVar44 == (long)(int)uVar44 && uVar48 <= uVar44 + 0x8000000000000000) {
LAB_007932eb:
              pauVar25 = local_8d0;
              if (-1 < (int)uVar44) {
LAB_00792799:
                pauVar23 = *(undefined1 (**) [16])(piVar27 + 6);
                lVar13 = *(long *)(piVar27 + 8) - (long)pauVar23;
                goto LAB_007927a8;
              }
              goto LAB_00791e5a;
            }
          }
LAB_00791e3f:
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
          puVar28 = puVar29;
          goto LAB_00791e50;
        }
        goto LAB_00791e5a;
      }
      pauVar25 = (undefined1 (*) [16])0x828;
LAB_007927a8:
      uVar48 = lVar13 >> 2;
      lVar13 = *(long *)(local_8c0 + 0xd8);
      if (pauVar25 <= (undefined1 (*) [16])(lVar13 + -0x932180)) {
        *(undefined8 *)(puVar29 + -8) = 0x793534;
        local_8d0 = pauVar23;
        _IO_vtable_check();
        pauVar23 = local_8d0;
      }
      pcVar15 = *(code **)(lVar13 + 0x38);
      *(undefined8 *)(puVar29 + -8) = 0x7927d3;
      uVar44 = (*pcVar15)(local_8c0,pauVar23,uVar48);
      puVar28 = puVar29;
      if (uVar44 != uVar48) goto LAB_00791e50;
      bVar50 = false;
      uVar44 = (long)(int)local_8b0 + uVar48;
      if (((long)uVar44 < 0) || (uVar44 < uVar48)) {
        bVar50 = true;
      }
      iVar43 = (int)uVar44;
      local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,iVar43);
      if (uVar44 != (long)iVar43) {
        bVar50 = true;
      }
      if (bVar50) goto LAB_00791e3f;
      if (iVar43 < 0) goto LAB_00791e5a;
      puVar26 = *local_8b8;
      local_8b8 = (undefined1 (*) [16])(puVar26 + 1);
      piVar27 = piVar27 + 0x12;
      if (local_920 <= (undefined1 (*) [16])(puVar26 + 1)) goto LAB_00791e5a;
      goto LAB_00792138;
    }
  }
  local_8b0 = (undefined1 (*) [16])CONCAT44(local_8b0._4_4_,(uint)local_8d8);
LAB_00791e5a:
  pauVar25 = local_458;
  if (local_458 != local_930) {
    *(undefined8 *)(puVar29 + -8) = 0x791e6f;
    free(pauVar25);
  }
  pauVar25 = local_868;
  if (local_868 != local_8f8) {
    *(undefined8 *)(puVar29 + -8) = 0x791e84;
    free(pauVar25);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar29 + -8) = 0x79453f;
    __stack_chk_fail_local();
  }
  return (ulong)local_8b0 & 0xffffffff;
}

