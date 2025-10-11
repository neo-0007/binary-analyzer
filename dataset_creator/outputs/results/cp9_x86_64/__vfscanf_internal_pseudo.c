
/* WARNING: Removing unreachable block (ram,0x006ee66e) */
/* WARNING: Removing unreachable block (ram,0x006f0139) */
/* WARNING: Removing unreachable block (ram,0x006f014e) */
/* WARNING: Removing unreachable block (ram,0x006efe19) */
/* WARNING: Removing unreachable block (ram,0x006f0243) */
/* WARNING: Removing unreachable block (ram,0x006ee5b8) */
/* WARNING: Removing unreachable block (ram,0x006ee613) */
/* WARNING: Type propagation algorithm not settling */

ulong __vfscanf_internal(_IO_FILE *param_1,_IO_FILE *param_2,ulong *param_3,uint param_4)

{
  code **ppcVar1;
  long *plVar2;
  wctrans_t p_Var3;
  unkbyte10 Var4;
  unkbyte10 Var5;
  unkbyte10 Var6;
  unkbyte10 Var7;
  unkbyte10 Var8;
  unkbyte10 Var9;
  unkbyte10 Var10;
  _IO_FILE *p_Var11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  wchar_t wVar18;
  _IO_FILE *p_Var19;
  size_t sVar20;
  _IO_FILE *p_Var21;
  long *plVar22;
  unkbyte10 *pVar23;
  char ***pppcVar24;
  undefined8 uVar25;
  void *pvVar26;
  undefined2 *puVar27;
  undefined8 *puVar28;
  ulong *puVar29;
  undefined4 *puVar30;
  undefined1 *puVar31;
  uint uVar32;
  char ***pppcVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  char ***pppcVar39;
  char *pcVar40;
  char *pcVar41;
  byte *pbVar42;
  _IO_FILE *p_Var43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  _IO_FILE *p_Var46;
  long lVar47;
  int *piVar48;
  ulong uVar49;
  undefined1 uVar50;
  int iVar51;
  _IO_FILE *p_Var52;
  ulong uVar53;
  byte *pbVar54;
  byte *pbVar55;
  int iVar56;
  long in_FS_OFFSET;
  bool bVar57;
  byte bVar58;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 uVar59;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_708 [4];
  int iStack_704;
  char ***pppcStack_700;
  undefined8 local_6f8;
  byte *local_6f0;
  uint local_6e8;
  uint local_6e4;
  byte *local_6e0;
  ulong *local_6d8;
  ulong *local_6d0;
  _IO_FILE *local_6c8;
  _IO_FILE *local_6c0;
  code **local_6b8;
  char ***local_6b0;
  undefined8 local_6a8;
  _IO_FILE *local_6a0;
  uint local_698;
  int local_694;
  _IO_FILE *local_690;
  byte *local_688;
  long local_680;
  long *local_678;
  undefined8 local_670;
  _IO_FILE *local_668;
  long *local_660;
  undefined8 local_658;
  undefined8 local_650;
  uint local_648;
  uint local_644;
  undefined8 local_640;
  undefined8 local_638;
  long *plStack_630;
  undefined8 local_628;
  _IO_FILE *local_620;
  undefined8 local_618;
  long *plStack_610;
  ulong local_608;
  long *plStack_600;
  char ***local_5f0;
  code *local_5e8;
  _IO_FILE *local_5e0;
  mbstate_t local_5c0;
  mbstate_t mStack_5b8;
  ulong local_5b0;
  long *plStack_5a8;
  ulong local_5a0;
  undefined1 local_598 [84];
  undefined4 uStack_544;
  long *plStack_540;
  _IO_marker *local_538;
  byte abStack_49e [17];
  undefined1 auStack_48d [21];
  undefined1 local_478 [16];
  _IO_FILE local_468 [4];
  char local_58;
  char *local_40;
  
  bVar58 = 0;
  puVar31 = auStack_708;
  puVar45 = auStack_708;
  puVar44 = auStack_708;
  local_40 = *(char **)(in_FS_OFFSET + 0x28);
  local_660 = *(long **)(in_FS_OFFSET + -0x78);
  local_680 = *local_660;
  local_468[0]._IO_read_ptr = (char *)0x400;
  local_6b0 = (char ***)&local_468[0]._IO_read_end;
  local_608 = *param_3;
  plStack_600 = (long *)param_3[1];
  local_5a0 = param_3[2];
  local_6d0 = param_3;
  local_620 = param_2;
  local_5b0 = local_608;
  plStack_5a8 = plStack_600;
  local_468[0]._0_8_ = local_6b0;
  if (param_1->_mode == 0) {
    param_1->_mode = -1;
LAB_006eb54a:
    if ((param_1->_flags & 4) != 0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
      local_648 = 0xffffffff;
      goto LAB_006ebc32;
    }
    if (param_2 != (_IO_FILE *)0x0) {
      pbVar55 = *(byte **)(local_660[1] + 0x48);
      local_6e0 = *(byte **)(local_660[1] + 0x40);
      local_688 = (byte *)0x0;
      if (*pbVar55 != 0) {
        local_688 = pbVar55;
      }
      local_5e8 = funlockfile;
      local_6b8 = &local_5e8;
      local_5e0 = param_1;
      __libc_cleanup_push_defer(local_6b8);
      if ((param_1->_flags & 0x8000U) == 0) {
        lVar36 = *(long *)(in_FS_OFFSET + 0x10);
        piVar48 = (int *)param_1->_lock;
        if (*(long *)(piVar48 + 2) != lVar36) {
          LOCK();
          iVar35 = *piVar48;
          if (iVar35 == 0) {
            *piVar48 = 1;
          }
          UNLOCK();
          if (iVar35 != 0) {
            __lll_lock_wait_private();
          }
          piVar48 = (int *)param_1->_lock;
          *(long *)(piVar48 + 2) = lVar36;
        }
        piVar48[1] = piVar48[1] + 1;
      }
      local_5c0.__count = 0;
      local_5c0.__value = (_union_27)0x0;
      bVar12 = (byte)local_620->_flags;
      if (bVar12 != 0) {
        uVar38 = 0;
        local_608 = local_608 & 0xffffffff00000000;
        local_648 = 0;
        local_698 = param_4 & 2;
        local_6e8 = ~param_4 & 1;
        local_6e4 = param_4 & 4;
        local_6a0 = (_IO_FILE *)0x0;
        local_678 = (long *)0x0;
        local_6c0 = (_IO_FILE *)0x0;
        local_6c8 = (_IO_FILE *)0x0;
        local_6d8 = (ulong *)0x0;
        local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
        puVar44 = auStack_708;
        p_Var52 = (_IO_FILE *)0x0;
LAB_006eb673:
        p_Var43 = local_620;
        uVar17 = (uint)uVar38;
        plVar22 = local_660;
        p_Var46 = local_618;
        if ((bVar12 & 0x80) != 0) {
          *(undefined8 *)(puVar44 + -8) = 0x6eb78f;
          sVar20 = strlen((char *)p_Var43);
          *(undefined8 *)(puVar44 + -8) = 0x6eb7a1;
          sVar20 = mbrlen((char *)p_Var43,sVar20,&local_5c0);
          p_Var46 = local_620;
          if ((int)sVar20 < 1) {
            bVar12 = (byte)p_Var43->_flags;
            plVar22 = local_660;
            p_Var46 = local_618;
            goto joined_r0x006eb7ba;
          }
          p_Var21 = (_IO_FILE *)((long)&local_620->_flags + (ulong)((int)sVar20 - 1) + 1);
          p_Var43 = local_620;
          do {
            if ((int)uVar38 == -1) {
              *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006ebdad:
              uVar16 = 0xffffffff;
              p_Var46 = local_618;
              if (local_648 != 0) {
                uVar16 = local_648;
              }
              goto switchD_006ebb4e_default;
            }
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar38 = (ulong)*pbVar55;
            }
            else {
              local_620 = p_Var21;
              *(undefined8 *)(puVar44 + -8) = 0x6ec318;
              uVar17 = __uflow(param_1);
              uVar38 = (ulong)uVar17;
              p_Var21 = local_620;
              if (uVar17 == 0xffffffff) goto LAB_006ebdad;
            }
            p_Var19 = (_IO_FILE *)((byte *)((long)p_Var52 + (1 - (long)p_Var46)) + (long)p_Var43);
            piVar48 = &p_Var43->_flags;
            p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
            if ((uint)(byte)*piVar48 != (uint)uVar38) {
              *(undefined8 *)(puVar44 + -8) = 0x6ee43c;
              _IO_sputbackc(param_1,uVar38 & 0xff);
              uVar16 = local_648;
              p_Var46 = local_618;
              goto switchD_006ebb4e_default;
            }
          } while (p_Var43 != p_Var21);
          goto LAB_006eb6fe;
        }
joined_r0x006eb7ba:
        p_Var43 = (_IO_FILE *)((long)&local_620->_flags + 1);
        local_618._4_4_ = (undefined4)((ulong)p_Var46 >> 0x20);
        p_Var19 = p_Var52;
        local_660 = plVar22;
        local_618 = p_Var46;
        if (bVar12 == 0x25) {
          local_640._4_4_ = (undefined4)((ulong)local_640 >> 0x20);
          uVar37 = (uint)*(byte *)((long)&local_620->_flags + 1);
          uVar16 = uVar37 - 0x30;
          local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
          local_478._0_8_ = local_468[0]._0_8_;
          if (uVar16 < 10) {
            local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar16);
            p_Var21 = (_IO_FILE *)((long)&local_620->_flags + 2);
            uVar37 = (uint)*(byte *)((long)&local_620->_flags + 2);
            uVar34 = uVar37 - 0x30;
            if (uVar34 < 10) {
              do {
                bVar12 = *(byte *)((long)&p_Var21->_flags + 1);
                p_Var43 = (_IO_FILE *)((long)&p_Var21->_flags + 1);
                uVar37 = (uint)bVar12;
                uVar32 = uVar37 - 0x30;
                if ((int)uVar16 < 0) {
                  local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar16);
                  p_Var11 = p_Var43;
                  p_Var43 = p_Var21;
                  while (p_Var21 = p_Var11, uVar32 < 10) {
                    uVar37 = (uint)*(byte *)((long)&p_Var21->_flags + 1);
                    p_Var11 = (_IO_FILE *)((long)&p_Var21->_flags + 1);
                    p_Var43 = p_Var21;
                    uVar32 = uVar37 - 0x30;
                  }
                  goto LAB_006eb875;
                }
                if (((int)uVar16 < 0xccccccd) && ((int)(uVar16 * 10) <= (int)(0x7fffffff - uVar34)))
                {
                  uVar16 = uVar16 * 10 + uVar34;
                  p_Var43 = p_Var21;
                  goto LAB_006eb85a;
                }
                if (9 < uVar32) {
                  if (bVar12 != 0x24) {
                    local_644 = 0;
                    local_694 = 0;
                    local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,0xffffffff);
                    goto LAB_006eb9a7;
                  }
                  local_694 = -1;
                  goto LAB_006ebdf3;
                }
                uVar16 = 0xffffffff;
LAB_006eb85a:
                p_Var21 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
                uVar37 = (uint)*(byte *)((long)&p_Var43->_flags + 1);
                uVar34 = uVar37 - 0x30;
              } while (uVar34 < 10);
              local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar16);
            }
LAB_006eb875:
            local_644 = 0;
            local_694 = 0;
            if ((char)uVar37 == '$') {
              local_694 = (uint)local_640;
              p_Var21 = p_Var43;
LAB_006ebdf3:
              uVar37 = (uint)*(byte *)((long)&p_Var21->_flags + 2);
              p_Var43 = (_IO_FILE *)((long)&p_Var21->_flags + 2);
              goto LAB_006eb91a;
            }
LAB_006eb892:
            p_Var43 = p_Var21;
            if ((uint)local_640 == 0) {
              local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,0xffffffff);
            }
          }
          else {
            local_694 = 0;
LAB_006eb91a:
            local_644 = 0;
            if (((byte)(uVar37 - 0x27) < 0x23) &&
               ((0xfffffffbfffffff6U >> ((ulong)(uVar37 - 0x27) & 0x3f) & 1) == 0)) {
              uVar16 = 0;
              local_644 = 0;
              if (local_688 == (byte *)0x0) {
                p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
                if ((char)uVar37 == '*') goto LAB_006eb9fe;
                do {
                  local_644 = uVar16;
                  if ((char)uVar37 == 'I') {
                    local_644 = uVar16 | 0x400;
                  }
                  while( true ) {
                    bVar12 = (byte)p_Var43->_flags;
                    uVar37 = (uint)bVar12;
                    if ((0x22 < (byte)(bVar12 - 0x27)) ||
                       ((0xfffffffbfffffff6U >> ((ulong)(bVar12 - 0x27) & 0x3f) & 1) != 0))
                    goto LAB_006eb98e;
                    p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
                    uVar16 = local_644;
                    if (bVar12 != 0x2a) break;
LAB_006eb9fe:
                    local_644 = local_644 | 8;
                  }
                } while( true );
              }
              do {
                p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
                cVar13 = (char)uVar37;
                if (cVar13 == '*') {
                  uVar16 = uVar16 | 8;
                }
                else if (cVar13 == 'I') {
                  uVar16 = uVar16 | 0x400;
                }
                else if (cVar13 == '\'') {
                  uVar16 = uVar16 | 0x80;
                }
                bVar12 = (byte)p_Var43->_flags;
                uVar37 = (uint)bVar12;
                uVar34 = bVar12 - 0x27;
                local_644 = uVar16;
              } while (((byte)uVar34 < 0x23) &&
                      ((0xfffffffbfffffff6U >> ((ulong)uVar34 & 0x3f) & 1) == 0));
            }
LAB_006eb98e:
            local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,0xffffffff);
            uVar16 = uVar37 - 0x30;
            if (uVar16 < 10) {
              local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar16);
              p_Var21 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
              uVar37 = (uint)*(byte *)((long)&p_Var43->_flags + 1);
              uVar34 = uVar37 - 0x30;
              if (uVar34 < 10) {
                do {
                  p_Var43 = (_IO_FILE *)((long)&p_Var21->_flags + 1);
                  uVar37 = (uint)*(byte *)((long)&p_Var21->_flags + 1);
                  uVar32 = uVar37 - 0x30;
                  if ((int)uVar16 < 0) {
                    local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar16);
                    if (uVar32 < 10) {
                      uVar38 = FUN_00404a25();
                      return uVar38;
                    }
                    goto LAB_006eb9a7;
                  }
                  if ((int)uVar16 < 0xccccccd) {
                    if ((int)(0x7fffffff - uVar34) < (int)(uVar16 * 10)) {
                      if (uVar32 < 10) goto LAB_006ec369;
                      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,0xffffffff);
                      goto LAB_006eb9a7;
                    }
                    uVar16 = uVar16 * 10 + uVar34;
                  }
                  else {
                    if (9 < uVar32) {
                      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,0xffffffff);
                      goto LAB_006eb9a7;
                    }
LAB_006ec369:
                    uVar16 = 0xffffffff;
                    p_Var21 = p_Var43;
                  }
                  piVar48 = &p_Var21->_flags;
                  p_Var21 = (_IO_FILE *)((long)&p_Var21->_flags + 1);
                  uVar37 = (uint)*(byte *)((long)piVar48 + 1);
                  uVar34 = uVar37 - 0x30;
                } while (uVar34 < 10);
                local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar16);
              }
              goto LAB_006eb892;
            }
          }
LAB_006eb9a7:
          cVar13 = (char)uVar37;
          local_620 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
          switch(uVar37 - 0x4c & 0xff) {
          case 0:
          case 0x25:
            uVar37 = (uint)*(byte *)((long)&p_Var43->_flags + 1);
            local_644 = local_644 | 3;
            p_Var43 = local_620;
            break;
          case 0x15:
            bVar12 = *(byte *)((long)&p_Var43->_flags + 1);
            if ((((bVar12 & 0xf7) == 0x53) || (bVar12 == 0x73)) && (local_698 == 0)) {
              local_644 = local_644 | 0x100;
              uVar37 = (uint)bVar12;
              p_Var43 = local_620;
              break;
            }
            goto LAB_006eba42;
          case 0x1c:
            bVar12 = *(byte *)((long)&p_Var43->_flags + 1);
            uVar37 = (uint)bVar12;
            if (bVar12 == 0x68) {
              uVar37 = (uint)*(byte *)((long)&p_Var43->_flags + 2);
              local_644 = local_644 | 0x200;
              p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 2);
            }
            else {
              local_644 = local_644 | 4;
              p_Var43 = local_620;
            }
            break;
          case 0x1e:
          case 0x28:
          case 0x2e:
            local_644 = local_644 | 1;
            uVar37 = (uint)*(byte *)((long)&p_Var43->_flags + 1);
            p_Var43 = local_620;
            break;
          case 0x20:
            bVar12 = *(byte *)((long)&p_Var43->_flags + 1);
            uVar37 = (uint)bVar12;
            if (bVar12 == 0x6c) {
              uVar37 = (uint)*(byte *)((long)&p_Var43->_flags + 2);
              local_644 = local_644 | 3;
              p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 2);
            }
            else {
              local_644 = local_644 | 1;
              p_Var43 = local_620;
            }
            break;
          case 0x21:
            bVar12 = *(byte *)((long)&p_Var43->_flags + 1);
            uVar37 = (uint)bVar12;
            if (bVar12 == 0x6c) {
              uVar37 = (uint)*(byte *)((long)&p_Var43->_flags + 2);
              local_644 = local_644 | 0x2001;
              p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 2);
            }
            else {
              local_644 = local_644 | 0x2000;
              p_Var43 = local_620;
            }
          }
          cVar13 = (char)uVar37;
          uVar16 = local_648;
          if (cVar13 == '\0') goto switchD_006ebb4e_default;
          local_618._0_4_ = (uint)p_Var46;
          local_620 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
          if ((uint)local_618 == 0) {
            bVar12 = (byte)(uVar37 - 0x43);
            if ((0x2b < bVar12) ||
               ((0xfffff7fefefffffeU >> ((ulong)(uVar37 - 0x43) & 0x3f) & 1) != 0))
            goto LAB_006eba42;
            switch(bVar12) {
            case 0:
              goto switchD_006ec484_caseD_43;
            default:
              goto switchD_006ebb4e_default;
            case 2:
            case 3:
            case 4:
            case 0x1e:
            case 0x22:
            case 0x23:
            case 0x24:
              goto switchD_006ebe25_caseD_2;
            case 0x10:
              goto switchD_006ec484_caseD_53;
            case 0x15:
              local_628 = p_Var52;
              goto switchD_006ebb4e_caseD_58;
            case 0x18:
switchD_006ec484_caseD_5b:
              local_628 = p_Var52;
              goto switchD_006ebb4e_caseD_5b;
            case 0x20:
              goto switchD_006ec484_caseD_63;
            case 0x21:
              local_628 = p_Var52;
              goto switchD_006ebb4e_caseD_64;
            case 0x26:
              local_628 = p_Var52;
              goto switchD_006ebb4e_caseD_69;
            case 0x2b:
              goto switchD_006ebe25_caseD_2b;
            }
          }
LAB_006eba42:
          local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
          local_628._1_7_ = (undefined7)((ulong)local_628 >> 8);
          local_628 = (_IO_FILE *)CONCAT71(local_628._1_7_,cVar13);
          iVar35 = (int)local_608;
          local_638 = p_Var43;
          do {
            while ((int)uVar38 == -1) {
              iVar56 = *(int *)(in_FS_OFFSET + -0x58);
joined_r0x006ebba3:
              if (iVar56 == 4) {
                uVar16 = 0xffffffff;
                p_Var46 = local_618;
                if (local_648 != 0) {
                  uVar16 = local_648;
                }
                goto switchD_006ebb4e_default;
              }
              uVar38 = 0xffffffff;
              uVar17 = 0xffffffff;
              p_Var19 = p_Var52;
              if ((*(ushort *)(plVar22[0xd] + -2) & 0x2000) == 0) goto LAB_006ebade;
            }
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar38 = (ulong)*pbVar55;
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6ebb90;
              uVar17 = __uflow(param_1);
              uVar38 = (ulong)uVar17;
              if (uVar17 == 0xffffffff) {
                iVar35 = *(int *)(in_FS_OFFSET + -0x58);
                iVar56 = iVar35;
                goto joined_r0x006ebba3;
              }
            }
            uVar17 = (uint)uVar38;
            p_Var52 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
            p_Var19 = p_Var52;
          } while ((*(ushort *)(plVar22[0xd] + (long)(int)uVar17 * 2) & 0x2000) != 0);
LAB_006ebade:
          p_Var43 = local_638;
          uVar38 = (ulong)uVar17;
          local_608 = CONCAT44(local_608._4_4_,iVar35);
          bVar12 = (byte)local_628;
          *(uint *)(in_FS_OFFSET + -0x58) = (uint)local_618;
          if (uVar17 == 0xffffffff) {
            uVar16 = local_648;
            p_Var46 = local_618;
            if (0x67 < (byte)local_628) {
              bVar12 = (byte)local_628 + 0x97;
              if (0xf < bVar12) goto switchD_006ebb4e_default;
              if ((1L << (bVar12 & 0x3f) & 0x90c1U) == 0) {
                p_Var43 = (_IO_FILE *)0xffffffffffffffa8;
                if (bVar12 == 10) goto LAB_006ede63;
                if (bVar12 == 5) goto switchD_006ebe25_caseD_2b;
                goto switchD_006ebb4e_default;
              }
switchD_006ec484_caseD_58:
              goto LAB_006ec82a;
            }
            if ((byte)local_628 < 0x25) goto switchD_006ebb4e_default;
            p_Var52 = p_Var19;
            switch((byte)local_628) {
            case 0x25:
              *(int *)(in_FS_OFFSET + -0x58) = iVar35;
LAB_006eec94:
              uVar16 = 0xffffffff;
              p_Var46 = local_618;
              if (local_648 != 0) {
                uVar16 = local_648;
              }
              goto switchD_006ebb4e_default;
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x42:
            case 0x44:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x59:
            case 0x5a:
            case 0x5c:
            case 0x5d:
            case 0x5e:
            case 0x5f:
            case 0x60:
            case 0x62:
              goto switchD_006ebb4e_default;
            case 0x41:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x61:
            case 0x65:
            case 0x66:
            case 0x67:
              goto LAB_006ed065;
            case 0x43:
              goto switchD_006ec484_caseD_43;
            case 0x53:
              goto switchD_006ec484_caseD_53;
            case 0x58:
            case 100:
              goto switchD_006ec484_caseD_58;
            case 0x5b:
              goto switchD_006ec484_caseD_5b;
            case 99:
              goto switchD_006ec484_caseD_63;
            default:
              goto switchD_006ebb4e_default;
            }
          }
          local_628 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
          local_618 = (_IO_FILE *)0xffffffffffffffa8;
          *(undefined8 *)(puVar44 + -8) = 0x6ebb2d;
          _IO_sputbackc(param_1,uVar38 & 0xff);
          uVar16 = local_648;
          p_Var46 = local_618;
          p_Var52 = local_628;
          switch(bVar12) {
          case 0x25:
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar38 = (ulong)*pbVar55;
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6ef93c;
              uVar17 = __uflow(param_1);
              uVar38 = (ulong)uVar17;
              if (uVar17 == 0xffffffff) goto LAB_006eec94;
            }
            if ((int)uVar38 == 0x25) goto LAB_006ed3d8;
            *(undefined8 *)(puVar44 + -8) = 0x6ee428;
            _IO_sputbackc(param_1,uVar38 & 0xff);
            uVar16 = local_648;
            p_Var46 = local_618;
            goto switchD_006ebb4e_default;
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x3f:
          case 0x40:
          case 0x42:
          case 0x44:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x59:
          case 0x5a:
          case 0x5c:
          case 0x5d:
          case 0x5e:
          case 0x5f:
          case 0x60:
          case 0x62:
          case 0x68:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x71:
          case 0x72:
          case 0x74:
          case 0x76:
          case 0x77:
            goto switchD_006ebb4e_default;
          case 0x41:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x61:
          case 0x65:
          case 0x66:
          case 0x67:
            goto switchD_006ebe25_caseD_2;
          case 0x43:
            p_Var19 = local_628;
switchD_006ec484_caseD_43:
            iVar35 = 1;
            if ((uint)local_640 != -1) {
              iVar35 = (uint)local_640;
            }
            local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
            local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
            if ((local_644 & 8) == 0) {
              uVar16 = local_648;
              p_Var46 = local_618;
              if ((local_644 & 0x2100) == 0) {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar38 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar38 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c0 = (_IO_FILE *)*plVar22;
                }
                else {
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar35 = local_694 + -1;
                  uVar37 = local_598._80_4_;
                  p_Var52 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar57 = false;
LAB_006f0652:
                    if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f0657;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                    }
                    p_Var52 = local_638;
                    if (!bVar57) goto LAB_006f066d;
LAB_006f0665:
                    uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                    uVar37 = local_598._80_4_;
                    p_Var52 = stack0xfffffffffffffab8;
                  }
LAB_006f066d:
                  stack0xfffffffffffffab8 = p_Var52;
                  if (uVar37 < 0x30) {
                    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar37 + 8);
                    plVar22 = (long *)((long)&local_538->_next + (ulong)uVar37);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c0 = (_IO_FILE *)*plVar22;
                }
                if (local_6c0 == (_IO_FILE *)0x0) goto switchD_006ebb4e_default;
              }
              else {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar38 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar38 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                else {
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar56 = local_694 + -1;
                  uVar37 = local_598._80_4_;
                  p_Var52 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar56 != 0) {
                    bVar57 = false;
LAB_006ef991:
                    if ((uint)local_598._80_4_ < 0x30) goto code_r0x006ef996;
                    plStack_540 = plStack_630 + 1;
                    if (iVar56 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar56 - 2) + 3 != plStack_540 + 1);
                    }
                    p_Var52 = local_638;
                    if (!bVar57) goto LAB_006ef9ac;
LAB_006ef9a4:
                    uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                    uVar37 = local_598._80_4_;
                    p_Var52 = stack0xfffffffffffffab8;
                  }
LAB_006ef9ac:
                  stack0xfffffffffffffab8 = p_Var52;
                  if (uVar37 < 0x30) {
                    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar37 + 8);
                    plVar22 = (long *)((long)&local_538->_next + (ulong)uVar37);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                local_678 = plVar22;
                if (plVar22 == (long *)0x0) goto switchD_006ebb4e_default;
                local_6a0 = (_IO_FILE *)0x400;
                if (iVar35 < 0x401) {
                  local_6a0 = (_IO_FILE *)(long)iVar35;
                }
                sVar20 = (long)local_6a0 * 4;
                *(undefined8 *)(puVar44 + -8) = 0x6ec162;
                local_6c0 = (_IO_FILE *)malloc(sVar20);
                *plVar22 = (long)local_6c0;
                if (local_6c0 == (_IO_FILE *)0x0) {
                  uVar16 = 0xffffffff;
                  p_Var46 = local_618;
                  if ((local_644 & 0x2000) == 0) {
                    uVar16 = local_648;
                  }
                  goto switchD_006ebb4e_default;
                }
                if (local_6d8 == (ulong *)0x0) {
LAB_006ee628:
                  puVar45 = puVar44 + -0x120;
                  *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
                  uVar38 = 1;
                  puVar29 = (ulong *)((ulong)(puVar44 + -0x111) & 0xfffffffffffffff0);
                  *puVar29 = 0;
                  puVar29[1] = (ulong)local_6d8;
                  uVar53 = 0;
                  local_6d8 = puVar29;
                }
                else {
                  uVar53 = *local_6d8;
                  uVar38 = uVar53 + 1;
                  puVar45 = puVar44;
                  if (uVar53 == 0x20) goto LAB_006ee628;
                }
                *local_6d8 = uVar38;
                local_6d8[uVar53 + 2] = (ulong)local_678;
                puVar44 = puVar45;
              }
            }
            if (uVar17 == 0xffffffff) {
              *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
            }
            else {
              pbVar55 = (byte *)param_1->_IO_read_ptr;
              if (pbVar55 < param_1->_IO_read_end) {
                param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                uVar38 = (ulong)*pbVar55;
LAB_006ec1d0:
                local_638 = (_IO_FILE *)(local_598 + 0x50);
                stack0xfffffffffffffab8 = (_IO_FILE *)0x0;
                local_644 = local_644 & 0x2100;
                local_628 = (_IO_FILE *)CONCAT44(local_628._4_4_,(uint)local_640 + -1);
                local_640 = (_IO_FILE *)(long)(int)(uint)local_640;
                do {
                  local_58 = (char)uVar38;
                  if (((uint)local_618 == 0) && (local_644 != 0)) {
                    pvVar26 = (void *)*local_678;
                    lVar36 = (long)local_6a0 * 4;
                    if (local_6c0 == (_IO_FILE *)((long)pvVar26 + lVar36)) {
                      p_Var52 = (_IO_FILE *)(long)(int)local_628;
                      if ((long)local_6a0 <= (long)local_640) {
                        p_Var52 = local_6a0;
                      }
                      p_Var52 = (_IO_FILE *)((long)&local_6a0->_flags + (long)&p_Var52->_flags);
                      *(undefined8 *)(puVar44 + -8) = 0x6f00ed;
                      pvVar26 = realloc(pvVar26,(long)p_Var52 * 4);
                      plVar22 = local_678;
                      if (pvVar26 == (void *)0x0) {
                        local_6a0 = (_IO_FILE *)((long)&local_6a0->_flags + 1);
                        pvVar26 = (void *)*local_678;
                        *(undefined8 *)(puVar44 + -8) = 0x6f2f63;
                        pvVar26 = realloc(pvVar26,lVar36 + 4);
                        if (pvVar26 == (void *)0x0) {
                          local_648 = 0xffffffff;
                          uVar16 = local_648;
                          p_Var46 = local_618;
                          goto switchD_006ebb4e_default;
                        }
                        *plVar22 = (long)pvVar26;
                        local_6c0 = (_IO_FILE *)((long)pvVar26 + lVar36);
                      }
                      else {
                        *local_678 = (long)pvVar26;
                        local_6c0 = (_IO_FILE *)((long)pvVar26 + lVar36);
                        local_6a0 = p_Var52;
                      }
                    }
                  }
                  p_Var52 = (_IO_FILE *)0x0;
                  if ((uint)local_618 == 0) {
                    p_Var52 = local_6c0;
                  }
                  while( true ) {
                    p_Var46 = local_638;
                    p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                    *(undefined8 *)(puVar44 + -8) = 0x6ec2a3;
                    sVar20 = mbrtowc(&p_Var52->_flags,&stack0xffffffffffffffa8,1,
                                     (mbstate_t *)p_Var46);
                    if (sVar20 != 0xfffffffffffffffe) break;
                    pbVar55 = (byte *)param_1->_IO_read_ptr;
                    if (pbVar55 < param_1->_IO_read_end) {
                      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                      uVar38 = (ulong)*pbVar55;
                    }
                    else {
                      *(undefined8 *)(puVar44 + -8) = 0x6ec2bf;
                      uVar17 = __uflow(param_1);
                      uVar38 = (ulong)uVar17;
                      if (uVar17 == 0xffffffff) {
                        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                        uVar16 = local_648;
                        p_Var46 = local_618;
                        goto switchD_006ebb4e_default;
                      }
                    }
                    local_58 = (char)uVar38;
                  }
                  if (sVar20 != 1) {
                    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                    uVar16 = local_648;
                    p_Var46 = local_618;
                    goto switchD_006ebb4e_default;
                  }
                  local_6c0 = (_IO_FILE *)&local_6c0->field_0x4;
                  if ((int)local_628 < 1) goto LAB_006ef2f2;
                  pbVar55 = (byte *)param_1->_IO_read_ptr;
                  if (pbVar55 < param_1->_IO_read_end) {
                    param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                    uVar38 = (ulong)*pbVar55;
                  }
                  else {
                    *(undefined8 *)(puVar44 + -8) = 0x6ef2d5;
                    uVar17 = __uflow(param_1);
                    uVar38 = (ulong)uVar17;
                    if (uVar17 == 0xffffffff) goto code_r0x006ef2e1;
                  }
                  local_628 = (_IO_FILE *)CONCAT44(local_628._4_4_,(int)local_628 + -1);
                  local_640 = (_IO_FILE *)(local_640[-1]._unused2 + 0x13);
                } while( true );
              }
              *(undefined8 *)(puVar44 + -8) = 0x6eebd4;
              uVar17 = __uflow(param_1);
              uVar38 = (ulong)uVar17;
              if (uVar17 != 0xffffffff) goto LAB_006ec1d0;
            }
            uVar16 = 0xffffffff;
            p_Var46 = local_618;
            if (local_648 != 0) {
              uVar16 = local_648;
            }
            goto switchD_006ebb4e_default;
          case 0x53:
            goto switchD_006ec484_caseD_53;
          case 0x58:
          case 0x78:
switchD_006ebb4e_caseD_58:
            local_618 = p_Var46;
            local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,0x10);
            break;
          case 0x5b:
switchD_006ebb4e_caseD_5b:
            uVar34 = local_644;
            uVar37 = local_644 & 8;
            local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000001);
            uVar16 = local_648;
            p_Var46 = local_618;
            if ((local_644 & 1) == 0) {
              if (uVar37 == 0) {
                if ((local_644 & 0x2100) != 0) {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar38 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar38 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                    local_678 = plVar22;
                    if (plVar22 != (long *)0x0) {
                      *(undefined8 *)(puVar44 + -8) = 0x6ee584;
                      local_6c8 = (_IO_FILE *)malloc(100);
                      *plVar22 = (long)local_6c8;
                      if (local_6c8 != (_IO_FILE *)0x0) {
                        if ((local_6d8 == (ulong *)0x0) || (uVar38 = *local_6d8, uVar38 == 0x20))
                        goto LAB_006ee5cd;
LAB_006ecf1c:
                        uVar53 = uVar38 + 1;
                        puVar45 = puVar44;
                        goto LAB_006ecf20;
                      }
                      uVar16 = 0xffffffff;
                      p_Var46 = local_618;
                      if ((local_644 & 0x2000) == 0) {
                        uVar16 = local_648;
                      }
                    }
                    goto switchD_006ebb4e_default;
                  }
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar35 = local_694 + -1;
                  uVar17 = local_598._80_4_;
                  pcVar41 = (char *)local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 == 0) goto LAB_006f0751;
                  uVar38 = (ulong)local_638 & 0xffffffff;
                  bVar57 = false;
                  goto LAB_006f071a;
                }
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar38 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar38 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c8 = (_IO_FILE *)*plVar22;
                  p_Var52 = local_6c8;
                }
                else {
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar35 = local_694 + -1;
                  uVar32 = local_598._80_4_;
                  p_Var52 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar57 = false;
LAB_006f2fbf:
                    if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f2fc4;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                    }
                    if (bVar57) {
LAB_006f2fed:
                      uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                      uVar32 = local_598._80_4_;
                      p_Var52 = stack0xfffffffffffffab8;
                    }
                  }
                  stack0xfffffffffffffab8 = p_Var52;
                  if (uVar32 < 0x30) {
                    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar32 + 8);
                    plVar22 = (long *)((long)&local_538->_next + (ulong)uVar32);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c8 = (_IO_FILE *)*plVar22;
                  p_Var52 = local_6c8;
                }
joined_r0x006f0523:
                if (p_Var52 == (_IO_FILE *)0x0) goto switchD_006ebb4e_default;
              }
            }
            else if (uVar37 == 0) {
              if ((local_644 & 0x2100) == 0) {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar38 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar38 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c0 = (_IO_FILE *)*plVar22;
                  p_Var52 = local_6c0;
                }
                else {
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar35 = local_694 + -1;
                  uVar32 = local_598._80_4_;
                  p_Var52 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar57 = false;
LAB_006f1585:
                    if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f158a;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                    }
                    if (bVar57) {
LAB_006f15b3:
                      uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                      uVar32 = local_598._80_4_;
                      p_Var52 = stack0xfffffffffffffab8;
                    }
                  }
                  stack0xfffffffffffffab8 = p_Var52;
                  if (uVar32 < 0x30) {
                    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar32 + 8);
                    plVar22 = (long *)((long)&local_538->_next + (ulong)uVar32);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c0 = (_IO_FILE *)*plVar22;
                  p_Var52 = local_6c0;
                }
                goto joined_r0x006f0523;
              }
              if (local_694 == 0) {
                if ((uint)local_5b0 < 0x30) {
                  uVar38 = local_5b0 & 0xffffffff;
                  local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                  plVar22 = (long *)(uVar38 + local_5a0);
                }
                else {
                  plVar22 = plStack_5a8;
                  plStack_5a8 = plStack_5a8 + 1;
                }
                plVar22 = (long *)*plVar22;
              }
              else {
                local_638 = (_IO_FILE *)*local_6d0;
                plStack_630 = (long *)local_6d0[1];
                local_538 = (_IO_marker *)local_6d0[2];
                local_598._80_4_ = SUB84(local_638,0);
                iVar35 = local_694 + -1;
                uVar32 = local_598._80_4_;
                p_Var52 = local_638;
                plStack_540 = plStack_630;
                if (iVar35 != 0) {
                  bVar57 = false;
LAB_006f0485:
                  if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f048a;
                  plStack_540 = plStack_630 + 1;
                  if (iVar35 != 1) {
                    plVar22 = plStack_630 + 2;
                    do {
                      plStack_540 = plVar22;
                      plVar22 = plStack_540 + 1;
                    } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                  }
                  p_Var52 = local_638;
                  if (bVar57) {
LAB_006f04b3:
                    uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                    uVar32 = local_598._80_4_;
                    p_Var52 = stack0xfffffffffffffab8;
                  }
                }
                stack0xfffffffffffffab8 = p_Var52;
                if (uVar32 < 0x30) {
                  stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar32 + 8);
                  plVar22 = (long *)((long)&local_538->_next + (ulong)uVar32);
                }
                else {
                  plVar22 = plStack_540;
                  plStack_540 = plStack_540 + 1;
                }
                plVar22 = (long *)*plVar22;
              }
              local_678 = plVar22;
              if (plVar22 == (long *)0x0) goto switchD_006ebb4e_default;
              *(undefined8 *)(puVar44 + -8) = 0x6eceec;
              local_6c0 = (_IO_FILE *)malloc(400);
              *plVar22 = (long)local_6c0;
              if (local_6c0 == (_IO_FILE *)0x0) {
                uVar16 = 0xffffffff;
                p_Var46 = local_618;
                if ((local_644 & 0x2000) == 0) {
                  uVar16 = local_648;
                }
                goto switchD_006ebb4e_default;
              }
              if ((local_6d8 != (ulong *)0x0) && (uVar38 = *local_6d8, uVar38 != 0x20))
              goto LAB_006ecf1c;
LAB_006ee5cd:
              puVar45 = puVar44 + -0x120;
              *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
              uVar53 = 1;
              puVar29 = (ulong *)((ulong)(puVar44 + -0x111) & 0xfffffffffffffff0);
              *puVar29 = 0;
              puVar29[1] = (ulong)local_6d8;
              uVar38 = 0;
              local_6d8 = puVar29;
LAB_006ecf20:
              *local_6d8 = uVar53;
              local_6d8[uVar38 + 2] = (ulong)local_678;
              local_6a0 = (_IO_FILE *)0x64;
              puVar44 = puVar45;
            }
            p_Var52 = local_650;
            local_650 = (_IO_FILE *)((ulong)local_650 & 0xffffffffffffff00);
            if (*(byte *)((long)&p_Var43->_flags + 1) == 0x5e) {
              local_620 = (_IO_FILE *)((long)&p_Var43->_flags + 2);
              local_650._1_7_ = SUB87(p_Var52,1);
              local_650 = (_IO_FILE *)CONCAT71(local_650._1_7_,1);
            }
            *(undefined8 *)(puVar44 + -8) = 0x6ecf79;
            cVar13 = __libc_scratch_buffer_set_array_size(local_468,0x100,1);
            p_Var46 = local_618;
            if (cVar13 == '\0') {
              local_648 = 0xffffffff;
              uVar16 = local_648;
            }
            else {
              *(char ***)local_468[0]._0_8_ = (char **)0x0;
              *(char ***)(local_468[0]._0_8_ + 0xf8) = (char **)0x0;
              puVar28 = (undefined8 *)((ulong)(local_468[0]._0_8_ + 8) & 0xfffffffffffffff8);
              for (uVar38 = (ulong)(((int)local_468[0]._0_8_ -
                                    (int)(undefined8 *)
                                         ((ulong)(local_468[0]._0_8_ + 8) & 0xfffffffffffffff8)) +
                                    0x100U >> 3); uVar38 != 0; uVar38 = uVar38 - 1) {
                *puVar28 = 0;
                puVar28 = puVar28 + (ulong)bVar58 * -2 + 1;
              }
              bVar12 = (byte)local_620->_flags;
              uVar38 = (ulong)bVar12;
              if ((bVar12 == 0x5d) || (bVar12 == 0x2d)) {
                *(char *)(local_468[0]._0_8_ + uVar38) = '\x01';
                uVar38 = (ulong)*(byte *)((long)&local_620->_flags + 1);
                local_620 = (_IO_FILE *)((long)&local_620->_flags + 1);
              }
              p_Var52 = local_620;
              if ((char)uVar38 == '\0') {
                uVar38 = FUN_006f03e5();
                return uVar38;
              }
              while( true ) {
                p_Var43 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
                if ((char)uVar38 == ']') break;
                if (((((char)uVar38 == '-') && (bVar12 = (byte)p_Var43->_flags, bVar12 != 0)) &&
                    (bVar12 != 0x5d)) && (bVar14 = p_Var52[-1]._unused2[0x13], bVar14 <= bVar12)) {
                  if (bVar14 < bVar12) {
                    do {
                      uVar38 = (ulong)bVar14;
                      bVar14 = bVar14 + 1;
                      *(char *)(local_468[0]._0_8_ + uVar38) = '\x01';
                      bVar12 = (byte)p_Var43->_flags;
                    } while (bVar14 < bVar12);
                    goto LAB_006ecff6;
                  }
                }
                else {
                  *(char *)(local_468[0]._0_8_ + uVar38) = '\x01';
                  bVar12 = (byte)p_Var43->_flags;
LAB_006ecff6:
                  uVar16 = local_648;
                  if (bVar12 == 0) goto switchD_006ebb4e_default;
                }
                uVar38 = (ulong)bVar12;
                p_Var52 = p_Var43;
              }
              local_620 = p_Var43;
              if ((uint)local_618 == 0) {
                if (uVar17 == 0xffffffff) {
                  *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006effa8:
                  uVar16 = 0xffffffff;
                  p_Var46 = local_618;
                  if (local_648 != 0) {
                    uVar16 = local_648;
                  }
                }
                else {
                  pbVar55 = (byte *)param_1->_IO_read_ptr;
                  if (pbVar55 < param_1->_IO_read_end) {
                    param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                    uVar38 = (ulong)*pbVar55;
                  }
                  else {
                    *(undefined8 *)(puVar44 + -8) = 0x6f034b;
                    uVar17 = __uflow(param_1);
                    uVar38 = (ulong)uVar17;
                    if (uVar17 == 0xffffffff) goto LAB_006effa8;
                  }
                  p_Var19 = local_628;
                  p_Var52 = local_6c8;
                  if ((byte)local_650 != *(char *)(local_468[0]._0_8_ + (long)(int)uVar38)) {
                    local_638 = (_IO_FILE *)
                                (CONCAT44(local_638._4_4_,local_644) & 0xffffffff00002100);
                    iVar35 = (uint)local_640;
                    do {
                      p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                      if (uVar37 == 0) {
                        *(byte *)&p_Var52->_flags = (byte)uVar38;
                        p_Var52 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
                        if (((int)local_638 != 0) &&
                           (pvVar26 = (void *)*local_678,
                           p_Var52 == (_IO_FILE *)((long)pvVar26 + (long)local_6a0))) {
                          local_658 = (_IO_FILE *)((ulong)local_658 & 0xffffffff00000000);
                          p_Var52 = (_IO_FILE *)((long)&local_6a0->_flags + 1);
                          p_Var46 = (_IO_FILE *)((long)local_6a0 * 2);
                          local_640 = param_1;
                          while( true ) {
                            *(undefined8 *)(puVar44 + -8) = 0x6eff55;
                            pvVar26 = realloc(pvVar26,(size_t)p_Var46);
                            plVar22 = local_678;
                            param_1 = local_640;
                            if (pvVar26 != (void *)0x0) break;
                            if (p_Var46 <= p_Var52) {
                              p_Var46 = local_618;
                              if ((local_644 & 0x2000) == 0) {
                                local_678 = (long *)0x0;
                                *(byte *)(*plVar22 + -1 + (long)local_6a0) = 0;
                                uVar16 = local_648 + 1;
                              }
                              else {
                                local_648 = 0xffffffff;
                                uVar16 = local_648;
                              }
                              goto switchD_006ebb4e_default;
                            }
                            pvVar26 = (void *)*local_678;
                            p_Var46 = p_Var52;
                          }
                          *local_678 = (long)pvVar26;
                          p_Var52 = (_IO_FILE *)((long)pvVar26 + (long)local_6a0);
                          uVar37 = (uint)local_658;
                          local_6a0 = p_Var46;
                        }
                      }
                      if ((-1 < iVar35) && (iVar35 = iVar35 + -1, iVar35 == 0)) goto LAB_006eeb4e;
                      pbVar55 = (byte *)param_1->_IO_read_ptr;
                      if (pbVar55 < param_1->_IO_read_end) {
                        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                        uVar38 = (ulong)*pbVar55;
                      }
                      else {
                        local_640 = p_Var52;
                        *(undefined8 *)(puVar44 + -8) = 0x6eeb1c;
                        uVar17 = __uflow(param_1);
                        uVar38 = (ulong)uVar17;
                        p_Var52 = local_640;
                        if (uVar17 == 0xffffffff) {
                          local_6c8 = local_640;
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          p_Var52 = local_6c8;
                          goto LAB_006eeb4e;
                        }
                      }
                    } while (*(char *)(local_468[0]._0_8_ + (long)(int)uVar38) != (byte)local_650);
                  }
                  local_6c8 = p_Var52;
                  *(undefined8 *)(puVar44 + -8) = 0x6f033e;
                  _IO_sputbackc(param_1,uVar38 & 0xff);
                  p_Var52 = local_6c8;
LAB_006eeb4e:
                  local_6c8 = p_Var52;
                  p_Var52 = local_6c8;
                  uVar16 = local_648;
                  p_Var46 = local_618;
                  if (p_Var19 != local_628) goto LAB_006ee095;
                }
              }
              else {
                if (uVar17 != 0xffffffff) {
                  pbVar55 = (byte *)param_1->_IO_read_ptr;
                  if (pbVar55 < param_1->_IO_read_end) {
                    param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                    uVar38 = (ulong)*pbVar55;
                  }
                  else {
                    *(undefined8 *)(puVar44 + -8) = 0x6f0561;
                    uVar17 = __uflow(param_1);
                    uVar38 = (ulong)uVar17;
                    if (uVar17 == 0xffffffff) goto LAB_006efd6e;
                  }
                  stack0xfffffffffffffab8 = (_IO_FILE *)0x0;
                  local_638 = (_IO_FILE *)(local_598 + 0x50);
                  p_Var19 = local_628;
                  if ((byte)local_650 != *(char *)(local_468[0]._0_8_ + (long)(int)uVar38)) {
                    local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,uVar34) & 0xffffffff00000008);
                    local_658 = (_IO_FILE *)0x0;
                    local_670 = (wctrans_t)
                                (CONCAT44(local_670._4_4_,local_644) & 0xffffffff00002100);
                    local_668 = (_IO_FILE *)&stack0xffffffffffffffa8;
                    p_Var52 = local_6c0;
                    iVar35 = (uint)local_640;
LAB_006ee8a1:
                    p_Var43 = local_638;
                    p_Var46 = local_668;
                    p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                    if ((uint)local_618 == 0) {
                      local_58 = (char)uVar38;
                      *(undefined8 *)(puVar44 + -8) = 0x6ee8ca;
                      sVar20 = mbrtowc(&p_Var52->_flags,(char *)p_Var46,1,(mbstate_t *)p_Var43);
                      if (sVar20 == 0xfffffffffffffffe) {
                        local_658 = (_IO_FILE *)((long)&local_658->_flags + 1);
                        if ((_IO_FILE *)0xf < local_658) {
                    /* WARNING: Subroutine does not return */
                          *(undefined **)(puVar44 + -8) = &UNK_006eea0a;
                          __assert_fail("cnt < MB_LEN_MAX","vfscanf-internal.c",0xa77,
                                        "__vfscanf_internal");
                        }
                        goto LAB_006ee862;
                      }
                      p_Var52 = (_IO_FILE *)&p_Var52->field_0x4;
                      if ((int)local_670 == 0) {
                        local_658 = (_IO_FILE *)0x0;
                      }
                      else {
                        local_658 = (_IO_FILE *)0x0;
                        pvVar26 = (void *)*local_678;
                        if (p_Var52 == (_IO_FILE *)((long)pvVar26 + (long)local_6a0 * 4)) {
                          sVar20 = (long)local_6a0 * 8;
                          local_640 = (_IO_FILE *)((long)local_6a0 * 4);
                          *(undefined8 *)(puVar44 + -8) = 0x6ee932;
                          pvVar26 = realloc(pvVar26,sVar20);
                          if (pvVar26 != (void *)0x0) {
                            local_6a0 = (_IO_FILE *)((long)local_6a0 << 1);
                            *local_678 = (long)pvVar26;
                            p_Var52 = (_IO_FILE *)((long)pvVar26 + (long)local_640);
                            goto code_r0x006ee850;
                          }
                          puVar45 = &local_640->field_0x4;
                          local_6a0 = (_IO_FILE *)((long)&local_6a0->_flags + 1);
                          pvVar26 = (void *)*local_678;
                          *(undefined8 *)(puVar44 + -8) = 0x6f1be6;
                          pvVar26 = realloc(pvVar26,(size_t)puVar45);
                          plVar22 = local_678;
                          if (pvVar26 != (void *)0x0) {
                            *local_678 = (long)pvVar26;
                            uVar38 = FUN_006ee850();
                            return uVar38;
                          }
                          p_Var46 = local_618;
                          if ((local_644 & 0x2000) == 0) {
                            local_678 = (long *)0x0;
                            pbVar55 = (byte *)(*plVar22 + -4 + (long)local_640);
                            pbVar55[0] = 0;
                            pbVar55[1] = 0;
                            pbVar55[2] = 0;
                            pbVar55[3] = 0;
                            uVar16 = local_648 + 1;
                          }
                          else {
                            local_648 = 0xffffffff;
                            uVar16 = local_648;
                          }
                          goto switchD_006ebb4e_default;
                        }
                      }
                    }
code_r0x006ee850:
                    if ((-1 < iVar35) && (iVar35 = iVar35 + -1, iVar35 < 1)) {
                      p_Var43 = local_658;
                      uVar37 = (uint)local_618;
                      local_6c0 = p_Var52;
                      goto LAB_006ee99f;
                    }
LAB_006ee862:
                    pbVar55 = (byte *)param_1->_IO_read_ptr;
                    if (pbVar55 < param_1->_IO_read_end) {
                      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                      uVar38 = (ulong)*pbVar55;
                    }
                    else {
                      *(undefined8 *)(puVar44 + -8) = 0x6ee968;
                      uVar17 = __uflow(param_1);
                      uVar38 = (ulong)uVar17;
                      if (uVar17 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        p_Var43 = local_658;
                        uVar37 = (uint)local_618;
                        local_6c0 = p_Var52;
                        goto LAB_006ee99f;
                      }
                    }
                    if (*(char *)(local_468[0]._0_8_ + (long)(int)uVar38) == (byte)local_650)
                    goto LAB_006f0210;
                    goto LAB_006ee8a1;
                  }
                  p_Var43 = (_IO_FILE *)0x0;
                  goto LAB_006f022a;
                }
                *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006efd6e:
                uVar16 = 0xffffffff;
                p_Var46 = local_618;
                if (local_648 != 0) {
                  uVar16 = local_648;
                }
              }
            }
            goto switchD_006ebb4e_default;
          case 99:
switchD_006ec484_caseD_63:
            local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000001);
            p_Var19 = p_Var52;
            if ((local_644 & 1) != 0) goto switchD_006ec484_caseD_43;
            iVar35 = 1;
            if ((uint)local_640 != -1) {
              iVar35 = (uint)local_640;
            }
            local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
            uVar37 = local_644 & 8;
            if (uVar37 == 0) {
              uVar16 = local_648;
              p_Var46 = local_618;
              if ((local_644 & 0x2100) == 0) {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar38 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar38 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  local_6c8 = (_IO_FILE *)*plVar22;
                }
                else {
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar35 = local_694 + -1;
                  uVar34 = local_598._80_4_;
                  p_Var43 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar57 = false;
LAB_006f1a9c:
                    if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f1aa1;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
                    }
                    p_Var43 = local_638;
                    if (bVar57) {
LAB_006f1ad1:
                      uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                      uVar34 = local_598._80_4_;
                      p_Var43 = stack0xfffffffffffffab8;
                    }
                  }
                  stack0xfffffffffffffab8 = p_Var43;
                  if (uVar34 < 0x30) {
                    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar34 + 8);
                    plVar22 = (long *)((long)&local_538->_next + (ulong)uVar34);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  local_6c8 = (_IO_FILE *)*plVar22;
                }
                if (local_6c8 == (_IO_FILE *)0x0) goto switchD_006ebb4e_default;
              }
              else {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar38 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar38 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                else {
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar56 = local_694 + -1;
                  uVar34 = local_598._80_4_;
                  p_Var43 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar56 != 0) {
                    bVar57 = false;
LAB_006f1b64:
                    if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f1b69;
                    plStack_540 = plStack_630 + 1;
                    if (iVar56 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar56 - 2) + 3);
                    }
                    p_Var43 = local_638;
                    if (bVar57) {
LAB_006f1b92:
                      uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                      uVar34 = local_598._80_4_;
                      p_Var43 = stack0xfffffffffffffab8;
                    }
                  }
                  stack0xfffffffffffffab8 = p_Var43;
                  if (uVar34 < 0x30) {
                    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar34 + 8);
                    plVar22 = (long *)((long)&local_538->_next + (ulong)uVar34);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  plVar22 = (long *)*plVar22;
                }
                local_678 = plVar22;
                if (plVar22 == (long *)0x0) goto switchD_006ebb4e_default;
                p_Var46 = (_IO_FILE *)0x400;
                if (iVar35 < 0x401) {
                  p_Var46 = (_IO_FILE *)(long)iVar35;
                }
                local_6a0 = p_Var46;
                *(undefined8 *)(puVar44 + -8) = 0x6ecce5;
                local_6c8 = (_IO_FILE *)malloc((size_t)p_Var46);
                *plVar22 = (long)local_6c8;
                if (local_6c8 == (_IO_FILE *)0x0) {
                  uVar16 = 0xffffffff;
                  p_Var46 = local_618;
                  if ((local_644 & 0x2000) == 0) {
                    uVar16 = local_648;
                  }
                  goto switchD_006ebb4e_default;
                }
                if (local_6d8 == (ulong *)0x0) {
LAB_006f0258:
                  puVar45 = puVar44 + -0x120;
                  *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
                  uVar38 = 1;
                  puVar29 = (ulong *)((ulong)(puVar44 + -0x111) & 0xfffffffffffffff0);
                  *puVar29 = 0;
                  puVar29[1] = (ulong)local_6d8;
                  uVar53 = 0;
                  local_6d8 = puVar29;
                }
                else {
                  uVar53 = *local_6d8;
                  uVar38 = uVar53 + 1;
                  puVar45 = puVar44;
                  if (uVar53 == 0x20) goto LAB_006f0258;
                }
                *local_6d8 = uVar38;
                local_6d8[uVar53 + 2] = (ulong)local_678;
                puVar44 = puVar45;
              }
            }
            if (uVar17 != 0xffffffff) {
              pbVar55 = (byte *)param_1->_IO_read_ptr;
              if (pbVar55 < param_1->_IO_read_end) {
                param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                uVar38 = (ulong)*pbVar55;
              }
              else {
                *(undefined8 *)(puVar44 + -8) = 0x6efa28;
                uVar17 = __uflow(param_1);
                uVar38 = (ulong)uVar17;
                if (uVar17 == 0xffffffff) goto LAB_006efa37;
              }
              p_Var19 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
              if (uVar37 != 0) {
                p_Var43 = local_620;
                if (1 < (int)(uint)local_640) {
                  uVar17 = (uint)local_640 - 2;
                  do {
                    pbVar55 = (byte *)param_1->_IO_read_ptr;
                    if (pbVar55 < param_1->_IO_read_end) {
                      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                      uVar38 = (ulong)*pbVar55;
                    }
                    else {
                      *(undefined8 *)(puVar44 + -8) = 0x6ef160;
                      uVar16 = __uflow(param_1);
                      uVar38 = (ulong)uVar16;
                      if (uVar16 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        p_Var43 = local_620;
                        break;
                      }
                    }
                    p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                    p_Var43 = local_620;
                  } while (p_Var19 != (_IO_FILE *)((long)&p_Var52->_flags + (ulong)uVar17 + 2));
                }
                goto LAB_006eb6fe;
              }
              if ((local_644 & 0x2100) != 0) {
                local_638 = (_IO_FILE *)(long)(int)(uint)local_640;
                local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,(uint)local_640 + -1);
                p_Var52 = local_6c8;
                p_Var46 = local_6a0;
                local_628 = p_Var19;
                do {
                  pvVar26 = (void *)*local_678;
                  p_Var43 = p_Var46;
                  if (p_Var52 == (_IO_FILE *)((long)pvVar26 + (long)p_Var46)) {
                    p_Var52 = (_IO_FILE *)(long)(int)(uint)local_618;
                    if ((long)p_Var46 <
                        (long)((long)local_628 + ((long)&local_638->_flags - (long)p_Var19))) {
                      p_Var52 = p_Var46;
                    }
                    p_Var52 = (_IO_FILE *)((long)&p_Var46->_flags + (long)&p_Var52->_flags);
                    local_640 = p_Var52;
                    *(undefined8 *)(puVar44 + -8) = 0x6efb84;
                    pvVar26 = realloc(pvVar26,(size_t)p_Var52);
                    if (pvVar26 == (void *)0x0) {
                      p_Var43 = (_IO_FILE *)((long)&p_Var46->_flags + 1);
                      pvVar26 = (void *)*local_678;
                      *(undefined8 *)(puVar44 + -8) = 0x6f1e8e;
                      pvVar26 = realloc(pvVar26,(size_t)p_Var43);
                      if (pvVar26 == (void *)0x0) {
                        local_648 = 0xffffffff;
                        uVar16 = local_648;
                        p_Var46 = local_618;
                        goto switchD_006ebb4e_default;
                      }
                      *local_678 = (long)pvVar26;
                      p_Var52 = (_IO_FILE *)((long)pvVar26 + (long)p_Var46);
                    }
                    else {
                      *local_678 = (long)pvVar26;
                      p_Var52 = (_IO_FILE *)((long)pvVar26 + (long)p_Var46);
                      p_Var43 = local_640;
                    }
                  }
                  *(byte *)&p_Var52->_flags = (byte)uVar38;
                  p_Var52 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
                  if ((int)(uint)local_618 < 1) goto LAB_006efb1c;
                  pbVar55 = (byte *)param_1->_IO_read_ptr;
                  if (pbVar55 < param_1->_IO_read_end) {
                    param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                    uVar38 = (ulong)*pbVar55;
                  }
                  else {
                    *(undefined8 *)(puVar44 + -8) = 0x6efaf6;
                    uVar17 = __uflow(param_1);
                    uVar38 = (ulong)uVar17;
                    if (uVar17 == 0xffffffff) goto code_r0x006efafe;
                  }
                  local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,(uint)local_618 + -1);
                  p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                  p_Var46 = p_Var43;
                } while( true );
              }
              lVar36 = (long)p_Var19 - (long)local_6c8;
              local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,(uint)local_640 + (int)local_6c8);
              p_Var46 = local_6c8;
              do {
                while( true ) {
                  p_Var19 = (_IO_FILE *)((long)p_Var46 + lVar36);
                  p_Var52 = (_IO_FILE *)((long)&p_Var46->_flags + 1);
                  *(byte *)&p_Var46->_flags = (byte)uVar38;
                  if ((int)((uint)local_618 - (int)p_Var52) < 1) goto LAB_006ecddf;
                  pbVar55 = (byte *)param_1->_IO_read_ptr;
                  p_Var46 = p_Var52;
                  if (param_1->_IO_read_end <= pbVar55) break;
                  param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                  uVar38 = (ulong)*pbVar55;
                }
                *(undefined8 *)(puVar44 + -8) = 0x6ecdc6;
                uVar17 = __uflow(param_1);
                uVar38 = (ulong)uVar17;
              } while (uVar17 != 0xffffffff);
              local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
              goto LAB_006ecddf;
            }
            *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006efa37:
            uVar16 = 0xffffffff;
            p_Var46 = local_618;
            if (local_648 != 0) {
              uVar16 = local_648;
            }
            goto switchD_006ebb4e_default;
          case 100:
switchD_006ebb4e_caseD_64:
            local_618 = p_Var46;
            local_644 = local_644 | 0x40;
            local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,10);
            break;
          case 0x69:
switchD_006ebb4e_caseD_69:
            local_618 = p_Var46;
            local_644 = local_644 | 0x40;
            local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
            break;
          case 0x6e:
            p_Var19 = local_628;
switchD_006ebe25_caseD_2b:
            local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
            if ((local_644 & 8) == 0) {
              p_Var43 = local_620;
              if ((local_644 & 1) == 0) {
                if ((local_644 & 4) == 0) {
                  local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000200)
                  ;
                  if ((local_644 & 0x200) == 0) {
                    if (local_694 == 0) {
                      if ((uint)local_5b0 < 0x30) {
                        uVar53 = local_5b0 & 0xffffffff;
                        local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                        plVar22 = (long *)(uVar53 + local_5a0);
                      }
                      else {
                        plVar22 = plStack_5a8;
                        plStack_5a8 = plStack_5a8 + 1;
                      }
                      puVar30 = (undefined4 *)*plVar22;
                    }
                    else {
                      local_638 = (_IO_FILE *)*local_6d0;
                      plStack_630 = (long *)local_6d0[1];
                      local_538 = (_IO_marker *)local_6d0[2];
                      local_598._80_4_ = SUB84(local_638,0);
                      iVar35 = local_694 + -1;
                      uVar17 = local_598._80_4_;
                      p_Var52 = local_638;
                      plStack_540 = plStack_630;
                      if (iVar35 != 0) {
                        bVar57 = false;
LAB_006f163d:
                        if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f1642;
                        plStack_540 = plStack_630 + 1;
                        if (iVar35 != 1) {
                          plVar22 = plStack_630 + 2;
                          do {
                            plStack_540 = plVar22;
                            plVar22 = plStack_540 + 1;
                          } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
                        }
                        p_Var52 = local_638;
                        if (bVar57) {
LAB_006f1671:
                          uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                          uVar17 = local_598._80_4_;
                          p_Var52 = stack0xfffffffffffffab8;
                        }
                      }
                      stack0xfffffffffffffab8 = p_Var52;
                      if (uVar17 < 0x30) {
                        stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
                        plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
                      }
                      else {
                        plVar22 = plStack_540;
                        plStack_540 = plStack_540 + 1;
                      }
                      puVar30 = (undefined4 *)*plVar22;
                    }
                    *puVar30 = (int)p_Var19;
                  }
                  else {
                    if (local_694 == 0) {
                      if ((uint)local_5b0 < 0x30) {
                        uVar53 = local_5b0 & 0xffffffff;
                        local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                        plVar22 = (long *)(uVar53 + local_5a0);
                      }
                      else {
                        plVar22 = plStack_5a8;
                        plStack_5a8 = plStack_5a8 + 1;
                      }
                      puVar45 = (undefined1 *)*plVar22;
                    }
                    else {
                      local_618 = (_IO_FILE *)*local_6d0;
                      plStack_610 = (long *)local_6d0[1];
                      local_538 = (_IO_marker *)local_6d0[2];
                      local_598._80_4_ = SUB84(local_618,0);
                      iVar35 = local_694 + -1;
                      uVar17 = local_598._80_4_;
                      p_Var52 = local_618;
                      plStack_540 = plStack_610;
                      if (iVar35 != 0) {
                        bVar57 = false;
LAB_006f2e06:
                        if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f2e0b;
                        plStack_540 = plStack_610 + 1;
                        if (iVar35 != 1) {
                          plVar22 = plStack_610 + 2;
                          do {
                            plStack_540 = plVar22;
                            plVar22 = plStack_540 + 1;
                          } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
                        }
                        p_Var52 = local_618;
                        if (bVar57) {
LAB_006f2e39:
                          uStack_544 = (undefined4)((ulong)local_618 >> 0x20);
                          uVar17 = local_598._80_4_;
                          p_Var52 = stack0xfffffffffffffab8;
                        }
                      }
                      stack0xfffffffffffffab8 = p_Var52;
                      if (uVar17 < 0x30) {
                        stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
                        plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
                      }
                      else {
                        plVar22 = plStack_540;
                        plStack_540 = plStack_540 + 1;
                      }
                      puVar45 = (undefined1 *)*plVar22;
                    }
                    *puVar45 = (char)p_Var19;
                    local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
                  }
                }
                else {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar53 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar53 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    puVar27 = (undefined2 *)*plVar22;
                  }
                  else {
                    local_618 = (_IO_FILE *)*local_6d0;
                    plStack_610 = (long *)local_6d0[1];
                    local_538 = (_IO_marker *)local_6d0[2];
                    local_598._80_4_ = SUB84(local_618,0);
                    iVar35 = local_694 + -1;
                    uVar17 = local_598._80_4_;
                    p_Var52 = local_618;
                    plStack_540 = plStack_610;
                    if (iVar35 != 0) {
                      bVar57 = false;
LAB_006f19b9:
                      if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f19be;
                      plStack_540 = plStack_610 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_610 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
                      }
                      p_Var52 = local_618;
                      if (bVar57) {
LAB_006f19e7:
                        uStack_544 = (undefined4)((ulong)local_618 >> 0x20);
                        uVar17 = local_598._80_4_;
                        p_Var52 = stack0xfffffffffffffab8;
                      }
                    }
                    stack0xfffffffffffffab8 = p_Var52;
                    if (uVar17 < 0x30) {
                      stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
                      plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    puVar27 = (undefined2 *)*plVar22;
                  }
                  *puVar27 = (short)p_Var19;
                  local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
                }
              }
              else {
                if (local_694 == 0) {
                  if ((uint)local_5b0 < 0x30) {
                    uVar53 = local_5b0 & 0xffffffff;
                    local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                    plVar22 = (long *)(uVar53 + local_5a0);
                  }
                  else {
                    plVar22 = plStack_5a8;
                    plStack_5a8 = plStack_5a8 + 1;
                  }
                  puVar28 = (undefined8 *)*plVar22;
                }
                else {
                  local_638 = (_IO_FILE *)*local_6d0;
                  plStack_630 = (long *)local_6d0[1];
                  local_538 = (_IO_marker *)local_6d0[2];
                  local_598._80_4_ = SUB84(local_638,0);
                  iVar35 = local_694 + -1;
                  uVar17 = local_598._80_4_;
                  p_Var52 = local_638;
                  plStack_540 = plStack_630;
                  if (iVar35 != 0) {
                    bVar57 = false;
LAB_006f07bf:
                    if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f07c4;
                    plStack_540 = plStack_630 + 1;
                    if (iVar35 != 1) {
                      plVar22 = plStack_630 + 2;
                      do {
                        plStack_540 = plVar22;
                        plVar22 = plStack_540 + 1;
                      } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
                    }
                    p_Var52 = local_638;
                    if (!bVar57) goto LAB_006f07da;
LAB_006f07d2:
                    uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                    uVar17 = local_598._80_4_;
                    p_Var52 = stack0xfffffffffffffab8;
                  }
LAB_006f07da:
                  stack0xfffffffffffffab8 = p_Var52;
                  if (uVar17 < 0x30) {
                    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
                    plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
                  }
                  else {
                    plVar22 = plStack_540;
                    plStack_540 = plStack_540 + 1;
                  }
                  puVar28 = (undefined8 *)*plVar22;
                }
                *puVar28 = p_Var19;
              }
              goto LAB_006eb6fe;
            }
            goto LAB_006ed3d8;
          case 0x6f:
            local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,8);
            goto LAB_006ec8c6;
          case 0x70:
            local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,0x10);
            local_644 = local_644 & 0xfffffff9 | 0x1001;
            break;
          case 0x73:
            p_Var43 = local_618;
            p_Var19 = local_628;
LAB_006ede63:
            local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000001);
            p_Var52 = p_Var19;
            if ((local_644 & 1) == 0) {
              uVar37 = local_644 & 8;
              if (uVar37 == 0) {
                uVar16 = local_648;
                p_Var46 = local_618;
                if ((local_644 & 0x2100) == 0) {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar38 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar38 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    local_6c8 = (_IO_FILE *)*plVar22;
                  }
                  else {
                    local_638 = (_IO_FILE *)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = (_IO_marker *)local_6d0[2];
                    local_598._80_4_ = SUB84(local_638,0);
                    iVar35 = local_694 + -1;
                    uVar34 = local_598._80_4_;
                    p_Var52 = local_638;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      bVar57 = false;
LAB_006f18db:
                      if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f18e0;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      p_Var52 = local_638;
                      if (bVar57) {
LAB_006f1909:
                        uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                        uVar34 = local_598._80_4_;
                        p_Var52 = stack0xfffffffffffffab8;
                      }
                    }
                    stack0xfffffffffffffab8 = p_Var52;
                    if (uVar34 < 0x30) {
                      stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar34 + 8);
                      plVar22 = (long *)((long)&local_538->_next + (ulong)uVar34);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    local_6c8 = (_IO_FILE *)*plVar22;
                  }
                  if (local_6c8 == (_IO_FILE *)0x0) goto switchD_006ebb4e_default;
                }
                else {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar38 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar38 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  else {
                    unique0x10002081 = (_IO_FILE *)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = (_IO_marker *)local_6d0[2];
                    iVar35 = local_694 + -1;
                    uVar34 = local_598._80_4_;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      bVar57 = false;
                      uVar32 = local_598._80_4_;
LAB_006f0c08:
                      if (uVar32 < 0x30) goto code_r0x006f0c0d;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      if (!bVar57) goto LAB_006f0c23;
LAB_006f0c1b:
                      uStack_544 = (undefined4)((ulong)unique0x10002081 >> 0x20);
                      stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar32);
                      uVar34 = uVar32;
                    }
LAB_006f0c23:
                    if (uVar34 < 0x30) {
                      stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar34 + 8);
                      plVar22 = (long *)((long)&local_538->_next + (ulong)uVar34);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  local_678 = plVar22;
                  local_638 = p_Var43;
                  if (plVar22 == (long *)0x0) goto switchD_006ebb4e_default;
                  *(undefined8 *)(puVar44 + -8) = 0x6edee6;
                  local_6c8 = (_IO_FILE *)malloc(100);
                  p_Var43 = local_638;
                  *plVar22 = (long)local_6c8;
                  if (local_6c8 == (_IO_FILE *)0x0) {
                    uVar16 = 0xffffffff;
                    p_Var46 = local_618;
                    if ((local_644 & 0x2000) == 0) {
                      uVar16 = local_648;
                    }
                    goto switchD_006ebb4e_default;
                  }
                  if (local_6d8 == (ulong *)0x0) {
LAB_006efe2e:
                    puVar45 = puVar44 + -0x120;
                    *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
                    uVar38 = 1;
                    puVar29 = (ulong *)((ulong)(puVar44 + -0x111) & 0xfffffffffffffff0);
                    *puVar29 = 0;
                    puVar29[1] = (ulong)local_6d8;
                    uVar53 = 0;
                    local_6d8 = puVar29;
                  }
                  else {
                    uVar53 = *local_6d8;
                    uVar38 = uVar53 + 1;
                    puVar45 = puVar44;
                    if (uVar53 == 0x20) goto LAB_006efe2e;
                  }
                  local_6a0 = (_IO_FILE *)0x64;
                  *local_6d8 = uVar38;
                  local_6d8[uVar53 + 2] = (ulong)local_678;
                  puVar44 = puVar45;
                }
              }
              if (uVar17 != 0xffffffff) {
                pbVar55 = (byte *)param_1->_IO_read_ptr;
                if (pbVar55 < param_1->_IO_read_end) {
                  param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                  uVar38 = (ulong)*pbVar55;
                }
                else {
                  local_638 = p_Var43;
                  *(undefined8 *)(puVar44 + -8) = 0x6f0162;
                  uVar17 = __uflow(param_1);
                  uVar38 = (ulong)uVar17;
                  p_Var43 = local_638;
                  if (uVar17 == 0xffffffff) goto LAB_006f0178;
                }
                plVar22 = local_660;
                p_Var52 = local_6c8;
                if ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar38 * 2) & 0x20) == 0) {
                  local_628 = (_IO_FILE *)(CONCAT44(local_628._4_4_,local_644) & 0xffffffff00002100)
                  ;
                  iVar35 = (uint)local_640;
                  local_650 = p_Var43;
                  do {
                    p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                    if (uVar37 == 0) {
                      *(byte *)&p_Var52->_flags = (byte)uVar38;
                      p_Var52 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
                      if ((int)local_628 != 0) {
                        pvVar26 = (void *)*local_678;
                        local_638 = local_6a0;
                        if (p_Var52 == (_IO_FILE *)((long)&local_6a0->_flags + (long)pvVar26)) {
                          local_658 = (_IO_FILE *)((ulong)local_658 & 0xffffffff00000000);
                          p_Var52 = (_IO_FILE *)((long)local_6a0 * 2);
                          local_668 = param_1;
                          local_640 = p_Var52;
                          *(undefined8 *)(puVar44 + -8) = 0x6ef1d6;
                          pvVar26 = realloc(pvVar26,(size_t)p_Var52);
                          uVar17 = (uint)local_658;
                          if (pvVar26 == (void *)0x0) {
                            p_Var52 = (_IO_FILE *)((long)&local_6a0->_flags + 1);
                            local_658 = local_668;
                            pvVar26 = (void *)*local_678;
                            local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar17);
                            local_6a0 = p_Var52;
                            *(undefined8 *)(puVar44 + -8) = 0x6f1756;
                            pvVar26 = realloc(pvVar26,(size_t)p_Var52);
                            plVar2 = local_678;
                            param_1 = local_658;
                            if (pvVar26 == (void *)0x0) {
                              p_Var46 = local_618;
                              if ((local_644 & 0x2000) == 0) {
                                local_678 = (long *)0x0;
                                *(byte *)(*plVar2 + -1 + (long)local_638) = 0;
                                uVar16 = local_648 + 1;
                              }
                              else {
                                local_648 = 0xffffffff;
                                uVar16 = local_648;
                              }
                              goto switchD_006ebb4e_default;
                            }
                            *local_678 = (long)pvVar26;
                            p_Var52 = (_IO_FILE *)((long)pvVar26 + (long)local_638);
                            uVar37 = (uint)local_640;
                          }
                          else {
                            *local_678 = (long)pvVar26;
                            p_Var52 = (_IO_FILE *)((long)pvVar26 + (long)local_6a0);
                            param_1 = local_668;
                            local_6a0 = local_640;
                            uVar37 = (uint)local_658;
                          }
                        }
                      }
                    }
                    if ((0 < iVar35) && (iVar35 = iVar35 + -1, iVar35 == 0)) goto LAB_006ee095;
                    pbVar55 = (byte *)param_1->_IO_read_ptr;
                    if (pbVar55 < param_1->_IO_read_end) {
                      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                      uVar38 = (ulong)*pbVar55;
                    }
                    else {
                      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar37);
                      local_638 = param_1;
                      *(undefined8 *)(puVar44 + -8) = 0x6ee05b;
                      uVar17 = __uflow(param_1);
                      uVar38 = (ulong)uVar17;
                      param_1 = local_638;
                      uVar37 = (uint)local_640;
                      if (uVar17 == 0xffffffff) {
                        uVar38 = 0xffffffff;
                        local_608 = CONCAT44(local_608._4_4_,
                                             *(undefined4 *)
                                              ((long)&local_650->_flags + in_FS_OFFSET));
                        goto LAB_006ee095;
                      }
                    }
                  } while ((*(byte *)(plVar22[0xd] + 1 + (long)(int)uVar38 * 2) & 0x20) == 0);
                }
                local_6c8 = p_Var52;
                *(undefined8 *)(puVar44 + -8) = 0x6efe0c;
                _IO_sputbackc(param_1,uVar38 & 0xff);
                p_Var52 = local_6c8;
LAB_006ee095:
                local_6c8 = p_Var52;
                plVar22 = local_678;
                p_Var43 = local_620;
                if (uVar37 == 0) {
                  *(byte *)&local_6c8->_flags = 0;
                  p_Var52 = (_IO_FILE *)((long)&local_6c8->_flags + 1);
                  if ((local_644 & 0x2100) != 0) {
                    pvVar26 = (void *)*local_678;
                    p_Var46 = (_IO_FILE *)((long)p_Var52 - (long)pvVar26);
                    if (p_Var46 != local_6a0) {
                      *(undefined8 *)(puVar44 + -8) = 0x6ee0d6;
                      pvVar26 = realloc(pvVar26,(size_t)p_Var46);
                      if (pvVar26 != (void *)0x0) {
                        *plVar22 = (long)pvVar26;
                      }
                    }
                  }
                  local_648 = local_648 + 1;
                  local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
                  local_678 = (long *)0x0;
                  local_6c8 = p_Var52;
                  p_Var43 = local_620;
                }
                goto LAB_006eb6fe;
              }
              *(int *)((long)&p_Var43->_flags + in_FS_OFFSET) = (int)local_608;
LAB_006f0178:
              uVar16 = 0xffffffff;
              p_Var46 = local_618;
              if (local_648 != 0) {
                uVar16 = local_648;
              }
            }
            else {
switchD_006ec484_caseD_53:
              local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
              if ((local_644 & 8) == 0) {
                uVar16 = local_648;
                p_Var46 = local_618;
                if ((local_644 & 0x2100) == 0) {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar38 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar38 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    local_6c0 = (_IO_FILE *)*plVar22;
                  }
                  else {
                    local_638 = (_IO_FILE *)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = (_IO_marker *)local_6d0[2];
                    local_598._80_4_ = SUB84(local_638,0);
                    iVar35 = local_694 + -1;
                    uVar37 = local_598._80_4_;
                    p_Var43 = local_638;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      bVar57 = false;
LAB_006f1083:
                      if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f1088;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      p_Var43 = local_638;
                      if (!bVar57) goto LAB_006f109e;
LAB_006f1096:
                      uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                      uVar37 = local_598._80_4_;
                      p_Var43 = stack0xfffffffffffffab8;
                    }
LAB_006f109e:
                    stack0xfffffffffffffab8 = p_Var43;
                    if (uVar37 < 0x30) {
                      stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar37 + 8);
                      plVar22 = (long *)((long)&local_538->_next + (ulong)uVar37);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    local_6c0 = (_IO_FILE *)*plVar22;
                  }
                  if (local_6c0 == (_IO_FILE *)0x0) goto switchD_006ebb4e_default;
                }
                else {
                  if (local_694 == 0) {
                    if ((uint)local_5b0 < 0x30) {
                      uVar38 = local_5b0 & 0xffffffff;
                      local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
                      plVar22 = (long *)(uVar38 + local_5a0);
                    }
                    else {
                      plVar22 = plStack_5a8;
                      plStack_5a8 = plStack_5a8 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  else {
                    local_638 = (_IO_FILE *)*local_6d0;
                    plStack_630 = (long *)local_6d0[1];
                    local_538 = (_IO_marker *)local_6d0[2];
                    local_598._80_4_ = SUB84(local_638,0);
                    iVar35 = local_694 + -1;
                    uVar37 = local_598._80_4_;
                    p_Var43 = local_638;
                    plStack_540 = plStack_630;
                    if (iVar35 != 0) {
                      bVar57 = false;
LAB_006ef26a:
                      if ((uint)local_598._80_4_ < 0x30) goto code_r0x006ef26f;
                      plStack_540 = plStack_630 + 1;
                      if (iVar35 != 1) {
                        plVar22 = plStack_630 + 2;
                        do {
                          plStack_540 = plVar22;
                          plVar22 = plStack_540 + 1;
                        } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                      }
                      p_Var43 = local_638;
                      if (!bVar57) goto LAB_006ef285;
LAB_006ef27d:
                      uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
                      uVar37 = local_598._80_4_;
                      p_Var43 = stack0xfffffffffffffab8;
                    }
LAB_006ef285:
                    stack0xfffffffffffffab8 = p_Var43;
                    if (uVar37 < 0x30) {
                      stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar37 + 8);
                      plVar22 = (long *)((long)&local_538->_next + (ulong)uVar37);
                    }
                    else {
                      plVar22 = plStack_540;
                      plStack_540 = plStack_540 + 1;
                    }
                    plVar22 = (long *)*plVar22;
                  }
                  local_678 = plVar22;
                  if (plVar22 == (long *)0x0) goto switchD_006ebb4e_default;
                  *(undefined8 *)(puVar44 + -8) = 0x6ebf77;
                  local_6c0 = (_IO_FILE *)malloc(400);
                  *plVar22 = (long)local_6c0;
                  if (local_6c0 == (_IO_FILE *)0x0) {
                    uVar16 = 0xffffffff;
                    p_Var46 = local_618;
                    if ((local_644 & 0x2000) == 0) {
                      uVar16 = local_648;
                    }
                    goto switchD_006ebb4e_default;
                  }
                  if (local_6d8 == (ulong *)0x0) {
LAB_006ee683:
                    puVar45 = puVar44 + -0x120;
                    *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
                    uVar38 = 1;
                    puVar29 = (ulong *)((ulong)(puVar44 + -0x111) & 0xfffffffffffffff0);
                    *puVar29 = 0;
                    puVar29[1] = (ulong)local_6d8;
                    uVar53 = 0;
                    local_6d8 = puVar29;
                  }
                  else {
                    uVar53 = *local_6d8;
                    uVar38 = uVar53 + 1;
                    puVar45 = puVar44;
                    if (uVar53 == 0x20) goto LAB_006ee683;
                  }
                  local_6a0 = (_IO_FILE *)0x64;
                  *local_6d8 = uVar38;
                  local_6d8[uVar53 + 2] = (ulong)local_678;
                  puVar44 = puVar45;
                }
              }
              if (uVar17 != 0xffffffff) {
                pbVar55 = (byte *)param_1->_IO_read_ptr;
                if (pbVar55 < param_1->_IO_read_end) {
                  param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                  uVar38 = (ulong)*pbVar55;
                }
                else {
                  *(undefined8 *)(puVar44 + -8) = 0x6eebb8;
                  uVar17 = __uflow(param_1);
                  uVar38 = (ulong)uVar17;
                  if (uVar17 == 0xffffffff) goto LAB_006ec862;
                }
                local_638 = (_IO_FILE *)(local_598 + 0x50);
                p_Var19 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
                stack0xfffffffffffffab8 = (_IO_FILE *)0x0;
                if ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar38 * 2) & 0x20) == 0) {
                  local_628 = (_IO_FILE *)(CONCAT44(local_628._4_4_,local_644) & 0xffffffff00002100)
                  ;
                  do {
                    p_Var52 = (_IO_FILE *)0x0;
                    if ((uint)local_618 == 0) {
                      p_Var52 = local_6c0;
                    }
                    while( true ) {
                      p_Var46 = local_638;
                      local_58 = (char)uVar38;
                      *(undefined8 *)(puVar44 + -8) = 0x6ec07f;
                      sVar20 = mbrtowc(&p_Var52->_flags,&stack0xffffffffffffffa8,1,
                                       (mbstate_t *)p_Var46);
                      if (sVar20 != 0xfffffffffffffffe) break;
                      pbVar55 = (byte *)param_1->_IO_read_ptr;
                      if (pbVar55 < param_1->_IO_read_end) {
                        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                        uVar38 = (ulong)*pbVar55;
                      }
                      else {
                        *(undefined8 *)(puVar44 + -8) = 0x6ec09b;
                        uVar17 = __uflow(param_1);
                        uVar38 = (ulong)uVar17;
                        if (uVar17 == 0xffffffff) {
                          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                          uVar16 = local_648;
                          p_Var46 = local_618;
                          goto switchD_006ebb4e_default;
                        }
                      }
                      p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                    }
                    if (sVar20 != 1) {
                      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                      uVar16 = local_648;
                      p_Var46 = local_618;
                      goto switchD_006ebb4e_default;
                    }
                    local_6c0 = (_IO_FILE *)&local_6c0->field_0x4;
                    if (((uint)local_618 == 0) && ((int)local_628 != 0)) {
                      pvVar26 = (void *)*local_678;
                      lVar36 = (long)local_6a0 * 4;
                      if (local_6c0 == (_IO_FILE *)((long)pvVar26 + lVar36)) {
                        sVar20 = (long)local_6a0 * 8;
                        *(undefined8 *)(puVar44 + -8) = 0x6f215b;
                        pvVar26 = realloc(pvVar26,sVar20);
                        if (pvVar26 == (void *)0x0) {
                          local_6a0 = (_IO_FILE *)((long)&local_6a0->_flags + 1);
                          pvVar26 = (void *)*local_678;
                          *(undefined8 *)(puVar44 + -8) = 0x6f21f1;
                          pvVar26 = realloc(pvVar26,lVar36 + 4);
                          plVar22 = local_678;
                          if (pvVar26 == (void *)0x0) {
                            p_Var46 = local_618;
                            if ((local_644 & 0x2000) == 0) {
                              local_678 = (long *)0x0;
                              *(undefined4 *)(*plVar22 + -4 + lVar36) = 0;
                              uVar16 = local_648 + 1;
                            }
                            else {
                              local_648 = 0xffffffff;
                              uVar16 = local_648;
                            }
                            goto switchD_006ebb4e_default;
                          }
                          *local_678 = (long)pvVar26;
                          local_6c0 = (_IO_FILE *)((long)pvVar26 + lVar36);
                        }
                        else {
                          *local_678 = (long)pvVar26;
                          local_6c0 = (_IO_FILE *)((long)pvVar26 + lVar36);
                          local_6a0 = (_IO_FILE *)((long)local_6a0 * 2);
                        }
                      }
                    }
                    if (0 < (int)(uint)local_640) {
                      iVar35 = (uint)local_640 + -1;
                      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                      if (iVar35 == 0) goto LAB_006ee31d;
                    }
                    pbVar55 = (byte *)param_1->_IO_read_ptr;
                    if (pbVar55 < param_1->_IO_read_end) {
                      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                      uVar38 = (ulong)*pbVar55;
                    }
                    else {
                      *(undefined8 *)(puVar44 + -8) = 0x6ef912;
                      uVar17 = __uflow(param_1);
                      uVar38 = (ulong)uVar17;
                      if (uVar17 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        goto LAB_006ee31d;
                      }
                    }
                    p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                  } while ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar38 * 2) & 0x20) == 0);
                }
                p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
                *(undefined8 *)(puVar44 + -8) = 0x6ee31d;
                _IO_sputbackc(param_1,uVar38 & 0xff);
LAB_006ee31d:
                if ((uint)local_618 != 0) goto LAB_006ed3d8;
                goto LAB_006ee32d;
              }
              *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006ec862:
              uVar16 = 0xffffffff;
              p_Var46 = local_618;
              if (local_648 != 0) {
                uVar16 = local_648;
              }
            }
            goto switchD_006ebb4e_default;
          case 0x75:
            local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,10);
            goto LAB_006ec8c6;
          default:
            goto switchD_006ebb4e_default;
          }
          if (uVar17 != 0xffffffff) {
LAB_006ec8c6:
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar53 = (ulong)*pbVar55;
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6edd11;
              uVar17 = __uflow(param_1);
              uVar53 = (ulong)uVar17;
              if (uVar17 == 0xffffffff) goto LAB_006ec834;
            }
            p_Var19 = (_IO_FILE *)((long)&local_628->_flags + 1);
            if (((int)uVar53 - 0x2bU & 0xfffffffd) == 0) {
              uVar25 = local_478._0_8_;
              if (local_478._8_8_ == local_478._0_8_) {
                if ((char *)local_478._8_8_ != (char *)0x0) {
                  lVar36 = local_478._8_8_ - local_468[0]._0_8_;
                  *(undefined8 *)(puVar44 + -8) = 0x6eed96;
                  cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
                  if (cVar13 == '\0') {
                    local_478 = (undefined1  [16])0x0;
                  }
                  else {
                    pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
                    local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr)
                    ;
                    local_478._0_8_ = pcVar41 + 1;
                    *pcVar41 = (char)uVar53;
                  }
                }
              }
              else {
                local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                *(char *)uVar25 = (char)uVar53;
              }
              pbVar55 = (byte *)param_1->_IO_read_ptr;
              local_640 = (_IO_FILE *)
                          CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
              if (pbVar55 < param_1->_IO_read_end) {
                param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                uVar53 = (ulong)*pbVar55;
LAB_006ec948:
                p_Var19 = (_IO_FILE *)((long)&local_628->_flags + 2);
                goto LAB_006ec953;
              }
              *(undefined8 *)(puVar44 + -8) = 0x6ed3ef;
              uVar17 = __uflow(param_1);
              uVar53 = (ulong)uVar17;
              if (uVar17 != 0xffffffff) goto LAB_006ec948;
              bVar57 = false;
              local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006ed40e:
              if ((uint)local_618 != 0) {
LAB_006edc4a:
                if ((uint)local_618 == 10) goto LAB_006ed41c;
LAB_006eca0c:
                uVar17 = (uint)uVar53;
                if (bVar57 == false) {
LAB_006ee72c:
                  pppcVar33 = (char ***)local_478._0_8_;
                }
                else {
LAB_006eca14:
                  uVar53 = (ulong)uVar17;
                  local_658 = (_IO_FILE *)(CONCAT44(local_658._4_4_,local_644) & 0xffffffff00000080)
                  ;
                  local_650 = local_468;
                  iVar35 = (uint)local_640;
                  do {
                    uVar17 = (uint)uVar53;
                    if ((uint)local_618 != 0x10) {
                      if ((uVar17 - 0x30 < 10) && ((int)(uVar17 - 0x2f) <= (int)(uint)local_618))
                      goto LAB_006eca6d;
                      if ((uint)local_618 != 10) {
                        local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                        local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,8);
                        pppcVar33 = (char ***)local_478._0_8_;
                        goto LAB_006ecb0d;
                      }
                      if ((uint)local_658 != 0) {
                        iVar56 = 0x7fffffff;
                        if (0 < iVar35) {
                          iVar56 = iVar35;
                        }
                        pbVar55 = local_688;
                        if (uVar17 == *local_688) {
                          local_638 = (_IO_FILE *)CONCAT44(local_638._4_4_,iVar35);
                          uVar38 = uVar53;
                          do {
                            p_Var52 = local_650;
                            uVar17 = (uint)uVar38;
                            uVar25 = local_478._0_8_;
                            bVar12 = (byte)uVar38;
                            if (local_478._0_8_ == local_478._8_8_) {
                              local_628 = (_IO_FILE *)CONCAT71(local_628._1_7_,bVar12);
                              if ((byte *)local_478._0_8_ != (byte *)0x0) {
                                local_640 = (_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_);
                                *(undefined8 *)(puVar44 + -8) = 0x6ed1d3;
                                cVar13 = __libc_scratch_buffer_grow_preserve(p_Var52);
                                uVar53 = (ulong)local_628 & 0xff;
                                if (cVar13 == '\0') {
                                  local_478 = (undefined1  [16])0x0;
                                  goto LAB_006ed14e;
                                }
                                pbVar54 = (byte *)(local_468[0]._0_8_ + (long)&local_640->_flags);
                                local_478._8_8_ =
                                     (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                                local_478._0_8_ = pbVar54 + 1;
                                *pbVar54 = bVar12;
                                if (pbVar55[1] != 0) goto LAB_006ed15d;
                                goto LAB_006ed226;
                              }
                              if (pbVar55[1] == 0) goto LAB_006ed245;
                            }
                            else {
                              local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                              *(byte *)uVar25 = bVar12;
                              uVar53 = uVar38;
LAB_006ed14e:
                              if (pbVar55[1] == 0) {
LAB_006ed226:
                                pppcVar33 = (char ***)local_478._0_8_;
                                iVar35 = (int)local_638;
                                if ((char ***)local_478._0_8_ == (char ***)0x0) goto LAB_006ed245;
                                goto LAB_006ed2b7;
                              }
                            }
LAB_006ed15d:
                            pbVar55 = pbVar55 + 1;
                            if (iVar56 == 0) {
                              local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(int)local_638);
                              if ((char ***)local_478._0_8_ == (char ***)0x0) goto LAB_006ed245;
                              pppcVar33 = (char ***)local_478._0_8_;
                              if (pbVar55 <= local_688) goto LAB_006ecb16;
                              local_478._0_8_ = local_478._0_8_ - ((long)pbVar55 - (long)local_688);
                              uVar53 = uVar38;
                              goto LAB_006eec29;
                            }
                            pbVar54 = (byte *)param_1->_IO_read_ptr;
                            if (pbVar54 < param_1->_IO_read_end) {
                              param_1->_IO_read_ptr = (char *)(pbVar54 + 1);
                              uVar53 = (ulong)*pbVar54;
                            }
                            else {
                              *(undefined8 *)(puVar44 + -8) = 0x6ed270;
                              uVar17 = __uflow(param_1);
                              uVar53 = (ulong)uVar17;
                              if (uVar17 == 0xffffffff) {
                                local_608 = CONCAT44(local_608._4_4_,
                                                     *(undefined4 *)(in_FS_OFFSET + -0x58));
                                iVar35 = (int)local_638;
                                goto LAB_006ed29f;
                              }
                            }
                            p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                            iVar56 = iVar56 + -1;
                            uVar38 = uVar53;
                          } while ((uint)*pbVar55 == (uint)uVar53);
                          iVar35 = (int)local_638;
                        }
LAB_006ed29f:
                        uVar17 = (uint)uVar53;
                        if ((char ***)local_478._0_8_ != (char ***)0x0) {
                          pppcVar33 = (char ***)local_478._0_8_;
                          if (*pbVar55 == 0) {
LAB_006ed2b7:
                            uVar50 = (undefined1)uVar53;
                            pppcVar24 = (char ***)((long)pppcVar33 + -1);
                            local_478._0_8_ = pppcVar24;
                            if (0 < iVar35) {
                              iVar35 = iVar56;
                            }
                            pppcVar39 = (char ***)local_478._8_8_;
                            if (pppcVar24 == (char ***)local_478._8_8_) goto LAB_006ed2d9;
                            goto LAB_006eca8b;
                          }
                          local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                          uVar38 = uVar53;
                          if (local_688 < pbVar55) {
                            local_478._0_8_ = local_478._0_8_ - ((long)pbVar55 - (long)local_688);
                            if (uVar17 != 0xffffffff) {
LAB_006eec29:
                              p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
                              *(undefined8 *)(puVar44 + -8) = 0x6eec39;
                              _IO_sputbackc(param_1,uVar53 & 0xff);
                            }
                            pbVar54 = pbVar55 + -1;
                            pbVar42 = pbVar54;
                            if (local_688 < pbVar54) {
                              do {
                                bVar12 = *pbVar42;
                                pbVar42 = pbVar42 + -1;
                                *(undefined8 *)(puVar44 + -8) = 0x6eec59;
                                _IO_sputbackc(param_1,bVar12);
                              } while (local_688 != pbVar42);
                              p_Var19 = (_IO_FILE *)
                                        (local_688 + (1 - (long)pbVar55) + (long)&p_Var19->_flags);
                              pbVar54 = pbVar54 + (long)(local_688 + (1 - (long)pbVar55));
                            }
                            uVar53 = (ulong)*pbVar54;
                            pppcVar33 = (char ***)local_478._0_8_;
                            goto LAB_006ecb0d;
                          }
                          goto LAB_006ecb16;
                        }
LAB_006ed245:
                        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
                        local_648 = 0xffffffff;
                        uVar16 = local_648;
                        p_Var46 = local_618;
                        goto switchD_006ebb4e_default;
                      }
                      break;
                    }
                    if ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar17 * 2) & 0x10) == 0) break;
LAB_006eca6d:
                    uVar50 = (undefined1)uVar53;
                    if (local_478._0_8_ == local_478._8_8_) {
                      pppcVar39 = (char ***)local_478._8_8_;
                      if ((char ***)local_478._8_8_ != (char ***)0x0) {
LAB_006ed2d9:
                        p_Var52 = local_650;
                        local_638 = (_IO_FILE *)CONCAT71(local_638._1_7_,uVar50);
                        lVar36 = (long)pppcVar39 - local_468[0]._0_8_;
                        *(undefined8 *)(puVar44 + -8) = 0x6ed2f3;
                        cVar13 = __libc_scratch_buffer_grow_preserve(p_Var52);
                        if (cVar13 == '\0') {
                          local_478 = (undefined1  [16])0x0;
                        }
                        else {
                          pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
                          local_478._8_8_ =
                               (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                          local_478._0_8_ = pcVar41 + 1;
                          *pcVar41 = (byte)local_638;
                        }
                      }
                    }
                    else {
                      pppcVar33 = (char ***)(local_478._0_8_ + 1);
                      pppcVar24 = (char ***)local_478._0_8_;
LAB_006eca8b:
                      local_478._0_8_ = pppcVar33;
                      *(char *)pppcVar24 = (char)uVar53;
                    }
                    iVar35 = iVar35 - (uint)(0 < iVar35);
                    if (uVar17 == 0xffffffff) {
                      *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006ed0d6:
                      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                      uVar53 = 0xffffffff;
                      pppcVar33 = (char ***)local_478._0_8_;
                      goto LAB_006ecb0d;
                    }
                    pbVar55 = (byte *)param_1->_IO_read_ptr;
                    if (pbVar55 < param_1->_IO_read_end) {
                      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                      uVar53 = (ulong)*pbVar55;
                    }
                    else {
                      *(undefined8 *)(puVar44 + -8) = 0x6ed33d;
                      uVar17 = __uflow(param_1);
                      uVar53 = (ulong)uVar17;
                      if (uVar17 == 0xffffffff) {
                        local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                        goto LAB_006ed0d6;
                      }
                    }
                    p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                  } while (iVar35 != 0);
                  local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                  pppcVar33 = (char ***)local_478._0_8_;
                }
                goto LAB_006ecb0d;
              }
LAB_006ed41c:
              local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,10);
              if ((local_644 & 0x400) == 0) goto LAB_006eca0c;
              local_638 = (_IO_FILE *)CONCAT71(local_638._1_7_,bVar57);
              *(undefined8 *)(puVar44 + -8) = 0x6ed448;
              local_6a8 = (_IO_FILE *)wctrans("to_inpunct");
              cVar13 = (byte)local_638;
              iVar35 = *(int *)(local_680 + 0xd8);
              local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,iVar35);
              local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,iVar35 + -1);
              if (local_6a8 != (_IO_FILE *)0x0) {
                local_638 = (_IO_FILE *)0x0;
                local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,iVar35);
                local_658 = (_IO_FILE *)local_598;
                local_668 = (_IO_FILE *)CONCAT44(local_668._4_4_,(int)uVar53);
                local_670 = (wctrans_t)CONCAT71(local_670._1_7_,cVar13);
                local_690 = param_1;
                local_650 = p_Var19;
                do {
                  p_Var52 = local_6a8;
                  pcVar41 = *(char **)(local_680 + 0xe0 + (long)local_638 * 8);
                  *(char **)((long)local_658 + (long)local_638 * 8) = pcVar41;
                  iVar35 = (int)local_638;
                  *(undefined8 *)(puVar44 + -8) = 0x6f0a88;
                  wVar18 = towctrans(iVar35 + 0x30,&p_Var52->_flags);
                  mStack_5b8.__count = 0;
                  mStack_5b8.__value = (_union_27)0x0;
                  *(undefined1 **)(puVar44 + -8) = &LAB_006f0a9c;
                  local_628 = (_IO_FILE *)wcrtomb(&stack0xffffffffffffffa8,wVar18,&mStack_5b8);
                  if (local_628 == (_IO_FILE *)0xffffffffffffffff) {
                    uVar53 = (ulong)local_668 & 0xffffffff;
                    local_6a8 = (_IO_FILE *)0x0;
                    p_Var19 = local_650;
                    param_1 = local_690;
                    cVar13 = (byte)local_670;
                    goto LAB_006ed47b;
                  }
                  iVar35 = 0;
                  sVar20 = 0;
                  pcVar40 = pcVar41;
                  if (0 < (int)(uint)local_618) {
                    do {
                      iVar35 = iVar35 + 1;
                      *(undefined1 **)(puVar44 + -8) = &LAB_006f0acb;
                      sVar20 = strlen(pcVar40);
                      pcVar40 = pcVar40 + sVar20 + 1;
                    } while ((uint)local_618 != iVar35);
                    sVar20 = (long)pcVar40 - (long)pcVar41;
                  }
                  for (puVar45 = puVar44;
                      puVar45 !=
                      puVar44 + -((ulong)(local_628->_shortbuf + (sVar20 - 0x6b)) &
                                 0xfffffffffffff000); puVar45 = puVar45 + -0x1000) {
                    *(undefined8 *)(puVar45 + -8) = *(undefined8 *)(puVar45 + -8);
                  }
                  uVar38 = (ulong)((uint)(local_628->_shortbuf + (sVar20 - 0x6b)) & 0xff0);
                  lVar36 = -uVar38;
                  puVar44 = puVar45 + lVar36;
                  if (uVar38 != 0) {
                    *(undefined8 *)(puVar45 + -8) = *(undefined8 *)(puVar45 + -8);
                  }
                  local_6f8 = (_IO_FILE *)((ulong)(puVar45 + lVar36 + 0xf) & 0xfffffffffffffff0);
                  *(undefined8 *)(puVar45 + lVar36 + -8) = 0x6f0b47;
                  pvVar26 = mempcpy(local_6f8,pcVar41,sVar20);
                  *(undefined8 *)(puVar45 + lVar36 + -8) = 0x6f0b59;
                  puVar31 = (undefined1 *)
                            mempcpy(pvVar26,&stack0xffffffffffffffa8,(size_t)local_628);
                  *puVar31 = 0;
                  *(_IO_FILE **)(local_598 + (long)local_638 * 8 + 0x50) = local_6f8;
                  local_638 = (_IO_FILE *)((long)&local_638->_flags + 1);
                } while (local_638 != (_IO_FILE *)0xa);
                uVar53 = (ulong)local_668 & 0xffffffff;
                puVar44 = puVar45 + lVar36;
                p_Var19 = local_650;
                param_1 = local_690;
                cVar13 = (byte)local_670;
              }
LAB_006ed47b:
              local_690 = (_IO_FILE *)((ulong)local_690 & 0xffffffff00000000);
              local_6f8 = (_IO_FILE *)(CONCAT44(local_6f8._4_4_,local_644) & 0xffffffff00000080);
              local_658 = (_IO_FILE *)local_598;
              uVar38 = uVar53;
              if (cVar13 != '\0') {
LAB_006ed4b0:
                local_638 = (_IO_FILE *)0x0;
                iVar35 = 0x7fffffff;
                if (0 < (int)(uint)local_640) {
                  iVar35 = (uint)local_640;
                }
                local_670 = (wctrans_t)CONCAT44(local_670._4_4_,iVar35);
                local_650 = local_658;
                do {
                  p_Var52 = local_650;
                  local_668 = (_IO_FILE *)CONCAT44(local_668._4_4_,(int)local_638);
                  if (local_6a8 == (_IO_FILE *)0x0) {
                    p_Var46 = *(_IO_FILE **)(local_680 + 0xe0 + (long)local_638 * 8);
                  }
                  else {
                    p_Var46 = *(_IO_FILE **)(local_598 + (long)local_638 * 8 + 0x50);
                  }
                  iVar35 = (int)local_690;
                  *(_IO_FILE **)local_650 = p_Var46;
                  if ((int)local_690 != 0) {
                    local_628 = (_IO_FILE *)CONCAT44(local_628._4_4_,(int)uVar38);
                    iVar56 = 0;
                    local_618 = p_Var19;
                    do {
                      iVar56 = iVar56 + 1;
                      *(undefined8 *)(puVar44 + -8) = 0x6ed554;
                      sVar20 = strlen((char *)p_Var46);
                      p_Var46 = (_IO_FILE *)((long)&p_Var46->_flags + sVar20 + 1);
                      *(_IO_FILE **)p_Var52 = p_Var46;
                    } while (iVar35 != iVar56);
                    uVar38 = (ulong)local_628 & 0xffffffff;
                    p_Var19 = local_618;
                  }
                  bVar12 = (byte)p_Var46->_flags;
                  iVar35 = (int)local_670;
                  if ((uint)bVar12 == (uint)uVar38) {
                    local_628 = p_Var46;
                    do {
                      p_Var52 = (_IO_FILE *)((long)&p_Var46->_flags + 1);
                      if ((byte)p_Var52->_flags == 0) goto LAB_006ed925;
                      if (iVar35 == 0) {
                        p_Var43 = p_Var46;
                        p_Var46 = local_628;
                        if (local_628 < p_Var52) goto LAB_006eda93;
                        goto LAB_006ed633;
                      }
                      pbVar55 = (byte *)param_1->_IO_read_ptr;
                      if (pbVar55 < param_1->_IO_read_end) {
                        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                        uVar38 = (ulong)*pbVar55;
                        p_Var43 = p_Var46;
                      }
                      else {
                        local_618 = p_Var46;
                        *(undefined8 *)(puVar44 + -8) = 0x6ed5f2;
                        uVar17 = __uflow(param_1);
                        uVar38 = (ulong)uVar17;
                        p_Var43 = local_618;
                        if (uVar17 == 0xffffffff) {
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          break;
                        }
                      }
                      p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                      iVar35 = iVar35 + -1;
                      p_Var46 = p_Var52;
                    } while ((uint)(byte)p_Var52->_flags == (uint)uVar38);
                    if ((byte)p_Var52->_flags == 0) goto LAB_006ed925;
                    p_Var46 = local_628;
                    if (local_628 < p_Var52) {
                      if ((int)uVar38 != -1) {
LAB_006eda93:
                        p_Var46 = local_628;
                        p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
                        local_618 = p_Var43;
                        *(undefined8 *)(puVar44 + -8) = 0x6edaaa;
                        _IO_sputbackc(param_1,uVar38 & 0xff);
                        p_Var43 = local_618;
                      }
                      p_Var52 = p_Var43;
                      if (p_Var46 < p_Var43) {
                        do {
                          iVar35 = p_Var52->_flags;
                          p_Var21 = p_Var52 + -1;
                          *(undefined8 *)(puVar44 + -8) = 0x6edad1;
                          _IO_sputbackc(param_1,(byte)iVar35);
                          p_Var52 = (_IO_FILE *)(p_Var21->_unused2 + 0x13);
                        } while ((_IO_FILE *)(p_Var21->_unused2 + 0x13) != p_Var46);
                        p_Var19 = (_IO_FILE *)((long)p_Var19 + ((long)p_Var46 - (long)p_Var43));
                        p_Var43 = p_Var46;
                      }
                      uVar38 = (ulong)(byte)p_Var43->_flags;
                    }
                  }
                  else if (bVar12 == 0) goto LAB_006ed925;
LAB_006ed633:
                  *(undefined8 *)(puVar44 + -8) = 0x6ed63b;
                  sVar20 = strlen((char *)p_Var46);
                  local_638 = (_IO_FILE *)((long)&local_638->_flags + 1);
                  *(byte **)local_650 = (byte *)((long)&p_Var46->_flags + sVar20 + 1);
                  local_650 = (_IO_FILE *)&local_650->_IO_read_ptr;
                } while (local_638 != (_IO_FILE *)0xa);
                local_650._4_4_ = (undefined4)((ulong)local_650 >> 0x20);
                local_650 = (_IO_FILE *)CONCAT44(local_650._4_4_,(int)local_690 + 1);
                if ((int)local_690 + 1 <= (int)local_6f0) {
                  do {
                    local_628 = (_IO_FILE *)0x0;
                    do {
                      local_638 = *(_IO_FILE **)(&local_658->_flags + (long)local_628 * 2);
                      local_668 = (_IO_FILE *)CONCAT44(local_668._4_4_,(int)local_628);
                      bVar12 = (byte)local_638->_flags;
                      p_Var52 = local_638;
                      iVar35 = (int)local_670;
                      if ((uint)bVar12 == (uint)uVar38) {
                        do {
                          p_Var46 = p_Var52;
                          p_Var52 = (_IO_FILE *)((long)&p_Var46->_flags + 1);
                          if ((byte)p_Var52->_flags == 0) goto LAB_006ed919;
                          if (iVar35 == 0) {
                            if (local_638 < p_Var52) goto LAB_006ed9f3;
                            goto LAB_006ed77d;
                          }
                          pbVar55 = (byte *)param_1->_IO_read_ptr;
                          if (pbVar55 < param_1->_IO_read_end) {
                            param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                            uVar38 = (ulong)*pbVar55;
                          }
                          else {
                            local_618 = p_Var46;
                            *(undefined8 *)(puVar44 + -8) = 0x6ed742;
                            uVar17 = __uflow(param_1);
                            uVar38 = (ulong)uVar17;
                            p_Var46 = local_618;
                            if (uVar17 == 0xffffffff) {
                              local_608 = CONCAT44(local_608._4_4_,
                                                   *(undefined4 *)(in_FS_OFFSET + -0x58));
                              break;
                            }
                          }
                          p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                          iVar35 = iVar35 + -1;
                        } while ((uint)(byte)p_Var52->_flags == (uint)uVar38);
                        if ((byte)p_Var52->_flags == 0) {
LAB_006ed919:
                          local_690 = (_IO_FILE *)CONCAT44(local_690._4_4_,(int)local_650);
                          goto LAB_006ed925;
                        }
                        if (local_638 < p_Var52) {
                          if ((int)uVar38 != -1) {
LAB_006ed9f3:
                            p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
                            *(undefined8 *)(puVar44 + -8) = 0x6eda03;
                            _IO_sputbackc(param_1,uVar38 & 0xff);
                          }
                          p_Var52 = local_638;
                          p_Var43 = p_Var46;
                          if (local_638 < p_Var46) {
                            do {
                              iVar35 = p_Var43->_flags;
                              p_Var21 = p_Var43 + -1;
                              *(undefined8 *)(puVar44 + -8) = 0x6eda28;
                              _IO_sputbackc(param_1,(byte)iVar35);
                              p_Var43 = (_IO_FILE *)(p_Var21->_unused2 + 0x13);
                            } while (p_Var52 != (_IO_FILE *)(p_Var21->_unused2 + 0x13));
                            p_Var19 = (_IO_FILE *)
                                      ((long)p_Var19 + ((long)local_638 - (long)p_Var46));
                            p_Var46 = local_638;
                          }
                          uVar38 = (ulong)(byte)p_Var46->_flags;
                        }
                      }
                      else if (bVar12 == 0) goto LAB_006ed919;
LAB_006ed77d:
                      p_Var52 = local_638;
                      *(undefined8 *)(puVar44 + -8) = 0x6ed78c;
                      sVar20 = strlen((char *)p_Var52);
                      *(byte **)(&local_658->_flags + (long)local_628 * 2) =
                           (byte *)((long)&p_Var52->_flags + sVar20 + 1);
                      local_628 = (_IO_FILE *)((long)&local_628->_flags + 1);
                    } while (local_628 != (_IO_FILE *)0xa);
                    iVar35 = (int)local_650 + 1;
                    local_650 = (_IO_FILE *)CONCAT44(local_650._4_4_,iVar35);
                  } while (iVar35 <= (int)local_6f0);
                }
                if ((int)local_6f8 != 0) {
                  uVar49 = 0x7fffffff;
                  if (0 < (int)(uint)local_640) {
                    uVar49 = (ulong)local_640 & 0xffffffff;
                  }
                  uVar17 = (uint)uVar49;
                  pbVar55 = local_688;
                  if ((uint)*local_688 == (uint)uVar38) {
                    local_638 = local_468;
                    uVar53 = uVar38;
                    do {
                      p_Var52 = local_638;
                      iVar56 = (int)uVar53;
                      uVar25 = local_478._0_8_;
                      bVar12 = (byte)uVar53;
                      uVar17 = (uint)uVar49;
                      if (local_478._8_8_ == local_478._0_8_) {
                        local_628 = (_IO_FILE *)CONCAT71(local_628._1_7_,bVar12);
                        if ((byte *)local_478._8_8_ != (byte *)0x0) {
                          local_618 = (_IO_FILE *)(local_478._8_8_ + -local_468[0]._0_8_);
                          *(undefined8 *)(puVar44 + -8) = 0x6ed8c5;
                          cVar13 = __libc_scratch_buffer_grow_preserve(p_Var52);
                          uVar38 = (ulong)local_628 & 0xff;
                          if (cVar13 == '\0') {
                            local_478 = (undefined1  [16])0x0;
                          }
                          else {
                            pbVar54 = (byte *)(local_468[0]._0_8_ + (long)&local_618->_flags);
                            local_478._8_8_ =
                                 (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                            local_478._0_8_ = pbVar54 + 1;
                            *pbVar54 = bVar12;
                          }
                          goto LAB_006ed83e;
                        }
                        if (pbVar55[1] == 0) goto LAB_006eeccb;
                      }
                      else {
                        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                        *(byte *)uVar25 = bVar12;
                        uVar38 = uVar53;
LAB_006ed83e:
                        if (pbVar55[1] == 0) {
                          pppcVar33 = (char ***)local_478._0_8_;
                          if ((char ***)local_478._0_8_ != (char ***)0x0) goto LAB_006edb6b;
                          goto LAB_006eeccb;
                        }
                      }
                      pbVar55 = pbVar55 + 1;
                      if (uVar17 == 0) {
                        if ((char ***)local_478._0_8_ == (char ***)0x0) goto LAB_006eeccb;
                        if (pbVar55 <= local_688) goto LAB_006ed9cb;
                        local_478._0_8_ = local_478._0_8_ - ((long)pbVar55 - (long)local_688);
                        goto LAB_006f1d89;
                      }
                      pbVar54 = (byte *)param_1->_IO_read_ptr;
                      if (pbVar54 < param_1->_IO_read_end) {
                        param_1->_IO_read_ptr = (char *)(pbVar54 + 1);
                        uVar38 = (ulong)*pbVar54;
                      }
                      else {
                        *(undefined8 *)(puVar44 + -8) = 0x6edb2c;
                        uVar16 = __uflow(param_1);
                        uVar38 = (ulong)uVar16;
                        if (uVar16 == 0xffffffff) {
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          break;
                        }
                      }
                      p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                      uVar17 = uVar17 - 1;
                      uVar49 = (ulong)uVar17;
                      uVar53 = uVar38;
                    } while ((uint)*pbVar55 == (uint)uVar38);
                  }
                  iVar56 = (int)uVar38;
                  if ((char ***)local_478._0_8_ != (char ***)0x0) {
                    pppcVar33 = (char ***)local_478._0_8_;
                    if (*pbVar55 == 0) {
LAB_006edb6b:
                      cVar13 = (char)uVar38;
                      if ((int)(uint)local_640 < 1) {
                        uVar17 = (uint)local_640;
                      }
                      local_478._0_8_ = (long)pppcVar33 + -1;
                      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,uVar17);
                      pcVar41 = (char *)local_478._0_8_;
                      pcVar40 = (char *)local_478._8_8_;
                      if (local_478._0_8_ != local_478._8_8_) goto LAB_006ed96d;
                      goto LAB_006edb99;
                    }
                    uVar53 = uVar38;
                    if (local_688 < pbVar55) {
                      local_478._0_8_ = local_478._0_8_ - ((long)pbVar55 - (long)local_688);
                      if (iVar56 != -1) {
LAB_006f1d89:
                        p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
                        *(undefined8 *)(puVar44 + -8) = 0x6f1d99;
                        _IO_sputbackc(param_1,uVar53 & 0xff);
                      }
                      pbVar54 = pbVar55 + -1;
                      pbVar42 = pbVar54;
                      if (local_688 < pbVar54) {
                        do {
                          bVar12 = *pbVar42;
                          pbVar42 = pbVar42 + -1;
                          *(undefined8 *)(puVar44 + -8) = 0x6f1cc0;
                          _IO_sputbackc(param_1,bVar12);
                        } while (local_688 != pbVar42);
                        p_Var19 = (_IO_FILE *)
                                  (local_688 + (1 - (long)pbVar55) + (long)&p_Var19->_flags);
                        pbVar54 = pbVar54 + (long)(local_688 + (1 - (long)pbVar55));
                      }
                      uVar53 = (ulong)*pbVar54;
                    }
                    goto LAB_006ed9cb;
                  }
LAB_006eeccb:
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
                  local_648 = 0xffffffff;
                  uVar16 = local_648;
                  p_Var46 = local_618;
                  goto switchD_006ebb4e_default;
                }
                goto LAB_006ed9c1;
              }
              goto LAB_006ed9cb;
            }
LAB_006ec953:
            bVar57 = (uint)local_640 != 0;
            if (((int)uVar53 != 0x30) || (!bVar57)) goto LAB_006ed40e;
            local_640 = (_IO_FILE *)
                        CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
            uVar25 = local_478._0_8_;
            if (local_478._8_8_ == local_478._0_8_) {
              if ((undefined1 *)local_478._8_8_ != (undefined1 *)0x0) {
                lVar36 = local_478._8_8_ - local_468[0]._0_8_;
                *(undefined8 *)(puVar44 + -8) = 0x6ef0df;
                cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
                if (cVar13 == '\0') {
                  local_478 = (undefined1  [16])0x0;
                }
                else {
                  pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
                  local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                  local_478._0_8_ = pcVar41 + 1;
                  *pcVar41 = '0';
                }
              }
            }
            else {
              local_478._0_8_ = (undefined1 *)(local_478._0_8_ + 1);
              *(undefined1 *)uVar25 = 0x30;
            }
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar53 = (ulong)*pbVar55;
LAB_006ec9c0:
              p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6ee10f;
              uVar17 = __uflow(param_1);
              uVar53 = (ulong)uVar17;
              if (uVar17 != 0xffffffff) goto LAB_006ec9c0;
              local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
            }
            if ((uint)local_640 == 0) {
              if ((uint)local_618 != 0) {
                bVar57 = false;
                goto LAB_006edc4a;
              }
              local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,8);
              goto LAB_006ee72c;
            }
            iVar35 = (int)uVar53;
            if (*(int *)(local_660[0xe] + (uVar53 & 0xff) * 4) != 0x78) {
              bVar57 = iVar35 != -1;
              if ((uint)local_618 != 0) goto LAB_006edc4a;
              local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,8);
              goto LAB_006eca0c;
            }
            bVar57 = iVar35 != -1;
            if (((ulong)local_618 & 10) != 0) goto LAB_006edc4a;
            local_640 = (_IO_FILE *)
                        CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
            if (iVar35 != -1) {
              pbVar55 = (byte *)param_1->_IO_read_ptr;
              if (pbVar55 < param_1->_IO_read_end) {
                param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                uVar53 = (ulong)*pbVar55;
              }
              else {
                *(undefined8 *)(puVar44 + -8) = 0x6f0e2d;
                uVar17 = __uflow(param_1);
                uVar53 = (ulong)uVar17;
                if (uVar17 == 0xffffffff) {
                  local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,0x10);
                  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                  pppcVar33 = (char ***)local_478._0_8_;
                  goto LAB_006ecb0d;
                }
              }
              uVar17 = (uint)uVar53;
              p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
              local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,0x10);
              if ((uint)local_640 == 0) goto LAB_006ee72c;
              goto LAB_006eca14;
            }
            *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
            local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,0x10);
            pppcVar33 = (char ***)local_478._0_8_;
            goto LAB_006ecb0d;
          }
LAB_006ec82a:
          *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006ec834:
          uVar16 = 0xffffffff;
          p_Var46 = local_618;
          if (local_648 != 0) {
            uVar16 = local_648;
          }
          goto switchD_006ebb4e_default;
        }
        if ((*(byte *)(plVar22[0xd] + 1 + (ulong)bVar12 * 2) & 0x20) == 0) {
          if (uVar17 == 0xffffffff) {
            *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006ebc93:
            uVar16 = 0xffffffff;
            p_Var46 = local_618;
            if (local_648 != 0) {
              uVar16 = local_648;
            }
          }
          else {
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar38 = (ulong)*pbVar55;
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6ebdd0;
              uVar17 = __uflow(param_1);
              uVar38 = (ulong)uVar17;
              if (uVar17 == 0xffffffff) goto LAB_006ebc93;
            }
            p_Var19 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
            if ((uint)local_618 != 0) {
              lVar36 = local_660[0xd];
              bVar14 = *(byte *)(lVar36 + 1 + (long)(int)uVar38 * 2);
              while ((bVar14 & 0x20) != 0) {
                pbVar55 = (byte *)param_1->_IO_read_ptr;
                if (pbVar55 < param_1->_IO_read_end) {
                  param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                  uVar38 = (ulong)*pbVar55;
                }
                else {
                  *(undefined8 *)(puVar44 + -8) = 0x6ebd70;
                  uVar17 = __uflow(param_1);
                  uVar38 = (ulong)uVar17;
                  if (uVar17 == 0xffffffff) {
                    uVar16 = 0xffffffff;
                    p_Var46 = local_618;
                    if (local_648 != 0) {
                      uVar16 = local_648;
                    }
                    goto switchD_006ebb4e_default;
                  }
                  lVar36 = local_660[0xd];
                }
                p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
                bVar14 = *(byte *)(lVar36 + 1 + (long)(int)uVar38 * 2);
              }
            }
            if ((uint)bVar12 == (uint)uVar38) {
              local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
              goto LAB_006eb6fe;
            }
            *(undefined8 *)(puVar44 + -8) = 0x6ec454;
            _IO_sputbackc(param_1,uVar38 & 0xff);
            uVar16 = local_648;
            p_Var46 = local_618;
          }
          goto switchD_006ebb4e_default;
        }
        local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,1);
        goto LAB_006eb6fe;
      }
      local_648 = 0;
      local_678 = (long *)0x0;
      local_6d8 = (ulong *)0x0;
      uVar16 = local_648;
      p_Var46 = local_618;
      goto switchD_006ebb4e_default;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    puVar45 = auStack_708;
  }
  else if (param_1->_mode == -1) goto LAB_006eb54a;
  goto LAB_006eb8c1;
code_r0x006f18e0:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f1909;
  goto LAB_006f18db;
code_r0x006f0c0d:
  uVar32 = uVar32 + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f0c1b;
  goto LAB_006f0c08;
code_r0x006f07c4:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f07d2;
  goto LAB_006f07bf;
code_r0x006f2e0b:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f2e39;
  goto LAB_006f2e06;
code_r0x006f1642:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f1671;
  goto LAB_006f163d;
code_r0x006f19be:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f19e7;
  goto LAB_006f19b9;
code_r0x006f1aa1:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f1ad1;
  goto LAB_006f1a9c;
code_r0x006f1b69:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f1b92;
  goto LAB_006f1b64;
code_r0x006efafe:
  uVar38 = 0xffffffff;
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006efb1c:
  pvVar26 = (void *)*local_678;
  p_Var46 = (_IO_FILE *)((long)p_Var52 - (long)pvVar26);
  local_6a0 = p_Var43;
  if (p_Var46 != p_Var43) {
    *(undefined8 *)(puVar44 + -8) = 0x6efb3e;
    pvVar26 = realloc(pvVar26,(size_t)p_Var46);
    if (pvVar26 != (void *)0x0) {
      *local_678 = (long)pvVar26;
    }
  }
LAB_006ecddf:
  local_648 = local_648 + 1;
  local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
  local_678 = (long *)0x0;
  local_6c8 = p_Var52;
  p_Var43 = local_620;
  goto LAB_006eb6fe;
code_r0x006f048a:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f04b3;
  goto LAB_006f0485;
code_r0x006f158a:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f15b3;
  goto LAB_006f1585;
code_r0x006f2fc4:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f2fed;
  goto LAB_006f2fbf;
LAB_006f0210:
  p_Var43 = local_658;
  uVar37 = (uint)local_618;
  local_6c0 = p_Var52;
LAB_006f022a:
  *(undefined8 *)(puVar44 + -8) = 0x6f0236;
  _IO_sputbackc(param_1,uVar38 & 0xff);
LAB_006ee99f:
  uVar16 = local_648;
  p_Var46 = local_618;
  if (p_Var43 != (_IO_FILE *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    goto switchD_006ebb4e_default;
  }
  if (p_Var19 == local_628) goto switchD_006ebb4e_default;
  if (uVar37 == 0) {
LAB_006ee32d:
    plVar22 = local_678;
    local_6c0->_flags = 0;
    puVar45 = &local_6c0->field_0x4;
    if ((local_644 & 0x2100) != 0) {
      pvVar26 = (void *)*local_678;
      sVar20 = (long)puVar45 - (long)pvVar26;
      if ((_IO_FILE *)((long)sVar20 >> 2) != local_6a0) {
        *(undefined8 *)(puVar44 + -8) = 0x6ee370;
        pvVar26 = realloc(pvVar26,sVar20);
        if (pvVar26 != (void *)0x0) {
          *plVar22 = (long)pvVar26;
        }
      }
    }
    local_648 = local_648 + 1;
    local_678 = (long *)0x0;
    local_6c0 = (_IO_FILE *)puVar45;
  }
  goto LAB_006ed3d8;
LAB_006ed925:
  if ((int)(uint)local_640 < 1) {
    iVar35 = (uint)local_640;
  }
  iVar56 = (int)local_668 + 0x30;
  cVar13 = (char)iVar56;
  local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
  if (local_478._8_8_ == local_478._0_8_) {
    local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,(int)local_690);
    pcVar40 = (char *)local_478._8_8_;
    if ((char *)local_478._8_8_ != (char *)0x0) {
LAB_006edb99:
      local_618 = (_IO_FILE *)CONCAT71(local_618._1_7_,cVar13);
      lVar36 = (long)pcVar40 - local_468[0]._0_8_;
      *(undefined8 *)(puVar44 + -8) = 0x6edbb3;
      cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
      if (cVar13 == '\0') {
        local_478 = (undefined1  [16])0x0;
      }
      else {
        pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
        local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
        local_478._0_8_ = pcVar41 + 1;
        *pcVar41 = (char)local_618;
      }
      goto LAB_006ed977;
    }
    if (0 < iVar35) goto LAB_006ed981;
  }
  else {
    pppcVar33 = (char ***)(local_478._0_8_ + 1);
    local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,(int)local_690);
    pcVar41 = (char *)local_478._0_8_;
LAB_006ed96d:
    local_478._0_8_ = pppcVar33;
    *pcVar41 = cVar13;
LAB_006ed977:
    if (0 < (int)(uint)local_640) {
LAB_006ed981:
      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
    }
    if (iVar56 == -1) {
      *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
      goto LAB_006edc08;
    }
  }
  pbVar55 = (byte *)param_1->_IO_read_ptr;
  if (pbVar55 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
    uVar38 = (ulong)*pbVar55;
  }
  else {
    *(undefined8 *)(puVar44 + -8) = 0x6edc80;
    uVar17 = __uflow(param_1);
    uVar38 = (ulong)uVar17;
    if (uVar17 == 0xffffffff) {
      local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006edc08:
      uVar53 = 0xffffffff;
      goto LAB_006ed9cb;
    }
  }
  p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
  if ((uint)local_640 == 0) goto LAB_006ed9c1;
  goto LAB_006ed4b0;
LAB_006ed9c1:
  uVar53 = uVar38;
LAB_006ed9cb:
  local_618 = (_IO_FILE *)CONCAT44(local_618._4_4_,10);
  pppcVar33 = (char ***)local_478._0_8_;
LAB_006ecb0d:
  uVar38 = uVar53;
  if (pppcVar33 == (char ***)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar16 = local_648;
    p_Var46 = local_618;
    goto switchD_006ebb4e_default;
  }
LAB_006ecb16:
  iVar35 = (int)uVar38;
  if ((char ***)local_468[0]._0_8_ == pppcVar33) {
    if ((((local_644 & 0x1000) != 0) && (4 < (uint)local_640)) && (iVar35 == 0x28)) {
      lVar36 = local_660[0xe];
      pbVar55 = (byte *)param_1->_IO_read_ptr;
      if (pbVar55 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
        uVar38 = (ulong)*pbVar55;
        uVar17 = (uint)*pbVar55;
      }
      else {
        *(undefined8 *)(puVar44 + -8) = 0x6ef186;
        uVar17 = __uflow(param_1);
        uVar16 = local_648;
        p_Var46 = local_618;
        if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar38 = (ulong)(uVar17 & 0xff);
      }
      if (*(int *)(lVar36 + uVar38 * 4) == 0x6e) {
        lVar36 = local_660[0xe];
        pbVar55 = (byte *)param_1->_IO_read_ptr;
        if (pbVar55 < param_1->_IO_read_end) {
          param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
          uVar38 = (ulong)*pbVar55;
          uVar17 = (uint)*pbVar55;
        }
        else {
          *(undefined8 *)(puVar44 + -8) = 0x6efccb;
          uVar17 = __uflow(param_1);
          if (uVar17 == 0xffffffff) {
            uVar59 = *(undefined4 *)(in_FS_OFFSET + -0x58);
            uVar16 = local_648;
            p_Var46 = local_618;
            if (*(int *)(lVar36 + 0x3fc) != 0x69) goto switchD_006ebb4e_default;
            iVar35 = *(int *)(local_660[0xe] + 0x3fc);
            goto joined_r0x006efd04;
          }
          uVar38 = (ulong)(uVar17 & 0xff);
        }
        if (*(int *)(lVar36 + uVar38 * 4) == 0x69) {
          lVar36 = local_660[0xe];
          pbVar55 = (byte *)param_1->_IO_read_ptr;
          if (pbVar55 < param_1->_IO_read_end) {
            param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
            uVar38 = (ulong)*pbVar55;
            uVar17 = (uint)*pbVar55;
          }
          else {
            *(undefined8 *)(puVar44 + -8) = 0x6efc18;
            uVar17 = __uflow(param_1);
            if (uVar17 == 0xffffffff) {
              iVar35 = *(int *)(lVar36 + 0x3fc);
              uVar59 = *(undefined4 *)(in_FS_OFFSET + -0x58);
joined_r0x006efd04:
              uVar16 = local_648;
              p_Var46 = local_618;
              if (iVar35 == 0x6c) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar59;
              }
              goto switchD_006ebb4e_default;
            }
            uVar38 = (ulong)(uVar17 & 0xff);
          }
          if (*(int *)(lVar36 + uVar38 * 4) == 0x6c) {
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar38 = (ulong)*pbVar55;
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6eef3f;
              uVar17 = __uflow(param_1);
              uVar38 = (ulong)uVar17;
              uVar16 = local_648;
              p_Var46 = local_618;
              if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
            }
            p_Var19 = (_IO_FILE *)&p_Var19->field_0x4;
            uVar17 = (uint)uVar38;
            if (uVar17 == 0x29) {
              uVar25 = local_478._0_8_;
              if (local_478._0_8_ != local_478._8_8_) {
                local_478._0_8_ = (undefined1 *)(local_478._0_8_ + 1);
                *(undefined1 *)uVar25 = 0x30;
LAB_006ecb50:
                pppcVar33 = (char ***)local_478._0_8_;
                if (local_478._0_8_ != local_478._8_8_) goto LAB_006ecb64;
                if ((char ***)local_478._0_8_ == (char ***)0x0) goto LAB_006eedd3;
                goto LAB_006ee13e;
              }
              if ((undefined1 *)local_478._0_8_ == (undefined1 *)0x0) goto LAB_006eedd3;
              lVar36 = local_478._0_8_ - local_468[0]._0_8_;
              *(undefined8 *)(puVar44 + -8) = 0x6efc64;
              cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
              if (cVar13 != '\0') {
                pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
                local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                local_478._0_8_ = pcVar41 + 1;
                *pcVar41 = '0';
                goto LAB_006ecb50;
              }
              goto LAB_006f0911;
            }
          }
        }
      }
      uVar38 = (ulong)uVar17;
      goto LAB_006ee25d;
    }
  }
  else if (((long)pppcVar33 - local_468[0]._0_8_ != 1) ||
          ((*(char *)local_468[0]._0_8_ - 0x2bU & 0xfd) != 0)) {
    if (iVar35 != -1) {
      p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
      *(undefined8 *)(puVar44 + -8) = 0x6ecb50;
      _IO_sputbackc(param_1,uVar38 & 0xff);
      goto LAB_006ecb50;
    }
    if ((char ***)local_478._8_8_ == pppcVar33) {
LAB_006ee13e:
      lVar36 = (long)pppcVar33 - local_468[0]._0_8_;
      *(undefined8 *)(puVar44 + -8) = 0x6ee150;
      cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
      if (cVar13 == '\0') {
LAB_006f0911:
        local_478 = (undefined1  [16])0x0;
        goto LAB_006eedd3;
      }
      pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
      local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
      local_478._0_8_ = pcVar41 + 1;
      *pcVar41 = '\0';
    }
    else {
LAB_006ecb64:
      local_478._0_8_ = (char *)((long)pppcVar33 + 1);
      *(char *)pppcVar33 = '\0';
    }
    uVar25 = local_468[0]._0_8_;
    if (local_478._0_8_ == 0) {
LAB_006eedd3:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      local_648 = 0xffffffff;
      uVar16 = local_648;
      p_Var46 = local_618;
      goto switchD_006ebb4e_default;
    }
    uVar53 = (ulong)local_618 & 0xffffffff;
    uVar17 = local_644 & 0x40;
    if (uVar17 == 0) {
      *(undefined8 *)(puVar44 + -8) = 0x6edd2a;
      uVar25 = __strtoull_internal(uVar25,&local_5f0,uVar53);
    }
    else {
      *(undefined8 *)(puVar44 + -8) = 0x6ecbb2;
      uVar25 = __strtoll_internal();
    }
    uVar16 = local_648;
    p_Var46 = local_618;
    if (local_5f0 == (char ***)local_468[0]._0_8_) goto switchD_006ebb4e_default;
    local_618 = (_IO_FILE *)(CONCAT44(local_618._4_4_,local_644) & 0xffffffff00000008);
    if ((local_644 & 8) != 0) goto LAB_006ed3d8;
    if (uVar17 == 0) {
      if ((local_644 & 1) != 0) {
        if (local_694 != 0) {
          local_638 = (_IO_FILE *)*local_6d0;
          plStack_630 = (long *)local_6d0[1];
          local_538 = (_IO_marker *)local_6d0[2];
          local_598._80_4_ = SUB84(local_638,0);
          iVar35 = local_694 + -1;
          uVar17 = local_598._80_4_;
          p_Var52 = local_638;
          plStack_540 = plStack_630;
          if (iVar35 != 0) {
            bVar57 = false;
            uVar16 = local_598._80_4_;
            do {
              if (0x2f < uVar16) {
                plStack_540 = plStack_630 + 1;
                unique0x100083dc = local_638;
                if (iVar35 != 1) {
                  plVar22 = plStack_630 + 2;
                  do {
                    plStack_540 = plVar22;
                    plVar22 = plStack_540 + 1;
                    unique0x100083e4 = local_638;
                  } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                }
                goto LAB_006ef025;
              }
              uVar16 = uVar16 + 8;
              bVar57 = true;
              iVar35 = iVar35 + -1;
              unique0x1000841c = local_638;
            } while (iVar35 != 0);
LAB_006ee4f0:
            local_638 = stack0xfffffffffffffab8;
            stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar16);
            uVar17 = uVar16;
            p_Var52 = stack0xfffffffffffffab8;
          }
          goto LAB_006ee4f8;
        }
LAB_006ecc01:
        if ((uint)local_5b0 < 0x30) {
          uVar53 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar53 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        puVar28 = (undefined8 *)*plVar22;
        goto LAB_006ecc25;
      }
      if ((local_644 & 4) != 0) {
        if (local_694 != 0) {
          local_638 = (_IO_FILE *)*local_6d0;
          plStack_630 = (long *)local_6d0[1];
          local_538 = (_IO_marker *)local_6d0[2];
          local_598._80_4_ = SUB84(local_638,0);
          iVar35 = local_694 + -1;
          uVar17 = local_598._80_4_;
          p_Var52 = local_638;
          plStack_540 = plStack_630;
          if (iVar35 != 0) {
            bVar57 = false;
            uVar16 = local_598._80_4_;
            do {
              if (0x2f < uVar16) {
                plStack_540 = plStack_630 + 1;
                p_Var52 = local_638;
                if (iVar35 != 1) {
                  plVar22 = plStack_630 + 2;
                  do {
                    plStack_540 = plVar22;
                    plVar22 = plStack_540 + 1;
                    p_Var52 = local_638;
                  } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
                }
                goto LAB_006efd96;
              }
              uVar16 = uVar16 + 8;
              bVar57 = true;
              iVar35 = iVar35 + -1;
              p_Var52 = local_638;
            } while (iVar35 != 0);
LAB_006efda2:
            stack0xfffffffffffffab8 = p_Var52;
            local_638 = stack0xfffffffffffffab8;
            stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar16);
            uVar17 = uVar16;
            p_Var52 = stack0xfffffffffffffab8;
          }
          goto LAB_006efdaa;
        }
LAB_006eee0b:
        if ((uint)local_5b0 < 0x30) {
          uVar53 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar53 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        puVar27 = (undefined2 *)*plVar22;
        goto LAB_006eee2f;
      }
      if ((local_644 & 0x200) == 0) {
        if (local_694 == 0) goto LAB_006efbe5;
        local_638 = (_IO_FILE *)*local_6d0;
        plStack_630 = (long *)local_6d0[1];
        local_538 = (_IO_marker *)local_6d0[2];
        local_598._80_4_ = SUB84(local_638,0);
        iVar35 = local_694 + -1;
        uVar17 = local_598._80_4_;
        p_Var52 = local_638;
        plStack_540 = plStack_630;
        if (iVar35 != 0) {
          bVar57 = false;
          uVar16 = local_598._80_4_;
          do {
            if (0x2f < uVar16) {
              plStack_540 = plStack_630 + 1;
              p_Var52 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  p_Var52 = local_638;
                } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
              }
              goto LAB_006f0e7d;
            }
            uVar16 = uVar16 + 8;
            bVar57 = true;
            iVar35 = iVar35 + -1;
            p_Var52 = local_638;
          } while (iVar35 != 0);
LAB_006f0e89:
          stack0xfffffffffffffab8 = p_Var52;
          local_638 = stack0xfffffffffffffab8;
          stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar16);
          uVar17 = uVar16;
          p_Var52 = stack0xfffffffffffffab8;
        }
LAB_006f0e91:
        stack0xfffffffffffffab8 = p_Var52;
        if (uVar17 < 0x30) {
          stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
          plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        *(int *)*plVar22 = (int)uVar25;
      }
      else {
        if (local_694 == 0) goto LAB_006f088a;
        local_638 = (_IO_FILE *)*local_6d0;
        plStack_630 = (long *)local_6d0[1];
        local_538 = (_IO_marker *)local_6d0[2];
        local_598._80_4_ = SUB84(local_638,0);
        iVar35 = local_694 + -1;
        uVar17 = local_598._80_4_;
        p_Var52 = local_638;
        plStack_540 = plStack_630;
        if (iVar35 != 0) {
          bVar57 = false;
          uVar16 = local_598._80_4_;
          do {
            if (0x2f < uVar16) {
              plStack_540 = plStack_630 + 1;
              p_Var52 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  p_Var52 = local_638;
                } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
              }
              goto LAB_006f1246;
            }
            uVar16 = uVar16 + 8;
            bVar57 = true;
            iVar35 = iVar35 + -1;
            p_Var52 = local_638;
          } while (iVar35 != 0);
LAB_006f1252:
          stack0xfffffffffffffab8 = p_Var52;
          local_638 = stack0xfffffffffffffab8;
          stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar16);
          uVar17 = uVar16;
          p_Var52 = stack0xfffffffffffffab8;
        }
LAB_006f125a:
        stack0xfffffffffffffab8 = p_Var52;
        if (uVar17 < 0x30) {
          stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
          plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        *(char *)*plVar22 = (char)uVar25;
      }
    }
    else if ((local_644 & 1) == 0) {
      if ((local_644 & 4) == 0) {
        if ((local_644 & 0x200) == 0) {
          if (local_694 != 0) {
            local_638 = (_IO_FILE *)*local_6d0;
            plStack_630 = (long *)local_6d0[1];
            local_538 = (_IO_marker *)local_6d0[2];
            local_598._80_4_ = SUB84(local_638,0);
            iVar35 = local_694 + -1;
            uVar17 = local_598._80_4_;
            p_Var52 = local_638;
            plStack_540 = plStack_630;
            if (iVar35 != 0) {
              bVar57 = false;
              uVar16 = local_598._80_4_;
LAB_006efef5:
              if (uVar16 < 0x30) goto code_r0x006efefe;
              plStack_540 = plStack_630 + 1;
              p_Var52 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  p_Var52 = local_638;
                } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
              }
LAB_006f0e7d:
              stack0xfffffffffffffab8 = p_Var52;
              uVar17 = local_598._80_4_;
              local_638 = stack0xfffffffffffffab8;
              p_Var52 = stack0xfffffffffffffab8;
              if (bVar57) goto LAB_006f0e89;
            }
            goto LAB_006f0e91;
          }
LAB_006efbe5:
          if ((uint)local_5b0 < 0x30) {
            uVar53 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar53 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          *(int *)*plVar22 = (int)uVar25;
        }
        else {
          if (local_694 != 0) {
            local_638 = (_IO_FILE *)*local_6d0;
            plStack_630 = (long *)local_6d0[1];
            local_538 = (_IO_marker *)local_6d0[2];
            local_598._80_4_ = SUB84(local_638,0);
            iVar35 = local_694 + -1;
            uVar17 = local_598._80_4_;
            p_Var52 = local_638;
            plStack_540 = plStack_630;
            if (iVar35 != 0) {
              bVar57 = false;
              uVar16 = local_598._80_4_;
LAB_006f0f09:
              if (uVar16 < 0x30) goto code_r0x006f0f12;
              plStack_540 = plStack_630 + 1;
              p_Var52 = local_638;
              if (iVar35 != 1) {
                plVar22 = plStack_630 + 2;
                do {
                  plStack_540 = plVar22;
                  plVar22 = plStack_540 + 1;
                  p_Var52 = local_638;
                } while (plStack_630 + (ulong)(iVar35 - 2) + 3 != plStack_540 + 1);
              }
LAB_006f1246:
              stack0xfffffffffffffab8 = p_Var52;
              uVar17 = local_598._80_4_;
              local_638 = stack0xfffffffffffffab8;
              p_Var52 = stack0xfffffffffffffab8;
              if (bVar57) goto LAB_006f1252;
            }
            goto LAB_006f125a;
          }
LAB_006f088a:
          if ((uint)local_5b0 < 0x30) {
            uVar53 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar53 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          *(char *)*plVar22 = (char)uVar25;
        }
      }
      else {
        if (local_694 == 0) goto LAB_006eee0b;
        local_638 = (_IO_FILE *)*local_6d0;
        plStack_630 = (long *)local_6d0[1];
        local_538 = (_IO_marker *)local_6d0[2];
        local_598._80_4_ = SUB84(local_638,0);
        iVar35 = local_694 + -1;
        uVar17 = local_598._80_4_;
        p_Var52 = local_638;
        plStack_540 = plStack_630;
        if (iVar35 != 0) {
          bVar57 = false;
          uVar16 = local_598._80_4_;
LAB_006f1011:
          if (uVar16 < 0x30) goto code_r0x006f1016;
          plStack_540 = plStack_630 + 1;
          p_Var52 = local_638;
          if (iVar35 != 1) {
            plVar22 = plStack_630 + 2;
            do {
              plStack_540 = plVar22;
              plVar22 = plStack_540 + 1;
              p_Var52 = local_638;
            } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
          }
LAB_006efd96:
          stack0xfffffffffffffab8 = p_Var52;
          uVar17 = local_598._80_4_;
          local_638 = stack0xfffffffffffffab8;
          p_Var52 = stack0xfffffffffffffab8;
          if (bVar57) goto LAB_006efda2;
        }
LAB_006efdaa:
        stack0xfffffffffffffab8 = p_Var52;
        if (uVar17 < 0x30) {
          stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
          plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        puVar27 = (undefined2 *)*plVar22;
LAB_006eee2f:
        *puVar27 = (short)uVar25;
      }
    }
    else {
      if (local_694 == 0) goto LAB_006ecc01;
      local_638 = (_IO_FILE *)*local_6d0;
      plStack_630 = (long *)local_6d0[1];
      local_538 = (_IO_marker *)local_6d0[2];
      local_598._80_4_ = SUB84(local_638,0);
      iVar35 = local_694 + -1;
      uVar17 = local_598._80_4_;
      p_Var52 = local_638;
      plStack_540 = plStack_630;
      if (iVar35 != 0) {
        bVar57 = false;
        uVar16 = local_598._80_4_;
LAB_006f02f2:
        if (uVar16 < 0x30) goto code_r0x006f02f7;
        plStack_540 = plStack_630 + 1;
        unique0x100083f4 = local_638;
        if (iVar35 != 1) {
          plVar22 = plStack_630 + 2;
          do {
            plStack_540 = plVar22;
            plVar22 = plStack_540 + 1;
            unique0x100083ec = local_638;
          } while (plStack_540 + 1 != plStack_630 + (ulong)(iVar35 - 2) + 3);
        }
LAB_006ef025:
        local_638 = stack0xfffffffffffffab8;
        p_Var52 = stack0xfffffffffffffab8;
        if (bVar57) goto LAB_006ee4f0;
      }
LAB_006ee4f8:
      stack0xfffffffffffffab8 = p_Var52;
      if (uVar17 < 0x30) {
        stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
        plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
      }
      else {
        plVar22 = plStack_540;
        plStack_540 = plStack_540 + 1;
      }
      puVar28 = (undefined8 *)*plVar22;
LAB_006ecc25:
      *puVar28 = uVar25;
    }
    local_648 = local_648 + 1;
    p_Var43 = local_620;
    goto LAB_006eb6fe;
  }
  uVar16 = local_648;
  p_Var46 = local_618;
  if (iVar35 == -1) goto switchD_006ebb4e_default;
LAB_006ee25d:
  *(undefined8 *)(puVar44 + -8) = 0x6ee269;
  _IO_sputbackc(param_1,uVar38 & 0xff);
  uVar16 = local_648;
  p_Var46 = local_618;
  goto switchD_006ebb4e_default;
code_r0x006f0f12:
  uVar16 = uVar16 + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  p_Var52 = local_638;
  if (iVar35 == 0) goto LAB_006f1252;
  goto LAB_006f0f09;
code_r0x006efefe:
  uVar16 = uVar16 + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  p_Var52 = local_638;
  if (iVar35 == 0) goto LAB_006f0e89;
  goto LAB_006efef5;
code_r0x006f1016:
  uVar16 = uVar16 + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  p_Var52 = local_638;
  if (iVar35 == 0) goto LAB_006efda2;
  goto LAB_006f1011;
code_r0x006f02f7:
  uVar16 = uVar16 + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  unique0x10008424 = local_638;
  if (iVar35 == 0) goto LAB_006ee4f0;
  goto LAB_006f02f2;
code_r0x006f1088:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f1096;
  goto LAB_006f1083;
code_r0x006ef26f:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006ef27d;
  goto LAB_006ef26a;
code_r0x006f0657:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f0665;
  goto LAB_006f0652;
code_r0x006ef996:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006ef9a4;
  goto LAB_006ef991;
code_r0x006ef2e1:
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006ef2f2:
  plVar22 = local_678;
  if ((uint)local_618 == 0) {
    if (local_644 != 0) {
      pvVar26 = (void *)*local_678;
      sVar20 = (long)local_6c0 - (long)pvVar26;
      if ((_IO_FILE *)((long)sVar20 >> 2) != local_6a0) {
        *(undefined8 *)(puVar44 + -8) = 0x6ef334;
        pvVar26 = realloc(pvVar26,sVar20);
        if (pvVar26 != (void *)0x0) {
          *plVar22 = (long)pvVar26;
        }
      }
    }
    local_648 = local_648 + 1;
    local_678 = (long *)0x0;
    p_Var43 = local_620;
    goto LAB_006eb6fe;
  }
  goto LAB_006ed3d8;
switchD_006ebe25_caseD_2:
  if (uVar17 != 0xffffffff) {
    pbVar55 = (byte *)param_1->_IO_read_ptr;
    if (pbVar55 < param_1->_IO_read_end) {
      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
      uVar38 = (ulong)*pbVar55;
    }
    else {
      *(undefined8 *)(puVar44 + -8) = 0x6ef870;
      uVar17 = __uflow(param_1);
      uVar38 = (ulong)uVar17;
      if (uVar17 == 0xffffffff) goto LAB_006ed06f;
    }
    p_Var43 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
    local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
    uVar25 = local_478._0_8_;
    if (((int)uVar38 - 0x2bU & 0xfffffffd) == 0) {
      if (local_478._8_8_ == local_478._0_8_) {
        if ((char *)local_478._8_8_ != (char *)0x0) {
          lVar36 = local_478._8_8_ - local_468[0]._0_8_;
          *(undefined8 *)(puVar44 + -8) = 0x6f03ab;
          cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
          if (cVar13 == '\0') {
            local_478 = (undefined1  [16])0x0;
          }
          else {
            pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
            local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
            local_478._0_8_ = pcVar41 + 1;
            *pcVar41 = (char)uVar38;
          }
        }
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar25 = (char)uVar38;
      }
      uVar16 = local_648;
      p_Var46 = local_618;
      if ((uint)local_640 == 0) goto switchD_006ebb4e_default;
      pbVar55 = (byte *)param_1->_IO_read_ptr;
      if (pbVar55 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
        uVar53 = (ulong)*pbVar55;
        uVar38 = uVar53;
      }
      else {
        *(undefined8 *)(puVar44 + -8) = 0x6efbb1;
        uVar17 = __uflow(param_1);
        uVar38 = (ulong)uVar17;
        uVar16 = local_648;
        p_Var46 = local_618;
        if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar53 = (ulong)(uVar17 & 0xff);
      }
      p_Var43 = (_IO_FILE *)((long)&p_Var52->_flags + 2);
      pcVar41 = (char *)local_478._0_8_;
      if ((int)(uint)local_640 < 1) {
        local_670 = (wctrans_t)CONCAT71(local_670._1_7_,1);
        local_628 = (_IO_FILE *)0x1;
      }
      else {
        local_670 = (wctrans_t)CONCAT71(local_670._1_7_,1);
        local_628 = (_IO_FILE *)0x1;
        local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
      }
    }
    else {
      local_628 = (_IO_FILE *)0x0;
      uVar53 = uVar38 & 0xff;
      local_670 = (wctrans_t)((ulong)local_670 & 0xffffffffffffff00);
      pcVar41 = (char *)local_478._0_8_;
    }
    iVar35 = *(int *)(local_660[0xe] + uVar53 * 4);
    cVar13 = (char)uVar38;
    if (iVar35 == 0x6e) {
      if ((char *)local_478._8_8_ == pcVar41) {
        *(undefined8 *)(puVar44 + -8) = 0x6f1f13;
        char_buffer_add_slow(local_478,(int)cVar13);
      }
      else {
        local_478._0_8_ = pcVar41 + 1;
        *pcVar41 = cVar13;
      }
      uVar16 = local_648;
      p_Var46 = local_618;
      if ((uint)local_640 == 0) goto switchD_006ebb4e_default;
      pbVar55 = (byte *)param_1->_IO_read_ptr;
      if (pbVar55 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
        bVar12 = *pbVar55;
      }
      else {
        *(undefined8 *)(puVar44 + -8) = 0x6f0d0f;
        iVar35 = __uflow(param_1);
        bVar12 = (byte)iVar35;
        uVar16 = local_648;
        p_Var46 = local_618;
        if (iVar35 == -1) goto switchD_006ebb4e_default;
      }
      uVar16 = local_648;
      p_Var46 = local_618;
      if (*(int *)(local_660[0xe] + (ulong)bVar12 * 4) != 0x61) goto switchD_006ebb4e_default;
      uVar25 = local_478._0_8_;
      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640))
      ;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar44 + -8) = 0x6f16ed;
        char_buffer_add_slow(local_478,(int)(char)bVar12);
      }
      else {
        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
        *(byte *)uVar25 = bVar12;
      }
      uVar16 = local_648;
      p_Var46 = local_618;
      if ((uint)local_640 == 0) goto switchD_006ebb4e_default;
      pbVar55 = (byte *)param_1->_IO_read_ptr;
      if (pbVar55 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
        uVar53 = (ulong)*pbVar55;
        uVar38 = uVar53;
      }
      else {
        *(undefined8 *)(puVar44 + -8) = 0x6f0ceb;
        uVar17 = __uflow(param_1);
        uVar38 = (ulong)uVar17;
        uVar16 = local_648;
        p_Var46 = local_618;
        if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar53 = (ulong)(uVar17 & 0xff);
      }
      p_Var19 = (_IO_FILE *)((long)&p_Var43->_flags + 2);
      uVar16 = local_648;
      p_Var46 = local_618;
      if (*(int *)(local_660[0xe] + uVar53 * 4) != 0x6e) goto switchD_006ebb4e_default;
LAB_006eef10:
      uVar25 = local_478._0_8_;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar44 + -8) = 0x6f2497;
        char_buffer_add_slow(local_478,(int)(char)uVar38);
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar25 = (char)uVar38;
      }
    }
    else {
      if (iVar35 != 0x69) {
        if (((uint)local_640 == 0) || ((int)uVar38 != 0x30)) {
          local_618 = (_IO_FILE *)CONCAT71(local_618._1_7_,0x65);
          cVar13 = '\0';
        }
        else {
          if ((char *)local_478._8_8_ == pcVar41) {
            *(undefined8 *)(puVar44 + -8) = 0x6f1e51;
            char_buffer_add_slow(local_478,0x30);
          }
          else {
            local_478._0_8_ = pcVar41 + 1;
            *pcVar41 = '0';
          }
          pbVar55 = (byte *)param_1->_IO_read_ptr;
          if (pbVar55 < param_1->_IO_read_end) {
            param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
            uVar38 = (ulong)*pbVar55;
LAB_006ef3a7:
            p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
          }
          else {
            *(undefined8 *)(puVar44 + -8) = 0x6f08ef;
            uVar17 = __uflow(param_1);
            uVar38 = (ulong)uVar17;
            if (uVar17 != 0xffffffff) goto LAB_006ef3a7;
            local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
          }
          uVar25 = local_478._0_8_;
          if ((int)(uint)local_640 < 1) {
LAB_006f1120:
            if (*(int *)(local_660[0xe] + (uVar38 & 0xff) * 4) == 0x78) {
              if (local_478._8_8_ == local_478._0_8_) {
                *(undefined8 *)(puVar44 + -8) = 0x6f30a0;
                char_buffer_add_slow(local_478,(int)(char)uVar38);
              }
              else {
                local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                *(char *)uVar25 = (char)uVar38;
              }
              local_644 = local_644 & 0xffffff7f | 0x800;
              if ((int)uVar38 == -1) {
                *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
              }
              else {
                pbVar55 = (byte *)param_1->_IO_read_ptr;
                if (pbVar55 < param_1->_IO_read_end) {
                  param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                  uVar38 = (ulong)*pbVar55;
                }
                else {
                  *(undefined8 *)(puVar44 + -8) = 0x6f3057;
                  uVar17 = __uflow(param_1);
                  uVar38 = (ulong)uVar17;
                  if (uVar17 == 0xffffffff) {
                    local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                    goto LAB_006f1194;
                  }
                }
                p_Var43 = (_IO_FILE *)((long)&p_Var43->_flags + 1);
              }
LAB_006f1194:
              pcVar41 = (char *)local_478._0_8_;
              if ((int)(uint)local_640 < 1) {
                local_618 = (_IO_FILE *)CONCAT71(local_618._1_7_,0x70);
                cVar13 = '\0';
              }
              else {
                local_618 = (_IO_FILE *)CONCAT71(local_618._1_7_,0x70);
                cVar13 = '\0';
                local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
              }
              goto LAB_006ef3db;
            }
          }
          else {
            iVar35 = (uint)local_640 + -1;
            local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
            if (iVar35 != 0) goto LAB_006f1120;
          }
          local_618 = (_IO_FILE *)CONCAT71(local_618._1_7_,0x65);
          cVar13 = '\x01';
          pcVar41 = (char *)local_478._0_8_;
        }
LAB_006ef3db:
        if (pcVar41 != (char *)0x0) {
          local_668 = (_IO_FILE *)((ulong)local_668 & 0xffffffffffffff00);
          local_6a8 = (_IO_FILE *)(CONCAT44(local_6a8._4_4_,local_644) & 0xffffffff00000080);
          local_690 = (_IO_FILE *)CONCAT71(local_690._1_7_,(local_644 & 0x80) != 0);
          local_638 = (_IO_FILE *)((ulong)local_638 & 0xffffffffffffff00);
          local_658 = (_IO_FILE *)(CONCAT44(local_658._4_4_,local_644) & 0xffffffff00000800);
          local_6f0 = (byte *)CONCAT44(local_6f0._4_4_,(int)(char)local_618);
          iVar35 = (uint)local_640;
          local_650 = p_Var43;
          do {
            uVar17 = (uint)uVar38;
            cVar15 = (char)uVar38;
            if (uVar17 - 0x30 < 10) {
              if (pcVar41 == (char *)local_478._8_8_) {
                lVar36 = (long)pcVar41 - local_468[0]._0_8_;
                *(undefined8 *)(puVar44 + -8) = 0x6f05cf;
                cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
                if (cVar13 != '\0') {
                  pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
                  local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                  local_478._0_8_ = pcVar41 + 1;
                  *pcVar41 = cVar15;
                  goto LAB_006ef456;
                }
                local_478 = (undefined1  [16])0x0;
                if (iVar35 == 0) goto LAB_006f1eb9;
              }
              else {
                local_478._0_8_ = pcVar41 + 1;
                *pcVar41 = cVar15;
LAB_006ef456:
                if (iVar35 == 0) goto LAB_006f1698;
              }
              cVar13 = '\x01';
            }
            else {
              iVar56 = iStack_704;
              if ((char)local_668 == '\0') {
                if (((uint)local_658 == 0) ||
                   ((*(byte *)(local_660[0xd] + 1 + (long)(int)uVar17 * 2) & 0x10) == 0)) {
                  if ((cVar13 == '\0') ||
                     ((char)local_618 != *(char *)(local_660[0xe] + (uVar38 & 0xff) * 4)))
                  goto LAB_006ef4c8;
                  if (pcVar41 == (char *)local_478._8_8_) {
                    uVar53 = (ulong)local_6f0 & 0xffffffff;
                    *(undefined8 *)(puVar44 + -8) = 0x6f1a24;
                    char_buffer_add_slow(local_478,uVar53);
                    local_668 = (_IO_FILE *)CONCAT71(local_668._1_7_,cVar13);
                    local_638 = (_IO_FILE *)CONCAT71(local_638._1_7_,cVar13);
                    iVar56 = iStack_704;
                  }
                  else {
                    local_668 = (_IO_FILE *)CONCAT71(local_668._1_7_,cVar13);
                    local_478._0_8_ = pcVar41 + 1;
                    local_638 = (_IO_FILE *)CONCAT71(local_638._1_7_,cVar13);
                    *pcVar41 = (char)local_618;
                  }
                }
                else if (pcVar41 == (char *)local_478._8_8_) {
                  cVar13 = '\x01';
                  *(undefined8 *)(puVar44 + -8) = 0x6f2d94;
                  char_buffer_add_slow(local_478,(int)cVar15);
                  iVar56 = iStack_704;
                }
                else {
                  cVar13 = '\x01';
                  local_478._0_8_ = pcVar41 + 1;
                  *pcVar41 = cVar15;
                }
              }
              else if ((pcVar41[-1] == (char)local_618) && ((uVar17 - 0x2b & 0xfffffffd) == 0)) {
                if (pcVar41 == (char *)local_478._8_8_) {
                  *(undefined8 *)(puVar44 + -8) = 0x6f2da9;
                  char_buffer_add_slow(local_478,(int)cVar15);
                  iVar56 = iStack_704;
                }
                else {
                  local_478._0_8_ = pcVar41 + 1;
                  *pcVar41 = cVar15;
                }
              }
              else {
LAB_006ef4c8:
                iVar51 = 0x7fffffff;
                if (0 < iVar35) {
                  iVar51 = iVar35;
                }
                if ((byte)local_638 == '\0') {
                  pbVar55 = local_6e0;
                  if (uVar17 == *local_6e0) {
                    local_640 = (_IO_FILE *)CONCAT71(local_640._1_7_,cVar13);
                    do {
                      pbVar55 = pbVar55 + 1;
                      cVar13 = (char)local_640;
                      if (*pbVar55 == 0) {
                        bVar12 = *local_6e0;
                        goto LAB_006ef7ec;
                      }
                      if (iVar51 == 0) goto LAB_006f0d2b;
                      pbVar54 = (byte *)param_1->_IO_read_ptr;
                      if (pbVar54 < param_1->_IO_read_end) {
                        param_1->_IO_read_ptr = (char *)(pbVar54 + 1);
                        uVar38 = (ulong)*pbVar54;
                      }
                      else {
                        *(undefined8 *)(puVar44 + -8) = 0x6ef7b6;
                        uVar17 = __uflow(param_1);
                        uVar38 = (ulong)uVar17;
                        if (uVar17 == 0xffffffff) {
                          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58)
                                              );
                          cVar13 = (char)local_640;
                          goto LAB_006ef7d9;
                        }
                      }
                      local_650 = (_IO_FILE *)((long)&local_650->_flags + 1);
                      iVar51 = iVar51 + -1;
                    } while ((uint)*pbVar55 == (uint)uVar38);
                    cVar13 = (char)local_640;
                  }
LAB_006ef7d9:
                  if (*pbVar55 != 0) {
LAB_006f0d2b:
                    if ((int)local_6a8 == 0) {
LAB_006ef4f3:
                      pbVar54 = local_688;
                      if (local_688 != (byte *)0x0) goto LAB_006ef506;
                    }
                    else {
                      lVar36 = (long)pbVar55 - (long)local_6e0;
                      lVar47 = 0;
                      pbVar54 = local_688;
                      if (lVar36 < 1) {
                        if (pbVar55 == local_6e0) goto LAB_006f0d82;
                        goto LAB_006ef4f3;
                      }
                      do {
                        if (*pbVar54 != local_6e0[lVar47]) goto LAB_006ef506;
                        pbVar54 = pbVar54 + 1;
                        lVar47 = (long)pbVar54 - (long)local_688;
                      } while (lVar47 < lVar36);
                      if (lVar47 == lVar36) {
LAB_006f0d82:
                        if ((uint)*pbVar54 == (uint)uVar38) {
                          local_640 = (_IO_FILE *)CONCAT71(local_640._1_7_,cVar13);
                          do {
                            pbVar54 = pbVar54 + 1;
                            if (*pbVar54 == 0) {
                              cVar13 = (char)local_640;
                              goto LAB_006ef50f;
                            }
                            if (iVar51 == 0) {
                              local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                              bVar12 = (byte)local_638;
                              goto LAB_006f17ef;
                            }
                            pbVar55 = (byte *)param_1->_IO_read_ptr;
                            if (pbVar55 < param_1->_IO_read_end) {
                              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                              uVar38 = (ulong)*pbVar55;
                            }
                            else {
                              *(undefined8 *)(puVar44 + -8) = 0x6f0de6;
                              uVar17 = __uflow(param_1);
                              uVar38 = (ulong)uVar17;
                              if (uVar17 == 0xffffffff) {
                                local_608 = CONCAT44(local_608._4_4_,
                                                     *(undefined4 *)(in_FS_OFFSET + -0x58));
                                cVar13 = (char)local_640;
                                goto LAB_006ef506;
                              }
                            }
                            local_650 = (_IO_FILE *)((long)&local_650->_flags + 1);
                            iVar51 = iVar51 + -1;
                          } while ((uint)*pbVar54 == (uint)uVar38);
                          cVar13 = (char)local_640;
                        }
                      }
LAB_006ef506:
                      if (*pbVar54 == 0) {
LAB_006ef50f:
                        bVar12 = *local_688;
                        pppcVar24 = (char ***)local_468;
                        iVar56 = iStack_704;
                        pppcVar33 = pppcStack_700;
                        pbVar55 = local_688;
                        iStack_704 = iVar51;
                        while (pppcStack_700 = pppcVar24, bVar12 != 0) {
                          uVar25 = local_478._0_8_;
                          pppcVar24 = pppcStack_700;
                          local_6f8 = param_1;
                          iVar51 = iStack_704;
                          if (local_478._0_8_ == local_478._8_8_) {
                            if ((byte *)local_478._0_8_ != (byte *)0x0) {
                              local_640 = (_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_);
                              *(undefined8 *)(puVar44 + -8) = 0x6efffc;
                              cVar15 = __libc_scratch_buffer_grow_preserve();
                              pppcVar24 = pppcStack_700;
                              iVar51 = iStack_704;
                              if (cVar15 == '\0') {
                                local_478 = (undefined1  [16])0x0;
                                iVar56 = iStack_704;
                                pppcVar33 = pppcStack_700;
                              }
                              else {
                                pbVar54 = (byte *)(local_468[0]._0_8_ + (long)&local_640->_flags);
                                local_478._8_8_ =
                                     (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                                local_478._0_8_ = pbVar54 + 1;
                                *pbVar54 = bVar12;
                                iVar56 = iStack_704;
                                pppcVar33 = pppcStack_700;
                              }
                            }
                          }
                          else {
                            local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                            *(byte *)uVar25 = bVar12;
                          }
                          pppcStack_700 = pppcVar33;
                          iStack_704 = iVar56;
                          pbVar54 = pbVar55 + 1;
                          pbVar55 = pbVar55 + 1;
                          param_1 = local_6f8;
                          iVar56 = iStack_704;
                          pppcVar33 = pppcStack_700;
                          iStack_704 = iVar51;
                          bVar12 = *pbVar54;
                        }
                        pppcStack_700 = pppcVar33;
                        if (0 < iVar35) {
                          iVar35 = iStack_704;
                        }
                        goto LAB_006ef583;
                      }
                    }
                    local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                    p_Var19 = local_650;
                    bVar12 = (byte)local_638;
                    if ((int)uVar38 != -1) {
LAB_006f17ef:
                      p_Var19 = (_IO_FILE *)(local_650[-1]._unused2 + 0x13);
                      *(undefined8 *)(puVar44 + -8) = 0x6f17ff;
                      _IO_sputbackc(param_1,uVar38 & 0xff);
                    }
                    goto LAB_006ef5bd;
                  }
                  bVar12 = *local_6e0;
LAB_006ef7ec:
                  if (bVar12 != 0) {
                    p_Var52 = local_468;
                    pbVar55 = local_6e0;
                    local_640 = param_1;
                    do {
                      uVar25 = local_478._0_8_;
                      if (local_478._0_8_ == local_478._8_8_) {
                        if ((byte *)local_478._0_8_ != (byte *)0x0) {
                          local_638 = (_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_);
                          pppcStack_700 = (char ***)CONCAT44(pppcStack_700._4_4_,iVar51);
                          local_6f8 = p_Var52;
                          *(undefined8 *)(puVar44 + -8) = 0x6f0073;
                          cVar15 = __libc_scratch_buffer_grow_preserve();
                          p_Var52 = local_6f8;
                          iVar51 = (int)pppcStack_700;
                          if (cVar15 == '\0') {
                            local_478 = (undefined1  [16])0x0;
                          }
                          else {
                            pbVar54 = (byte *)(local_468[0]._0_8_ + (long)&local_638->_flags);
                            local_478._8_8_ =
                                 (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
                            local_478._0_8_ = pbVar54 + 1;
                            *pbVar54 = bVar12;
                          }
                        }
                      }
                      else {
                        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                        *(byte *)uVar25 = bVar12;
                      }
                      bVar12 = pbVar55[1];
                      pbVar55 = pbVar55 + 1;
                      param_1 = local_640;
                    } while (bVar12 != 0);
                  }
                }
                else if (*local_6e0 != 0) goto LAB_006ef4f3;
                local_638 = (_IO_FILE *)CONCAT71(local_638._1_7_,1);
                iVar56 = iStack_704;
                if (0 < iVar35) {
                  iVar35 = iVar51;
                }
              }
LAB_006ef583:
              iStack_704 = iVar56;
              if (iVar35 == 0) {
LAB_006f1698:
                local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                p_Var19 = local_650;
                bVar12 = (byte)local_638;
                goto LAB_006ef5bd;
              }
              if ((int)uVar38 == -1) {
                local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
                *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
                p_Var19 = local_650;
                bVar12 = (byte)local_638;
                goto LAB_006ef5bd;
              }
            }
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              uVar38 = (ulong)*pbVar55;
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6ef678;
              uVar17 = __uflow(param_1);
              uVar38 = (ulong)uVar17;
              if (uVar17 == 0xffffffff) goto code_r0x006ef684;
            }
            local_650 = (_IO_FILE *)((long)&local_650->_flags + 1);
            iVar35 = iVar35 - (uint)(0 < iVar35);
            pcVar41 = (char *)local_478._0_8_;
            if ((char *)local_478._0_8_ == (char *)0x0) break;
          } while( true );
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        local_648 = 0xffffffff;
        uVar16 = local_648;
        p_Var46 = local_618;
        goto switchD_006ebb4e_default;
      }
      if ((char *)local_478._8_8_ == pcVar41) {
        if (pcVar41 != (char *)0x0) {
          lVar36 = (long)pcVar41 - local_468[0]._0_8_;
          *(undefined8 *)(puVar44 + -8) = 0x6f314f;
          cVar15 = __libc_scratch_buffer_grow_preserve(local_468);
          if (cVar15 == '\0') {
            local_478 = (undefined1  [16])0x0;
          }
          else {
            pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
            local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
            local_478._0_8_ = pcVar41 + 1;
            *pcVar41 = cVar13;
          }
        }
      }
      else {
        local_478._0_8_ = pcVar41 + 1;
        *pcVar41 = cVar13;
      }
      uVar16 = local_648;
      p_Var46 = local_618;
      if ((uint)local_640 == 0) goto switchD_006ebb4e_default;
      pbVar55 = (byte *)param_1->_IO_read_ptr;
      if (pbVar55 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
        bVar12 = *pbVar55;
      }
      else {
        *(undefined8 *)(puVar44 + -8) = 0x6f0837;
        iVar35 = __uflow(param_1);
        bVar12 = (byte)iVar35;
        uVar16 = local_648;
        p_Var46 = local_618;
        if (iVar35 == -1) goto switchD_006ebb4e_default;
      }
      uVar16 = local_648;
      p_Var46 = local_618;
      if (*(int *)(local_660[0xe] + (ulong)bVar12 * 4) != 0x6e) goto switchD_006ebb4e_default;
      uVar25 = local_478._0_8_;
      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640))
      ;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar44 + -8) = 0x6f1e33;
        char_buffer_add_slow(local_478,(int)(char)bVar12);
      }
      else {
        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
        *(byte *)uVar25 = bVar12;
      }
      uVar16 = local_648;
      p_Var46 = local_618;
      if ((uint)local_640 == 0) goto switchD_006ebb4e_default;
      pbVar55 = (byte *)param_1->_IO_read_ptr;
      if (pbVar55 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
        uVar53 = (ulong)*pbVar55;
        uVar38 = uVar53;
      }
      else {
        *(undefined8 *)(puVar44 + -8) = 0x6f0850;
        uVar17 = __uflow(param_1);
        uVar38 = (ulong)uVar17;
        uVar16 = local_648;
        p_Var46 = local_618;
        if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar53 = (ulong)(uVar17 & 0xff);
      }
      p_Var19 = (_IO_FILE *)((long)&p_Var43->_flags + 2);
      uVar16 = local_648;
      p_Var46 = local_618;
      if (*(int *)(local_660[0xe] + uVar53 * 4) != 0x66) goto switchD_006ebb4e_default;
      uVar25 = local_478._0_8_;
      local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640))
      ;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar44 + -8) = 0x6f1537;
        char_buffer_add_slow(local_478,(int)(char)uVar38);
      }
      else {
        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
        *(char *)uVar25 = (char)uVar38;
      }
      if ((uint)local_640 != 0) {
        pbVar55 = (byte *)param_1->_IO_read_ptr;
        if (pbVar55 < param_1->_IO_read_end) {
          param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
          uVar53 = (ulong)*pbVar55;
          uVar38 = uVar53;
        }
        else {
          *(undefined8 *)(puVar44 + -8) = 0x6f14d7;
          uVar17 = __uflow(param_1);
          uVar38 = (ulong)uVar17;
          if (uVar17 == 0xffffffff) {
            local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
            goto LAB_006ec70e;
          }
          uVar53 = (ulong)(uVar17 & 0xff);
        }
        if (*(int *)(local_660[0xe] + uVar53 * 4) == 0x69) {
          uVar25 = local_478._0_8_;
          local_640 = (_IO_FILE *)
                      CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
          if (local_478._0_8_ == local_478._8_8_) {
            *(undefined8 *)(puVar44 + -8) = 0x6f2446;
            char_buffer_add_slow(local_478,(int)(char)uVar38);
          }
          else {
            local_478._0_8_ = (char *)(local_478._0_8_ + 1);
            *(char *)uVar25 = (char)uVar38;
          }
          uVar16 = local_648;
          p_Var46 = local_618;
          if ((uint)local_640 != 0) {
            pbVar55 = (byte *)param_1->_IO_read_ptr;
            if (pbVar55 < param_1->_IO_read_end) {
              param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
              bVar12 = *pbVar55;
            }
            else {
              *(undefined8 *)(puVar44 + -8) = 0x6f2421;
              iVar35 = __uflow(param_1);
              bVar12 = (byte)iVar35;
              uVar16 = local_648;
              p_Var46 = local_618;
              if (iVar35 == -1) goto switchD_006ebb4e_default;
            }
            uVar16 = local_648;
            p_Var46 = local_618;
            if (*(int *)(local_660[0xe] + (ulong)bVar12 * 4) == 0x6e) {
              uVar25 = local_478._0_8_;
              local_640 = (_IO_FILE *)
                          CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640));
              if (local_478._0_8_ == local_478._8_8_) {
                *(undefined8 *)(puVar44 + -8) = 0x6f240c;
                char_buffer_add_slow(local_478,(int)(char)bVar12);
              }
              else {
                local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
                *(byte *)uVar25 = bVar12;
              }
              uVar16 = local_648;
              p_Var46 = local_618;
              if ((uint)local_640 != 0) {
                pbVar55 = (byte *)param_1->_IO_read_ptr;
                if (pbVar55 < param_1->_IO_read_end) {
                  param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                  uVar38 = (ulong)*pbVar55;
                }
                else {
                  *(undefined8 *)(puVar44 + -8) = 0x6f23e4;
                  uVar17 = __uflow(param_1);
                  uVar38 = (ulong)uVar17;
                  uVar16 = local_648;
                  p_Var46 = local_618;
                  if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
                }
                uVar16 = local_648;
                p_Var46 = local_618;
                if (*(int *)(local_660[0xe] + (uVar38 & 0xff) * 4) == 0x69) {
                  uVar25 = local_478._0_8_;
                  local_640 = (_IO_FILE *)
                              CONCAT44(local_640._4_4_,(uint)local_640 - (0 < (int)(uint)local_640))
                  ;
                  if (local_478._0_8_ == local_478._8_8_) {
                    *(undefined8 *)(puVar44 + -8) = 0x6f23cf;
                    char_buffer_add_slow(local_478,(int)(char)uVar38);
                  }
                  else {
                    local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                    *(char *)uVar25 = (char)uVar38;
                  }
                  uVar16 = local_648;
                  p_Var46 = local_618;
                  if ((uint)local_640 != 0) {
                    pbVar55 = (byte *)param_1->_IO_read_ptr;
                    if (pbVar55 < param_1->_IO_read_end) {
                      param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                      uVar38 = (ulong)*pbVar55;
                    }
                    else {
                      *(undefined8 *)(puVar44 + -8) = 0x6f23a7;
                      uVar17 = __uflow(param_1);
                      uVar38 = (ulong)uVar17;
                      uVar16 = local_648;
                      p_Var46 = local_618;
                      if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
                    }
                    uVar16 = local_648;
                    p_Var46 = local_618;
                    if (*(int *)(local_660[0xe] + (uVar38 & 0xff) * 4) == 0x74) {
                      uVar25 = local_478._0_8_;
                      local_640 = (_IO_FILE *)
                                  CONCAT44(local_640._4_4_,
                                           (uint)local_640 - (0 < (int)(uint)local_640));
                      if (local_478._0_8_ == local_478._8_8_) {
                        *(undefined8 *)(puVar44 + -8) = 0x6f2392;
                        char_buffer_add_slow(local_478,(int)(char)uVar38);
                      }
                      else {
                        local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                        *(char *)uVar25 = (char)uVar38;
                      }
                      uVar16 = local_648;
                      p_Var46 = local_618;
                      if ((uint)local_640 != 0) {
                        pbVar55 = (byte *)param_1->_IO_read_ptr;
                        if (pbVar55 < param_1->_IO_read_end) {
                          param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                          uVar38 = (ulong)*pbVar55;
                        }
                        else {
                          *(undefined8 *)(puVar44 + -8) = 0x6f2367;
                          uVar17 = __uflow(param_1);
                          uVar38 = (ulong)uVar17;
                          uVar16 = local_648;
                          p_Var46 = local_618;
                          if (uVar17 == 0xffffffff) goto switchD_006ebb4e_default;
                        }
                        p_Var19 = (_IO_FILE *)&p_Var43->field_0x7;
                        uVar16 = local_648;
                        p_Var46 = local_618;
                        if (*(int *)(local_660[0xe] + (uVar38 & 0xff) * 4) == 0x79)
                        goto LAB_006eef10;
                      }
                    }
                  }
                }
              }
            }
          }
          goto switchD_006ebb4e_default;
        }
        *(undefined8 *)(puVar44 + -8) = 0x6f1234;
        _IO_sputbackc(param_1,uVar38 & 0xff);
      }
    }
LAB_006ec70e:
    puVar45 = (undefined1 *)local_478._0_8_;
    if (local_478._0_8_ != local_478._8_8_) goto LAB_006ec722;
    if ((undefined1 *)local_478._0_8_ != (undefined1 *)0x0) goto LAB_006ef619;
    goto LAB_006f095e;
  }
LAB_006ed065:
  *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
LAB_006ed06f:
  uVar16 = 0xffffffff;
  p_Var46 = local_618;
  if (local_648 != 0) {
    uVar16 = local_648;
  }
  goto switchD_006ebb4e_default;
code_r0x006ef684:
  local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
  p_Var19 = local_650;
  bVar12 = (byte)local_638;
LAB_006ef5bd:
  if ((undefined1 *)local_478._0_8_ == (undefined1 *)0x0) {
LAB_006f1eb9:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar16 = local_648;
    p_Var46 = local_618;
    goto switchD_006ebb4e_default;
  }
  puVar45 = (undefined1 *)local_478._0_8_;
  uVar16 = local_648;
  p_Var46 = local_618;
  if ((local_644 & 0x400) != 0) {
    if ((uint)local_658 != 0) {
      p_Var52 = (_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_);
      if (p_Var52 == local_628) goto switchD_006ebb4e_default;
      goto LAB_006f24af;
    }
    if (((_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_) != local_628) && ((bVar12 & 1) == 0))
    goto LAB_006ef609;
    *(undefined8 *)(puVar44 + -8) = 0x6f24fd;
    local_670 = wctrans("to_inpunct");
    if (local_670 == (wctrans_t)0x0) goto LAB_006f25f8;
    if ((int)uVar38 == -1) {
      *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
    }
    else {
      pbVar55 = (byte *)param_1->_IO_read_ptr;
      if (pbVar55 < param_1->_IO_read_end) {
        param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
        uVar38 = (ulong)*pbVar55;
      }
      else {
        *(undefined8 *)(puVar44 + -8) = 0x6f2cf5;
        uVar17 = __uflow(param_1);
        uVar38 = (ulong)uVar17;
        if (uVar17 == 0xffffffff) {
          local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
          goto LAB_006f2535;
        }
      }
      p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
    }
LAB_006f2535:
    p_Var3 = local_670;
    *(undefined8 *)(puVar44 + -8) = 0x6f254d;
    wVar18 = towctrans(0x2e,p_Var3);
    mStack_5b8.__count = 0;
    mStack_5b8.__value = (_union_27)0x0;
    local_638 = (_IO_FILE *)
                CONCAT71(local_638._1_7_,
                         (_IO_FILE *)(local_478._0_8_ - local_468[0]._0_8_) == local_628);
    local_650 = (_IO_FILE *)auStack_48d;
    local_598._44_4_ = wVar18;
    *(undefined8 *)(puVar44 + -8) = 0x6f2595;
    sVar20 = wcrtomb((char *)auStack_48d,wVar18,&mStack_5b8);
    pbVar55 = local_6e0;
    if (sVar20 != 0xffffffffffffffff) {
      auStack_48d[sVar20] = 0;
      *(undefined8 *)(puVar44 + -8) = 0x6f25b3;
      sVar20 = strlen((char *)pbVar55);
      p_Var52 = local_650;
      pbVar55 = local_6e0;
      bVar57 = false;
      if ((byte *)((long)&local_628->_flags + sVar20) ==
          (byte *)(local_478._0_8_ - local_468[0]._0_8_)) {
        *(undefined8 *)(puVar44 + -8) = 0x6f25e6;
        iVar35 = strcmp((char *)pbVar55,(char *)p_Var52);
        bVar57 = iVar35 == 0;
      }
      bVar14 = bVar57 | (byte)local_638;
LAB_006f25f4:
      if (bVar14 != 0) {
        p_Var52 = (_IO_FILE *)0x0;
        local_650 = (_IO_FILE *)CONCAT71(local_650._1_7_,(byte)local_690);
        local_638 = (_IO_FILE *)(local_598 + 0x50);
        local_658 = (_IO_FILE *)local_598;
        local_6f0 = abStack_49e;
        do {
          p_Var3 = local_670;
          pppcStack_700 = (char ***)((long)&local_638->_flags + (long)p_Var52 * 0x11);
          local_6a8 = (_IO_FILE *)CONCAT44(local_6a8._4_4_,(int)p_Var52);
          local_6f8 = p_Var52;
          if (p_Var52 == (_IO_FILE *)0xa) {
            *(undefined8 *)(puVar44 + -8) = 0x6f2892;
            local_598._40_4_ = towctrans(0x2c,p_Var3);
            pppcVar33 = pppcStack_700;
            mStack_5b8.__count = 0;
            mStack_5b8.__value = (_union_27)0x0;
            local_650 = (_IO_FILE *)
                        CONCAT71(local_650._1_7_,(byte)local_650 & local_598._40_4_ != 0);
            wVar18 = *(wchar_t *)&local_658->_IO_write_ptr;
            *(undefined8 *)(puVar44 + -8) = 0x6f28c3;
            sVar20 = wcrtomb((char *)pppcVar33,wVar18,&mStack_5b8);
            pbVar55 = local_688;
            if (sVar20 != 0xffffffffffffffff) goto LAB_006f26d7;
            p_Var52 = local_6f8;
            if ((byte)local_650 != '\0') {
              local_6a8 = local_6f8;
              *(undefined8 *)(puVar44 + -8) = 0x6f28f4;
              sVar20 = strlen((char *)pbVar55);
              p_Var52 = local_6a8;
              if (sVar20 < 0x11) {
                pbVar55 = local_688;
                pbVar54 = local_6f0;
                for (uVar53 = (ulong)((int)sVar20 + 1); uVar53 != 0; uVar53 = uVar53 - 1) {
                  *pbVar54 = *pbVar55;
                  pbVar55 = pbVar55 + (ulong)bVar58 * -2 + 1;
                  pbVar54 = pbVar54 + (ulong)bVar58 * -2 + 1;
                }
              }
              else {
                local_650 = (_IO_FILE *)((ulong)local_650 & 0xffffffffffffff00);
              }
            }
          }
          else {
            *(undefined8 *)(puVar44 + -8) = 0x6f269c;
            wVar18 = towctrans((int)p_Var52 + 0x30,p_Var3);
            pppcVar33 = pppcStack_700;
            mStack_5b8.__count = 0;
            mStack_5b8.__value = (_union_27)0x0;
            (&local_658->_flags)[(long)local_6f8] = wVar18;
            *(undefined8 *)(puVar44 + -8) = 0x6f26c6;
            sVar20 = wcrtomb((char *)pppcVar33,wVar18,&mStack_5b8);
            if (sVar20 == 0xffffffffffffffff) goto LAB_006f25f8;
LAB_006f26d7:
            local_598[sVar20 + (long)(int)local_6a8 * 0x11 + 0x50] = 0;
            p_Var52 = local_6f8;
          }
          p_Var52 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
        } while (p_Var52 != (_IO_FILE *)0xb);
        local_6f8 = (_IO_FILE *)CONCAT44(local_6f8._4_4_,(int)(char)local_618);
LAB_006f270d:
        uVar25 = local_478._0_8_;
        if ((char *)local_478._0_8_ != (char *)0x0) {
          if ((char)local_668 == '\0') {
            if ((local_628 < (_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_)) &&
               ((char)local_618 == *(char *)(local_660[0xe] + (uVar38 & 0xff) * 4))) {
              if (local_478._8_8_ == local_478._0_8_) {
                uVar53 = (ulong)local_6f8 & 0xffffffff;
                bVar12 = 1;
                *(undefined8 *)(puVar44 + -8) = 0x6f2c76;
                char_buffer_add_slow(local_478,uVar53);
                local_668 = (_IO_FILE *)CONCAT71(local_668._1_7_,1);
              }
              else {
                local_668 = (_IO_FILE *)CONCAT71(local_668._1_7_,1);
                bVar12 = 1;
                local_478._0_8_ = (char *)(local_478._0_8_ + 1);
                *(char *)uVar25 = (char)local_618;
              }
              goto LAB_006f29b9;
            }
LAB_006f273a:
            local_670 = (wctrans_t)CONCAT71(local_670._1_7_,bVar12);
            iVar35 = 0x7fffffff;
            if (0 < (int)(uint)local_640) {
              iVar35 = (uint)local_640;
            }
            local_650 = (_IO_FILE *)((ulong)local_650 & 0xffffffff00000000);
            local_6a8 = (_IO_FILE *)CONCAT44(local_6a8._4_4_,iVar35);
            p_Var52 = local_638;
            do {
              local_6f0 = (byte *)((long)p_Var19 - (long)p_Var52);
              iVar35 = (int)local_6a8;
              local_658 = p_Var52;
              while (p_Var19 = (_IO_FILE *)(local_6f0 + (long)&p_Var52->_flags),
                    (uint)(byte)p_Var52->_flags == (uint)uVar38) {
                p_Var52 = (_IO_FILE *)((long)&p_Var52->_flags + 1);
                if ((byte)p_Var52->_flags == 0) {
                  bVar12 = (byte)local_670;
                  goto LAB_006f297b;
                }
                if (iVar35 == 0) {
                  p_Var46 = local_658;
                  if (local_658 < p_Var52) goto LAB_006f2a16;
                  goto LAB_006f2815;
                }
                pbVar55 = (byte *)param_1->_IO_read_ptr;
                if (pbVar55 < param_1->_IO_read_end) {
                  param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
                  uVar38 = (ulong)*pbVar55;
                }
                else {
                  *(undefined8 *)(puVar44 + -8) = 0x6f27e0;
                  uVar17 = __uflow(param_1);
                  uVar38 = (ulong)uVar17;
                  if (uVar17 == 0xffffffff) {
                    local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
                    break;
                  }
                }
                iVar35 = iVar35 + -1;
              }
              if ((byte)p_Var52->_flags == 0) goto LAB_006f2964;
              p_Var46 = local_658;
              if (local_658 < p_Var52) {
                p_Var43 = p_Var52;
                if ((int)uVar38 != -1) {
LAB_006f2a16:
                  p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
                  local_658 = param_1;
                  *(undefined8 *)(puVar44 + -8) = 0x6f2a2d;
                  _IO_sputbackc(param_1,uVar38 & 0xff);
                  p_Var43 = p_Var52;
                  param_1 = local_658;
                }
                while (p_Var52 = (_IO_FILE *)(p_Var52[-1]._unused2 + 0x13), p_Var46 != p_Var52) {
                  iVar35 = p_Var52->_flags;
                  *(undefined8 *)(puVar44 + -8) = 0x6f2944;
                  _IO_sputbackc(param_1,(byte)iVar35);
                }
                uVar38 = (ulong)(byte)p_Var46->_flags;
                p_Var19 = (_IO_FILE *)
                          ((byte *)((long)p_Var19 + (1 - (long)p_Var43)) + (long)p_Var46);
              }
LAB_006f2815:
              iVar35 = (int)local_650 + 1;
              local_650 = (_IO_FILE *)CONCAT44(local_650._4_4_,iVar35);
              p_Var52 = (_IO_FILE *)((long)&p_Var46->_IO_read_end + 1);
            } while (iVar35 != 0xc);
            goto LAB_006f2835;
          }
          if ((*(char *)(local_478._0_8_ + -1) != (char)local_618) ||
             (((int)uVar38 - 0x2bU & 0xfffffffd) != 0)) goto LAB_006f273a;
          if (local_478._8_8_ == local_478._0_8_) {
            *(undefined8 *)(puVar44 + -8) = 0x6f2c59;
            char_buffer_add_slow(local_478,(int)(char)uVar38);
          }
          else {
            local_478._0_8_ = (char *)(local_478._0_8_ + 1);
            *(char *)uVar25 = (char)uVar38;
          }
          goto LAB_006f29b9;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        local_648 = 0xffffffff;
        uVar16 = local_648;
        p_Var46 = local_618;
        goto switchD_006ebb4e_default;
      }
      goto LAB_006f25f8;
    }
    *(undefined8 *)(puVar44 + -8) = 0x6f2ca4;
    sVar20 = strlen((char *)pbVar55);
    if (sVar20 < 0x11) {
      pbVar55 = local_6e0;
      p_Var52 = local_650;
      for (uVar53 = (ulong)((int)sVar20 + 1); uVar53 != 0; uVar53 = uVar53 - 1) {
        *(byte *)&p_Var52->_flags = *pbVar55;
        pbVar55 = pbVar55 + (ulong)bVar58 * -2 + 1;
        p_Var52 = (_IO_FILE *)((long)p_Var52 + (ulong)bVar58 * -2 + 1);
      }
      bVar14 = (byte *)(local_478._0_8_ + -local_468[0]._0_8_) ==
               (byte *)((long)&local_628->_flags + sVar20) | (byte)local_638;
      goto LAB_006f25f4;
    }
    goto LAB_006f25ff;
  }
  p_Var52 = (_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_);
  if (p_Var52 == local_628) goto switchD_006ebb4e_default;
  if ((uint)local_658 != 0) {
LAB_006f24af:
    if ((_IO_FILE *)(long)(char)((byte)local_670 + '\x02') == p_Var52)
    goto switchD_006ebb4e_default;
  }
LAB_006ef609:
  if ((undefined1 *)local_478._8_8_ == puVar45) {
LAB_006ef619:
    lVar36 = (long)puVar45 - local_468[0]._0_8_;
    *(undefined8 *)(puVar44 + -8) = 0x6ef62f;
    cVar13 = __libc_scratch_buffer_grow_preserve(local_468);
    if (cVar13 == '\0') {
      local_478 = (undefined1  [16])0x0;
      goto LAB_006f095e;
    }
    pcVar41 = (char *)(local_468[0]._0_8_ + lVar36);
    local_478._8_8_ = (char *)(local_468[0]._0_8_ + (long)local_468[0]._IO_read_ptr);
    local_478._0_8_ = pcVar41 + 1;
    *pcVar41 = '\0';
  }
  else {
LAB_006ec722:
    local_478._0_8_ = puVar45 + 1;
    *puVar45 = 0;
  }
  uVar25 = local_468[0]._0_8_;
  if (local_478._0_8_ == 0) {
LAB_006f095e:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar16 = local_648;
    p_Var46 = local_618;
    goto switchD_006ebb4e_default;
  }
  uVar17 = local_644 & 0x80;
  uVar16 = local_644 & 8;
  if ((local_644 & 2) == 0) {
LAB_006ef893:
    if ((local_644 & 3) == 0) {
      *(undefined8 *)(puVar44 + -8) = 0x6f0980;
      uVar59 = __strtof_internal(uVar25,&local_5f0);
      Var4 = in_ST0;
      Var5 = in_ST1;
      Var6 = in_ST2;
      Var7 = in_ST3;
      Var8 = in_ST4;
      Var9 = in_ST5;
      Var10 = in_ST6;
      if (uVar16 == 0) {
        uVar16 = local_648;
        p_Var46 = local_618;
        if (local_5f0 == (char ***)local_468[0]._0_8_) goto switchD_006ebb4e_default;
        if (local_694 == 0) {
          if ((uint)local_5b0 < 0x30) {
            uVar53 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar53 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          puVar30 = (undefined4 *)*plVar22;
        }
        else {
          local_618 = (_IO_FILE *)*local_6d0;
          plStack_610 = (long *)local_6d0[1];
          local_538 = (_IO_marker *)local_6d0[2];
          local_598._80_4_ = SUB84(local_618,0);
          iVar35 = local_694 + -1;
          uVar17 = local_598._80_4_;
          p_Var52 = local_618;
          plStack_540 = plStack_610;
          if (iVar35 != 0) {
            bVar57 = false;
LAB_006f2254:
            if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f2259;
            plStack_540 = plStack_610 + 1;
            if (iVar35 != 1) {
              plVar22 = plStack_610 + 2;
              do {
                plStack_540 = plVar22;
                plVar22 = plStack_540 + 1;
              } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
            }
            p_Var52 = local_618;
            if (bVar57) {
LAB_006f2289:
              uStack_544 = (undefined4)((ulong)local_618 >> 0x20);
              uVar17 = local_598._80_4_;
              p_Var52 = stack0xfffffffffffffab8;
            }
          }
          stack0xfffffffffffffab8 = p_Var52;
          if (uVar17 < 0x30) {
            stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
            plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
          }
          else {
            plVar22 = plStack_540;
            plStack_540 = plStack_540 + 1;
          }
          puVar30 = (undefined4 *)*plVar22;
        }
        *puVar30 = uVar59;
        goto LAB_006ec7e0;
      }
    }
    else {
      *(undefined8 *)(puVar44 + -8) = 0x6ef8ac;
      uVar25 = __strtod_internal();
      Var4 = in_ST0;
      Var5 = in_ST1;
      Var6 = in_ST2;
      Var7 = in_ST3;
      Var8 = in_ST4;
      Var9 = in_ST5;
      Var10 = in_ST6;
      if (uVar16 == 0) {
        uVar16 = local_648;
        p_Var46 = local_618;
        if (local_5f0 == (char ***)local_468[0]._0_8_) goto switchD_006ebb4e_default;
        if (local_694 == 0) {
          if ((uint)local_5b0 < 0x30) {
            uVar53 = local_5b0 & 0xffffffff;
            local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
            plVar22 = (long *)(uVar53 + local_5a0);
          }
          else {
            plVar22 = plStack_5a8;
            plStack_5a8 = plStack_5a8 + 1;
          }
          puVar28 = (undefined8 *)*plVar22;
        }
        else {
          local_618 = (_IO_FILE *)*local_6d0;
          plStack_610 = (long *)local_6d0[1];
          local_538 = (_IO_marker *)local_6d0[2];
          local_598._80_4_ = SUB84(local_618,0);
          iVar35 = local_694 + -1;
          uVar17 = local_598._80_4_;
          p_Var52 = local_618;
          plStack_540 = plStack_610;
          if (iVar35 != 0) {
            bVar57 = false;
LAB_006f20ee:
            if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f20f3;
            plStack_540 = plStack_610 + 1;
            if (iVar35 != 1) {
              plVar22 = plStack_610 + 2;
              do {
                plStack_540 = plVar22;
                plVar22 = plStack_540 + 1;
              } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
            }
            p_Var52 = local_618;
            if (bVar57) {
LAB_006f211c:
              uStack_544 = (undefined4)((ulong)local_618 >> 0x20);
              uVar17 = local_598._80_4_;
              p_Var52 = stack0xfffffffffffffab8;
            }
          }
          stack0xfffffffffffffab8 = p_Var52;
          if (uVar17 < 0x30) {
            stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
            plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
          }
          else {
            plVar22 = plStack_540;
            plStack_540 = plStack_540 + 1;
          }
          puVar28 = (undefined8 *)*plVar22;
        }
        *puVar28 = uVar25;
LAB_006ec7e0:
        uVar16 = local_648;
        p_Var46 = local_618;
        if (local_5f0 == (char ***)local_468[0]._0_8_) goto switchD_006ebb4e_default;
        local_648 = local_648 + 1;
        local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
        p_Var43 = local_620;
        goto LAB_006eb6fe;
      }
    }
  }
  else if (local_6e4 == 0) {
    if (local_6e8 == 0) goto LAB_006ef893;
    *(undefined8 *)(puVar44 + -8) = 0x6ec788;
    __strtold_internal(uVar25,&local_5f0);
    Var4 = in_ST1;
    Var5 = in_ST2;
    Var6 = in_ST3;
    Var7 = in_ST4;
    Var8 = in_ST5;
    Var9 = in_ST6;
    Var10 = in_ST7;
    if (uVar16 == 0) {
      uVar16 = local_648;
      p_Var46 = local_618;
      if (local_5f0 == (char ***)local_468[0]._0_8_) goto switchD_006ebb4e_default;
      if (local_694 == 0) {
        if ((uint)local_5b0 < 0x30) {
          uVar53 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar53 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        pVar23 = (unkbyte10 *)*plVar22;
      }
      else {
        local_618 = (_IO_FILE *)*local_6d0;
        plStack_610 = (long *)local_6d0[1];
        local_538 = (_IO_marker *)local_6d0[2];
        local_598._80_4_ = SUB84(local_618,0);
        iVar35 = local_694 + -1;
        uVar17 = local_598._80_4_;
        p_Var52 = local_618;
        plStack_540 = plStack_610;
        if (iVar35 != 0) {
          bVar57 = false;
LAB_006f2ed1:
          if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f2ed6;
          plStack_540 = plStack_610 + 1;
          if (iVar35 != 1) {
            plVar22 = plStack_610 + 2;
            do {
              plStack_540 = plVar22;
              plVar22 = plStack_540 + 1;
            } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
          }
          p_Var52 = local_618;
          if (bVar57) {
LAB_006f2eff:
            uStack_544 = (undefined4)((ulong)local_618 >> 0x20);
            uVar17 = local_598._80_4_;
            p_Var52 = stack0xfffffffffffffab8;
          }
        }
        stack0xfffffffffffffab8 = p_Var52;
        if (uVar17 < 0x30) {
          stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
          plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        pVar23 = (unkbyte10 *)*plVar22;
      }
      *pVar23 = in_ST0;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
      in_ST4 = in_ST5;
      in_ST5 = in_ST6;
      in_ST6 = in_ST7;
      goto LAB_006ec7e0;
    }
  }
  else {
    *(undefined8 *)(puVar44 + -8) = 0x6f0f58;
    uVar25 = __strtof128_internal(uVar25,&local_5f0,uVar17);
    Var4 = in_ST0;
    Var5 = in_ST1;
    Var6 = in_ST2;
    Var7 = in_ST3;
    Var8 = in_ST4;
    Var9 = in_ST5;
    Var10 = in_ST6;
    if (uVar16 == 0) {
      uVar16 = local_648;
      p_Var46 = local_618;
      if (local_5f0 == (char ***)local_468[0]._0_8_) goto switchD_006ebb4e_default;
      if (local_694 == 0) {
        if ((uint)local_5b0 < 0x30) {
          uVar53 = local_5b0 & 0xffffffff;
          local_5b0 = CONCAT44(local_5b0._4_4_,(uint)local_5b0 + 8);
          plVar22 = (long *)(uVar53 + local_5a0);
        }
        else {
          plVar22 = plStack_5a8;
          plStack_5a8 = plStack_5a8 + 1;
        }
        puVar28 = (undefined8 *)*plVar22;
      }
      else {
        local_618 = (_IO_FILE *)*local_6d0;
        plStack_610 = (long *)local_6d0[1];
        local_538 = (_IO_marker *)local_6d0[2];
        local_598._80_4_ = SUB84(local_618,0);
        iVar35 = local_694 + -1;
        uVar17 = local_598._80_4_;
        p_Var52 = local_618;
        plStack_540 = plStack_610;
        if (iVar35 != 0) {
          bVar57 = false;
LAB_006f2015:
          if ((uint)local_598._80_4_ < 0x30) goto code_r0x006f201a;
          plStack_540 = plStack_610 + 1;
          if (iVar35 != 1) {
            plVar22 = plStack_610 + 2;
            do {
              plStack_540 = plVar22;
              plVar22 = plStack_540 + 1;
            } while (plStack_540 + 1 != plStack_610 + (ulong)(iVar35 - 2) + 3);
          }
          p_Var52 = local_618;
          if (!bVar57) goto LAB_006f2030;
LAB_006f2028:
          uStack_544 = (undefined4)((ulong)local_618 >> 0x20);
          uVar17 = local_598._80_4_;
          p_Var52 = stack0xfffffffffffffab8;
        }
LAB_006f2030:
        stack0xfffffffffffffab8 = p_Var52;
        if (uVar17 < 0x30) {
          stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
          plVar22 = (long *)((long)&local_538->_next + (ulong)uVar17);
        }
        else {
          plVar22 = plStack_540;
          plStack_540 = plStack_540 + 1;
        }
        puVar28 = (undefined8 *)*plVar22;
      }
      *puVar28 = uVar25;
      puVar28[1] = extraout_XMM0_Qb;
      goto LAB_006ec7e0;
    }
  }
  in_ST6 = Var10;
  in_ST5 = Var9;
  in_ST4 = Var8;
  in_ST3 = Var7;
  in_ST2 = Var6;
  in_ST1 = Var5;
  in_ST0 = Var4;
  uVar16 = local_648;
  p_Var46 = local_618;
  if ((char ***)local_468[0]._0_8_ == local_5f0) goto switchD_006ebb4e_default;
LAB_006ed3d8:
  local_618 = (_IO_FILE *)((ulong)local_618 & 0xffffffff00000000);
  p_Var43 = local_620;
LAB_006eb6fe:
  local_620 = p_Var43;
  plVar22 = local_660;
  bVar12 = (byte)local_620->_flags;
  p_Var52 = p_Var19;
  if (bVar12 == 0) goto code_r0x006eb710;
  goto LAB_006eb673;
LAB_006f2964:
  bVar12 = (byte)local_670;
LAB_006f297b:
  if ((int)(uint)local_640 < 1) {
    iVar35 = (uint)local_640;
  }
  local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,iVar35);
  if ((int)local_650 < 10) {
    uVar25 = local_478._0_8_;
    uVar17 = (int)local_650 + 0x30;
    if (local_478._0_8_ == local_478._8_8_) {
      *(undefined8 *)(puVar44 + -8) = 0x6f2aa7;
      char_buffer_add_slow(local_478,uVar17 & 0xff);
    }
    else {
      local_478._0_8_ = (undefined1 *)(local_478._0_8_ + 1);
      *(char *)uVar25 = (char)uVar17;
    }
  }
  else if (((int)local_650 == 0xb) && ((bVar12 & 1) == 0)) {
    for (pbVar55 = local_6e0; bVar12 = *pbVar55, bVar12 != 0; pbVar55 = pbVar55 + 1) {
      uVar25 = local_478._0_8_;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar44 + -8) = 0x6f2b85;
        char_buffer_add_slow(local_478,(int)(char)bVar12);
      }
      else {
        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
        *(byte *)uVar25 = bVar12;
      }
    }
    bVar12 = 1;
  }
  else {
    if ((((byte)local_690 & (bVar12 ^ 1)) == 0) || ((int)local_650 != 10)) {
LAB_006f2835:
      if ((int)uVar38 == -1) goto LAB_006f25f8;
      p_Var19 = (_IO_FILE *)(p_Var19[-1]._unused2 + 0x13);
      *(undefined8 *)(puVar44 + -8) = 0x6f284f;
      _IO_sputbackc(param_1,uVar38 & 0xff);
      goto LAB_006f25ff;
    }
    local_650 = param_1;
    for (pbVar55 = local_688; bVar12 = *pbVar55, bVar12 != 0; pbVar55 = pbVar55 + 1) {
      uVar25 = local_478._0_8_;
      if (local_478._0_8_ == local_478._8_8_) {
        *(undefined8 *)(puVar44 + -8) = 0x6f2b78;
        char_buffer_add_slow(local_478,(int)(char)bVar12);
      }
      else {
        local_478._0_8_ = (byte *)(local_478._0_8_ + 1);
        *(byte *)uVar25 = bVar12;
      }
    }
    bVar12 = 0;
    param_1 = local_650;
  }
LAB_006f29b9:
  if ((uint)local_640 == 0) goto LAB_006f25f8;
  if ((int)uVar38 == -1) {
    *(int *)(in_FS_OFFSET + -0x58) = (int)local_608;
    goto LAB_006f25ff;
  }
  pbVar55 = (byte *)param_1->_IO_read_ptr;
  if (pbVar55 < param_1->_IO_read_end) {
    param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
    uVar38 = (ulong)*pbVar55;
  }
  else {
    *(undefined8 *)(puVar44 + -8) = 0x6f2a5d;
    uVar17 = __uflow(param_1);
    uVar38 = (ulong)uVar17;
    if (uVar17 == 0xffffffff) goto code_r0x006f2a65;
  }
  p_Var19 = (_IO_FILE *)((long)&p_Var19->_flags + 1);
  if (0 < (int)(uint)local_640) {
    local_640 = (_IO_FILE *)CONCAT44(local_640._4_4_,(uint)local_640 + -1);
  }
  goto LAB_006f270d;
code_r0x006f2a65:
  local_608 = CONCAT44(local_608._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
LAB_006f25f8:
LAB_006f25ff:
  p_Var46 = local_618;
  if ((undefined1 *)local_478._0_8_ == (undefined1 *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    local_648 = 0xffffffff;
    uVar16 = local_648;
    goto switchD_006ebb4e_default;
  }
  puVar45 = (undefined1 *)local_478._0_8_;
  uVar16 = local_648;
  if ((_IO_FILE *)(local_478._0_8_ + -local_468[0]._0_8_) == local_628)
  goto switchD_006ebb4e_default;
  goto LAB_006ef609;
code_r0x006f201a:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f2028;
  goto LAB_006f2015;
code_r0x006f2ed6:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f2eff;
  goto LAB_006f2ed1;
code_r0x006f2259:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f2289;
  goto LAB_006f2254;
code_r0x006f20f3:
  local_598._80_4_ = local_598._80_4_ + 8;
  bVar57 = true;
  iVar35 = iVar35 + -1;
  if (iVar35 == 0) goto LAB_006f211c;
  goto LAB_006f20ee;
  while( true ) {
    uVar16 = uVar16 + 8;
    uVar38 = (ulong)uVar16;
    bVar57 = true;
    iVar35 = iVar35 + -1;
    if (iVar35 == 0) break;
LAB_006f071a:
    uVar16 = (uint)uVar38;
    if (0x2f < uVar16) {
      plStack_540 = (long *)((long)plStack_630 + 8);
      if (iVar35 != 1) {
        pcVar41 = (char *)((long)plStack_630 + 0x10);
        do {
          pcVar40 = pcVar41;
          pcVar41 = pcVar40 + 8;
        } while ((char *)((long)plStack_630 + (ulong)(iVar35 - 2) * 8 + 0x18) != pcVar41);
        unique0x100080ac = local_638;
        plStack_540 = plStack_630;
        uVar38 = FUN_006f073d(pcVar40);
        return uVar38;
      }
      pcVar41 = (char *)local_638;
      if (!bVar57) goto LAB_006f0751;
      break;
    }
  }
  uStack_544 = (undefined4)((ulong)local_638 >> 0x20);
  stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar16);
  uVar17 = uVar16;
  pcVar41 = (char *)stack0xfffffffffffffab8;
LAB_006f0751:
  stack0xfffffffffffffab8 = (_IO_FILE *)pcVar41;
  if (uVar17 < 0x30) {
    stack0xfffffffffffffab8 = (_IO_FILE *)CONCAT44(uStack_544,uVar17 + 8);
    local_678 = (long *)((long)&local_538->_next + (ulong)uVar17);
  }
  else {
    local_678 = plStack_540;
    plStack_540 = (long *)((long)plStack_540 + 8);
  }
  local_678 = (long *)*local_678;
  uVar38 = FUN_006ee571();
  return uVar38;
code_r0x006eb710:
  uVar16 = local_648;
  p_Var46 = local_618;
  if ((uint)local_618 != 0) {
    uVar59 = (int)local_608;
    do {
      if ((int)uVar38 == -1) {
        lVar36 = -2;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar59;
      }
      else {
        pbVar55 = (byte *)param_1->_IO_read_ptr;
        if (pbVar55 < param_1->_IO_read_end) {
          param_1->_IO_read_ptr = (char *)(pbVar55 + 1);
          uVar38 = (ulong)*pbVar55;
          lVar36 = uVar38 * 2;
        }
        else {
          *(undefined8 *)(puVar44 + -8) = 0x6edcd8;
          uVar17 = __uflow(param_1);
          uVar38 = (ulong)uVar17;
          if (uVar17 == 0xffffffff) {
            lVar36 = -2;
            uVar59 = *(undefined4 *)(in_FS_OFFSET + -0x58);
          }
          else {
            lVar36 = (long)(int)uVar17 * 2;
          }
        }
      }
    } while ((*(ushort *)(plVar22[0xd] + lVar36) & 0x2000) != 0);
    uVar16 = local_648;
    p_Var46 = local_618;
    if ((int)uVar38 != -1) {
      *(undefined8 *)(puVar44 + -8) = 0x6ee236;
      _IO_sputbackc(param_1,uVar38 & 0xff);
      uVar16 = local_648;
      p_Var46 = local_618;
    }
  }
switchD_006ebb4e_default:
  local_618 = p_Var46;
  local_648 = uVar16;
  if ((param_1->_flags & 0x8000U) == 0) {
    piVar48 = (int *)param_1->_lock;
    iVar35 = piVar48[1];
    piVar48[1] = iVar35 + -1;
    if (iVar35 + -1 == 0) {
      piVar48[2] = 0;
      piVar48[3] = 0;
      LOCK();
      iVar35 = *piVar48;
      *piVar48 = 0;
      UNLOCK();
      if (1 < iVar35) {
        *(undefined8 *)(puVar44 + -8) = 0x6ee446;
        __lll_lock_wake_private();
      }
    }
  }
  ppcVar1 = local_6b8;
  *(undefined8 *)(puVar44 + -8) = 0x6ebc02;
  __libc_cleanup_pop_restore(ppcVar1);
  uVar25 = local_468[0]._0_8_;
  if ((char ***)local_468[0]._0_8_ != local_6b0) {
    *(undefined8 *)(puVar44 + -8) = 0x6ebc17;
    free((void *)uVar25);
  }
  plVar22 = local_678;
  if (local_648 != 0xffffffff) {
    puVar31 = puVar44;
    if (local_678 != (long *)0x0) {
      pvVar26 = (void *)*local_678;
      *(undefined8 *)(puVar44 + -8) = 0x6ec431;
      free(pvVar26);
      *plVar22 = 0;
    }
    goto LAB_006ebc32;
  }
  local_648 = 0xffffffff;
  for (puVar29 = local_6d8; puVar45 = puVar44, puVar29 != (ulong *)0x0;
      puVar29 = (ulong *)puVar29[1]) {
    uVar38 = 0;
    if (*puVar29 != 0) {
      do {
        pvVar26 = *(void **)puVar29[uVar38 + 2];
        *(undefined8 *)(puVar44 + -8) = 0x6ec3fd;
        free(pvVar26);
        lVar36 = uVar38 + 2;
        uVar38 = uVar38 + 1;
        *(undefined8 *)puVar29[lVar36] = 0;
      } while (uVar38 < *puVar29);
    }
  }
LAB_006eb8c1:
  local_648 = 0xffffffff;
  puVar31 = puVar45;
LAB_006ebc32:
  if (local_40 == *(char **)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_648;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar31 + -8) = 0x6f21d6;
  __stack_chk_fail_local();
}

