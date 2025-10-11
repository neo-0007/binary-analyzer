
/* WARNING: Removing unreachable block (ram,0x006ee66e) */
/* WARNING: Removing unreachable block (ram,0x006f0243) */
/* WARNING: Removing unreachable block (ram,0x006ee5b8) */
/* WARNING: Removing unreachable block (ram,0x006efe19) */
/* WARNING: Removing unreachable block (ram,0x006f0139) */
/* WARNING: Removing unreachable block (ram,0x006f014e) */
/* WARNING: Removing unreachable block (ram,0x006ee613) */

ulong FUN_006ee571(void)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  mbstate_t *pmVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  unkbyte10 Var9;
  unkbyte10 Var10;
  unkbyte10 Var11;
  unkbyte10 Var12;
  unkbyte10 Var13;
  unkbyte10 Var14;
  unkbyte10 Var15;
  byte bVar16;
  char cVar17;
  char cVar18;
  byte bVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  wchar_t wVar23;
  wint_t wVar24;
  byte *pbVar25;
  unkbyte10 *pVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  wctrans_t p_Var29;
  char *pcVar30;
  void *pvVar31;
  size_t sVar32;
  undefined2 *puVar33;
  long lVar34;
  char *pcVar35;
  undefined4 *puVar36;
  undefined1 *puVar37;
  long *plVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  byte *pbVar42;
  long lVar43;
  uint unaff_EBX;
  byte *pbVar44;
  wchar_t *pwVar45;
  ulong uVar46;
  size_t sVar47;
  long unaff_RBP;
  uint uVar48;
  undefined1 *puVar49;
  long lVar50;
  long lVar51;
  byte *unaff_R12;
  undefined1 *puVar52;
  ulong unaff_R13;
  byte *pbVar53;
  char *pcVar54;
  int iVar55;
  int iVar56;
  undefined8 *unaff_R14;
  undefined1 uVar57;
  _IO_FILE *unaff_R15;
  byte *pbVar58;
  long in_FS_OFFSET;
  bool bVar59;
  byte bVar60;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 uVar61;
  undefined8 extraout_XMM0_Qb;
  
  bVar60 = 0;
code_r0x006ee571:
  if (unaff_R14 != (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee584;
    pvVar31 = malloc(100);
    *(void **)(unaff_RBP + -0x6c0) = pvVar31;
    *unaff_R14 = pvVar31;
    if (pvVar31 != (void *)0x0) {
      if ((*(long **)(unaff_RBP + -0x6d0) != (long *)0x0) &&
         (lVar50 = **(long **)(unaff_RBP + -0x6d0), lVar50 != 0x20)) goto LAB_006ecf1c;
LAB_006ee5cd:
      *(undefined8 *)((long)register0x00000020 + -8) =
           *(undefined8 *)((long)register0x00000020 + -8);
      lVar43 = 1;
      uVar27 = *(undefined8 *)(unaff_RBP + -0x6d0);
      *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x118) = uVar27;
      *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120);
      lVar50 = 0;
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x120);
LAB_006ecf20:
      plVar38 = *(long **)(unaff_RBP + -0x6d0);
      lVar34 = *(long *)(unaff_RBP + -0x670);
      *plVar38 = lVar43;
      plVar38[lVar50 + 2] = lVar34;
      *(undefined8 *)(unaff_RBP + -0x698) = 100;
LAB_006ecf41:
      bVar16 = unaff_R12[1];
      *(undefined1 *)(unaff_RBP + -0x648) = 0;
      if (bVar16 == 0x5e) {
        *(undefined1 *)(unaff_RBP + -0x648) = 1;
        *(byte **)(unaff_RBP + -0x618) = unaff_R12 + 2;
      }
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ecf79;
      cVar17 = __libc_scratch_buffer_set_array_size(unaff_RBP + -0x460,0x100,1);
      if (cVar17 == '\0') {
        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        goto switchD_006ebb4e_default;
      }
      puVar28 = *(undefined8 **)(unaff_RBP + -0x460);
      *puVar28 = 0;
      puVar28[0x1f] = 0;
      uVar40 = (ulong)(((int)puVar28 -
                       (int)(undefined8 *)((ulong)(puVar28 + 1) & 0xfffffffffffffff8)) + 0x100U >> 3
                      );
      puVar28 = (undefined8 *)((ulong)(puVar28 + 1) & 0xfffffffffffffff8);
      for (; uVar40 != 0; uVar40 = uVar40 - 1) {
        *puVar28 = 0;
        puVar28 = puVar28 + (ulong)bVar60 * -2 + 1;
      }
      bVar16 = **(byte **)(unaff_RBP + -0x618);
      uVar40 = (ulong)bVar16;
      if ((bVar16 == 0x5d) || (bVar16 == 0x2d)) {
        lVar50 = *(long *)(unaff_RBP + -0x618);
        *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar40) = 1;
        uVar40 = (ulong)*(byte *)(lVar50 + 1);
        *(long *)(unaff_RBP + -0x618) = lVar50 + 1;
      }
      pbVar58 = *(byte **)(unaff_RBP + -0x618);
      if ((char)uVar40 == '\0') {
        uVar40 = FUN_006f03e5();
        return uVar40;
      }
      while( true ) {
        pbVar42 = pbVar58 + 1;
        if ((char)uVar40 == ']') break;
        if (((((char)uVar40 == '-') && (bVar16 = *pbVar42, bVar16 != 0)) && (bVar16 != 0x5d)) &&
           (bVar19 = pbVar58[-1], bVar19 <= bVar16)) {
          if (bVar19 < bVar16) {
            do {
              uVar40 = (ulong)bVar19;
              bVar19 = bVar19 + 1;
              *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar40) = 1;
              bVar16 = *pbVar42;
            } while (bVar19 < bVar16);
            goto LAB_006ecff6;
          }
        }
        else {
          *(undefined1 *)(*(long *)(unaff_RBP + -0x460) + uVar40) = 1;
          bVar16 = *pbVar42;
LAB_006ecff6:
          if (bVar16 == 0) goto switchD_006ebb4e_default;
        }
        uVar40 = (ulong)bVar16;
        pbVar58 = pbVar42;
      }
      *(byte **)(unaff_RBP + -0x618) = pbVar42;
      if (*(int *)(unaff_RBP + -0x610) != 0) {
        if ((int)unaff_R13 != -1) {
          pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
          if (pbVar58 < unaff_R15->_IO_read_end) {
            unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
            unaff_R13 = (ulong)*pbVar58;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0561;
            uVar22 = __uflow(unaff_R15);
            unaff_R13 = (ulong)uVar22;
            if (uVar22 == 0xffffffff) goto LAB_006efd6e;
          }
          pbVar58 = *(byte **)(unaff_RBP + -0x620);
          *(undefined8 *)(unaff_RBP + -0x540) = 0;
          *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
          if (*(char *)(unaff_RBP + -0x648) !=
              *(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13)) {
            *(uint *)(unaff_RBP + -0x610) = unaff_EBX;
            *(undefined8 *)(unaff_RBP + -0x650) = 0;
            pwVar45 = *(wchar_t **)(unaff_RBP + -0x6b8);
            iVar56 = *(int *)(unaff_RBP + -0x638);
            *(uint *)(unaff_RBP + -0x668) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
            *(long *)(unaff_RBP + -0x660) = unaff_RBP + -0x50;
LAB_006ee8a1:
            pbVar58 = pbVar58 + 1;
            if (*(int *)(unaff_RBP + -0x610) == 0) {
              pmVar4 = *(mbstate_t **)(unaff_RBP + -0x630);
              *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
              pcVar54 = *(char **)(unaff_RBP + -0x660);
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee8ca;
              sVar32 = mbrtowc(pwVar45,pcVar54,1,pmVar4);
              if (sVar32 == 0xfffffffffffffffe) {
                *(long *)(unaff_RBP + -0x650) = *(long *)(unaff_RBP + -0x650) + 1;
                if (0xf < *(ulong *)(unaff_RBP + -0x650)) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)((long)register0x00000020 + -8) = &UNK_006eea0a;
                  __assert_fail("cnt < MB_LEN_MAX","vfscanf-internal.c",0xa77,"__vfscanf_internal");
                }
                goto LAB_006ee862;
              }
              pwVar45 = pwVar45 + 1;
              if (*(int *)(unaff_RBP + -0x668) == 0) {
                *(undefined8 *)(unaff_RBP + -0x650) = 0;
              }
              else {
                *(undefined8 *)(unaff_RBP + -0x650) = 0;
                pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
                lVar50 = *(long *)(unaff_RBP + -0x698) * 4;
                if (pwVar45 == (wchar_t *)((long)pvVar31 + lVar50)) {
                  lVar43 = *(long *)(unaff_RBP + -0x698);
                  *(long *)(unaff_RBP + -0x638) = lVar50;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee932;
                  pvVar31 = realloc(pvVar31,lVar43 * 8);
                  lVar50 = *(long *)(unaff_RBP + -0x638);
                  if (pvVar31 != (void *)0x0) {
                    *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) << 1;
                    **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
                    pwVar45 = (wchar_t *)((long)pvVar31 + lVar50);
                    goto code_r0x006ee850;
                  }
                  *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                  pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1be6;
                  pvVar31 = realloc(pvVar31,lVar50 + 4);
                  if (pvVar31 != (void *)0x0) {
                    **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
                    uVar40 = FUN_006ee850();
                    return uVar40;
                  }
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                    plVar38 = *(long **)(unaff_RBP + -0x670);
                    *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                    *(undefined8 *)(unaff_RBP + -0x670) = 0;
                    *(undefined4 *)(*plVar38 + -4 + *(long *)(unaff_RBP + -0x638)) = 0;
                  }
                  else {
                    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                  }
                  goto switchD_006ebb4e_default;
                }
              }
            }
code_r0x006ee850:
            if ((-1 < iVar56) && (iVar56 = iVar56 + -1, iVar56 < 1)) {
              *(wchar_t **)(unaff_RBP + -0x6b8) = pwVar45;
              unaff_EBX = *(uint *)(unaff_RBP + -0x610);
              lVar50 = *(long *)(unaff_RBP + -0x650);
              goto LAB_006ee99f;
            }
LAB_006ee862:
            pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar42 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
              unaff_R13 = (ulong)*pbVar42;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee968;
              uVar22 = __uflow(unaff_R15);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) {
                *(wchar_t **)(unaff_RBP + -0x6b8) = pwVar45;
                unaff_EBX = *(uint *)(unaff_RBP + -0x610);
                lVar50 = *(long *)(unaff_RBP + -0x650);
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                goto LAB_006ee99f;
              }
            }
            if (*(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13) ==
                *(char *)(unaff_RBP + -0x648)) goto LAB_006f0210;
            goto LAB_006ee8a1;
          }
          pbVar58 = *(byte **)(unaff_RBP + -0x620);
          lVar50 = 0;
          goto LAB_006f022a;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006efd6e:
        iVar56 = -1;
        if (*(int *)(unaff_RBP + -0x640) != 0) {
          iVar56 = *(int *)(unaff_RBP + -0x640);
        }
        *(int *)(unaff_RBP + -0x640) = iVar56;
        goto switchD_006ebb4e_default;
      }
      if ((int)unaff_R13 != -1) {
        pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
        if (pbVar58 < unaff_R15->_IO_read_end) {
          unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
          unaff_R13 = (ulong)*pbVar58;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f034b;
          uVar22 = __uflow(unaff_R15);
          unaff_R13 = (ulong)uVar22;
          if (uVar22 == 0xffffffff) goto LAB_006effa8;
        }
        pbVar58 = *(byte **)(unaff_RBP + -0x620);
        if (*(char *)(unaff_RBP + -0x648) ==
            *(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13)) {
          pbVar58 = *(byte **)(unaff_RBP + -0x620);
          goto LAB_006f0332;
        }
        puVar52 = *(undefined1 **)(unaff_RBP + -0x6c0);
        *(uint *)(unaff_RBP + -0x630) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
        iVar56 = *(int *)(unaff_RBP + -0x638);
        goto LAB_006eeaf2;
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006effa8:
      iVar56 = -1;
      if (*(int *)(unaff_RBP + -0x640) != 0) {
        iVar56 = *(int *)(unaff_RBP + -0x640);
      }
      *(int *)(unaff_RBP + -0x640) = iVar56;
      goto switchD_006ebb4e_default;
    }
    uVar61 = 0xffffffff;
    if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
      uVar61 = *(undefined4 *)(unaff_RBP + -0x640);
    }
    *(undefined4 *)(unaff_RBP + -0x640) = uVar61;
  }
  goto switchD_006ebb4e_default;
LAB_006f0210:
  *(wchar_t **)(unaff_RBP + -0x6b8) = pwVar45;
  unaff_EBX = *(uint *)(unaff_RBP + -0x610);
  lVar50 = *(long *)(unaff_RBP + -0x650);
LAB_006f022a:
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0236;
  _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
LAB_006ee99f:
  if (lVar50 == 0) {
    if (pbVar58 != *(byte **)(unaff_RBP + -0x620)) {
      if (unaff_EBX != 0) goto LAB_006ed3d8;
LAB_006ee32d:
      puVar36 = *(undefined4 **)(unaff_RBP + -0x6b8);
      *puVar36 = 0;
      puVar36 = puVar36 + 1;
      if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
        puVar28 = *(undefined8 **)(unaff_RBP + -0x670);
        pvVar31 = (void *)*puVar28;
        sVar32 = (long)puVar36 - (long)pvVar31;
        if ((long)sVar32 >> 2 != *(long *)(unaff_RBP + -0x698)) {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee370;
          pvVar31 = realloc(pvVar31,sVar32);
          if (pvVar31 != (void *)0x0) {
            *puVar28 = pvVar31;
          }
        }
      }
      *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
      *(undefined4 **)(unaff_RBP + -0x6b8) = puVar36;
      *(undefined8 *)(unaff_RBP + -0x670) = 0;
LAB_006ed3d8:
      *(undefined4 *)(unaff_RBP + -0x610) = 0;
LAB_006eb6fe:
      do {
        bVar16 = **(byte **)(unaff_RBP + -0x618);
        uVar22 = (uint)unaff_R13;
        if (bVar16 == 0) {
          if (*(int *)(unaff_RBP + -0x610) != 0) {
            lVar50 = *(long *)(unaff_RBP + -0x658);
            uVar61 = *(undefined4 *)(unaff_RBP + -0x600);
            do {
              if ((int)unaff_R13 == -1) {
                lVar43 = -2;
                *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar61;
              }
              else {
                pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
                if (pbVar58 < unaff_R15->_IO_read_end) {
                  unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
                  unaff_R13 = (ulong)*pbVar58;
                  lVar43 = unaff_R13 * 2;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6edcd8;
                  uVar22 = __uflow(unaff_R15);
                  unaff_R13 = (ulong)uVar22;
                  if (uVar22 == 0xffffffff) {
                    lVar43 = -2;
                    uVar61 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                  }
                  else {
                    lVar43 = (long)(int)uVar22 * 2;
                  }
                }
              }
            } while ((*(ushort *)(*(long *)(lVar50 + 0x68) + lVar43) & 0x2000) != 0);
            if ((int)unaff_R13 != -1) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee236;
              _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
            }
          }
          break;
        }
        if ((bVar16 & 0x80) == 0) {
          lVar50 = *(long *)(unaff_RBP + -0x618);
joined_r0x006eb68a:
          unaff_R12 = (byte *)(lVar50 + 1);
          if (bVar16 != 0x25) {
            if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 + (ulong)bVar16 * 2)
                & 0x20) == 0) {
              if (uVar22 == 0xffffffff) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006ebc93:
                iVar56 = -1;
                if (*(int *)(unaff_RBP + -0x640) != 0) {
                  iVar56 = *(int *)(unaff_RBP + -0x640);
                }
                *(int *)(unaff_RBP + -0x640) = iVar56;
                break;
              }
              pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
              if (pbVar42 < unaff_R15->_IO_read_end) {
                unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                unaff_R13 = (ulong)*pbVar42;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6ebdd0;
                uVar22 = __uflow(unaff_R15);
                unaff_R13 = (ulong)uVar22;
                if (uVar22 == 0xffffffff) goto LAB_006ebc93;
              }
              pbVar58 = pbVar58 + 1;
              if (*(int *)(unaff_RBP + -0x610) != 0) {
                lVar50 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x68);
                bVar19 = *(byte *)(lVar50 + 1 + (long)(int)unaff_R13 * 2);
                while ((bVar19 & 0x20) != 0) {
                  pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                  if (pbVar42 < unaff_R15->_IO_read_end) {
                    unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                    unaff_R13 = (ulong)*pbVar42;
                  }
                  else {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ebd70;
                    uVar22 = __uflow(unaff_R15);
                    unaff_R13 = (ulong)uVar22;
                    if (uVar22 == 0xffffffff) {
                      iVar56 = -1;
                      if (*(int *)(unaff_RBP + -0x640) != 0) {
                        iVar56 = *(int *)(unaff_RBP + -0x640);
                      }
                      *(int *)(unaff_RBP + -0x640) = iVar56;
                      goto switchD_006ebb4e_default;
                    }
                    lVar50 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x68);
                  }
                  pbVar58 = pbVar58 + 1;
                  bVar19 = *(byte *)(lVar50 + 1 + (long)(int)unaff_R13 * 2);
                }
              }
              if ((uint)bVar16 != (uint)unaff_R13) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec454;
                _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
                break;
              }
              *(byte **)(unaff_RBP + -0x618) = unaff_R12;
              *(undefined4 *)(unaff_RBP + -0x610) = 0;
            }
            else {
              *(byte **)(unaff_RBP + -0x618) = unaff_R12;
              *(undefined4 *)(unaff_RBP + -0x610) = 1;
            }
            goto LAB_006eb6fe;
          }
          uVar48 = (uint)*(byte *)(lVar50 + 1);
          uVar21 = uVar48 - 0x30;
          *(undefined8 *)(unaff_RBP + -0x470) = *(undefined8 *)(unaff_RBP + -0x460);
          *(long *)(unaff_RBP + -0x468) =
               *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
          if (uVar21 < 10) {
            bVar16 = *(byte *)(lVar50 + 2);
            *(uint *)(unaff_RBP + -0x638) = uVar21;
            pbVar42 = (byte *)(lVar50 + 2);
            uVar48 = (uint)bVar16;
            uVar41 = uVar48 - 0x30;
            if (uVar41 < 10) {
              do {
                unaff_R12 = pbVar42 + 1;
                uVar48 = (uint)pbVar42[1];
                uVar39 = uVar48 - 0x30;
                if ((int)uVar21 < 0) {
                  *(uint *)(unaff_RBP + -0x638) = uVar21;
                  pbVar53 = unaff_R12;
                  unaff_R12 = pbVar42;
                  while (pbVar42 = pbVar53, uVar39 < 10) {
                    uVar48 = (uint)pbVar42[1];
                    pbVar53 = pbVar42 + 1;
                    unaff_R12 = pbVar42;
                    uVar39 = uVar48 - 0x30;
                  }
                  goto LAB_006eb875;
                }
                if (((int)uVar21 < 0xccccccd) && ((int)(uVar21 * 10) <= (int)(0x7fffffff - uVar41)))
                {
                  uVar21 = uVar21 * 10 + uVar41;
                  unaff_R12 = pbVar42;
                  goto LAB_006eb85a;
                }
                if (9 < uVar39) {
                  if (pbVar42[1] != 0x24) {
                    *(undefined4 *)(unaff_RBP + -0x63c) = 0;
                    *(undefined4 *)(unaff_RBP + -0x68c) = 0;
                    *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                    goto LAB_006eb9a7;
                  }
                  *(undefined4 *)(unaff_RBP + -0x68c) = 0xffffffff;
                  goto LAB_006ebdf3;
                }
                uVar21 = 0xffffffff;
LAB_006eb85a:
                pbVar42 = unaff_R12 + 1;
                uVar48 = (uint)unaff_R12[1];
                uVar41 = uVar48 - 0x30;
              } while (uVar41 < 10);
              *(uint *)(unaff_RBP + -0x638) = uVar21;
            }
LAB_006eb875:
            *(undefined4 *)(unaff_RBP + -0x63c) = 0;
            *(undefined4 *)(unaff_RBP + -0x68c) = 0;
            if ((char)uVar48 == '$') {
              *(undefined4 *)(unaff_RBP + -0x68c) = *(undefined4 *)(unaff_RBP + -0x638);
              pbVar42 = unaff_R12;
LAB_006ebdf3:
              uVar48 = (uint)pbVar42[2];
              unaff_R12 = pbVar42 + 2;
              goto LAB_006eb91a;
            }
LAB_006eb892:
            unaff_R12 = pbVar42;
            if (*(int *)(unaff_RBP + -0x638) == 0) {
              *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
            }
          }
          else {
            *(undefined4 *)(unaff_RBP + -0x68c) = 0;
LAB_006eb91a:
            *(undefined4 *)(unaff_RBP + -0x63c) = 0;
            if (((byte)(uVar48 - 0x27) < 0x23) &&
               ((0xfffffffbfffffff6U >> ((ulong)(uVar48 - 0x27) & 0x3f) & 1) == 0)) {
              uVar41 = 0;
              uVar21 = 0;
              if (*(long *)(unaff_RBP + -0x680) == 0) {
                unaff_R12 = unaff_R12 + 1;
                if ((char)uVar48 == '*') goto LAB_006eb9fe;
                do {
                  uVar21 = uVar41;
                  if ((char)uVar48 == 'I') {
                    uVar21 = uVar41 | 0x400;
                  }
                  while( true ) {
                    bVar16 = *unaff_R12;
                    uVar48 = (uint)bVar16;
                    if ((0x22 < (byte)(bVar16 - 0x27)) ||
                       ((0xfffffffbfffffff6U >> ((ulong)(bVar16 - 0x27) & 0x3f) & 1) != 0))
                    goto LAB_006eb988;
                    unaff_R12 = unaff_R12 + 1;
                    uVar41 = uVar21;
                    if (bVar16 != 0x2a) break;
LAB_006eb9fe:
                    uVar21 = uVar21 | 8;
                  }
                } while( true );
              }
              do {
                unaff_R12 = unaff_R12 + 1;
                cVar17 = (char)uVar48;
                if (cVar17 == '*') {
                  uVar21 = uVar41 | 8;
                }
                else if (cVar17 == 'I') {
                  uVar21 = uVar41 | 0x400;
                }
                else {
                  uVar21 = uVar41;
                  if (cVar17 == '\'') {
                    uVar21 = uVar41 | 0x80;
                  }
                }
                uVar48 = (uint)*unaff_R12;
                uVar39 = *unaff_R12 - 0x27;
              } while (((byte)uVar39 < 0x23) &&
                      (uVar41 = uVar21, (0xfffffffbfffffff6U >> ((ulong)uVar39 & 0x3f) & 1) == 0));
LAB_006eb988:
              *(uint *)(unaff_RBP + -0x63c) = uVar21;
            }
            *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
            uVar21 = uVar48 - 0x30;
            if (uVar21 < 10) {
              *(uint *)(unaff_RBP + -0x638) = uVar21;
              pbVar42 = unaff_R12 + 1;
              uVar48 = (uint)unaff_R12[1];
              uVar41 = uVar48 - 0x30;
              if (uVar41 < 10) {
                do {
                  unaff_R12 = pbVar42 + 1;
                  uVar48 = (uint)pbVar42[1];
                  uVar39 = uVar48 - 0x30;
                  if ((int)uVar21 < 0) {
                    *(uint *)(unaff_RBP + -0x638) = uVar21;
                    if (uVar39 < 10) {
                      uVar40 = FUN_00404a25();
                      return uVar40;
                    }
                    goto LAB_006eb9a7;
                  }
                  if ((int)uVar21 < 0xccccccd) {
                    if ((int)(0x7fffffff - uVar41) < (int)(uVar21 * 10)) {
                      if (uVar39 < 10) goto LAB_006ec369;
                      *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                      goto LAB_006eb9a7;
                    }
                    uVar21 = uVar21 * 10 + uVar41;
                  }
                  else {
                    if (9 < uVar39) {
                      *(undefined4 *)(unaff_RBP + -0x638) = 0xffffffff;
                      goto LAB_006eb9a7;
                    }
LAB_006ec369:
                    uVar21 = 0xffffffff;
                    pbVar42 = unaff_R12;
                  }
                  pbVar53 = pbVar42 + 1;
                  pbVar42 = pbVar42 + 1;
                  uVar48 = (uint)*pbVar53;
                  uVar41 = uVar48 - 0x30;
                } while (uVar41 < 10);
                *(uint *)(unaff_RBP + -0x638) = uVar21;
              }
              goto LAB_006eb892;
            }
          }
LAB_006eb9a7:
          cVar17 = (char)uVar48;
          *(byte **)(unaff_RBP + -0x618) = unaff_R12 + 1;
          switch(uVar48 - 0x4c & 0xff) {
          case 0:
          case 0x25:
            uVar48 = (uint)unaff_R12[1];
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 3;
            unaff_R12 = *(byte **)(unaff_RBP + -0x618);
            break;
          case 0x15:
            bVar16 = unaff_R12[1];
            if ((((bVar16 & 0xf7) == 0x53) || (bVar16 == 0x73)) &&
               (*(int *)(unaff_RBP + -0x690) == 0)) {
              *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x100;
              unaff_R12 = *(byte **)(unaff_RBP + -0x618);
              uVar48 = (uint)bVar16;
              break;
            }
            goto LAB_006eba42;
          case 0x1c:
            uVar48 = (uint)unaff_R12[1];
            if (unaff_R12[1] == 0x68) {
              uVar48 = (uint)unaff_R12[2];
              unaff_R12 = unaff_R12 + 2;
              *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x200;
            }
            else {
              *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 4;
              unaff_R12 = *(byte **)(unaff_RBP + -0x618);
            }
            break;
          case 0x1e:
          case 0x28:
          case 0x2e:
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 1;
            uVar48 = (uint)unaff_R12[1];
            unaff_R12 = *(byte **)(unaff_RBP + -0x618);
            break;
          case 0x20:
            uVar48 = (uint)unaff_R12[1];
            if (unaff_R12[1] == 0x6c) {
              uVar48 = (uint)unaff_R12[2];
              *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 3;
              unaff_R12 = unaff_R12 + 2;
            }
            else {
              *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 1;
              unaff_R12 = *(byte **)(unaff_RBP + -0x618);
            }
            break;
          case 0x21:
            uVar48 = (uint)unaff_R12[1];
            if (unaff_R12[1] == 0x6c) {
              uVar48 = (uint)unaff_R12[2];
              unaff_R12 = unaff_R12 + 2;
              *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x2001;
            }
            else {
              *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x2000;
              unaff_R12 = *(byte **)(unaff_RBP + -0x618);
            }
          }
          cVar17 = (char)uVar48;
          if (cVar17 == '\0') break;
          *(byte **)(unaff_RBP + -0x618) = unaff_R12 + 1;
          if (*(int *)(unaff_RBP + -0x610) == 0) {
            bVar16 = (byte)(uVar48 - 0x43);
            if ((0x2b < bVar16) ||
               ((0xfffff7fefefffffeU >> ((ulong)(uVar48 - 0x43) & 0x3f) & 1) != 0))
            goto LAB_006eba42;
            pbVar42 = pbVar58;
            switch(bVar16) {
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
              *(byte **)(unaff_RBP + -0x620) = pbVar58;
              goto switchD_006ebb4e_caseD_58;
            case 0x18:
switchD_006ec484_caseD_5b:
              *(byte **)(unaff_RBP + -0x620) = pbVar58;
              goto switchD_006ebb4e_caseD_5b;
            case 0x20:
              goto switchD_006ec484_caseD_63;
            case 0x21:
              *(byte **)(unaff_RBP + -0x620) = pbVar58;
              goto switchD_006ebb4e_caseD_64;
            case 0x26:
              *(byte **)(unaff_RBP + -0x620) = pbVar58;
              goto switchD_006ebb4e_caseD_69;
            case 0x2b:
              goto switchD_006ebe25_caseD_2b;
            }
          }
LAB_006eba42:
          *(undefined4 *)(unaff_RBP + -0x610) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
          *(byte **)(unaff_RBP + -0x630) = unaff_R12;
          lVar50 = *(long *)(unaff_RBP + -0x658);
          *(char *)(unaff_RBP + -0x620) = cVar17;
          iVar56 = *(int *)(unaff_RBP + -0x600);
          do {
            while ((int)unaff_R13 == -1) {
              iVar55 = *(int *)(in_FS_OFFSET + -0x58);
joined_r0x006ebabe:
              if (iVar55 == 4) {
                iVar56 = -1;
                if (*(int *)(unaff_RBP + -0x640) != 0) {
                  iVar56 = *(int *)(unaff_RBP + -0x640);
                }
                *(int *)(unaff_RBP + -0x640) = iVar56;
                goto switchD_006ebb4e_default;
              }
              unaff_R13 = 0xffffffff;
              uVar22 = 0xffffffff;
              if ((*(ushort *)(*(long *)(lVar50 + 0x68) + -2) & 0x2000) == 0) goto LAB_006ebade;
            }
            pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar42 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
              unaff_R13 = (ulong)*pbVar42;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ebb90;
              uVar22 = __uflow(unaff_R15);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) {
                iVar56 = *(int *)(in_FS_OFFSET + -0x58);
                iVar55 = iVar56;
                goto joined_r0x006ebabe;
              }
            }
            uVar22 = (uint)unaff_R13;
            pbVar58 = pbVar58 + 1;
          } while ((*(ushort *)(*(long *)(lVar50 + 0x68) + (long)(int)uVar22 * 2) & 0x2000) != 0);
LAB_006ebade:
          lVar50 = -0x58;
          unaff_R13 = (ulong)uVar22;
          *(int *)(unaff_RBP + -0x600) = iVar56;
          unaff_R12 = *(byte **)(unaff_RBP + -0x630);
          bVar16 = *(byte *)(unaff_RBP + -0x620);
          *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x610);
          if (uVar22 == 0xffffffff) {
            if (bVar16 < 0x68) {
              if (bVar16 < 0x25) break;
              pbVar42 = pbVar58;
              switch(bVar16) {
              case 0x25:
                *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006eec94:
                iVar56 = -1;
                if (*(int *)(unaff_RBP + -0x640) != 0) {
                  iVar56 = *(int *)(unaff_RBP + -0x640);
                }
                *(int *)(unaff_RBP + -0x640) = iVar56;
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
            bVar16 = bVar16 + 0x97;
            if (0xf < bVar16) break;
            if ((1L << (bVar16 & 0x3f) & 0x90c1U) == 0) {
              if (bVar16 == 10) goto LAB_006ede63;
              if (bVar16 == 5) goto switchD_006ebe25_caseD_2b;
              break;
            }
switchD_006ec484_caseD_58:
            goto LAB_006ec82a;
          }
          *(undefined8 *)(unaff_RBP + -0x610) = 0xffffffffffffffa8;
          *(byte **)(unaff_RBP + -0x620) = pbVar58 + -1;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6ebb2d;
          _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
          if (0x53 < (byte)(bVar16 - 0x25)) break;
          lVar50 = *(long *)(unaff_RBP + -0x610);
          switch(bVar16) {
          case 0x25:
            pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar42 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
              unaff_R13 = (ulong)*pbVar42;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef93c;
              uVar22 = __uflow(unaff_R15);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) goto LAB_006eec94;
            }
            if ((int)unaff_R13 != 0x25) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee428;
              _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
              goto switchD_006ebb4e_default;
            }
            goto LAB_006ed3d8;
          default:
            goto switchD_006ebb4e_default;
          case 0x41:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x61:
          case 0x65:
          case 0x66:
          case 0x67:
            pbVar58 = *(byte **)(unaff_RBP + -0x620);
            goto switchD_006ebe25_caseD_2;
          case 0x43:
            pbVar42 = *(byte **)(unaff_RBP + -0x620);
switchD_006ec484_caseD_43:
            iVar56 = 1;
            if (*(int *)(unaff_RBP + -0x638) != -1) {
              iVar56 = *(int *)(unaff_RBP + -0x638);
            }
            *(int *)(unaff_RBP + -0x638) = iVar56;
            uVar48 = *(uint *)(unaff_RBP + -0x63c) & 8;
            *(uint *)(unaff_RBP + -0x610) = uVar48;
            if (uVar48 == 0) {
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) == 0) {
                if (*(int *)(unaff_RBP + -0x68c) == 0) {
                  uVar48 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                  }
                  *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar28;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar48 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 != 0) {
                    lVar50 = *(long *)(unaff_RBP + -0x538);
                    bVar59 = false;
                    uVar21 = uVar48;
LAB_006f0652:
                    if (uVar21 < 0x30) goto code_r0x006f0657;
                    lVar43 = lVar50 + 8;
                    if (iVar56 != 1) {
                      lVar34 = lVar50 + 0x10;
                      do {
                        lVar43 = lVar34;
                        lVar34 = lVar43 + 8;
                      } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
                    }
                    *(long *)(unaff_RBP + -0x538) = lVar43;
                    if (!bVar59) goto LAB_006f066d;
LAB_006f0665:
                    uVar48 = uVar21;
                    *(uint *)(unaff_RBP + -0x540) = uVar48;
                  }
LAB_006f066d:
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x530));
                    *(uint *)(unaff_RBP + -0x540) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                  }
                  *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar28;
                }
                if (*(long *)(unaff_RBP + -0x6b8) == 0) goto switchD_006ebb4e_default;
              }
              else {
                if (*(int *)(unaff_RBP + -0x68c) == 0) {
                  uVar48 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                  }
                  puVar28 = (undefined8 *)*puVar28;
                  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar48 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 != 0) {
                    lVar50 = *(long *)(unaff_RBP + -0x538);
                    bVar59 = false;
                    uVar21 = uVar48;
LAB_006ef991:
                    if (uVar21 < 0x30) goto code_r0x006ef996;
                    lVar43 = lVar50 + 8;
                    if (iVar56 != 1) {
                      lVar34 = lVar50 + 0x10;
                      do {
                        lVar43 = lVar34;
                        lVar34 = lVar43 + 8;
                      } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
                    }
                    *(long *)(unaff_RBP + -0x538) = lVar43;
                    if (!bVar59) goto LAB_006ef9ac;
LAB_006ef9a4:
                    uVar48 = uVar21;
                    *(uint *)(unaff_RBP + -0x540) = uVar48;
                  }
LAB_006ef9ac:
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x530));
                    *(uint *)(unaff_RBP + -0x540) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                  }
                  puVar28 = (undefined8 *)*puVar28;
                  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
                }
                if (puVar28 == (undefined8 *)0x0) goto switchD_006ebb4e_default;
                lVar50 = 0x400;
                if (*(int *)(unaff_RBP + -0x638) < 0x401) {
                  lVar50 = (long)*(int *)(unaff_RBP + -0x638);
                }
                *(long *)(unaff_RBP + -0x698) = lVar50;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec162;
                pvVar31 = malloc(lVar50 * 4);
                *(void **)(unaff_RBP + -0x6b8) = pvVar31;
                *puVar28 = pvVar31;
                if (pvVar31 == (void *)0x0) {
                  uVar61 = 0xffffffff;
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                    uVar61 = *(undefined4 *)(unaff_RBP + -0x640);
                  }
                  *(undefined4 *)(unaff_RBP + -0x640) = uVar61;
                  goto switchD_006ebb4e_default;
                }
                if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006ee628:
                  puVar52 = (undefined1 *)((long)register0x00000020 + -0x120);
                  *(undefined8 *)((long)register0x00000020 + -8) =
                       *(undefined8 *)((long)register0x00000020 + -8);
                  lVar50 = 1;
                  uVar27 = *(undefined8 *)(unaff_RBP + -0x6d0);
                  *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x118) = uVar27;
                  *(undefined8 **)(unaff_RBP + -0x6d0) =
                       (undefined8 *)((long)register0x00000020 + -0x120);
                  lVar43 = 0;
                }
                else {
                  lVar43 = **(long **)(unaff_RBP + -0x6d0);
                  lVar50 = lVar43 + 1;
                  puVar52 = (undefined1 *)register0x00000020;
                  if (lVar43 == 0x20) goto LAB_006ee628;
                }
                plVar38 = *(long **)(unaff_RBP + -0x6d0);
                lVar34 = *(long *)(unaff_RBP + -0x670);
                *plVar38 = lVar50;
                plVar38[lVar43 + 2] = lVar34;
                register0x00000020 = (BADSPACEBASE *)puVar52;
              }
            }
            if (uVar22 == 0xffffffff) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
            }
            else {
              pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
              if (pbVar58 < unaff_R15->_IO_read_end) {
                unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
                unaff_R13 = (ulong)*pbVar58;
LAB_006ec1d0:
                *(undefined8 *)(unaff_RBP + -0x540) = 0;
                *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
                *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
                iVar56 = *(int *)(unaff_RBP + -0x638);
                *(long *)(unaff_RBP + -0x638) = (long)iVar56;
                *(int *)(unaff_RBP + -0x620) = iVar56 + -1;
                pbVar58 = pbVar42;
                do {
                  *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
                  if ((*(int *)(unaff_RBP + -0x610) == 0) && (*(int *)(unaff_RBP + -0x63c) != 0)) {
                    pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
                    lVar50 = *(long *)(unaff_RBP + -0x698) * 4;
                    if (*(void **)(unaff_RBP + -0x6b8) == (void *)((long)pvVar31 + lVar50)) {
                      lVar43 = *(long *)(unaff_RBP + -0x698);
                      lVar34 = (long)*(int *)(unaff_RBP + -0x620);
                      if (lVar43 <= *(long *)(unaff_RBP + -0x638)) {
                        lVar34 = lVar43;
                      }
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f00ed;
                      pvVar31 = realloc(pvVar31,(lVar34 + lVar43) * 4);
                      if (pvVar31 == (void *)0x0) {
                        puVar28 = *(undefined8 **)(unaff_RBP + -0x670);
                        *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                        pvVar31 = (void *)*puVar28;
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2f63;
                        pvVar31 = realloc(pvVar31,lVar50 + 4);
                        if (pvVar31 == (void *)0x0) {
                          *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                          goto switchD_006ebb4e_default;
                        }
                        *puVar28 = pvVar31;
                        *(void **)(unaff_RBP + -0x6b8) = (void *)((long)pvVar31 + lVar50);
                      }
                      else {
                        *(long *)(unaff_RBP + -0x698) = lVar34 + lVar43;
                        **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
                        *(void **)(unaff_RBP + -0x6b8) = (void *)((long)pvVar31 + lVar50);
                      }
                    }
                  }
                  pwVar45 = (wchar_t *)0x0;
                  if (*(int *)(unaff_RBP + -0x610) == 0) {
                    pwVar45 = *(wchar_t **)(unaff_RBP + -0x6b8);
                  }
                  while( true ) {
                    pbVar58 = pbVar58 + 1;
                    pmVar4 = *(mbstate_t **)(unaff_RBP + -0x630);
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec2a3;
                    sVar32 = mbrtowc(pwVar45,(char *)(unaff_RBP + -0x50),1,pmVar4);
                    if (sVar32 != 0xfffffffffffffffe) break;
                    pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                    if (pbVar42 < unaff_R15->_IO_read_end) {
                      unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                      unaff_R13 = (ulong)*pbVar42;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec2bf;
                      uVar22 = __uflow(unaff_R15);
                      unaff_R13 = (ulong)uVar22;
                      if (uVar22 == 0xffffffff) {
                        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                        goto switchD_006ebb4e_default;
                      }
                    }
                    *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
                  }
                  if (sVar32 != 1) {
                    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
                    goto switchD_006ebb4e_default;
                  }
                  *(long *)(unaff_RBP + -0x6b8) = *(long *)(unaff_RBP + -0x6b8) + 4;
                  if (*(int *)(unaff_RBP + -0x620) < 1) goto LAB_006ef2f2;
                  pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                  if (pbVar42 < unaff_R15->_IO_read_end) {
                    unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                    unaff_R13 = (ulong)*pbVar42;
                  }
                  else {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef2d5;
                    uVar22 = __uflow(unaff_R15);
                    unaff_R13 = (ulong)uVar22;
                    if (uVar22 == 0xffffffff) goto code_r0x006ef2e1;
                  }
                  *(int *)(unaff_RBP + -0x620) = *(int *)(unaff_RBP + -0x620) + -1;
                  *(long *)(unaff_RBP + -0x638) = *(long *)(unaff_RBP + -0x638) + -1;
                } while( true );
              }
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6eebd4;
              uVar22 = __uflow(unaff_R15);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 != 0xffffffff) goto LAB_006ec1d0;
            }
            iVar56 = -1;
            if (*(int *)(unaff_RBP + -0x640) != 0) {
              iVar56 = *(int *)(unaff_RBP + -0x640);
            }
            *(int *)(unaff_RBP + -0x640) = iVar56;
            goto switchD_006ebb4e_default;
          case 0x53:
            pbVar58 = *(byte **)(unaff_RBP + -0x620);
            goto switchD_006ec484_caseD_53;
          case 0x58:
          case 0x78:
switchD_006ebb4e_caseD_58:
            *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
            break;
          case 0x5b:
switchD_006ebb4e_caseD_5b:
            uVar22 = *(uint *)(unaff_RBP + -0x63c);
            unaff_EBX = uVar22 & 8;
            *(uint *)(unaff_RBP + -0x610) = uVar22 & 1;
            if ((uVar22 & 1) != 0) {
              if (unaff_EBX != 0) goto LAB_006ecf41;
              if ((uVar22 & 0x2100) != 0) {
                if (*(int *)(unaff_RBP + -0x68c) != 0) {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar22 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 == 0) goto LAB_006f04bb;
                  lVar50 = *(long *)(unaff_RBP + -0x538);
                  bVar59 = false;
                  uVar48 = uVar22;
                  goto LAB_006f0485;
                }
                uVar22 = *(uint *)(unaff_RBP + -0x5a8);
                if (uVar22 < 0x30) {
                  puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                  *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                  *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                }
                puVar28 = (undefined8 *)*puVar28;
                *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
                goto LAB_006eced9;
              }
              if (*(int *)(unaff_RBP + -0x68c) != 0) {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                uVar5 = *puVar28;
                uVar6 = puVar28[1];
                *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                uVar27 = puVar28[2];
                *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                uVar22 = *(uint *)(unaff_RBP + -0x540);
                iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                if (iVar56 == 0) goto LAB_006f15bb;
                lVar50 = *(long *)(unaff_RBP + -0x538);
                bVar59 = false;
                uVar48 = uVar22;
                goto LAB_006f1585;
              }
              uVar22 = *(uint *)(unaff_RBP + -0x5a8);
              if (uVar22 < 0x30) {
                puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
              }
              else {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
              }
              *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar28;
              goto LAB_006f051b;
            }
            if (unaff_EBX != 0) goto LAB_006ecf41;
            if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
              if (*(int *)(unaff_RBP + -0x68c) != 0) {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                uVar5 = *puVar28;
                uVar6 = puVar28[1];
                *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                uVar27 = puVar28[2];
                *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                uVar22 = *(uint *)(unaff_RBP + -0x540);
                iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                if (iVar56 == 0) goto LAB_006f0751;
                lVar50 = *(long *)(unaff_RBP + -0x538);
                bVar59 = false;
                uVar48 = uVar22;
                goto LAB_006f071a;
              }
              uVar22 = *(uint *)(unaff_RBP + -0x5a8);
              if (uVar22 < 0x30) {
                puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
              }
              else {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
              }
              unaff_R14 = (undefined8 *)*puVar28;
              *(undefined8 **)(unaff_RBP + -0x670) = unaff_R14;
              goto code_r0x006ee571;
            }
            if (*(int *)(unaff_RBP + -0x68c) != 0) {
              puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
              uVar5 = *puVar28;
              uVar6 = puVar28[1];
              *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
              *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
              uVar27 = puVar28[2];
              *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
              *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
              *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
              uVar22 = *(uint *)(unaff_RBP + -0x540);
              iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
              if (iVar56 == 0) goto LAB_006f2ff5;
              lVar50 = *(long *)(unaff_RBP + -0x538);
              bVar59 = false;
              uVar48 = uVar22;
              goto LAB_006f2fbf;
            }
            uVar22 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar22 < 0x30) {
              puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
            }
            else {
              puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
            }
            *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar28;
            goto LAB_006f12b8;
          case 99:
            pbVar42 = *(byte **)(unaff_RBP + -0x620);
switchD_006ec484_caseD_63:
            uVar48 = *(uint *)(unaff_RBP + -0x63c);
            *(uint *)(unaff_RBP + -0x610) = uVar48 & 1;
            if ((uVar48 & 1) != 0) goto switchD_006ec484_caseD_43;
            iVar56 = 1;
            if (*(int *)(unaff_RBP + -0x638) != -1) {
              iVar56 = *(int *)(unaff_RBP + -0x638);
            }
            *(int *)(unaff_RBP + -0x638) = iVar56;
            if ((uVar48 & 8) == 0) {
              if ((uVar48 & 0x2100) == 0) {
                if (*(int *)(unaff_RBP + -0x68c) == 0) {
                  uVar21 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar21 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                  }
                  *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar28;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar21 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 != 0) {
                    lVar50 = *(long *)(unaff_RBP + -0x538);
                    bVar59 = false;
                    uVar41 = uVar21;
LAB_006f1a9c:
                    if (uVar41 < 0x30) goto code_r0x006f1aa1;
                    lVar43 = lVar50 + 8;
                    if (iVar56 != 1) {
                      lVar34 = lVar50 + 0x10;
                      do {
                        lVar43 = lVar34;
                        lVar34 = lVar43 + 8;
                      } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
                    }
                    *(long *)(unaff_RBP + -0x538) = lVar43;
                    if (!bVar59) goto LAB_006f1ad9;
LAB_006f1ad1:
                    uVar21 = uVar41;
                    *(uint *)(unaff_RBP + -0x540) = uVar21;
                  }
LAB_006f1ad9:
                  if (uVar21 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
                    *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                  }
                  *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar28;
                }
                if (*(long *)(unaff_RBP + -0x6c0) == 0) goto switchD_006ebb4e_default;
              }
              else {
                if (*(int *)(unaff_RBP + -0x68c) == 0) {
                  uVar21 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar21 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar21 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                  }
                  puVar28 = (undefined8 *)*puVar28;
                  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar21 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 != 0) {
                    lVar50 = *(long *)(unaff_RBP + -0x538);
                    bVar59 = false;
                    uVar41 = uVar21;
LAB_006f1b64:
                    if (uVar41 < 0x30) goto code_r0x006f1b69;
                    lVar43 = lVar50 + 8;
                    if (iVar56 != 1) {
                      lVar34 = lVar50 + 0x10;
                      do {
                        lVar43 = lVar34;
                        lVar34 = lVar43 + 8;
                      } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
                    }
                    *(long *)(unaff_RBP + -0x538) = lVar43;
                    if (!bVar59) goto LAB_006f1b9a;
LAB_006f1b92:
                    uVar21 = uVar41;
                    *(uint *)(unaff_RBP + -0x540) = uVar21;
                  }
LAB_006f1b9a:
                  if (uVar21 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar21 + *(long *)(unaff_RBP + -0x530));
                    *(uint *)(unaff_RBP + -0x540) = uVar21 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                  }
                  puVar28 = (undefined8 *)*puVar28;
                  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
                }
                if (puVar28 == (undefined8 *)0x0) goto switchD_006ebb4e_default;
                sVar32 = 0x400;
                if (*(int *)(unaff_RBP + -0x638) < 0x401) {
                  sVar32 = (long)*(int *)(unaff_RBP + -0x638);
                }
                *(size_t *)(unaff_RBP + -0x698) = sVar32;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6ecce5;
                pvVar31 = malloc(sVar32);
                *(void **)(unaff_RBP + -0x6c0) = pvVar31;
                *puVar28 = pvVar31;
                if (pvVar31 == (void *)0x0) {
                  uVar61 = 0xffffffff;
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                    uVar61 = *(undefined4 *)(unaff_RBP + -0x640);
                  }
                  *(undefined4 *)(unaff_RBP + -0x640) = uVar61;
                  goto switchD_006ebb4e_default;
                }
                if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006f0258:
                  puVar52 = (undefined1 *)((long)register0x00000020 + -0x120);
                  *(undefined8 *)((long)register0x00000020 + -8) =
                       *(undefined8 *)((long)register0x00000020 + -8);
                  lVar50 = 1;
                  uVar27 = *(undefined8 *)(unaff_RBP + -0x6d0);
                  *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x118) = uVar27;
                  *(undefined8 **)(unaff_RBP + -0x6d0) =
                       (undefined8 *)((long)register0x00000020 + -0x120);
                  lVar43 = 0;
                }
                else {
                  lVar43 = **(long **)(unaff_RBP + -0x6d0);
                  lVar50 = lVar43 + 1;
                  puVar52 = (undefined1 *)register0x00000020;
                  if (lVar43 == 0x20) goto LAB_006f0258;
                }
                plVar38 = *(long **)(unaff_RBP + -0x6d0);
                lVar34 = *(long *)(unaff_RBP + -0x670);
                *plVar38 = lVar50;
                plVar38[lVar43 + 2] = lVar34;
                register0x00000020 = (BADSPACEBASE *)puVar52;
              }
            }
            if (uVar22 == 0xffffffff) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006efa37:
              iVar56 = -1;
              if (*(int *)(unaff_RBP + -0x640) != 0) {
                iVar56 = *(int *)(unaff_RBP + -0x640);
              }
              *(int *)(unaff_RBP + -0x640) = iVar56;
              goto switchD_006ebb4e_default;
            }
            pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar58 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
              unaff_R13 = (ulong)*pbVar58;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6efa28;
              uVar22 = __uflow(unaff_R15);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) goto LAB_006efa37;
            }
            pbVar58 = pbVar42 + 1;
            if ((uVar48 & 8) == 0) {
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
                *(byte **)(unaff_RBP + -0x620) = pbVar58;
                *(long *)(unaff_RBP + -0x630) = (long)*(int *)(unaff_RBP + -0x638);
                puVar52 = *(undefined1 **)(unaff_RBP + -0x6c0);
                *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x638) + -1;
                sVar32 = *(size_t *)(unaff_RBP + -0x698);
                do {
                  pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
                  sVar47 = sVar32;
                  if (puVar52 == (undefined1 *)((long)pvVar31 + sVar32)) {
                    sVar47 = (long)*(int *)(unaff_RBP + -0x610);
                    if ((long)sVar32 <
                        (*(long *)(unaff_RBP + -0x630) + *(long *)(unaff_RBP + -0x620)) -
                        (long)pbVar58) {
                      sVar47 = sVar32;
                    }
                    *(size_t *)(unaff_RBP + -0x638) = sVar47 + sVar32;
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6efb84;
                    pvVar31 = realloc(pvVar31,sVar47 + sVar32);
                    sVar47 = *(size_t *)(unaff_RBP + -0x638);
                    if (pvVar31 == (void *)0x0) {
                      sVar47 = sVar32 + 1;
                      pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1e8e;
                      pvVar31 = realloc(pvVar31,sVar47);
                      if (pvVar31 == (void *)0x0) {
                        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                        goto switchD_006ebb4e_default;
                      }
                      **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
                      puVar52 = (undefined1 *)((long)pvVar31 + sVar32);
                    }
                    else {
                      **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
                      puVar52 = (undefined1 *)((long)pvVar31 + sVar32);
                    }
                  }
                  *puVar52 = (char)unaff_R13;
                  puVar52 = puVar52 + 1;
                  if (*(int *)(unaff_RBP + -0x610) < 1) {
                    *(size_t *)(unaff_RBP + -0x698) = sVar47;
                    goto LAB_006efb1c;
                  }
                  pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                  if (pbVar42 < unaff_R15->_IO_read_end) {
                    unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                    unaff_R13 = (ulong)*pbVar42;
                  }
                  else {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6efaf6;
                    uVar22 = __uflow(unaff_R15);
                    unaff_R13 = (ulong)uVar22;
                    if (uVar22 == 0xffffffff) goto code_r0x006efafe;
                  }
                  *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x610) + -1;
                  pbVar58 = pbVar58 + 1;
                  sVar32 = sVar47;
                } while( true );
              }
              puVar37 = *(undefined1 **)(unaff_RBP + -0x6c0);
              lVar50 = (long)pbVar58 - (long)puVar37;
              *(int *)(unaff_RBP + -0x610) = *(int *)(unaff_RBP + -0x638) + (int)puVar37;
              do {
                while( true ) {
                  iVar56 = *(int *)(unaff_RBP + -0x610);
                  pbVar58 = puVar37 + lVar50;
                  puVar52 = puVar37 + 1;
                  *puVar37 = (char)unaff_R13;
                  if (iVar56 - (int)puVar52 < 1) goto LAB_006ecddf;
                  pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                  puVar37 = puVar52;
                  if (unaff_R15->_IO_read_end <= pbVar42) break;
                  unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                  unaff_R13 = (ulong)*pbVar42;
                }
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6ecdc6;
                uVar22 = __uflow(unaff_R15);
                unaff_R13 = (ulong)uVar22;
              } while (uVar22 != 0xffffffff);
              *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
              goto LAB_006ecddf;
            }
            iVar56 = *(int *)(unaff_RBP + -0x638);
            if (1 < iVar56) {
              do {
                pbVar53 = (byte *)unaff_R15->_IO_read_ptr;
                if (pbVar53 < unaff_R15->_IO_read_end) {
                  unaff_R15->_IO_read_ptr = (char *)(pbVar53 + 1);
                  unaff_R13 = (ulong)*pbVar53;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef160;
                  uVar22 = __uflow(unaff_R15);
                  unaff_R13 = (ulong)uVar22;
                  if (uVar22 == 0xffffffff) {
                    *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    break;
                  }
                }
                pbVar58 = pbVar58 + 1;
              } while (pbVar58 != pbVar42 + (ulong)(iVar56 - 2) + 2);
            }
            goto LAB_006eb6fe;
          case 100:
switchD_006ebb4e_caseD_64:
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x40;
            *(undefined4 *)(unaff_RBP + -0x610) = 10;
            break;
          case 0x69:
switchD_006ebb4e_caseD_69:
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) | 0x40;
            *(undefined4 *)(unaff_RBP + -0x610) = 0;
            break;
          case 0x6e:
            pbVar58 = *(byte **)(unaff_RBP + -0x620);
switchD_006ebe25_caseD_2b:
            uVar22 = *(uint *)(unaff_RBP + -0x63c);
            *(uint *)(unaff_RBP + -0x610) = uVar22 & 8;
            if ((uVar22 & 8) != 0) goto LAB_006ed3d8;
            if ((uVar22 & 1) == 0) {
              if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
                *(uint *)(unaff_RBP + -0x610) = uVar22 & 0x200;
                if ((uVar22 & 0x200) == 0) {
                  if (*(int *)(unaff_RBP + -0x68c) == 0) {
                    uVar22 = *(uint *)(unaff_RBP + -0x5a8);
                    if (uVar22 < 0x30) {
                      puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                      *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
                    }
                    else {
                      puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                      *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                    }
                    puVar36 = (undefined4 *)*puVar28;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                    uVar5 = *puVar28;
                    uVar6 = puVar28[1];
                    *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                    *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                    uVar27 = puVar28[2];
                    *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                    *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                    *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                    uVar22 = *(uint *)(unaff_RBP + -0x540);
                    iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                    if (iVar56 != 0) {
                      lVar50 = *(long *)(unaff_RBP + -0x538);
                      bVar59 = false;
                      uVar48 = uVar22;
LAB_006f163d:
                      if (uVar48 < 0x30) goto code_r0x006f1642;
                      lVar43 = lVar50 + 8;
                      if (iVar56 != 1) {
                        lVar34 = lVar50 + 0x10;
                        do {
                          lVar43 = lVar34;
                          lVar34 = lVar43 + 8;
                        } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
                      }
                      *(long *)(unaff_RBP + -0x538) = lVar43;
                      if (!bVar59) goto LAB_006f1679;
LAB_006f1671:
                      uVar22 = uVar48;
                      *(uint *)(unaff_RBP + -0x540) = uVar22;
                    }
LAB_006f1679:
                    if (uVar22 < 0x30) {
                      puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
                      *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
                    }
                    else {
                      puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                      *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                    }
                    puVar36 = (undefined4 *)*puVar28;
                  }
                  *puVar36 = (int)pbVar58;
                }
                else {
                  if (*(int *)(unaff_RBP + -0x68c) == 0) {
                    uVar22 = *(uint *)(unaff_RBP + -0x5a8);
                    if (uVar22 < 0x30) {
                      puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                      *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
                    }
                    else {
                      puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                      *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                    }
                    puVar52 = (undefined1 *)*puVar28;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                    uVar5 = *puVar28;
                    uVar6 = puVar28[1];
                    *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                    *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                    uVar27 = puVar28[2];
                    *(undefined8 *)(unaff_RBP + -0x610) = uVar5;
                    *(undefined8 *)(unaff_RBP + -0x608) = uVar6;
                    *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                    uVar22 = *(uint *)(unaff_RBP + -0x540);
                    iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                    if (iVar56 != 0) {
                      lVar50 = *(long *)(unaff_RBP + -0x538);
                      bVar59 = false;
                      uVar48 = uVar22;
LAB_006f2e06:
                      if (uVar48 < 0x30) goto code_r0x006f2e0b;
                      lVar43 = lVar50 + 8;
                      if (iVar56 != 1) {
                        lVar34 = lVar50 + 0x10;
                        do {
                          lVar43 = lVar34;
                          lVar34 = lVar43 + 8;
                        } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
                      }
                      *(long *)(unaff_RBP + -0x538) = lVar43;
                      if (!bVar59) goto LAB_006f2e41;
LAB_006f2e39:
                      uVar22 = uVar48;
                      *(uint *)(unaff_RBP + -0x540) = uVar22;
                    }
LAB_006f2e41:
                    if (uVar22 < 0x30) {
                      puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
                      *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
                    }
                    else {
                      puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                      *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                    }
                    puVar52 = (undefined1 *)*puVar28;
                  }
                  *puVar52 = (char)pbVar58;
                  *(undefined4 *)(unaff_RBP + -0x610) = 0;
                }
              }
              else {
                if (*(int *)(unaff_RBP + -0x68c) == 0) {
                  uVar22 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar22 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                  }
                  puVar33 = (undefined2 *)*puVar28;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x610) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x608) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar22 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 != 0) {
                    lVar50 = *(long *)(unaff_RBP + -0x538);
                    bVar59 = false;
                    uVar48 = uVar22;
LAB_006f19b9:
                    if (uVar48 < 0x30) goto code_r0x006f19be;
                    lVar43 = lVar50 + 8;
                    if (iVar56 != 1) {
                      lVar34 = lVar50 + 0x10;
                      do {
                        lVar43 = lVar34;
                        lVar34 = lVar43 + 8;
                      } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
                    }
                    *(long *)(unaff_RBP + -0x538) = lVar43;
                    if (!bVar59) goto LAB_006f19ef;
LAB_006f19e7:
                    uVar22 = uVar48;
                    *(uint *)(unaff_RBP + -0x540) = uVar22;
                  }
LAB_006f19ef:
                  if (uVar22 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
                    *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                  }
                  puVar33 = (undefined2 *)*puVar28;
                }
                *puVar33 = (short)pbVar58;
                *(undefined4 *)(unaff_RBP + -0x610) = 0;
              }
            }
            else {
              if (*(int *)(unaff_RBP + -0x68c) == 0) {
                uVar22 = *(uint *)(unaff_RBP + -0x5a8);
                if (uVar22 < 0x30) {
                  puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                  *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                  *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                }
                plVar38 = (long *)*puVar28;
              }
              else {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                uVar5 = *puVar28;
                uVar6 = puVar28[1];
                *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                uVar27 = puVar28[2];
                *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                uVar22 = *(uint *)(unaff_RBP + -0x540);
                iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                if (iVar56 != 0) {
                  lVar50 = *(long *)(unaff_RBP + -0x538);
                  bVar59 = false;
                  uVar48 = uVar22;
LAB_006f07bf:
                  if (uVar48 < 0x30) goto code_r0x006f07c4;
                  lVar43 = lVar50 + 8;
                  if (iVar56 != 1) {
                    lVar34 = lVar50 + 0x10;
                    do {
                      lVar43 = lVar34;
                      lVar34 = lVar43 + 8;
                    } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
                  }
                  *(long *)(unaff_RBP + -0x538) = lVar43;
                  if (!bVar59) goto LAB_006f07da;
LAB_006f07d2:
                  uVar22 = uVar48;
                  *(uint *)(unaff_RBP + -0x540) = uVar22;
                }
LAB_006f07da:
                if (uVar22 < 0x30) {
                  puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
                  *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                  *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                }
                plVar38 = (long *)*puVar28;
              }
              *plVar38 = (long)pbVar58;
            }
            goto LAB_006eb6fe;
          case 0x6f:
            *(undefined4 *)(unaff_RBP + -0x610) = 8;
            goto LAB_006ec8c6;
          case 0x70:
            *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0xfffffff9 | 0x1001;
            break;
          case 0x73:
            pbVar58 = *(byte **)(unaff_RBP + -0x620);
LAB_006ede63:
            uVar48 = *(uint *)(unaff_RBP + -0x63c);
            *(uint *)(unaff_RBP + -0x610) = uVar48 & 1;
            if ((uVar48 & 1) != 0) {
switchD_006ec484_caseD_53:
              uVar48 = *(uint *)(unaff_RBP + -0x63c) & 8;
              *(uint *)(unaff_RBP + -0x610) = uVar48;
              if (uVar48 != 0) goto LAB_006ebfcc;
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) == 0) {
                if (*(int *)(unaff_RBP + -0x68c) != 0) {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar48 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 == 0) goto LAB_006f109e;
                  lVar50 = *(long *)(unaff_RBP + -0x538);
                  bVar59 = false;
                  uVar21 = uVar48;
                  goto LAB_006f1083;
                }
                uVar48 = *(uint *)(unaff_RBP + -0x5a8);
                if (uVar48 < 0x30) {
                  puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x598));
                  *(uint *)(unaff_RBP + -0x5a8) = uVar48 + 8;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                  *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                }
                *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar28;
                goto LAB_006eed40;
              }
              if (*(int *)(unaff_RBP + -0x68c) != 0) {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                uVar5 = *puVar28;
                uVar6 = puVar28[1];
                *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                uVar27 = puVar28[2];
                *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                uVar48 = *(uint *)(unaff_RBP + -0x540);
                iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                if (iVar56 == 0) goto LAB_006ef285;
                lVar50 = *(long *)(unaff_RBP + -0x538);
                bVar59 = false;
                uVar21 = uVar48;
                goto LAB_006ef26a;
              }
              uVar48 = *(uint *)(unaff_RBP + -0x5a8);
              if (uVar48 < 0x30) {
                puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x598));
                *(uint *)(unaff_RBP + -0x5a8) = uVar48 + 8;
              }
              else {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
              }
              puVar28 = (undefined8 *)*puVar28;
              *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
              goto LAB_006ebf64;
            }
            unaff_EBX = uVar48 & 8;
            if (unaff_EBX == 0) {
              if ((uVar48 & 0x2100) == 0) {
                if (*(int *)(unaff_RBP + -0x68c) == 0) {
                  uVar48 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                  }
                  *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar28;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar48 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 != 0) {
                    lVar43 = *(long *)(unaff_RBP + -0x538);
                    bVar59 = false;
                    uVar21 = uVar48;
LAB_006f18db:
                    if (uVar21 < 0x30) goto code_r0x006f18e0;
                    lVar34 = lVar43 + 8;
                    if (iVar56 != 1) {
                      lVar51 = lVar43 + 0x10;
                      do {
                        lVar34 = lVar51;
                        lVar51 = lVar34 + 8;
                      } while (lVar43 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar34 + 8);
                    }
                    *(long *)(unaff_RBP + -0x538) = lVar34;
                    if (!bVar59) goto LAB_006f1911;
LAB_006f1909:
                    uVar48 = uVar21;
                    *(uint *)(unaff_RBP + -0x540) = uVar48;
                  }
LAB_006f1911:
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x530));
                    *(uint *)(unaff_RBP + -0x540) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                  }
                  *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar28;
                }
                if (*(long *)(unaff_RBP + -0x6c0) == 0) goto switchD_006ebb4e_default;
              }
              else {
                if (*(int *)(unaff_RBP + -0x68c) == 0) {
                  uVar48 = *(uint *)(unaff_RBP + -0x5a8);
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x598));
                    *(uint *)(unaff_RBP + -0x5a8) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                    *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
                  }
                  puVar28 = (undefined8 *)*puVar28;
                  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
                }
                else {
                  puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
                  uVar5 = *puVar28;
                  uVar6 = puVar28[1];
                  *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
                  uVar27 = puVar28[2];
                  *(undefined8 *)(unaff_RBP + -0x630) = uVar5;
                  *(undefined8 *)(unaff_RBP + -0x628) = uVar6;
                  *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
                  uVar48 = *(uint *)(unaff_RBP + -0x540);
                  iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
                  if (iVar56 != 0) {
                    lVar43 = *(long *)(unaff_RBP + -0x538);
                    bVar59 = false;
                    uVar21 = uVar48;
LAB_006f0c08:
                    if (uVar21 < 0x30) goto code_r0x006f0c0d;
                    lVar34 = lVar43 + 8;
                    if (iVar56 != 1) {
                      lVar51 = lVar43 + 0x10;
                      do {
                        lVar34 = lVar51;
                        lVar51 = lVar34 + 8;
                      } while (lVar43 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar34 + 8);
                    }
                    *(long *)(unaff_RBP + -0x538) = lVar34;
                    if (!bVar59) goto LAB_006f0c23;
LAB_006f0c1b:
                    uVar48 = uVar21;
                    *(uint *)(unaff_RBP + -0x540) = uVar48;
                  }
LAB_006f0c23:
                  if (uVar48 < 0x30) {
                    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x530));
                    *(uint *)(unaff_RBP + -0x540) = uVar48 + 8;
                  }
                  else {
                    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
                    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
                  }
                  puVar28 = (undefined8 *)*puVar28;
                  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
                }
                *(long *)(unaff_RBP + -0x630) = lVar50;
                if (puVar28 == (undefined8 *)0x0) goto switchD_006ebb4e_default;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6edee6;
                pvVar31 = malloc(100);
                *(void **)(unaff_RBP + -0x6c0) = pvVar31;
                *puVar28 = pvVar31;
                if (pvVar31 == (void *)0x0) {
                  uVar61 = 0xffffffff;
                  if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                    uVar61 = *(undefined4 *)(unaff_RBP + -0x640);
                  }
                  *(undefined4 *)(unaff_RBP + -0x640) = uVar61;
                  goto switchD_006ebb4e_default;
                }
                lVar50 = *(long *)(unaff_RBP + -0x630);
                if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006efe2e:
                  puVar52 = (undefined1 *)((long)register0x00000020 + -0x120);
                  *(undefined8 *)((long)register0x00000020 + -8) =
                       *(undefined8 *)((long)register0x00000020 + -8);
                  lVar43 = 1;
                  uVar27 = *(undefined8 *)(unaff_RBP + -0x6d0);
                  *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
                  *(undefined8 *)((long)register0x00000020 + -0x118) = uVar27;
                  *(undefined8 **)(unaff_RBP + -0x6d0) =
                       (undefined8 *)((long)register0x00000020 + -0x120);
                  lVar34 = 0;
                }
                else {
                  lVar34 = **(long **)(unaff_RBP + -0x6d0);
                  lVar43 = lVar34 + 1;
                  puVar52 = (undefined1 *)register0x00000020;
                  if (lVar34 == 0x20) goto LAB_006efe2e;
                }
                plVar38 = *(long **)(unaff_RBP + -0x6d0);
                lVar51 = *(long *)(unaff_RBP + -0x670);
                *(undefined8 *)(unaff_RBP + -0x698) = 100;
                *plVar38 = lVar43;
                plVar38[lVar34 + 2] = lVar51;
                register0x00000020 = (BADSPACEBASE *)puVar52;
              }
            }
            if (uVar22 == 0xffffffff) {
              *(undefined4 *)(in_FS_OFFSET + lVar50) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006f0178:
              iVar56 = -1;
              if (*(int *)(unaff_RBP + -0x640) != 0) {
                iVar56 = *(int *)(unaff_RBP + -0x640);
              }
              *(int *)(unaff_RBP + -0x640) = iVar56;
              goto switchD_006ebb4e_default;
            }
            pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar42 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
              unaff_R13 = (ulong)*pbVar42;
            }
            else {
              *(long *)(unaff_RBP + -0x630) = lVar50;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0162;
              uVar22 = __uflow(unaff_R15);
              lVar50 = *(long *)(unaff_RBP + -0x630);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) goto LAB_006f0178;
            }
            if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                          (long)(int)unaff_R13 * 2) & 0x20) == 0) {
              *(long *)(unaff_RBP + -0x648) = lVar50;
              lVar50 = *(long *)(unaff_RBP + -0x658);
              iVar56 = *(int *)(unaff_RBP + -0x638);
              *(uint *)(unaff_RBP + -0x620) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
              puVar52 = *(undefined1 **)(unaff_RBP + -0x6c0);
              do {
                pbVar58 = pbVar58 + 1;
                if (unaff_EBX == 0) {
                  iVar55 = *(int *)(unaff_RBP + -0x620);
                  *puVar52 = (char)unaff_R13;
                  puVar52 = puVar52 + 1;
                  if (iVar55 != 0) {
                    pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
                    *(long *)(unaff_RBP + -0x630) = *(long *)(unaff_RBP + -0x698);
                    if (puVar52 == (undefined1 *)(*(long *)(unaff_RBP + -0x698) + (long)pvVar31)) {
                      *(_IO_FILE **)(unaff_RBP + -0x660) = unaff_R15;
                      *(undefined4 *)(unaff_RBP + -0x650) = 0;
                      sVar32 = *(long *)(unaff_RBP + -0x698) * 2;
                      *(size_t *)(unaff_RBP + -0x638) = sVar32;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef1d6;
                      pvVar31 = realloc(pvVar31,sVar32);
                      uVar27 = *(undefined8 *)(unaff_RBP + -0x638);
                      unaff_EBX = *(uint *)(unaff_RBP + -0x650);
                      unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x660);
                      if (pvVar31 == (void *)0x0) {
                        *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
                        sVar32 = *(size_t *)(unaff_RBP + -0x698);
                        *(_IO_FILE **)(unaff_RBP + -0x650) = unaff_R15;
                        pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
                        *(uint *)(unaff_RBP + -0x638) = unaff_EBX;
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1756;
                        pvVar31 = realloc(pvVar31,sVar32);
                        unaff_EBX = *(uint *)(unaff_RBP + -0x638);
                        unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x650);
                        if (pvVar31 == (void *)0x0) {
                          if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                            plVar38 = *(long **)(unaff_RBP + -0x670);
                            *(undefined8 *)(unaff_RBP + -0x670) = 0;
                            *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                            *(undefined1 *)(*plVar38 + -1 + *(long *)(unaff_RBP + -0x630)) = 0;
                          }
                          else {
                            *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                          }
                          goto switchD_006ebb4e_default;
                        }
                        **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
                        puVar52 = (undefined1 *)((long)pvVar31 + *(long *)(unaff_RBP + -0x630));
                      }
                      else {
                        **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
                        puVar52 = (undefined1 *)((long)pvVar31 + *(long *)(unaff_RBP + -0x698));
                        *(undefined8 *)(unaff_RBP + -0x698) = uVar27;
                      }
                    }
                  }
                }
                if ((0 < iVar56) && (iVar56 = iVar56 + -1, iVar56 == 0)) {
                  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
                  goto LAB_006ee095;
                }
                pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                if (pbVar42 < unaff_R15->_IO_read_end) {
                  unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                  unaff_R13 = (ulong)*pbVar42;
                }
                else {
                  *(uint *)(unaff_RBP + -0x638) = unaff_EBX;
                  *(_IO_FILE **)(unaff_RBP + -0x630) = unaff_R15;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee05b;
                  uVar22 = __uflow(unaff_R15);
                  unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x630);
                  unaff_EBX = *(uint *)(unaff_RBP + -0x638);
                  unaff_R13 = (ulong)uVar22;
                  if (uVar22 == 0xffffffff) {
                    unaff_R13 = 0xffffffff;
                    *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
                    *(undefined4 *)(unaff_RBP + -0x600) =
                         *(undefined4 *)(in_FS_OFFSET + *(long *)(unaff_RBP + -0x648));
                    goto LAB_006ee095;
                  }
                }
              } while ((*(byte *)(*(long *)(lVar50 + 0x68) + 1 + (long)(int)unaff_R13 * 2) & 0x20)
                       == 0);
              *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
            }
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6efe0c;
            _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
LAB_006ee095:
            if (unaff_EBX == 0) {
              puVar52 = *(undefined1 **)(unaff_RBP + -0x6c0);
              *puVar52 = 0;
              puVar52 = puVar52 + 1;
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x2100) != 0) {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x670);
                pvVar31 = (void *)*puVar28;
                sVar32 = (long)puVar52 - (long)pvVar31;
                if (sVar32 != *(size_t *)(unaff_RBP + -0x698)) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee0d6;
                  pvVar31 = realloc(pvVar31,sVar32);
                  if (pvVar31 != (void *)0x0) {
                    *puVar28 = pvVar31;
                  }
                }
              }
              *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
              *(undefined4 *)(unaff_RBP + -0x610) = 0;
              *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
              *(undefined8 *)(unaff_RBP + -0x670) = 0;
            }
            goto LAB_006eb6fe;
          case 0x75:
            *(undefined4 *)(unaff_RBP + -0x610) = 10;
            goto LAB_006ec8c6;
          }
          if (uVar22 != 0xffffffff) {
LAB_006ec8c6:
            pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar58 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
              uVar40 = (ulong)*pbVar58;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6edd11;
              uVar22 = __uflow(unaff_R15);
              uVar40 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) goto LAB_006ec834;
            }
            pbVar58 = (byte *)(*(long *)(unaff_RBP + -0x620) + 1);
            if (((int)uVar40 - 0x2bU & 0xfffffffd) == 0) {
              puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
              puVar37 = *(undefined1 **)(unaff_RBP + -0x468);
              if (puVar37 == puVar52) {
                if (puVar37 != (undefined1 *)0x0) {
                  lVar50 = *(long *)(unaff_RBP + -0x460);
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6eed96;
                  cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
                  if (cVar17 == '\0') {
                    *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                  }
                  else {
                    *(undefined1 **)(unaff_RBP + -0x470) =
                         puVar37 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
                    *(long *)(unaff_RBP + -0x468) =
                         *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                    puVar37[*(long *)(unaff_RBP + -0x460) - lVar50] = (char)uVar40;
                  }
                }
              }
              else {
                *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
                *puVar52 = (char)uVar40;
              }
              pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
              *(uint *)(unaff_RBP + -0x638) =
                   *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
              if (pbVar42 < unaff_R15->_IO_read_end) {
                unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                uVar40 = (ulong)*pbVar42;
LAB_006ec948:
                pbVar58 = (byte *)(*(long *)(unaff_RBP + -0x620) + 2);
                goto LAB_006ec953;
              }
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed3ef;
              uVar22 = __uflow(unaff_R15);
              uVar40 = (ulong)uVar22;
              if (uVar22 != 0xffffffff) goto LAB_006ec948;
              bVar59 = false;
              *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006ed40e:
              if (*(int *)(unaff_RBP + -0x610) != 0) {
LAB_006edc4a:
                if (*(int *)(unaff_RBP + -0x610) == 10) goto LAB_006ed41c;
LAB_006eca0c:
                uVar22 = (uint)uVar40;
                if (bVar59 == false) {
LAB_006ee72c:
                  pcVar54 = *(char **)(unaff_RBP + -0x470);
                }
                else {
LAB_006eca14:
                  uVar40 = (ulong)uVar22;
                  iVar56 = *(int *)(unaff_RBP + -0x638);
                  *(uint *)(unaff_RBP + -0x650) = *(uint *)(unaff_RBP + -0x63c) & 0x80;
                  *(long *)(unaff_RBP + -0x648) = unaff_RBP + -0x460;
                  do {
                    uVar22 = (uint)uVar40;
                    if (*(int *)(unaff_RBP + -0x610) != 0x10) {
                      if ((uVar22 - 0x30 < 10) &&
                         ((int)(uVar22 - 0x2f) <= *(int *)(unaff_RBP + -0x610))) goto LAB_006eca6d;
                      if (*(int *)(unaff_RBP + -0x610) != 10) {
                        *(int *)(unaff_RBP + -0x638) = iVar56;
                        pcVar54 = *(char **)(unaff_RBP + -0x470);
                        *(undefined4 *)(unaff_RBP + -0x610) = 8;
                        goto LAB_006ecb0d;
                      }
                      if (*(int *)(unaff_RBP + -0x650) != 0) {
                        pbVar42 = *(byte **)(unaff_RBP + -0x680);
                        iVar55 = 0x7fffffff;
                        if (0 < iVar56) {
                          iVar55 = iVar56;
                        }
                        if (uVar22 == *pbVar42) {
                          *(int *)(unaff_RBP + -0x630) = iVar56;
                          unaff_R13 = uVar40;
                          do {
                            uVar22 = (uint)unaff_R13;
                            puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
                            uVar57 = (undefined1)unaff_R13;
                            if (puVar52 == *(undefined1 **)(unaff_RBP + -0x468)) {
                              *(undefined1 *)(unaff_RBP + -0x620) = uVar57;
                              if (puVar52 != (undefined1 *)0x0) {
                                uVar27 = *(undefined8 *)(unaff_RBP + -0x648);
                                *(long *)(unaff_RBP + -0x638) =
                                     (long)puVar52 - *(long *)(unaff_RBP + -0x460);
                                *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed1d3;
                                cVar17 = __libc_scratch_buffer_grow_preserve(uVar27);
                                uVar40 = (ulong)*(byte *)(unaff_RBP + -0x620);
                                if (cVar17 == '\0') {
                                  *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0
                                  ;
                                  goto LAB_006ed14e;
                                }
                                puVar52 = (undefined1 *)
                                          (*(long *)(unaff_RBP + -0x638) +
                                          *(long *)(unaff_RBP + -0x460));
                                *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
                                *(long *)(unaff_RBP + -0x468) =
                                     *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                                *puVar52 = uVar57;
                                if (pbVar42[1] != 0) goto LAB_006ed15d;
                                goto LAB_006ed226;
                              }
                              if (pbVar42[1] == 0) goto LAB_006ed245;
                            }
                            else {
                              *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
                              *puVar52 = uVar57;
                              uVar40 = unaff_R13;
LAB_006ed14e:
                              if (pbVar42[1] == 0) {
LAB_006ed226:
                                pcVar54 = *(char **)(unaff_RBP + -0x470);
                                iVar56 = *(int *)(unaff_RBP + -0x630);
                                if (pcVar54 == (char *)0x0) goto LAB_006ed245;
                                goto LAB_006ed2b7;
                              }
                            }
LAB_006ed15d:
                            pbVar42 = pbVar42 + 1;
                            if (iVar55 == 0) {
                              pcVar54 = *(char **)(unaff_RBP + -0x470);
                              *(undefined4 *)(unaff_RBP + -0x638) =
                                   *(undefined4 *)(unaff_RBP + -0x630);
                              if (pcVar54 == (char *)0x0) goto LAB_006ed245;
                              if (pbVar42 <= *(byte **)(unaff_RBP + -0x680)) goto LAB_006ecb16;
                              *(long *)(unaff_RBP + -0x470) =
                                   (long)pcVar54 - ((long)pbVar42 - *(long *)(unaff_RBP + -0x680));
                              uVar40 = unaff_R13;
                              goto LAB_006eec29;
                            }
                            pbVar53 = (byte *)unaff_R15->_IO_read_ptr;
                            if (pbVar53 < unaff_R15->_IO_read_end) {
                              unaff_R15->_IO_read_ptr = (char *)(pbVar53 + 1);
                              uVar40 = (ulong)*pbVar53;
                            }
                            else {
                              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed270;
                              uVar22 = __uflow(unaff_R15);
                              uVar40 = (ulong)uVar22;
                              if (uVar22 == 0xffffffff) {
                                iVar56 = *(int *)(unaff_RBP + -0x630);
                                *(undefined4 *)(unaff_RBP + -0x600) =
                                     *(undefined4 *)(in_FS_OFFSET + -0x58);
                                goto LAB_006ed29f;
                              }
                            }
                            pbVar58 = pbVar58 + 1;
                            iVar55 = iVar55 + -1;
                            unaff_R13 = uVar40;
                          } while ((uint)*pbVar42 == (uint)uVar40);
                          iVar56 = *(int *)(unaff_RBP + -0x630);
                        }
LAB_006ed29f:
                        uVar22 = (uint)uVar40;
                        pcVar54 = *(char **)(unaff_RBP + -0x470);
                        if (pcVar54 != (char *)0x0) {
                          if (*pbVar42 == 0) {
LAB_006ed2b7:
                            uVar57 = (undefined1)uVar40;
                            pcVar30 = *(char **)(unaff_RBP + -0x468);
                            pcVar35 = pcVar54 + -1;
                            *(char **)(unaff_RBP + -0x470) = pcVar35;
                            if (0 < iVar56) {
                              iVar56 = iVar55;
                            }
                            if (pcVar35 == pcVar30) goto LAB_006ed2d9;
                            goto LAB_006eca8b;
                          }
                          *(int *)(unaff_RBP + -0x638) = iVar56;
                          unaff_R13 = uVar40;
                          if (*(byte **)(unaff_RBP + -0x680) < pbVar42) {
                            *(long *)(unaff_RBP + -0x470) =
                                 (long)pcVar54 - ((long)pbVar42 - *(long *)(unaff_RBP + -0x680));
                            if (uVar22 != 0xffffffff) {
LAB_006eec29:
                              pbVar58 = pbVar58 + -1;
                              *(undefined8 *)((long)register0x00000020 + -8) = 0x6eec39;
                              _IO_sputbackc(unaff_R15,uVar40 & 0xff);
                            }
                            pbVar53 = pbVar42 + -1;
                            pbVar44 = pbVar53;
                            if (*(byte **)(unaff_RBP + -0x680) < pbVar53) {
                              do {
                                bVar16 = *pbVar44;
                                pbVar44 = pbVar44 + -1;
                                *(undefined8 *)((long)register0x00000020 + -8) = 0x6eec59;
                                _IO_sputbackc(unaff_R15,bVar16);
                              } while (*(byte **)(unaff_RBP + -0x680) != pbVar44);
                              lVar50 = (*(long *)(unaff_RBP + -0x680) + 1) - (long)pbVar42;
                              pbVar58 = pbVar58 + lVar50;
                              pbVar53 = pbVar53 + lVar50;
                            }
                            uVar40 = (ulong)*pbVar53;
                            pcVar54 = *(char **)(unaff_RBP + -0x470);
                            goto LAB_006ecb0d;
                          }
                          goto LAB_006ecb16;
                        }
LAB_006ed245:
                        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
                        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
                        goto switchD_006ebb4e_default;
                      }
                      break;
                    }
                    if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                                  (long)(int)uVar22 * 2) & 0x10) == 0) break;
LAB_006eca6d:
                    pcVar35 = *(char **)(unaff_RBP + -0x470);
                    pcVar30 = *(char **)(unaff_RBP + -0x468);
                    uVar57 = (undefined1)uVar40;
                    if (pcVar35 == pcVar30) {
                      if (pcVar30 != (char *)0x0) {
LAB_006ed2d9:
                        uVar27 = *(undefined8 *)(unaff_RBP + -0x648);
                        *(undefined1 *)(unaff_RBP + -0x630) = uVar57;
                        lVar50 = *(long *)(unaff_RBP + -0x460);
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed2f3;
                        cVar17 = __libc_scratch_buffer_grow_preserve(uVar27);
                        if (cVar17 == '\0') {
                          *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                        }
                        else {
                          *(char **)(unaff_RBP + -0x470) =
                               pcVar30 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
                          *(long *)(unaff_RBP + -0x468) =
                               *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                          pcVar30[*(long *)(unaff_RBP + -0x460) - lVar50] =
                               *(char *)(unaff_RBP + -0x630);
                        }
                      }
                    }
                    else {
                      pcVar54 = pcVar35 + 1;
LAB_006eca8b:
                      *(char **)(unaff_RBP + -0x470) = pcVar54;
                      *pcVar35 = (char)uVar40;
                    }
                    iVar56 = iVar56 - (uint)(0 < iVar56);
                    if (uVar22 == 0xffffffff) {
                      *(int *)(unaff_RBP + -0x638) = iVar56;
                      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006ed0d6:
                      pcVar54 = *(char **)(unaff_RBP + -0x470);
                      uVar40 = 0xffffffff;
                      goto LAB_006ecb0d;
                    }
                    pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                    if (pbVar42 < unaff_R15->_IO_read_end) {
                      unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                      uVar40 = (ulong)*pbVar42;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed33d;
                      uVar22 = __uflow(unaff_R15);
                      uVar40 = (ulong)uVar22;
                      if (uVar22 == 0xffffffff) {
                        *(int *)(unaff_RBP + -0x638) = iVar56;
                        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                        goto LAB_006ed0d6;
                      }
                    }
                    pbVar58 = pbVar58 + 1;
                  } while (iVar56 != 0);
                  pcVar54 = *(char **)(unaff_RBP + -0x470);
                  *(int *)(unaff_RBP + -0x638) = iVar56;
                }
                goto LAB_006ecb0d;
              }
LAB_006ed41c:
              *(undefined4 *)(unaff_RBP + -0x610) = 10;
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x400) == 0) goto LAB_006eca0c;
              *(bool *)(unaff_RBP + -0x630) = bVar59;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed448;
              p_Var29 = wctrans("to_inpunct");
              cVar17 = *(char *)(unaff_RBP + -0x630);
              *(wctrans_t *)(unaff_RBP + -0x6a0) = p_Var29;
              iVar56 = *(int *)(*(long *)(unaff_RBP + -0x678) + 0xd8);
              *(int *)(unaff_RBP + -0x610) = iVar56;
              *(int *)(unaff_RBP + -0x6e8) = iVar56 + -1;
              if (p_Var29 != (wctrans_t)0x0) {
                *(byte **)(unaff_RBP + -0x648) = pbVar58;
                pmVar4 = (mbstate_t *)(unaff_RBP + -0x5b0);
                *(undefined8 *)(unaff_RBP + -0x630) = 0;
                *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x610);
                *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
                *(int *)(unaff_RBP + -0x660) = (int)uVar40;
                *(char *)(unaff_RBP + -0x668) = cVar17;
                *(_IO_FILE **)(unaff_RBP + -0x688) = unaff_R15;
                do {
                  lVar50 = *(long *)(unaff_RBP + -0x630);
                  pcVar54 = *(char **)(*(long *)(unaff_RBP + -0x678) + 0xe0 + lVar50 * 8);
                  p_Var29 = *(wctrans_t *)(unaff_RBP + -0x6a0);
                  *(char **)(*(long *)(unaff_RBP + -0x650) + lVar50 * 8) = pcVar54;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0a88;
                  wVar23 = towctrans((int)lVar50 + 0x30,p_Var29);
                  pmVar4->__count = 0;
                  pmVar4->__value = (_union_27)0x0;
                  *(undefined1 **)((long)register0x00000020 + -8) = &LAB_006f0a9c;
                  sVar32 = wcrtomb((char *)(unaff_RBP + -0x50),wVar23,pmVar4);
                  *(size_t *)(unaff_RBP + -0x620) = sVar32;
                  if (sVar32 == 0xffffffffffffffff) {
                    pbVar58 = *(byte **)(unaff_RBP + -0x648);
                    uVar40 = (ulong)*(uint *)(unaff_RBP + -0x660);
                    *(undefined8 *)(unaff_RBP + -0x6a0) = 0;
                    cVar17 = *(char *)(unaff_RBP + -0x668);
                    unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x688);
                    goto LAB_006ed47b;
                  }
                  iVar56 = 0;
                  sVar32 = 0;
                  pcVar35 = pcVar54;
                  if (0 < *(int *)(unaff_RBP + -0x610)) {
                    do {
                      iVar56 = iVar56 + 1;
                      *(undefined1 **)((long)register0x00000020 + -8) = &LAB_006f0acb;
                      sVar32 = strlen(pcVar35);
                      pcVar35 = pcVar35 + sVar32 + 1;
                    } while (*(int *)(unaff_RBP + -0x610) != iVar56);
                    sVar32 = (long)pcVar35 - (long)pcVar54;
                  }
                  uVar40 = *(long *)(unaff_RBP + -0x620) + 0x18 + sVar32;
                  for (puVar52 = (undefined1 *)register0x00000020;
                      puVar52 !=
                      (undefined1 *)((long)register0x00000020 + -(uVar40 & 0xfffffffffffff000));
                      puVar52 = puVar52 + -0x1000) {
                    *(undefined8 *)(puVar52 + -8) = *(undefined8 *)(puVar52 + -8);
                  }
                  uVar40 = (ulong)((uint)uVar40 & 0xff0);
                  lVar50 = -uVar40;
                  register0x00000020 = (BADSPACEBASE *)(puVar52 + lVar50);
                  if (uVar40 != 0) {
                    *(undefined8 *)(puVar52 + -8) = *(undefined8 *)(puVar52 + -8);
                  }
                  *(long *)(unaff_RBP + -0x6f0) = (long)puVar52 + lVar50;
                  *(undefined8 *)(puVar52 + lVar50 + -8) = 0x6f0b47;
                  pvVar31 = mempcpy(puVar52 + lVar50,pcVar54,sVar32);
                  sVar32 = *(size_t *)(unaff_RBP + -0x620);
                  *(undefined8 *)(puVar52 + lVar50 + -8) = 0x6f0b59;
                  puVar37 = (undefined1 *)mempcpy(pvVar31,(char *)(unaff_RBP + -0x50),sVar32);
                  uVar27 = *(undefined8 *)(unaff_RBP + -0x6f0);
                  *puVar37 = 0;
                  lVar43 = *(long *)(unaff_RBP + -0x630);
                  *(undefined8 *)(unaff_RBP + -0x540 + lVar43 * 8) = uVar27;
                  lVar43 = lVar43 + 1;
                  *(long *)(unaff_RBP + -0x630) = lVar43;
                } while (lVar43 != 10);
                pbVar58 = *(byte **)(unaff_RBP + -0x648);
                uVar40 = (ulong)*(uint *)(unaff_RBP + -0x660);
                cVar17 = *(char *)(unaff_RBP + -0x668);
                unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x688);
                register0x00000020 = (BADSPACEBASE *)(puVar52 + lVar50);
              }
LAB_006ed47b:
              *(undefined4 *)(unaff_RBP + -0x688) = 0;
              *(uint *)(unaff_RBP + -0x6f0) = *(uint *)(unaff_RBP + -0x63c) & 0x80;
              *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
              uVar46 = uVar40;
              if (cVar17 != '\0') {
LAB_006ed4b0:
                *(undefined8 *)(unaff_RBP + -0x630) = 0;
                iVar56 = 0x7fffffff;
                if (0 < *(int *)(unaff_RBP + -0x638)) {
                  iVar56 = *(int *)(unaff_RBP + -0x638);
                }
                *(int *)(unaff_RBP + -0x668) = iVar56;
                *(undefined8 *)(unaff_RBP + -0x648) = *(undefined8 *)(unaff_RBP + -0x650);
LAB_006ed4e8:
                *(undefined4 *)(unaff_RBP + -0x660) = *(undefined4 *)(unaff_RBP + -0x630);
                if (*(long *)(unaff_RBP + -0x6a0) == 0) {
                  pbVar42 = *(byte **)(*(long *)(unaff_RBP + -0x678) + 0xe0 +
                                      *(long *)(unaff_RBP + -0x630) * 8);
                }
                else {
                  pbVar42 = *(byte **)(unaff_RBP + -0x540 + *(long *)(unaff_RBP + -0x630) * 8);
                }
                plVar38 = *(long **)(unaff_RBP + -0x648);
                iVar56 = *(int *)(unaff_RBP + -0x688);
                *plVar38 = (long)pbVar42;
                if (iVar56 != 0) {
                  *(byte **)(unaff_RBP + -0x610) = pbVar58;
                  *(int *)(unaff_RBP + -0x620) = (int)uVar46;
                  iVar55 = 0;
                  do {
                    iVar55 = iVar55 + 1;
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed554;
                    sVar32 = strlen((char *)pbVar42);
                    pbVar42 = pbVar42 + sVar32 + 1;
                    *plVar38 = (long)pbVar42;
                  } while (iVar56 != iVar55);
                  pbVar58 = *(byte **)(unaff_RBP + -0x610);
                  uVar46 = (ulong)*(uint *)(unaff_RBP + -0x620);
                }
                if ((uint)*pbVar42 == (uint)uVar46) {
                  iVar56 = *(int *)(unaff_RBP + -0x668);
                  *(byte **)(unaff_RBP + -0x620) = pbVar42;
                  pbVar53 = pbVar42;
                  do {
                    pbVar44 = pbVar53 + 1;
                    if (*pbVar44 == 0) goto LAB_006ed925;
                    if (iVar56 == 0) {
                      pbVar42 = *(byte **)(unaff_RBP + -0x620);
                      pbVar25 = pbVar53;
                      if (pbVar42 < pbVar44) goto LAB_006eda93;
                      goto LAB_006ed633;
                    }
                    pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                    if (pbVar42 < unaff_R15->_IO_read_end) {
                      unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                      uVar46 = (ulong)*pbVar42;
                      pbVar25 = pbVar53;
                    }
                    else {
                      *(byte **)(unaff_RBP + -0x610) = pbVar53;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed5f2;
                      uVar22 = __uflow(unaff_R15);
                      pbVar25 = *(byte **)(unaff_RBP + -0x610);
                      uVar46 = (ulong)uVar22;
                      if (uVar22 == 0xffffffff) {
                        pbVar42 = *(byte **)(unaff_RBP + -0x620);
                        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                        goto LAB_006ed621;
                      }
                    }
                    pbVar58 = pbVar58 + 1;
                    iVar56 = iVar56 + -1;
                    pbVar53 = pbVar44;
                  } while ((uint)*pbVar44 == (uint)uVar46);
                  pbVar42 = *(byte **)(unaff_RBP + -0x620);
LAB_006ed621:
                  if (*pbVar44 == 0) goto LAB_006ed925;
                  if (pbVar42 < pbVar44) {
                    if ((int)uVar46 != -1) {
LAB_006eda93:
                      *(byte **)(unaff_RBP + -0x610) = pbVar25;
                      pbVar58 = pbVar58 + -1;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6edaaa;
                      _IO_sputbackc(unaff_R15,uVar46 & 0xff);
                      pbVar25 = *(byte **)(unaff_RBP + -0x610);
                    }
                    pbVar53 = pbVar25;
                    if (pbVar42 < pbVar25) {
                      do {
                        bVar16 = *pbVar53;
                        pbVar53 = pbVar53 + -1;
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6edad1;
                        _IO_sputbackc(unaff_R15,bVar16);
                      } while (pbVar53 != pbVar42);
                      pbVar58 = pbVar58 + ((long)pbVar42 - (long)pbVar25);
                      pbVar25 = pbVar42;
                    }
                    uVar46 = (ulong)*pbVar25;
                  }
LAB_006ed633:
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed63b;
                  sVar32 = strlen((char *)pbVar42);
                  plVar38 = *(long **)(unaff_RBP + -0x648);
                  *(long *)(unaff_RBP + -0x630) = *(long *)(unaff_RBP + -0x630) + 1;
                  *plVar38 = (long)(pbVar42 + sVar32 + 1);
                  *(long **)(unaff_RBP + -0x648) = plVar38 + 1;
                  if (*(long *)(unaff_RBP + -0x630) == 10) goto code_r0x006ed66e;
                  goto LAB_006ed4e8;
                }
                if (*pbVar42 != 0) goto LAB_006ed633;
                iVar56 = *(int *)(unaff_RBP + -0x668);
LAB_006ed925:
                pcVar35 = *(char **)(unaff_RBP + -0x468);
                if (*(int *)(unaff_RBP + -0x638) < 1) {
                  iVar56 = *(int *)(unaff_RBP + -0x638);
                }
                pcVar30 = *(char **)(unaff_RBP + -0x470);
                iVar55 = *(int *)(unaff_RBP + -0x660) + 0x30;
                cVar17 = (char)iVar55;
                *(int *)(unaff_RBP + -0x638) = iVar56;
                if (pcVar35 != pcVar30) {
                  pcVar54 = pcVar30 + 1;
                  *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x688);
                  goto LAB_006ed96d;
                }
                *(undefined4 *)(unaff_RBP + -0x6e8) = *(undefined4 *)(unaff_RBP + -0x688);
                if (pcVar35 != (char *)0x0) goto LAB_006edb99;
                if (0 < *(int *)(unaff_RBP + -0x638)) goto LAB_006ed981;
                goto LAB_006ed992;
              }
              pcVar54 = *(char **)(unaff_RBP + -0x470);
              goto LAB_006ed9cb;
            }
LAB_006ec953:
            iVar56 = *(int *)(unaff_RBP + -0x638);
            bVar59 = iVar56 != 0;
            if (((int)uVar40 != 0x30) || (!bVar59)) goto LAB_006ed40e;
            puVar52 = *(undefined1 **)(unaff_RBP + -0x468);
            *(uint *)(unaff_RBP + -0x638) = iVar56 - (uint)(0 < iVar56);
            puVar37 = *(undefined1 **)(unaff_RBP + -0x470);
            if (puVar52 == puVar37) {
              if (puVar52 != (undefined1 *)0x0) {
                lVar50 = *(long *)(unaff_RBP + -0x460);
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef0df;
                cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
                if (cVar17 == '\0') {
                  *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                }
                else {
                  *(undefined1 **)(unaff_RBP + -0x470) =
                       puVar52 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
                  *(long *)(unaff_RBP + -0x468) =
                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                  puVar52[*(long *)(unaff_RBP + -0x460) - lVar50] = 0x30;
                }
              }
            }
            else {
              *(undefined1 **)(unaff_RBP + -0x470) = puVar37 + 1;
              *puVar37 = 0x30;
            }
            pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar42 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
              uVar40 = (ulong)*pbVar42;
LAB_006ec9c0:
              pbVar58 = pbVar58 + 1;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee10f;
              uVar22 = __uflow(unaff_R15);
              uVar40 = (ulong)uVar22;
              if (uVar22 != 0xffffffff) goto LAB_006ec9c0;
              *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
            }
            if (*(int *)(unaff_RBP + -0x638) == 0) {
              if (*(int *)(unaff_RBP + -0x610) != 0) {
                bVar59 = false;
                goto LAB_006edc4a;
              }
              *(undefined4 *)(unaff_RBP + -0x610) = 8;
              goto LAB_006ee72c;
            }
            iVar56 = (int)uVar40;
            if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (uVar40 & 0xff) * 4) !=
                0x78) {
              bVar59 = iVar56 != -1;
              if (*(int *)(unaff_RBP + -0x610) != 0) goto LAB_006edc4a;
              *(undefined4 *)(unaff_RBP + -0x610) = 8;
              goto LAB_006eca0c;
            }
            bVar59 = iVar56 != -1;
            if ((*(byte *)(unaff_RBP + -0x610) & 10) != 0) goto LAB_006edc4a;
            *(uint *)(unaff_RBP + -0x638) =
                 *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
            if (iVar56 != -1) {
              pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
              if (pbVar42 < unaff_R15->_IO_read_end) {
                unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                uVar40 = (ulong)*pbVar42;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0e2d;
                uVar22 = __uflow(unaff_R15);
                uVar40 = (ulong)uVar22;
                if (uVar22 == 0xffffffff) {
                  pcVar54 = *(char **)(unaff_RBP + -0x470);
                  uVar61 = *(undefined4 *)(in_FS_OFFSET + -0x58);
                  *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
                  *(undefined4 *)(unaff_RBP + -0x600) = uVar61;
                  goto LAB_006ecb0d;
                }
              }
              uVar22 = (uint)uVar40;
              pbVar58 = pbVar58 + 1;
              *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
              if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006ee72c;
              goto LAB_006eca14;
            }
            *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
            pcVar54 = *(char **)(unaff_RBP + -0x470);
            *(undefined4 *)(unaff_RBP + -0x610) = 0x10;
            goto LAB_006ecb0d;
          }
LAB_006ec82a:
          *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006ec834:
          iVar56 = -1;
          if (*(int *)(unaff_RBP + -0x640) != 0) {
            iVar56 = *(int *)(unaff_RBP + -0x640);
          }
          *(int *)(unaff_RBP + -0x640) = iVar56;
          break;
        }
        pbVar42 = *(byte **)(unaff_RBP + -0x618);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6eb78f;
        sVar32 = strlen((char *)pbVar42);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6eb7a1;
        sVar32 = mbrlen((char *)pbVar42,sVar32,(mbstate_t *)(unaff_RBP + -0x5b8));
        if ((int)sVar32 < 1) {
          lVar50 = *(long *)(unaff_RBP + -0x618);
          bVar16 = *pbVar42;
          goto joined_r0x006eb68a;
        }
        pbVar53 = *(byte **)(unaff_RBP + -0x618);
        pbVar42 = pbVar53 + (ulong)((int)sVar32 - 1) + 1;
        pbVar44 = pbVar53;
        do {
          if ((int)unaff_R13 == -1) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006ebdad:
            iVar56 = -1;
            if (*(int *)(unaff_RBP + -0x640) != 0) {
              iVar56 = *(int *)(unaff_RBP + -0x640);
            }
            *(int *)(unaff_RBP + -0x640) = iVar56;
            goto switchD_006ebb4e_default;
          }
          pbVar25 = (byte *)unaff_R15->_IO_read_ptr;
          if (pbVar25 < unaff_R15->_IO_read_end) {
            unaff_R15->_IO_read_ptr = (char *)(pbVar25 + 1);
            unaff_R13 = (ulong)*pbVar25;
          }
          else {
            *(byte **)(unaff_RBP + -0x618) = pbVar42;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec318;
            uVar22 = __uflow(unaff_R15);
            pbVar42 = *(byte **)(unaff_RBP + -0x618);
            unaff_R13 = (ulong)uVar22;
            if (uVar22 == 0xffffffff) goto LAB_006ebdad;
          }
          pbVar25 = pbVar44 + (long)(pbVar58 + (1 - (long)pbVar53));
          bVar16 = *pbVar44;
          pbVar44 = pbVar44 + 1;
          if ((uint)bVar16 != (uint)unaff_R13) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee43c;
            _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
            goto switchD_006ebb4e_default;
          }
        } while (pbVar44 != pbVar42);
        *(byte **)(unaff_RBP + -0x618) = pbVar44;
        pbVar58 = pbVar25;
      } while( true );
    }
  }
  else {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
  }
  goto switchD_006ebb4e_default;
code_r0x006f18e0:
  uVar21 = uVar21 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f1909;
  goto LAB_006f18db;
code_r0x006f0c0d:
  uVar21 = uVar21 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f0c1b;
  goto LAB_006f0c08;
code_r0x006f2e0b:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f2e39;
  goto LAB_006f2e06;
code_r0x006f1642:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f1671;
  goto LAB_006f163d;
code_r0x006f19be:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f19e7;
  goto LAB_006f19b9;
code_r0x006f07c4:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f07d2;
  goto LAB_006f07bf;
code_r0x006f1aa1:
  uVar41 = uVar41 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f1ad1;
  goto LAB_006f1a9c;
code_r0x006f1b69:
  uVar41 = uVar41 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f1b92;
  goto LAB_006f1b64;
code_r0x006efafe:
  *(size_t *)(unaff_RBP + -0x698) = sVar47;
  unaff_R13 = 0xffffffff;
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006efb1c:
  pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
  sVar32 = (long)puVar52 - (long)pvVar31;
  if (sVar32 != *(size_t *)(unaff_RBP + -0x698)) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6efb3e;
    pvVar31 = realloc(pvVar31,sVar32);
    if (pvVar31 != (void *)0x0) {
      **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
    }
  }
LAB_006ecddf:
  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
  *(undefined4 *)(unaff_RBP + -0x610) = 0;
  *(undefined8 *)(unaff_RBP + -0x670) = 0;
  goto LAB_006eb6fe;
LAB_006f2fbf:
  if (uVar48 < 0x30) goto code_r0x006f2fc4;
  lVar43 = lVar50 + 8;
  if (iVar56 != 1) {
    lVar34 = lVar50 + 0x10;
    do {
      lVar43 = lVar34;
      lVar34 = lVar43 + 8;
    } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
  }
  *(long *)(unaff_RBP + -0x538) = lVar43;
  if (bVar59) {
LAB_006f2fed:
    uVar22 = uVar48;
    *(uint *)(unaff_RBP + -0x540) = uVar22;
  }
LAB_006f2ff5:
  if (uVar22 < 0x30) {
    puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
  }
  else {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x6c0) = *puVar28;
LAB_006f12b8:
  lVar50 = *(long *)(unaff_RBP + -0x6c0);
  goto joined_r0x006f0523;
code_r0x006f2fc4:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f2fed;
  goto LAB_006f2fbf;
LAB_006f1585:
  if (uVar48 < 0x30) {
    uVar48 = uVar48 + 8;
    bVar59 = true;
    iVar56 = iVar56 + -1;
    if (iVar56 == 0) goto LAB_006f15b3;
    goto LAB_006f1585;
  }
  lVar43 = lVar50 + 8;
  if (iVar56 != 1) {
    lVar34 = lVar50 + 0x10;
    do {
      lVar43 = lVar34;
      lVar34 = lVar43 + 8;
    } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
  }
  *(long *)(unaff_RBP + -0x538) = lVar43;
  if (bVar59) {
LAB_006f15b3:
    uVar22 = uVar48;
    *(uint *)(unaff_RBP + -0x540) = uVar22;
  }
LAB_006f15bb:
  if (uVar22 < 0x30) {
    puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
  }
  else {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar28;
LAB_006f051b:
  lVar50 = *(long *)(unaff_RBP + -0x6b8);
joined_r0x006f0523:
  if (lVar50 == 0) goto switchD_006ebb4e_default;
  goto LAB_006ecf41;
LAB_006f0485:
  if (uVar48 < 0x30) {
    uVar48 = uVar48 + 8;
    bVar59 = true;
    iVar56 = iVar56 + -1;
    if (iVar56 == 0) goto LAB_006f04b3;
    goto LAB_006f0485;
  }
  lVar43 = lVar50 + 8;
  if (iVar56 != 1) {
    lVar34 = lVar50 + 0x10;
    do {
      lVar43 = lVar34;
      lVar34 = lVar43 + 8;
    } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
  }
  *(long *)(unaff_RBP + -0x538) = lVar43;
  if (bVar59) {
LAB_006f04b3:
    uVar22 = uVar48;
    *(uint *)(unaff_RBP + -0x540) = uVar22;
  }
LAB_006f04bb:
  if (uVar22 < 0x30) {
    puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
  }
  else {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
  }
  puVar28 = (undefined8 *)*puVar28;
  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
LAB_006eced9:
  if (puVar28 == (undefined8 *)0x0) goto switchD_006ebb4e_default;
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6eceec;
  pvVar31 = malloc(400);
  *(void **)(unaff_RBP + -0x6b8) = pvVar31;
  *puVar28 = pvVar31;
  if (pvVar31 == (void *)0x0) {
    uVar61 = 0xffffffff;
    if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
      uVar61 = *(undefined4 *)(unaff_RBP + -0x640);
    }
    *(undefined4 *)(unaff_RBP + -0x640) = uVar61;
    goto switchD_006ebb4e_default;
  }
  if ((*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) ||
     (lVar50 = **(long **)(unaff_RBP + -0x6d0), lVar50 == 0x20)) goto LAB_006ee5cd;
LAB_006ecf1c:
  lVar43 = lVar50 + 1;
  goto LAB_006ecf20;
code_r0x006ed66e:
  iVar56 = *(int *)(unaff_RBP + -0x688) + 1;
  *(int *)(unaff_RBP + -0x648) = iVar56;
  if (iVar56 <= *(int *)(unaff_RBP + -0x6e8)) {
    do {
      *(undefined8 *)(unaff_RBP + -0x620) = 0;
      do {
        pbVar42 = *(byte **)(*(long *)(unaff_RBP + -0x650) + *(long *)(unaff_RBP + -0x620) * 8);
        *(int *)(unaff_RBP + -0x660) = (int)*(long *)(unaff_RBP + -0x620);
        bVar16 = *pbVar42;
        *(byte **)(unaff_RBP + -0x630) = pbVar42;
        if ((uint)bVar16 == (uint)uVar46) {
          iVar56 = *(int *)(unaff_RBP + -0x668);
          do {
            pbVar53 = pbVar42;
            pbVar42 = pbVar53 + 1;
            if (*pbVar42 == 0) goto LAB_006ed919;
            if (iVar56 == 0) {
              if (*(byte **)(unaff_RBP + -0x630) < pbVar42) goto LAB_006ed9f3;
              goto LAB_006ed77d;
            }
            pbVar44 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar44 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar44 + 1);
              uVar46 = (ulong)*pbVar44;
            }
            else {
              *(byte **)(unaff_RBP + -0x610) = pbVar53;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed742;
              uVar22 = __uflow(unaff_R15);
              pbVar53 = *(byte **)(unaff_RBP + -0x610);
              uVar46 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) {
                *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                break;
              }
            }
            pbVar58 = pbVar58 + 1;
            iVar56 = iVar56 + -1;
          } while ((uint)*pbVar42 == (uint)uVar46);
          if (*pbVar42 == 0) {
LAB_006ed919:
            *(undefined4 *)(unaff_RBP + -0x688) = *(undefined4 *)(unaff_RBP + -0x648);
            goto LAB_006ed925;
          }
          if (*(byte **)(unaff_RBP + -0x630) < pbVar42) {
            if ((int)uVar46 != -1) {
LAB_006ed9f3:
              pbVar58 = pbVar58 + -1;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6eda03;
              _IO_sputbackc(unaff_R15,uVar46 & 0xff);
            }
            pbVar42 = *(byte **)(unaff_RBP + -0x630);
            pbVar44 = pbVar53;
            if (pbVar42 < pbVar53) {
              do {
                bVar16 = *pbVar44;
                pbVar44 = pbVar44 + -1;
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6eda28;
                _IO_sputbackc(unaff_R15,bVar16);
              } while (pbVar42 != pbVar44);
              pbVar44 = *(byte **)(unaff_RBP + -0x630);
              pbVar58 = pbVar58 + ((long)pbVar44 - (long)pbVar53);
            }
            uVar46 = (ulong)*pbVar44;
          }
        }
        else if (bVar16 == 0) {
          iVar56 = *(int *)(unaff_RBP + -0x668);
          goto LAB_006ed919;
        }
LAB_006ed77d:
        pcVar54 = *(char **)(unaff_RBP + -0x630);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed78c;
        sVar32 = strlen(pcVar54);
        lVar50 = *(long *)(unaff_RBP + -0x620);
        *(char **)(*(long *)(unaff_RBP + -0x650) + lVar50 * 8) = pcVar54 + sVar32 + 1;
        lVar50 = lVar50 + 1;
        *(long *)(unaff_RBP + -0x620) = lVar50;
      } while (lVar50 != 10);
      *(int *)(unaff_RBP + -0x648) = *(int *)(unaff_RBP + -0x648) + 1;
    } while (*(int *)(unaff_RBP + -0x648) <= *(int *)(unaff_RBP + -0x6e8));
  }
  if (*(int *)(unaff_RBP + -0x6f0) == 0) goto LAB_006ed9c1;
  pbVar42 = *(byte **)(unaff_RBP + -0x680);
  iVar56 = 0x7fffffff;
  if (0 < *(int *)(unaff_RBP + -0x638)) {
    iVar56 = *(int *)(unaff_RBP + -0x638);
  }
  if ((uint)*pbVar42 == (uint)uVar46) {
    *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x460;
    uVar40 = uVar46;
    do {
      iVar55 = (int)uVar40;
      puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
      puVar37 = *(undefined1 **)(unaff_RBP + -0x468);
      uVar57 = (undefined1)uVar40;
      if (puVar37 == puVar52) {
        *(undefined1 *)(unaff_RBP + -0x620) = uVar57;
        if (puVar37 != (undefined1 *)0x0) {
          uVar27 = *(undefined8 *)(unaff_RBP + -0x630);
          *(long *)(unaff_RBP + -0x610) = (long)puVar37 - *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6ed8c5;
          cVar17 = __libc_scratch_buffer_grow_preserve(uVar27);
          bVar16 = *(byte *)(unaff_RBP + -0x620);
          uVar46 = (ulong)bVar16;
          if (cVar17 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            puVar52 = (undefined1 *)(*(long *)(unaff_RBP + -0x610) + *(long *)(unaff_RBP + -0x460));
            *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            *puVar52 = uVar57;
          }
          goto LAB_006ed83e;
        }
        if (pbVar42[1] == 0) goto LAB_006eeccb;
      }
      else {
        *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
        *puVar52 = uVar57;
        uVar46 = uVar40;
LAB_006ed83e:
        if (pbVar42[1] == 0) {
          pcVar54 = *(char **)(unaff_RBP + -0x470);
          if (pcVar54 == (char *)0x0) goto LAB_006eeccb;
          goto LAB_006edb6b;
        }
      }
      pbVar42 = pbVar42 + 1;
      if (iVar56 == 0) {
        pcVar54 = *(char **)(unaff_RBP + -0x470);
        if (pcVar54 == (char *)0x0) goto LAB_006eeccb;
        if (pbVar42 <= *(byte **)(unaff_RBP + -0x680)) goto LAB_006ed9cb;
        *(long *)(unaff_RBP + -0x470) =
             (long)pcVar54 - ((long)pbVar42 - *(long *)(unaff_RBP + -0x680));
        goto LAB_006f1d89;
      }
      pbVar53 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar53 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar53 + 1);
        uVar46 = (ulong)*pbVar53;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6edb2c;
        uVar22 = __uflow(unaff_R15);
        uVar46 = (ulong)uVar22;
        if (uVar22 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          break;
        }
      }
      pbVar58 = pbVar58 + 1;
      iVar56 = iVar56 + -1;
      uVar40 = uVar46;
    } while ((uint)*pbVar42 == (uint)uVar46);
  }
  iVar55 = (int)uVar46;
  pcVar54 = *(char **)(unaff_RBP + -0x470);
  if (pcVar54 == (char *)0x0) {
LAB_006eeccb:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006ebb4e_default;
  }
  if (*pbVar42 != 0) {
    uVar40 = uVar46;
    if (*(byte **)(unaff_RBP + -0x680) < pbVar42) {
      *(long *)(unaff_RBP + -0x470) =
           (long)pcVar54 - ((long)pbVar42 - *(long *)(unaff_RBP + -0x680));
      if (iVar55 != -1) {
LAB_006f1d89:
        pbVar58 = pbVar58 + -1;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1d99;
        _IO_sputbackc(unaff_R15,uVar40 & 0xff);
      }
      pbVar53 = pbVar42 + -1;
      pbVar44 = pbVar53;
      if (*(byte **)(unaff_RBP + -0x680) < pbVar53) {
        do {
          bVar16 = *pbVar44;
          pbVar44 = pbVar44 + -1;
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1cc0;
          _IO_sputbackc(unaff_R15,bVar16);
        } while (*(byte **)(unaff_RBP + -0x680) != pbVar44);
        lVar50 = (*(long *)(unaff_RBP + -0x680) + 1) - (long)pbVar42;
        pbVar58 = pbVar58 + lVar50;
        pbVar53 = pbVar53 + lVar50;
      }
      uVar40 = (ulong)*pbVar53;
      pcVar54 = *(char **)(unaff_RBP + -0x470);
    }
    goto LAB_006ed9cb;
  }
LAB_006edb6b:
  cVar17 = (char)uVar46;
  pcVar35 = *(char **)(unaff_RBP + -0x468);
  if (*(int *)(unaff_RBP + -0x638) < 1) {
    iVar56 = *(int *)(unaff_RBP + -0x638);
  }
  pcVar30 = pcVar54 + -1;
  *(char **)(unaff_RBP + -0x470) = pcVar30;
  *(int *)(unaff_RBP + -0x638) = iVar56;
  if (pcVar30 == pcVar35) {
LAB_006edb99:
    *(char *)(unaff_RBP + -0x610) = cVar17;
    lVar50 = *(long *)(unaff_RBP + -0x460);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6edbb3;
    cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
    if (cVar17 == '\0') {
      *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
    }
    else {
      *(char **)(unaff_RBP + -0x470) = pcVar35 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
      *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
      pcVar35[*(long *)(unaff_RBP + -0x460) - lVar50] = *(char *)(unaff_RBP + -0x610);
    }
  }
  else {
LAB_006ed96d:
    *(char **)(unaff_RBP + -0x470) = pcVar54;
    *pcVar30 = cVar17;
  }
  if (0 < *(int *)(unaff_RBP + -0x638)) {
LAB_006ed981:
    *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
  }
  if (iVar55 != -1) {
LAB_006ed992:
    pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
    if (pbVar42 < unaff_R15->_IO_read_end) {
      unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
      uVar46 = (ulong)*pbVar42;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6edc80;
      uVar22 = __uflow(unaff_R15);
      uVar46 = (ulong)uVar22;
      if (uVar22 == 0xffffffff) {
        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
        goto LAB_006edc08;
      }
    }
    pbVar58 = pbVar58 + 1;
    if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006ed9c1;
    goto LAB_006ed4b0;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006edc08:
  pcVar54 = *(char **)(unaff_RBP + -0x470);
  uVar40 = 0xffffffff;
  goto LAB_006ed9cb;
LAB_006ed9c1:
  pcVar54 = *(char **)(unaff_RBP + -0x470);
  uVar40 = uVar46;
LAB_006ed9cb:
  *(undefined4 *)(unaff_RBP + -0x610) = 10;
LAB_006ecb0d:
  unaff_R13 = uVar40;
  if (pcVar54 == (char *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006ebb4e_default;
  }
LAB_006ecb16:
  pcVar35 = *(char **)(unaff_RBP + -0x460);
  iVar56 = (int)unaff_R13;
  if (pcVar35 == pcVar54) {
    if ((((*(uint *)(unaff_RBP + -0x63c) & 0x1000) != 0) && (4 < *(uint *)(unaff_RBP + -0x638))) &&
       (iVar56 == 0x28)) {
      lVar50 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
      pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar42 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
        uVar40 = (ulong)*pbVar42;
        uVar22 = (uint)*pbVar42;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef186;
        uVar22 = __uflow(unaff_R15);
        if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar40 = (ulong)(uVar22 & 0xff);
      }
      if (*(int *)(lVar50 + uVar40 * 4) == 0x6e) {
        lVar50 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
        pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
        if (pbVar42 < unaff_R15->_IO_read_end) {
          unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
          uVar40 = (ulong)*pbVar42;
          uVar22 = (uint)*pbVar42;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6efccb;
          uVar22 = __uflow(unaff_R15);
          if (uVar22 == 0xffffffff) {
            uVar61 = *(undefined4 *)(in_FS_OFFSET + -0x58);
            if (*(int *)(lVar50 + 0x3fc) != 0x69) goto switchD_006ebb4e_default;
            iVar56 = *(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + 0x3fc);
            goto joined_r0x006efd04;
          }
          uVar40 = (ulong)(uVar22 & 0xff);
        }
        if (*(int *)(lVar50 + uVar40 * 4) == 0x69) {
          lVar50 = *(long *)(*(long *)(unaff_RBP + -0x658) + 0x70);
          pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
          if (pbVar42 < unaff_R15->_IO_read_end) {
            unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
            uVar40 = (ulong)*pbVar42;
            uVar22 = (uint)*pbVar42;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6efc18;
            uVar22 = __uflow(unaff_R15);
            if (uVar22 == 0xffffffff) {
              iVar56 = *(int *)(lVar50 + 0x3fc);
              uVar61 = *(undefined4 *)(in_FS_OFFSET + -0x58);
joined_r0x006efd04:
              if (iVar56 == 0x6c) {
                *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar61;
              }
              goto switchD_006ebb4e_default;
            }
            uVar40 = (ulong)(uVar22 & 0xff);
          }
          if (*(int *)(lVar50 + uVar40 * 4) == 0x6c) {
            pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar42 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
              unaff_R13 = (ulong)*pbVar42;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6eef3f;
              uVar22 = __uflow(unaff_R15);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
            }
            pbVar58 = pbVar58 + 4;
            uVar22 = (uint)unaff_R13;
            if (uVar22 == 0x29) {
              puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
              if (puVar52 != *(undefined1 **)(unaff_RBP + -0x468)) {
                *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
                *puVar52 = 0x30;
LAB_006ecb50:
                pcVar54 = *(char **)(unaff_RBP + -0x470);
                if (pcVar54 != *(char **)(unaff_RBP + -0x468)) goto LAB_006ecb64;
                if (pcVar54 == (char *)0x0) goto LAB_006eedd3;
                pcVar35 = *(char **)(unaff_RBP + -0x460);
                goto LAB_006ee13e;
              }
              if (puVar52 == (undefined1 *)0x0) goto LAB_006eedd3;
              lVar50 = *(long *)(unaff_RBP + -0x460);
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6efc64;
              cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
              if (cVar17 != '\0') {
                *(undefined1 **)(unaff_RBP + -0x470) =
                     puVar52 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
                *(long *)(unaff_RBP + -0x468) =
                     *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                puVar52[*(long *)(unaff_RBP + -0x460) - lVar50] = 0x30;
                goto LAB_006ecb50;
              }
              goto LAB_006f0911;
            }
          }
        }
      }
      unaff_R13 = (ulong)uVar22;
      goto LAB_006ee25d;
    }
  }
  else if (((long)pcVar54 - (long)pcVar35 != 1) || ((*pcVar35 - 0x2bU & 0xfd) != 0)) {
    if (iVar56 != -1) {
      pbVar58 = pbVar58 + -1;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ecb50;
      _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
      goto LAB_006ecb50;
    }
    if (*(char **)(unaff_RBP + -0x468) == pcVar54) {
LAB_006ee13e:
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee150;
      cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
      if (cVar17 == '\0') {
LAB_006f0911:
        *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
        goto LAB_006eedd3;
      }
      *(char **)(unaff_RBP + -0x470) = pcVar54 + (*(long *)(unaff_RBP + -0x460) - (long)pcVar35) + 1
      ;
      *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
      pcVar54[*(long *)(unaff_RBP + -0x460) - (long)pcVar35] = '\0';
    }
    else {
LAB_006ecb64:
      *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
      *pcVar54 = '\0';
    }
    if (*(long *)(unaff_RBP + -0x470) == 0) {
LAB_006eedd3:
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
      goto switchD_006ebb4e_default;
    }
    uVar27 = *(undefined8 *)(unaff_RBP + -0x460);
    uVar61 = *(undefined4 *)(unaff_RBP + -0x610);
    uVar22 = *(uint *)(unaff_RBP + -0x63c) & 0x40;
    if (uVar22 == 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6edd2a;
      uVar27 = __strtoull_internal(uVar27,unaff_RBP + -0x5e8,uVar61);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ecbb2;
      uVar27 = __strtoll_internal();
    }
    if (*(long *)(unaff_RBP + -0x5e8) == *(long *)(unaff_RBP + -0x460))
    goto switchD_006ebb4e_default;
    uVar48 = *(uint *)(unaff_RBP + -0x63c) & 8;
    *(uint *)(unaff_RBP + -0x610) = uVar48;
    if (uVar48 != 0) goto LAB_006ed3d8;
    uVar48 = *(uint *)(unaff_RBP + -0x63c) & 1;
    if (uVar22 == 0) {
      if (uVar48 == 0) {
        if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
          if ((*(uint *)(unaff_RBP + -0x63c) & 0x200) != 0) {
            if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006f088a;
            puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar6 = *puVar28;
            uVar7 = puVar28[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
            uVar5 = puVar28[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
            uVar22 = *(uint *)(unaff_RBP + -0x540);
            iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar56 != 0) {
              lVar50 = *(long *)(unaff_RBP + -0x538);
              bVar59 = false;
              uVar48 = uVar22;
              do {
                if (0x2f < uVar48) {
                  lVar43 = lVar50 + 8;
                  if (iVar56 != 1) {
                    lVar34 = lVar50 + 0x10;
                    do {
                      lVar43 = lVar34;
                      lVar34 = lVar43 + 8;
                    } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
                  }
                  goto LAB_006f1246;
                }
                uVar48 = uVar48 + 8;
                bVar59 = true;
                iVar56 = iVar56 + -1;
              } while (iVar56 != 0);
LAB_006f1252:
              uVar22 = uVar48;
              *(uint *)(unaff_RBP + -0x540) = uVar22;
            }
            goto LAB_006f125a;
          }
          if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006efbe5;
          puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar6 = *puVar28;
          uVar7 = puVar28[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
          uVar5 = puVar28[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
          uVar22 = *(uint *)(unaff_RBP + -0x540);
          iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar56 != 0) {
            lVar50 = *(long *)(unaff_RBP + -0x538);
            bVar59 = false;
            uVar48 = uVar22;
            do {
              if (0x2f < uVar48) {
                lVar43 = lVar50 + 8;
                if (iVar56 != 1) {
                  lVar34 = lVar50 + 0x10;
                  do {
                    lVar43 = lVar34;
                    lVar34 = lVar43 + 8;
                  } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
                }
                goto LAB_006f0e7d;
              }
              uVar48 = uVar48 + 8;
              bVar59 = true;
              iVar56 = iVar56 + -1;
            } while (iVar56 != 0);
LAB_006f0e89:
            uVar22 = uVar48;
            *(uint *)(unaff_RBP + -0x540) = uVar22;
          }
          goto LAB_006f0e91;
        }
        if (*(int *)(unaff_RBP + -0x68c) != 0) {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar6 = *puVar28;
          uVar7 = puVar28[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
          uVar5 = puVar28[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
          uVar22 = *(uint *)(unaff_RBP + -0x540);
          iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar56 != 0) {
            lVar50 = *(long *)(unaff_RBP + -0x538);
            bVar59 = false;
            uVar48 = uVar22;
            do {
              if (0x2f < uVar48) {
                lVar43 = lVar50 + 8;
                if (iVar56 != 1) {
                  lVar34 = lVar50 + 0x10;
                  do {
                    lVar43 = lVar34;
                    lVar34 = lVar43 + 8;
                  } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
                }
                goto LAB_006efd96;
              }
              uVar48 = uVar48 + 8;
              bVar59 = true;
              iVar56 = iVar56 + -1;
            } while (iVar56 != 0);
LAB_006efda2:
            uVar22 = uVar48;
            *(uint *)(unaff_RBP + -0x540) = uVar22;
          }
          goto LAB_006efdaa;
        }
LAB_006eee0b:
        uVar22 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar22 < 0x30) {
          puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
        }
        else {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
        }
        puVar33 = (undefined2 *)*puVar28;
        goto LAB_006eee2f;
      }
      if (*(int *)(unaff_RBP + -0x68c) != 0) {
        puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar6 = *puVar28;
        uVar7 = puVar28[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
        uVar5 = puVar28[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
        uVar22 = *(uint *)(unaff_RBP + -0x540);
        iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar56 != 0) {
          lVar50 = *(long *)(unaff_RBP + -0x538);
          bVar59 = false;
          uVar48 = uVar22;
          do {
            if (0x2f < uVar48) {
              lVar43 = lVar50 + 8;
              if (iVar56 != 1) {
                lVar34 = lVar50 + 0x10;
                do {
                  lVar43 = lVar34;
                  lVar34 = lVar43 + 8;
                } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
              }
              goto LAB_006ef025;
            }
            uVar48 = uVar48 + 8;
            bVar59 = true;
            iVar56 = iVar56 + -1;
          } while (iVar56 != 0);
LAB_006ee4f0:
          uVar22 = uVar48;
          *(uint *)(unaff_RBP + -0x540) = uVar22;
        }
        goto LAB_006ee4f8;
      }
LAB_006ecc01:
      uVar22 = *(uint *)(unaff_RBP + -0x5a8);
      if (uVar22 < 0x30) {
        puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
        *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
      }
      else {
        puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
        *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
      }
      puVar28 = (undefined8 *)*puVar28;
    }
    else {
      if (uVar48 == 0) {
        if ((*(byte *)(unaff_RBP + -0x63c) & 4) == 0) {
          if ((*(uint *)(unaff_RBP + -0x63c) & 0x200) != 0) {
            if (*(int *)(unaff_RBP + -0x68c) == 0) {
LAB_006f088a:
              uVar22 = *(uint *)(unaff_RBP + -0x5a8);
              if (uVar22 < 0x30) {
                puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
                *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
              }
              else {
                puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
                *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
              }
              *(char *)*puVar28 = (char)uVar27;
              goto LAB_006ecc28;
            }
            puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
            uVar6 = *puVar28;
            uVar7 = puVar28[1];
            *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
            *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
            uVar5 = puVar28[2];
            *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
            *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
            *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
            uVar22 = *(uint *)(unaff_RBP + -0x540);
            iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
            if (iVar56 != 0) {
              lVar50 = *(long *)(unaff_RBP + -0x538);
              bVar59 = false;
              uVar48 = uVar22;
LAB_006f0f09:
              if (uVar48 < 0x30) goto code_r0x006f0f12;
              lVar43 = lVar50 + 8;
              if (iVar56 != 1) {
                lVar34 = lVar50 + 0x10;
                do {
                  lVar43 = lVar34;
                  lVar34 = lVar43 + 8;
                } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
              }
LAB_006f1246:
              *(long *)(unaff_RBP + -0x538) = lVar43;
              if (bVar59) goto LAB_006f1252;
            }
LAB_006f125a:
            if (uVar22 < 0x30) {
              puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
              *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
            }
            else {
              puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
              *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
            }
            *(char *)*puVar28 = (char)uVar27;
            goto LAB_006ecc28;
          }
          if (*(int *)(unaff_RBP + -0x68c) == 0) {
LAB_006efbe5:
            uVar22 = *(uint *)(unaff_RBP + -0x5a8);
            if (uVar22 < 0x30) {
              puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
              *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
            }
            else {
              puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
              *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
            }
            *(int *)*puVar28 = (int)uVar27;
            goto LAB_006ecc28;
          }
          puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar6 = *puVar28;
          uVar7 = puVar28[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
          uVar5 = puVar28[2];
          *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
          *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
          uVar22 = *(uint *)(unaff_RBP + -0x540);
          iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar56 != 0) {
            lVar50 = *(long *)(unaff_RBP + -0x538);
            bVar59 = false;
            uVar48 = uVar22;
LAB_006efef5:
            if (uVar48 < 0x30) goto code_r0x006efefe;
            lVar43 = lVar50 + 8;
            if (iVar56 != 1) {
              lVar34 = lVar50 + 0x10;
              do {
                lVar43 = lVar34;
                lVar34 = lVar43 + 8;
              } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
            }
LAB_006f0e7d:
            *(long *)(unaff_RBP + -0x538) = lVar43;
            if (bVar59) goto LAB_006f0e89;
          }
LAB_006f0e91:
          if (uVar22 < 0x30) {
            puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
          }
          else {
            puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
          }
          *(int *)*puVar28 = (int)uVar27;
          goto LAB_006ecc28;
        }
        if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006eee0b;
        puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar6 = *puVar28;
        uVar7 = puVar28[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
        uVar5 = puVar28[2];
        *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
        uVar22 = *(uint *)(unaff_RBP + -0x540);
        iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar56 != 0) {
          lVar50 = *(long *)(unaff_RBP + -0x538);
          bVar59 = false;
          uVar48 = uVar22;
LAB_006f1011:
          if (uVar48 < 0x30) goto code_r0x006f1016;
          lVar43 = lVar50 + 8;
          if (iVar56 != 1) {
            lVar34 = lVar50 + 0x10;
            do {
              lVar43 = lVar34;
              lVar34 = lVar43 + 8;
            } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
          }
LAB_006efd96:
          *(long *)(unaff_RBP + -0x538) = lVar43;
          if (bVar59) goto LAB_006efda2;
        }
LAB_006efdaa:
        if (uVar22 < 0x30) {
          puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
        }
        else {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
        }
        puVar33 = (undefined2 *)*puVar28;
LAB_006eee2f:
        *puVar33 = (short)uVar27;
        goto LAB_006ecc28;
      }
      if (*(int *)(unaff_RBP + -0x68c) == 0) goto LAB_006ecc01;
      puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
      uVar6 = *puVar28;
      uVar7 = puVar28[1];
      *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
      *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
      uVar5 = puVar28[2];
      *(undefined8 *)(unaff_RBP + -0x630) = uVar6;
      *(undefined8 *)(unaff_RBP + -0x628) = uVar7;
      *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
      uVar22 = *(uint *)(unaff_RBP + -0x540);
      iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
      if (iVar56 != 0) {
        lVar50 = *(long *)(unaff_RBP + -0x538);
        bVar59 = false;
        uVar48 = uVar22;
LAB_006f02f2:
        if (uVar48 < 0x30) goto code_r0x006f02f7;
        lVar43 = lVar50 + 8;
        if (iVar56 != 1) {
          lVar34 = lVar50 + 0x10;
          do {
            lVar43 = lVar34;
            lVar34 = lVar43 + 8;
          } while (lVar43 + 8 != lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8);
        }
LAB_006ef025:
        *(long *)(unaff_RBP + -0x538) = lVar43;
        if (bVar59) goto LAB_006ee4f0;
      }
LAB_006ee4f8:
      if (uVar22 < 0x30) {
        puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
        *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
      }
      else {
        puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
        *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
      }
      puVar28 = (undefined8 *)*puVar28;
    }
    *puVar28 = uVar27;
LAB_006ecc28:
    *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
    goto LAB_006eb6fe;
  }
  if (iVar56 == -1) goto switchD_006ebb4e_default;
LAB_006ee25d:
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee269;
  _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
  goto switchD_006ebb4e_default;
code_r0x006f0f12:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f1252;
  goto LAB_006f0f09;
code_r0x006efefe:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f0e89;
  goto LAB_006efef5;
code_r0x006f1016:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006efda2;
  goto LAB_006f1011;
code_r0x006f02f7:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006ee4f0;
  goto LAB_006f02f2;
LAB_006ef26a:
  if (uVar21 < 0x30) goto code_r0x006ef26f;
  lVar43 = lVar50 + 8;
  if (iVar56 != 1) {
    lVar34 = lVar50 + 0x10;
    do {
      lVar43 = lVar34;
      lVar34 = lVar43 + 8;
    } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
  }
  *(long *)(unaff_RBP + -0x538) = lVar43;
  if (bVar59) {
LAB_006ef27d:
    uVar48 = uVar21;
    *(uint *)(unaff_RBP + -0x540) = uVar48;
  }
LAB_006ef285:
  if (uVar48 < 0x30) {
    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar48 + 8;
  }
  else {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
  }
  puVar28 = (undefined8 *)*puVar28;
  *(undefined8 **)(unaff_RBP + -0x670) = puVar28;
LAB_006ebf64:
  if (puVar28 == (undefined8 *)0x0) goto switchD_006ebb4e_default;
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ebf77;
  pvVar31 = malloc(400);
  *(void **)(unaff_RBP + -0x6b8) = pvVar31;
  *puVar28 = pvVar31;
  if (pvVar31 == (void *)0x0) {
    uVar61 = 0xffffffff;
    if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
      uVar61 = *(undefined4 *)(unaff_RBP + -0x640);
    }
    *(undefined4 *)(unaff_RBP + -0x640) = uVar61;
    goto switchD_006ebb4e_default;
  }
  if (*(long **)(unaff_RBP + -0x6d0) == (long *)0x0) {
LAB_006ee683:
    puVar52 = (undefined1 *)((long)register0x00000020 + -0x120);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    lVar50 = 1;
    uVar27 = *(undefined8 *)(unaff_RBP + -0x6d0);
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x118) = uVar27;
    *(undefined8 **)(unaff_RBP + -0x6d0) = (undefined8 *)((long)register0x00000020 + -0x120);
    lVar43 = 0;
  }
  else {
    lVar43 = **(long **)(unaff_RBP + -0x6d0);
    lVar50 = lVar43 + 1;
    puVar52 = (undefined1 *)register0x00000020;
    if (lVar43 == 0x20) goto LAB_006ee683;
  }
  plVar38 = *(long **)(unaff_RBP + -0x6d0);
  lVar34 = *(long *)(unaff_RBP + -0x670);
  *(undefined8 *)(unaff_RBP + -0x698) = 100;
  *plVar38 = lVar50;
  plVar38[lVar43 + 2] = lVar34;
  register0x00000020 = (BADSPACEBASE *)puVar52;
  goto LAB_006ebfcc;
code_r0x006ef26f:
  uVar21 = uVar21 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006ef27d;
  goto LAB_006ef26a;
LAB_006f1083:
  if (uVar21 < 0x30) {
    uVar21 = uVar21 + 8;
    bVar59 = true;
    iVar56 = iVar56 + -1;
    if (iVar56 == 0) goto LAB_006f1096;
    goto LAB_006f1083;
  }
  lVar43 = lVar50 + 8;
  if (iVar56 != 1) {
    lVar34 = lVar50 + 0x10;
    do {
      lVar43 = lVar34;
      lVar34 = lVar43 + 8;
    } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43 + 8);
  }
  *(long *)(unaff_RBP + -0x538) = lVar43;
  if (bVar59) {
LAB_006f1096:
    uVar48 = uVar21;
    *(uint *)(unaff_RBP + -0x540) = uVar48;
  }
LAB_006f109e:
  if (uVar48 < 0x30) {
    puVar28 = (undefined8 *)((ulong)uVar48 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar48 + 8;
  }
  else {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x6b8) = *puVar28;
LAB_006eed40:
  if (*(long *)(unaff_RBP + -0x6b8) == 0) goto switchD_006ebb4e_default;
LAB_006ebfcc:
  if (uVar22 == 0xffffffff) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006ec862:
    iVar56 = -1;
    if (*(int *)(unaff_RBP + -0x640) != 0) {
      iVar56 = *(int *)(unaff_RBP + -0x640);
    }
    *(int *)(unaff_RBP + -0x640) = iVar56;
    goto switchD_006ebb4e_default;
  }
  pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
  if (pbVar42 < unaff_R15->_IO_read_end) {
    unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
    unaff_R13 = (ulong)*pbVar42;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6eebb8;
    uVar22 = __uflow(unaff_R15);
    unaff_R13 = (ulong)uVar22;
    if (uVar22 == 0xffffffff) goto LAB_006ec862;
  }
  pbVar58 = pbVar58 + 1;
  *(undefined8 *)(unaff_RBP + -0x540) = 0;
  *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
  if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 + (long)(int)unaff_R13 * 2) &
      0x20) == 0) {
    *(uint *)(unaff_RBP + -0x620) = *(uint *)(unaff_RBP + -0x63c) & 0x2100;
    while( true ) {
      pwVar45 = (wchar_t *)0x0;
      if (*(int *)(unaff_RBP + -0x610) == 0) {
        pwVar45 = *(wchar_t **)(unaff_RBP + -0x6b8);
      }
      while( true ) {
        pmVar4 = *(mbstate_t **)(unaff_RBP + -0x630);
        *(char *)(unaff_RBP + -0x50) = (char)unaff_R13;
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec07f;
        sVar32 = mbrtowc(pwVar45,(char *)(unaff_RBP + -0x50),1,pmVar4);
        if (sVar32 != 0xfffffffffffffffe) break;
        pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
        if (pbVar42 < unaff_R15->_IO_read_end) {
          unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
          unaff_R13 = (ulong)*pbVar42;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec09b;
          uVar22 = __uflow(unaff_R15);
          unaff_R13 = (ulong)uVar22;
          if (uVar22 == 0xffffffff) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
            goto switchD_006ebb4e_default;
          }
        }
        pbVar58 = pbVar58 + 1;
      }
      if (sVar32 != 1) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
        goto switchD_006ebb4e_default;
      }
      *(long *)(unaff_RBP + -0x6b8) = *(long *)(unaff_RBP + -0x6b8) + 4;
      if ((*(int *)(unaff_RBP + -0x610) == 0) && (*(int *)(unaff_RBP + -0x620) != 0)) {
        pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
        lVar50 = *(long *)(unaff_RBP + -0x698) * 4;
        if (*(void **)(unaff_RBP + -0x6b8) == (void *)((long)pvVar31 + lVar50)) {
          lVar43 = *(long *)(unaff_RBP + -0x698);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f215b;
          pvVar31 = realloc(pvVar31,lVar43 * 8);
          if (pvVar31 == (void *)0x0) {
            *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) + 1;
            pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f21f1;
            pvVar31 = realloc(pvVar31,lVar50 + 4);
            if (pvVar31 == (void *)0x0) {
              if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
                plVar38 = *(long **)(unaff_RBP + -0x670);
                *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
                *(undefined8 *)(unaff_RBP + -0x670) = 0;
                *(undefined4 *)(*plVar38 + -4 + lVar50) = 0;
              }
              else {
                *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
              }
              goto switchD_006ebb4e_default;
            }
            **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
            *(void **)(unaff_RBP + -0x6b8) = (void *)((long)pvVar31 + lVar50);
          }
          else {
            **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
            *(void **)(unaff_RBP + -0x6b8) = (void *)((long)pvVar31 + lVar50);
            *(long *)(unaff_RBP + -0x698) = *(long *)(unaff_RBP + -0x698) * 2;
          }
        }
      }
      if (0 < *(int *)(unaff_RBP + -0x638)) break;
LAB_006ee2d6:
      pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar42 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
        unaff_R13 = (ulong)*pbVar42;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef912;
        uVar22 = __uflow(unaff_R15);
        unaff_R13 = (ulong)uVar22;
        if (uVar22 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          goto LAB_006ee31d;
        }
      }
      pbVar58 = pbVar58 + 1;
      if ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 + (long)(int)unaff_R13 * 2)
          & 0x20) != 0) goto LAB_006ee30d;
    }
    piVar1 = (int *)(unaff_RBP + -0x638);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) goto LAB_006ee2d6;
  }
  else {
LAB_006ee30d:
    pbVar58 = pbVar58 + -1;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee31d;
    _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
  }
LAB_006ee31d:
  if (*(int *)(unaff_RBP + -0x610) == 0) goto LAB_006ee32d;
  goto LAB_006ed3d8;
code_r0x006f0657:
  uVar21 = uVar21 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f0665;
  goto LAB_006f0652;
code_r0x006ef996:
  uVar21 = uVar21 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006ef9a4;
  goto LAB_006ef991;
code_r0x006ef2e1:
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006ef2f2:
  if (*(int *)(unaff_RBP + -0x610) != 0) goto LAB_006ed3d8;
  if (*(int *)(unaff_RBP + -0x63c) != 0) {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x670);
    pvVar31 = (void *)*puVar28;
    sVar32 = *(long *)(unaff_RBP + -0x6b8) - (long)pvVar31;
    if ((long)sVar32 >> 2 != *(long *)(unaff_RBP + -0x698)) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef334;
      pvVar31 = realloc(pvVar31,sVar32);
      if (pvVar31 != (void *)0x0) {
        *puVar28 = pvVar31;
      }
    }
  }
  *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
  *(undefined8 *)(unaff_RBP + -0x670) = 0;
  goto LAB_006eb6fe;
switchD_006ebe25_caseD_2:
  if (uVar22 != 0xffffffff) {
    pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
    if (pbVar42 < unaff_R15->_IO_read_end) {
      unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
      unaff_R13 = (ulong)*pbVar42;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef870;
      uVar22 = __uflow(unaff_R15);
      unaff_R13 = (ulong)uVar22;
      if (uVar22 == 0xffffffff) goto LAB_006ed06f;
    }
    pbVar42 = pbVar58 + 1;
    *(uint *)(unaff_RBP + -0x638) =
         *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
    pcVar54 = *(char **)(unaff_RBP + -0x470);
    if (((int)unaff_R13 - 0x2bU & 0xfffffffd) == 0) {
      pcVar35 = *(char **)(unaff_RBP + -0x468);
      if (pcVar35 == pcVar54) {
        if (pcVar35 != (char *)0x0) {
          lVar50 = *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f03ab;
          cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
          if (cVar17 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar35 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            pcVar35[*(long *)(unaff_RBP + -0x460) - lVar50] = (char)unaff_R13;
          }
        }
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
        *pcVar54 = (char)unaff_R13;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006ebb4e_default;
      pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar42 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
        uVar40 = (ulong)*pbVar42;
        unaff_R13 = uVar40;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6efbb1;
        uVar22 = __uflow(unaff_R15);
        unaff_R13 = (ulong)uVar22;
        if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar40 = (ulong)(uVar22 & 0xff);
      }
      pbVar42 = pbVar58 + 2;
      if (*(int *)(unaff_RBP + -0x638) < 1) {
        *(undefined1 *)(unaff_RBP + -0x668) = 1;
        pcVar54 = *(char **)(unaff_RBP + -0x470);
        *(undefined8 *)(unaff_RBP + -0x620) = 1;
      }
      else {
        *(undefined1 *)(unaff_RBP + -0x668) = 1;
        *(undefined8 *)(unaff_RBP + -0x620) = 1;
        *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
        pcVar54 = *(char **)(unaff_RBP + -0x470);
      }
    }
    else {
      *(undefined8 *)(unaff_RBP + -0x620) = 0;
      uVar40 = unaff_R13 & 0xff;
      *(undefined1 *)(unaff_RBP + -0x668) = 0;
    }
    iVar56 = *(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar40 * 4);
    cVar17 = (char)unaff_R13;
    if (iVar56 == 0x6e) {
      if (*(char **)(unaff_RBP + -0x468) == pcVar54) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1f13;
        char_buffer_add_slow(unaff_RBP + -0x470,(int)cVar17);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
        *pcVar54 = cVar17;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006ebb4e_default;
      pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar58 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
        bVar16 = *pbVar58;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0d0f;
        iVar56 = __uflow(unaff_R15);
        bVar16 = (byte)iVar56;
        if (iVar56 == -1) goto switchD_006ebb4e_default;
      }
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (ulong)bVar16 * 4) != 0x61)
      goto switchD_006ebb4e_default;
      pbVar58 = *(byte **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pbVar58 == *(byte **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f16ed;
        char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)bVar16);
      }
      else {
        *(byte **)(unaff_RBP + -0x470) = pbVar58 + 1;
        *pbVar58 = bVar16;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006ebb4e_default;
      pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar58 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
        uVar40 = (ulong)*pbVar58;
        unaff_R13 = uVar40;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0ceb;
        uVar22 = __uflow(unaff_R15);
        unaff_R13 = (ulong)uVar22;
        if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar40 = (ulong)(uVar22 & 0xff);
      }
      pbVar58 = pbVar42 + 2;
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar40 * 4) != 0x6e)
      goto switchD_006ebb4e_default;
LAB_006eef10:
      pcVar54 = *(char **)(unaff_RBP + -0x470);
      if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2497;
        char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)unaff_R13);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
        *pcVar54 = (char)unaff_R13;
      }
    }
    else {
      if (iVar56 != 0x69) {
        if ((*(int *)(unaff_RBP + -0x638) == 0) || ((int)unaff_R13 != 0x30)) {
          *(undefined1 *)(unaff_RBP + -0x610) = 0x65;
          cVar17 = '\0';
        }
        else {
          if (*(char **)(unaff_RBP + -0x468) == pcVar54) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1e51;
            char_buffer_add_slow(unaff_RBP + -0x470,0x30);
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
            *pcVar54 = '0';
          }
          pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
          if (pbVar58 < unaff_R15->_IO_read_end) {
            unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
            unaff_R13 = (ulong)*pbVar58;
LAB_006ef3a7:
            pbVar42 = pbVar42 + 1;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f08ef;
            uVar22 = __uflow(unaff_R15);
            unaff_R13 = (ulong)uVar22;
            if (uVar22 != 0xffffffff) goto LAB_006ef3a7;
            *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          }
          if (((*(int *)(unaff_RBP + -0x638) < 1) ||
              (iVar56 = *(int *)(unaff_RBP + -0x638) + -1, *(int *)(unaff_RBP + -0x638) = iVar56,
              iVar56 != 0)) &&
             (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (unaff_R13 & 0xff) * 4) ==
              0x78)) {
            pcVar54 = *(char **)(unaff_RBP + -0x470);
            if (*(char **)(unaff_RBP + -0x468) == pcVar54) {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f30a0;
              char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)unaff_R13);
            }
            else {
              *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
              *pcVar54 = (char)unaff_R13;
            }
            *(uint *)(unaff_RBP + -0x63c) = *(uint *)(unaff_RBP + -0x63c) & 0xffffff7f | 0x800;
            if ((int)unaff_R13 == -1) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
            }
            else {
              pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
              if (pbVar58 < unaff_R15->_IO_read_end) {
                unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
                unaff_R13 = (ulong)*pbVar58;
              }
              else {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f3057;
                uVar22 = __uflow(unaff_R15);
                unaff_R13 = (ulong)uVar22;
                if (uVar22 == 0xffffffff) {
                  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                  goto LAB_006f1194;
                }
              }
              pbVar42 = pbVar42 + 1;
            }
LAB_006f1194:
            if (*(int *)(unaff_RBP + -0x638) < 1) {
              *(undefined1 *)(unaff_RBP + -0x610) = 0x70;
              pcVar54 = *(char **)(unaff_RBP + -0x470);
              cVar17 = '\0';
            }
            else {
              *(undefined1 *)(unaff_RBP + -0x610) = 0x70;
              pcVar54 = *(char **)(unaff_RBP + -0x470);
              cVar17 = '\0';
              *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
            }
          }
          else {
            *(undefined1 *)(unaff_RBP + -0x610) = 0x65;
            pcVar54 = *(char **)(unaff_RBP + -0x470);
            cVar17 = '\x01';
          }
        }
        if (pcVar54 != (char *)0x0) {
          *(byte **)(unaff_RBP + -0x648) = pbVar42;
          *(undefined1 *)(unaff_RBP + -0x660) = 0;
          uVar22 = *(uint *)(unaff_RBP + -0x63c) & 0x80;
          *(uint *)(unaff_RBP + -0x6a0) = uVar22;
          *(bool *)(unaff_RBP + -0x688) = uVar22 != 0;
          *(undefined1 *)(unaff_RBP + -0x630) = 0;
          iVar56 = *(int *)(unaff_RBP + -0x638);
          *(uint *)(unaff_RBP + -0x650) = *(uint *)(unaff_RBP + -0x63c) & 0x800;
          *(int *)(unaff_RBP + -0x6e8) = (int)*(char *)(unaff_RBP + -0x610);
          do {
            uVar22 = (uint)unaff_R13;
            cVar20 = (char)unaff_R13;
            if (uVar22 - 0x30 < 10) {
              if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
                lVar50 = *(long *)(unaff_RBP + -0x460);
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f05cf;
                cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
                if (cVar17 != '\0') {
                  *(char **)(unaff_RBP + -0x470) =
                       pcVar54 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
                  *(long *)(unaff_RBP + -0x468) =
                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                  pcVar54[*(long *)(unaff_RBP + -0x460) - lVar50] = cVar20;
                  goto LAB_006ef456;
                }
                *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                if (iVar56 == 0) goto LAB_006f1eb9;
              }
              else {
                *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                *pcVar54 = cVar20;
LAB_006ef456:
                if (iVar56 == 0) goto LAB_006f1698;
              }
              cVar17 = '\x01';
            }
            else {
              if (*(char *)(unaff_RBP + -0x660) == '\0') {
                if ((*(int *)(unaff_RBP + -0x650) == 0) ||
                   ((*(byte *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x68) + 1 +
                              (long)(int)uVar22 * 2) & 0x10) == 0)) {
                  if ((cVar17 == '\0') ||
                     (*(char *)(unaff_RBP + -0x610) !=
                      *(char *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                               (unaff_R13 & 0xff) * 4))) goto LAB_006ef4c8;
                  if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
                    uVar61 = *(undefined4 *)(unaff_RBP + -0x6e8);
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1a24;
                    char_buffer_add_slow(unaff_RBP + -0x470,uVar61);
                    *(char *)(unaff_RBP + -0x660) = cVar17;
                    *(char *)(unaff_RBP + -0x630) = cVar17;
                  }
                  else {
                    *(char *)(unaff_RBP + -0x660) = cVar17;
                    *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                    *(char *)(unaff_RBP + -0x630) = cVar17;
                    *pcVar54 = *(char *)(unaff_RBP + -0x610);
                  }
                }
                else if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
                  cVar17 = '\x01';
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2d94;
                  char_buffer_add_slow(unaff_RBP + -0x470,(int)cVar20);
                }
                else {
                  cVar17 = '\x01';
                  *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                  *pcVar54 = cVar20;
                }
              }
              else if ((pcVar54[-1] == *(char *)(unaff_RBP + -0x610)) &&
                      ((uVar22 - 0x2b & 0xfffffffd) == 0)) {
                if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2da9;
                  char_buffer_add_slow(unaff_RBP + -0x470,(int)cVar20);
                }
                else {
                  *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                  *pcVar54 = cVar20;
                }
              }
              else {
LAB_006ef4c8:
                iVar55 = 0x7fffffff;
                if (0 < iVar56) {
                  iVar55 = iVar56;
                }
                if (*(char *)(unaff_RBP + -0x630) == '\0') {
                  pbVar58 = *(byte **)(unaff_RBP + -0x6d8);
                  if (uVar22 == **(byte **)(unaff_RBP + -0x6d8)) {
                    *(char *)(unaff_RBP + -0x638) = cVar17;
                    do {
                      pbVar58 = pbVar58 + 1;
                      if (*pbVar58 == 0) {
                        cVar17 = *(char *)(unaff_RBP + -0x638);
                        cVar20 = **(char **)(unaff_RBP + -0x6d8);
                        goto LAB_006ef7ec;
                      }
                      if (iVar55 == 0) {
                        cVar17 = *(char *)(unaff_RBP + -0x638);
                        goto LAB_006f0d2b;
                      }
                      pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
                      if (pbVar42 < unaff_R15->_IO_read_end) {
                        unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
                        unaff_R13 = (ulong)*pbVar42;
                      }
                      else {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef7b6;
                        uVar22 = __uflow(unaff_R15);
                        unaff_R13 = (ulong)uVar22;
                        if (uVar22 == 0xffffffff) {
                          cVar17 = *(char *)(unaff_RBP + -0x638);
                          *(undefined4 *)(unaff_RBP + -0x600) =
                               *(undefined4 *)(in_FS_OFFSET + -0x58);
                          goto LAB_006ef7d9;
                        }
                      }
                      bVar16 = *pbVar58;
                      *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
                      iVar55 = iVar55 + -1;
                    } while ((uint)bVar16 == (uint)unaff_R13);
                    cVar17 = *(char *)(unaff_RBP + -0x638);
                  }
LAB_006ef7d9:
                  if (*pbVar58 != 0) {
LAB_006f0d2b:
                    if (*(int *)(unaff_RBP + -0x6a0) == 0) {
LAB_006ef4f3:
                      pbVar42 = *(byte **)(unaff_RBP + -0x680);
                      if (pbVar42 != (byte *)0x0) goto LAB_006ef506;
                    }
                    else {
                      lVar50 = (long)pbVar58 - (long)*(byte **)(unaff_RBP + -0x6d8);
                      lVar43 = 0;
                      pbVar42 = *(byte **)(unaff_RBP + -0x680);
                      if (lVar50 < 1) {
                        if (pbVar58 == *(byte **)(unaff_RBP + -0x6d8)) goto LAB_006f0d82;
                        goto LAB_006ef4f3;
                      }
                      do {
                        if (*pbVar42 != *(byte *)(*(long *)(unaff_RBP + -0x6d8) + lVar43))
                        goto LAB_006ef506;
                        pbVar42 = pbVar42 + 1;
                        lVar43 = (long)pbVar42 - *(long *)(unaff_RBP + -0x680);
                      } while (lVar43 < lVar50);
                      if (lVar43 == lVar50) {
LAB_006f0d82:
                        if ((uint)*pbVar42 == (uint)unaff_R13) {
                          *(char *)(unaff_RBP + -0x638) = cVar17;
                          do {
                            pbVar42 = pbVar42 + 1;
                            if (*pbVar42 == 0) {
                              cVar17 = *(char *)(unaff_RBP + -0x638);
                              goto LAB_006ef50f;
                            }
                            if (iVar55 == 0) {
                              *(int *)(unaff_RBP + -0x638) = iVar56;
                              pbVar58 = *(byte **)(unaff_RBP + -0x648);
                              bVar16 = *(byte *)(unaff_RBP + -0x630);
                              goto LAB_006f17ef;
                            }
                            pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
                            if (pbVar58 < unaff_R15->_IO_read_end) {
                              unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
                              unaff_R13 = (ulong)*pbVar58;
                            }
                            else {
                              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0de6;
                              uVar22 = __uflow(unaff_R15);
                              unaff_R13 = (ulong)uVar22;
                              if (uVar22 == 0xffffffff) {
                                cVar17 = *(char *)(unaff_RBP + -0x638);
                                *(undefined4 *)(unaff_RBP + -0x600) =
                                     *(undefined4 *)(in_FS_OFFSET + -0x58);
                                goto LAB_006ef506;
                              }
                            }
                            bVar16 = *pbVar42;
                            *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
                            iVar55 = iVar55 + -1;
                          } while ((uint)bVar16 == (uint)unaff_R13);
                          cVar17 = *(char *)(unaff_RBP + -0x638);
                        }
                      }
LAB_006ef506:
                      if (*pbVar42 == 0) {
LAB_006ef50f:
                        pcVar54 = *(char **)(unaff_RBP + -0x680);
                        lVar50 = unaff_RBP + -0x460;
                        cVar20 = *pcVar54;
                        if (cVar20 != '\0') {
                          *(_IO_FILE **)(unaff_RBP + -0x6f0) = unaff_R15;
                          do {
                            pcVar35 = *(char **)(unaff_RBP + -0x470);
                            if (pcVar35 == *(char **)(unaff_RBP + -0x468)) {
                              if (pcVar35 != (char *)0x0) {
                                *(int *)(unaff_RBP + -0x6fc) = iVar55;
                                *(long *)(unaff_RBP + -0x6f8) = lVar50;
                                *(long *)(unaff_RBP + -0x638) =
                                     (long)pcVar35 - *(long *)(unaff_RBP + -0x460);
                                *(undefined8 *)((long)register0x00000020 + -8) = 0x6efffc;
                                cVar18 = __libc_scratch_buffer_grow_preserve();
                                lVar50 = *(long *)(unaff_RBP + -0x6f8);
                                iVar55 = *(int *)(unaff_RBP + -0x6fc);
                                if (cVar18 == '\0') {
                                  *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0
                                  ;
                                }
                                else {
                                  pcVar35 = (char *)(*(long *)(unaff_RBP + -0x638) +
                                                    *(long *)(unaff_RBP + -0x460));
                                  *(char **)(unaff_RBP + -0x470) = pcVar35 + 1;
                                  *(long *)(unaff_RBP + -0x468) =
                                       *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458)
                                  ;
                                  *pcVar35 = cVar20;
                                }
                              }
                            }
                            else {
                              *(char **)(unaff_RBP + -0x470) = pcVar35 + 1;
                              *pcVar35 = cVar20;
                            }
                            cVar20 = pcVar54[1];
                            pcVar54 = pcVar54 + 1;
                          } while (cVar20 != '\0');
                          unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x6f0);
                        }
                        if (0 < iVar56) {
                          iVar56 = iVar55;
                        }
                        goto LAB_006ef583;
                      }
                    }
                    *(int *)(unaff_RBP + -0x638) = iVar56;
                    pbVar58 = *(byte **)(unaff_RBP + -0x648);
                    bVar16 = *(byte *)(unaff_RBP + -0x630);
                    if ((int)unaff_R13 != -1) {
LAB_006f17ef:
                      pbVar58 = pbVar58 + -1;
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f17ff;
                      _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
                    }
                    goto LAB_006ef5bd;
                  }
                  cVar20 = **(char **)(unaff_RBP + -0x6d8);
LAB_006ef7ec:
                  if (cVar20 != '\0') {
                    lVar43 = *(long *)(unaff_RBP + -0x6d8);
                    *(_IO_FILE **)(unaff_RBP + -0x638) = unaff_R15;
                    lVar50 = unaff_RBP + -0x460;
                    do {
                      pcVar54 = *(char **)(unaff_RBP + -0x470);
                      if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
                        if (pcVar54 != (char *)0x0) {
                          *(int *)(unaff_RBP + -0x6f8) = iVar55;
                          *(long *)(unaff_RBP + -0x6f0) = lVar50;
                          *(long *)(unaff_RBP + -0x630) =
                               (long)pcVar54 - *(long *)(unaff_RBP + -0x460);
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0073;
                          cVar18 = __libc_scratch_buffer_grow_preserve();
                          lVar50 = *(long *)(unaff_RBP + -0x6f0);
                          iVar55 = *(int *)(unaff_RBP + -0x6f8);
                          if (cVar18 == '\0') {
                            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
                          }
                          else {
                            pcVar54 = (char *)(*(long *)(unaff_RBP + -0x630) +
                                              *(long *)(unaff_RBP + -0x460));
                            *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                            *(long *)(unaff_RBP + -0x468) =
                                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
                            *pcVar54 = cVar20;
                          }
                        }
                      }
                      else {
                        *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                        *pcVar54 = cVar20;
                      }
                      cVar20 = *(char *)(lVar43 + 1);
                      lVar43 = lVar43 + 1;
                    } while (cVar20 != '\0');
                    unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x638);
                  }
                }
                else if (**(byte **)(unaff_RBP + -0x6d8) != 0) goto LAB_006ef4f3;
                *(undefined1 *)(unaff_RBP + -0x630) = 1;
                if (0 < iVar56) {
                  iVar56 = iVar55;
                }
              }
LAB_006ef583:
              if (iVar56 == 0) {
LAB_006f1698:
                *(int *)(unaff_RBP + -0x638) = iVar56;
                pbVar58 = *(byte **)(unaff_RBP + -0x648);
                bVar16 = *(byte *)(unaff_RBP + -0x630);
                goto LAB_006ef5bd;
              }
              if ((int)unaff_R13 == -1) {
                *(int *)(unaff_RBP + -0x638) = iVar56;
                pbVar58 = *(byte **)(unaff_RBP + -0x648);
                bVar16 = *(byte *)(unaff_RBP + -0x630);
                *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
                goto LAB_006ef5bd;
              }
            }
            pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar58 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
              unaff_R13 = (ulong)*pbVar58;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef678;
              uVar22 = __uflow(unaff_R15);
              unaff_R13 = (ulong)uVar22;
              if (uVar22 == 0xffffffff) goto code_r0x006ef684;
            }
            *(long *)(unaff_RBP + -0x648) = *(long *)(unaff_RBP + -0x648) + 1;
            pcVar54 = *(char **)(unaff_RBP + -0x470);
            iVar56 = iVar56 - (uint)(0 < iVar56);
            if (pcVar54 == (char *)0x0) break;
          } while( true );
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        goto switchD_006ebb4e_default;
      }
      if (*(char **)(unaff_RBP + -0x468) == pcVar54) {
        if (pcVar54 != (char *)0x0) {
          lVar50 = *(long *)(unaff_RBP + -0x460);
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f314f;
          cVar20 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
          if (cVar20 == '\0') {
            *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar54 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
            *(long *)(unaff_RBP + -0x468) =
                 *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
            pcVar54[*(long *)(unaff_RBP + -0x460) - lVar50] = cVar17;
          }
        }
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
        *pcVar54 = cVar17;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006ebb4e_default;
      pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar58 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
        bVar16 = *pbVar58;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0837;
        iVar56 = __uflow(unaff_R15);
        bVar16 = (byte)iVar56;
        if (iVar56 == -1) goto switchD_006ebb4e_default;
      }
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (ulong)bVar16 * 4) != 0x6e)
      goto switchD_006ebb4e_default;
      pbVar58 = *(byte **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pbVar58 == *(byte **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1e33;
        char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)bVar16);
      }
      else {
        *(byte **)(unaff_RBP + -0x470) = pbVar58 + 1;
        *pbVar58 = bVar16;
      }
      if (*(int *)(unaff_RBP + -0x638) == 0) goto switchD_006ebb4e_default;
      pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar58 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
        uVar40 = (ulong)*pbVar58;
        unaff_R13 = uVar40;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0850;
        uVar22 = __uflow(unaff_R15);
        unaff_R13 = (ulong)uVar22;
        if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
        uVar40 = (ulong)(uVar22 & 0xff);
      }
      pbVar58 = pbVar42 + 2;
      if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar40 * 4) != 0x66)
      goto switchD_006ebb4e_default;
      pcVar54 = *(char **)(unaff_RBP + -0x470);
      *(uint *)(unaff_RBP + -0x638) =
           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
      if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1537;
        char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)unaff_R13);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
        *pcVar54 = (char)unaff_R13;
      }
      if (*(int *)(unaff_RBP + -0x638) != 0) {
        pbVar53 = (byte *)unaff_R15->_IO_read_ptr;
        if (pbVar53 < unaff_R15->_IO_read_end) {
          unaff_R15->_IO_read_ptr = (char *)(pbVar53 + 1);
          uVar40 = (ulong)*pbVar53;
          unaff_R13 = uVar40;
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f14d7;
          uVar22 = __uflow(unaff_R15);
          unaff_R13 = (ulong)uVar22;
          if (uVar22 == 0xffffffff) {
            *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
            goto LAB_006ec70e;
          }
          uVar40 = (ulong)(uVar22 & 0xff);
        }
        if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + uVar40 * 4) == 0x69) {
          pcVar54 = *(char **)(unaff_RBP + -0x470);
          *(uint *)(unaff_RBP + -0x638) =
               *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
          if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2446;
            char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)unaff_R13);
          }
          else {
            *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
            *pcVar54 = (char)unaff_R13;
          }
          if (*(int *)(unaff_RBP + -0x638) != 0) {
            pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
            if (pbVar58 < unaff_R15->_IO_read_end) {
              unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
              bVar16 = *pbVar58;
            }
            else {
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2421;
              iVar56 = __uflow(unaff_R15);
              bVar16 = (byte)iVar56;
              if (iVar56 == -1) goto switchD_006ebb4e_default;
            }
            if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (ulong)bVar16 * 4) ==
                0x6e) {
              pbVar58 = *(byte **)(unaff_RBP + -0x470);
              *(uint *)(unaff_RBP + -0x638) =
                   *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
              if (pbVar58 == *(byte **)(unaff_RBP + -0x468)) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f240c;
                char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)bVar16);
              }
              else {
                *(byte **)(unaff_RBP + -0x470) = pbVar58 + 1;
                *pbVar58 = bVar16;
              }
              if (*(int *)(unaff_RBP + -0x638) != 0) {
                pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
                if (pbVar58 < unaff_R15->_IO_read_end) {
                  unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
                  uVar40 = (ulong)*pbVar58;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f23e4;
                  uVar22 = __uflow(unaff_R15);
                  uVar40 = (ulong)uVar22;
                  if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
                }
                if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (uVar40 & 0xff) * 4)
                    == 0x69) {
                  pcVar54 = *(char **)(unaff_RBP + -0x470);
                  *(uint *)(unaff_RBP + -0x638) =
                       *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                  if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
                    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f23cf;
                    char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)uVar40);
                  }
                  else {
                    *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                    *pcVar54 = (char)uVar40;
                  }
                  if (*(int *)(unaff_RBP + -0x638) != 0) {
                    pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
                    if (pbVar58 < unaff_R15->_IO_read_end) {
                      unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
                      uVar40 = (ulong)*pbVar58;
                    }
                    else {
                      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f23a7;
                      uVar22 = __uflow(unaff_R15);
                      uVar40 = (ulong)uVar22;
                      if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
                    }
                    if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                                (uVar40 & 0xff) * 4) == 0x74) {
                      pcVar54 = *(char **)(unaff_RBP + -0x470);
                      *(uint *)(unaff_RBP + -0x638) =
                           *(int *)(unaff_RBP + -0x638) - (uint)(0 < *(int *)(unaff_RBP + -0x638));
                      if (pcVar54 == *(char **)(unaff_RBP + -0x468)) {
                        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2392;
                        char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)uVar40);
                      }
                      else {
                        *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                        *pcVar54 = (char)uVar40;
                      }
                      if (*(int *)(unaff_RBP + -0x638) != 0) {
                        pbVar58 = (byte *)unaff_R15->_IO_read_ptr;
                        if (pbVar58 < unaff_R15->_IO_read_end) {
                          unaff_R15->_IO_read_ptr = (char *)(pbVar58 + 1);
                          unaff_R13 = (ulong)*pbVar58;
                        }
                        else {
                          *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2367;
                          uVar22 = __uflow(unaff_R15);
                          unaff_R13 = (ulong)uVar22;
                          if (uVar22 == 0xffffffff) goto switchD_006ebb4e_default;
                        }
                        pbVar58 = pbVar42 + 7;
                        if (*(int *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) +
                                    (unaff_R13 & 0xff) * 4) == 0x79) goto LAB_006eef10;
                      }
                    }
                  }
                }
              }
            }
          }
          goto switchD_006ebb4e_default;
        }
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f1234;
        _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
      }
    }
LAB_006ec70e:
    puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
    if (puVar52 != *(undefined1 **)(unaff_RBP + -0x468)) goto LAB_006ec722;
    if (puVar52 != (undefined1 *)0x0) goto LAB_006ef619;
    goto LAB_006f095e;
  }
LAB_006ed065:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
LAB_006ed06f:
  iVar56 = -1;
  if (*(int *)(unaff_RBP + -0x640) != 0) {
    iVar56 = *(int *)(unaff_RBP + -0x640);
  }
  *(int *)(unaff_RBP + -0x640) = iVar56;
  goto switchD_006ebb4e_default;
code_r0x006ef684:
  *(int *)(unaff_RBP + -0x638) = iVar56;
  pbVar58 = *(byte **)(unaff_RBP + -0x648);
  bVar16 = *(byte *)(unaff_RBP + -0x630);
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006ef5bd:
  puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
  if (puVar52 == (undefined1 *)0x0) {
LAB_006f1eb9:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006ebb4e_default;
  }
  if ((*(uint *)(unaff_RBP + -0x63c) & 0x400) != 0) {
    if (*(int *)(unaff_RBP + -0x650) != 0) {
      lVar50 = (long)puVar52 - *(long *)(unaff_RBP + -0x460);
      if (lVar50 == *(long *)(unaff_RBP + -0x620)) goto switchD_006ebb4e_default;
      goto LAB_006f24af;
    }
    if (((long)puVar52 - *(long *)(unaff_RBP + -0x460) != *(long *)(unaff_RBP + -0x620)) &&
       ((bVar16 & 1) == 0)) goto LAB_006ef609;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f24fd;
    p_Var29 = wctrans("to_inpunct");
    *(wctrans_t *)(unaff_RBP + -0x668) = p_Var29;
    if (p_Var29 == (wctrans_t)0x0) goto LAB_006f25f8;
    if ((int)unaff_R13 == -1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    }
    else {
      pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
      if (pbVar42 < unaff_R15->_IO_read_end) {
        unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
        unaff_R13 = (ulong)*pbVar42;
      }
      else {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2cf5;
        uVar22 = __uflow(unaff_R15);
        unaff_R13 = (ulong)uVar22;
        if (uVar22 == 0xffffffff) {
          *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
          goto LAB_006f2535;
        }
      }
      pbVar58 = pbVar58 + 1;
    }
LAB_006f2535:
    p_Var29 = *(wctrans_t *)(unaff_RBP + -0x668);
    pmVar4 = (mbstate_t *)(unaff_RBP + -0x5b0);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f254d;
    wVar23 = towctrans(0x2e,p_Var29);
    *(undefined8 *)(unaff_RBP + -0x5b0) = 0;
    *(wchar_t *)(unaff_RBP + -0x564) = wVar23;
    *(bool *)(unaff_RBP + -0x630) =
         *(long *)(unaff_RBP + -0x470) - *(long *)(unaff_RBP + -0x460) ==
         *(long *)(unaff_RBP + -0x620);
    *(char **)(unaff_RBP + -0x648) = (char *)(unaff_RBP + -0x485);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2595;
    sVar32 = wcrtomb((char *)(unaff_RBP + -0x485),wVar23,pmVar4);
    if (sVar32 != 0xffffffffffffffff) {
      pcVar54 = *(char **)(unaff_RBP + -0x6d8);
      *(undefined1 *)(unaff_RBP + -0x485 + sVar32) = 0;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f25b3;
      sVar32 = strlen(pcVar54);
      bVar59 = false;
      if (sVar32 + *(long *)(unaff_RBP + -0x620) ==
          *(long *)(unaff_RBP + -0x470) - *(long *)(unaff_RBP + -0x460)) {
        pcVar54 = *(char **)(unaff_RBP + -0x648);
        pcVar35 = *(char **)(unaff_RBP + -0x6d8);
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f25e6;
        iVar56 = strcmp(pcVar35,pcVar54);
        bVar59 = iVar56 == 0;
      }
      bVar19 = bVar59 | (byte)*(undefined4 *)(unaff_RBP + -0x630);
LAB_006f25f4:
      if (bVar19 != 0) {
        lVar50 = 0;
        *(undefined1 *)(unaff_RBP + -0x648) = *(undefined1 *)(unaff_RBP + -0x688);
        *(long *)(unaff_RBP + -0x630) = unaff_RBP + -0x540;
        *(long *)(unaff_RBP + -0x650) = unaff_RBP + -0x590;
        *(long *)(unaff_RBP + -0x6e8) = unaff_RBP + -0x496;
        do {
          *(int *)(unaff_RBP + -0x6a0) = (int)lVar50;
          *(long *)(unaff_RBP + -0x6f8) = lVar50 * 0x11 + *(long *)(unaff_RBP + -0x630);
          if (lVar50 == 10) {
            p_Var29 = *(wctrans_t *)(unaff_RBP + -0x668);
            *(undefined8 *)(unaff_RBP + -0x6f0) = 10;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2892;
            wVar24 = towctrans(0x2c,p_Var29);
            pmVar4->__count = 0;
            pmVar4->__value = (_union_27)0x0;
            pcVar54 = *(char **)(unaff_RBP + -0x6f8);
            *(wint_t *)(unaff_RBP + -0x568) = wVar24;
            *(byte *)(unaff_RBP + -0x648) = *(byte *)(unaff_RBP + -0x648) & wVar24 != 0;
            wVar23 = *(wchar_t *)(*(long *)(unaff_RBP + -0x650) + 0x28);
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f28c3;
            sVar32 = wcrtomb(pcVar54,wVar23,pmVar4);
            lVar50 = *(long *)(unaff_RBP + -0x6f0);
            if (sVar32 != 0xffffffffffffffff) goto LAB_006f26d7;
            if (*(char *)(unaff_RBP + -0x648) != '\0') {
              pcVar54 = *(char **)(unaff_RBP + -0x680);
              *(long *)(unaff_RBP + -0x6a0) = lVar50;
              *(undefined8 *)((long)register0x00000020 + -8) = 0x6f28f4;
              sVar32 = strlen(pcVar54);
              lVar50 = *(long *)(unaff_RBP + -0x6a0);
              if (sVar32 < 0x11) {
                puVar52 = *(undefined1 **)(unaff_RBP + -0x680);
                puVar37 = *(undefined1 **)(unaff_RBP + -0x6e8);
                for (uVar40 = (ulong)((int)sVar32 + 1); uVar40 != 0; uVar40 = uVar40 - 1) {
                  *puVar37 = *puVar52;
                  puVar52 = puVar52 + (ulong)bVar60 * -2 + 1;
                  puVar37 = puVar37 + (ulong)bVar60 * -2 + 1;
                }
              }
              else {
                *(undefined1 *)(unaff_RBP + -0x648) = 0;
              }
            }
          }
          else {
            p_Var29 = *(wctrans_t *)(unaff_RBP + -0x668);
            *(long *)(unaff_RBP + -0x6f0) = lVar50;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f269c;
            wVar23 = towctrans((int)lVar50 + 0x30,p_Var29);
            lVar50 = *(long *)(unaff_RBP + -0x6f0);
            pmVar4->__count = 0;
            pmVar4->__value = (_union_27)0x0;
            pcVar54 = *(char **)(unaff_RBP + -0x6f8);
            *(wchar_t *)(*(long *)(unaff_RBP + -0x650) + lVar50 * 4) = wVar23;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f26c6;
            sVar32 = wcrtomb(pcVar54,wVar23,pmVar4);
            lVar50 = *(long *)(unaff_RBP + -0x6f0);
            if (sVar32 == 0xffffffffffffffff) goto LAB_006f25f8;
LAB_006f26d7:
            *(undefined1 *)(sVar32 + (long)*(int *)(unaff_RBP + -0x6a0) * 0x11 + -0x540 + unaff_RBP)
                 = 0;
          }
          lVar50 = lVar50 + 1;
        } while (lVar50 != 0xb);
        *(int *)(unaff_RBP + -0x6f0) = (int)*(char *)(unaff_RBP + -0x610);
LAB_006f270d:
        pcVar54 = *(char **)(unaff_RBP + -0x470);
        if (pcVar54 != (char *)0x0) {
          if (*(char *)(unaff_RBP + -0x660) != '\0') {
            if ((pcVar54[-1] == *(char *)(unaff_RBP + -0x610)) &&
               (((int)unaff_R13 - 0x2bU & 0xfffffffd) == 0)) {
              if (*(char **)(unaff_RBP + -0x468) == pcVar54) {
                *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2c59;
                char_buffer_add_slow(unaff_RBP + -0x470,(int)(char)unaff_R13);
              }
              else {
                *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
                *pcVar54 = (char)unaff_R13;
              }
              goto LAB_006f29b9;
            }
LAB_006f273a:
            pbVar42 = *(byte **)(unaff_RBP + -0x630);
            *(byte *)(unaff_RBP + -0x668) = bVar16;
            iVar56 = 0x7fffffff;
            if (0 < *(int *)(unaff_RBP + -0x638)) {
              iVar56 = *(int *)(unaff_RBP + -0x638);
            }
            *(undefined4 *)(unaff_RBP + -0x648) = 0;
            *(int *)(unaff_RBP + -0x6a0) = iVar56;
            do {
              *(byte **)(unaff_RBP + -0x650) = pbVar42;
              iVar56 = *(int *)(unaff_RBP + -0x6a0);
              *(long *)(unaff_RBP + -0x6e8) = (long)pbVar58 - (long)pbVar42;
              while (pbVar58 = pbVar42 + *(long *)(unaff_RBP + -0x6e8),
                    (uint)*pbVar42 == (uint)unaff_R13) {
                pbVar42 = pbVar42 + 1;
                if (*pbVar42 == 0) {
                  iVar55 = *(int *)(unaff_RBP + -0x648);
                  bVar16 = *(byte *)(unaff_RBP + -0x668);
                  goto LAB_006f297b;
                }
                if (iVar56 == 0) {
                  pbVar53 = *(byte **)(unaff_RBP + -0x650);
                  if (pbVar53 < pbVar42) goto LAB_006f2a16;
                  goto LAB_006f2815;
                }
                pbVar53 = (byte *)unaff_R15->_IO_read_ptr;
                if (pbVar53 < unaff_R15->_IO_read_end) {
                  unaff_R15->_IO_read_ptr = (char *)(pbVar53 + 1);
                  unaff_R13 = (ulong)*pbVar53;
                }
                else {
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f27e0;
                  uVar22 = __uflow(unaff_R15);
                  unaff_R13 = (ulong)uVar22;
                  if (uVar22 == 0xffffffff) {
                    pbVar53 = *(byte **)(unaff_RBP + -0x650);
                    *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
                    goto LAB_006f2802;
                  }
                }
                iVar56 = iVar56 + -1;
              }
              pbVar53 = *(byte **)(unaff_RBP + -0x650);
LAB_006f2802:
              if (*pbVar42 == 0) goto LAB_006f2964;
              if (pbVar53 < pbVar42) {
                pbVar44 = pbVar42;
                if ((int)unaff_R13 != -1) {
LAB_006f2a16:
                  *(_IO_FILE **)(unaff_RBP + -0x650) = unaff_R15;
                  pbVar58 = pbVar58 + -1;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2a2d;
                  _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
                  unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x650);
                  pbVar44 = pbVar42;
                }
                while (pbVar42 = pbVar42 + -1, pbVar53 != pbVar42) {
                  bVar16 = *pbVar42;
                  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2944;
                  _IO_sputbackc(unaff_R15,bVar16);
                }
                unaff_R13 = (ulong)*pbVar53;
                pbVar58 = pbVar53 + (long)(pbVar58 + (1 - (long)pbVar44));
              }
LAB_006f2815:
              *(int *)(unaff_RBP + -0x648) = *(int *)(unaff_RBP + -0x648) + 1;
              pbVar42 = pbVar53 + 0x11;
            } while (*(int *)(unaff_RBP + -0x648) != 0xc);
            goto LAB_006f2835;
          }
          if (((ulong)((long)pcVar54 - *(long *)(unaff_RBP + -0x460)) <=
               *(ulong *)(unaff_RBP + -0x620)) ||
             (*(char *)(unaff_RBP + -0x610) !=
              *(char *)(*(long *)(*(long *)(unaff_RBP + -0x658) + 0x70) + (unaff_R13 & 0xff) * 4)))
          goto LAB_006f273a;
          if (*(char **)(unaff_RBP + -0x468) == pcVar54) {
            uVar61 = *(undefined4 *)(unaff_RBP + -0x6f0);
            bVar16 = 1;
            *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2c76;
            char_buffer_add_slow(unaff_RBP + -0x470,uVar61);
            *(undefined1 *)(unaff_RBP + -0x660) = 1;
          }
          else {
            *(undefined1 *)(unaff_RBP + -0x660) = 1;
            bVar16 = 1;
            *(char **)(unaff_RBP + -0x470) = pcVar54 + 1;
            *pcVar54 = *(char *)(unaff_RBP + -0x610);
          }
          goto LAB_006f29b9;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
        goto switchD_006ebb4e_default;
      }
      goto LAB_006f25f8;
    }
    pcVar54 = *(char **)(unaff_RBP + -0x6d8);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2ca4;
    sVar32 = strlen(pcVar54);
    puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
    if (sVar32 < 0x11) {
      lVar50 = *(long *)(unaff_RBP + -0x620);
      lVar43 = *(long *)(unaff_RBP + -0x460);
      puVar37 = *(undefined1 **)(unaff_RBP + -0x6d8);
      puVar49 = *(undefined1 **)(unaff_RBP + -0x648);
      for (uVar40 = (ulong)((int)sVar32 + 1); uVar40 != 0; uVar40 = uVar40 - 1) {
        *puVar49 = *puVar37;
        puVar37 = puVar37 + (ulong)bVar60 * -2 + 1;
        puVar49 = puVar49 + (ulong)bVar60 * -2 + 1;
      }
      bVar19 = (long)puVar52 - lVar43 == lVar50 + sVar32 | (byte)*(undefined4 *)(unaff_RBP + -0x630)
      ;
      goto LAB_006f25f4;
    }
    goto LAB_006f25ff;
  }
  lVar50 = (long)puVar52 - *(long *)(unaff_RBP + -0x460);
  if (lVar50 == *(long *)(unaff_RBP + -0x620)) goto switchD_006ebb4e_default;
  if (*(int *)(unaff_RBP + -0x650) != 0) {
LAB_006f24af:
    if ((char)(*(char *)(unaff_RBP + -0x668) + '\x02') == lVar50) goto switchD_006ebb4e_default;
  }
LAB_006ef609:
  if (*(undefined1 **)(unaff_RBP + -0x468) == puVar52) {
LAB_006ef619:
    lVar50 = *(long *)(unaff_RBP + -0x460);
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef62f;
    cVar17 = __libc_scratch_buffer_grow_preserve(unaff_RBP + -0x460);
    if (cVar17 == '\0') {
      *(undefined1 (*) [16])(unaff_RBP + -0x470) = (undefined1  [16])0x0;
      goto LAB_006f095e;
    }
    *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + (*(long *)(unaff_RBP + -0x460) - lVar50) + 1;
    *(long *)(unaff_RBP + -0x468) = *(long *)(unaff_RBP + -0x460) + *(long *)(unaff_RBP + -0x458);
    puVar52[*(long *)(unaff_RBP + -0x460) - lVar50] = 0;
  }
  else {
LAB_006ec722:
    *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
    *puVar52 = 0;
  }
  if (*(long *)(unaff_RBP + -0x470) == 0) {
LAB_006f095e:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006ebb4e_default;
  }
  uVar22 = *(uint *)(unaff_RBP + -0x63c);
  uVar27 = *(undefined8 *)(unaff_RBP + -0x460);
  uVar48 = uVar22 & 8;
  if ((uVar22 & 2) != 0) {
    if (*(int *)(unaff_RBP + -0x6dc) != 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0f58;
      uVar27 = __strtof128_internal(uVar27,unaff_RBP + -0x5e8,uVar22 & 0x80);
      Var9 = in_ST0;
      Var10 = in_ST1;
      Var11 = in_ST2;
      Var12 = in_ST3;
      Var13 = in_ST4;
      Var14 = in_ST5;
      Var15 = in_ST6;
      if (uVar48 != 0) goto LAB_006ed3c4;
      lVar50 = *(long *)(unaff_RBP + -0x5e8);
      if (lVar50 == *(long *)(unaff_RBP + -0x460)) goto switchD_006ebb4e_default;
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar22 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar22 < 0x30) {
          plVar38 = (long *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
        }
        else {
          plVar38 = *(long **)(unaff_RBP + -0x5a0);
          *(long **)(unaff_RBP + -0x5a0) = plVar38 + 1;
        }
        puVar28 = (undefined8 *)*plVar38;
      }
      else {
        puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar6 = *puVar28;
        uVar7 = puVar28[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
        uVar5 = puVar28[2];
        *(undefined8 *)(unaff_RBP + -0x610) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x608) = uVar7;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
        uVar22 = *(uint *)(unaff_RBP + -0x540);
        iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar56 != 0) {
          lVar43 = *(long *)(unaff_RBP + -0x538);
          bVar59 = false;
          uVar48 = uVar22;
LAB_006f2015:
          if (uVar48 < 0x30) goto code_r0x006f201a;
          lVar34 = lVar43 + 8;
          if (iVar56 != 1) {
            lVar51 = lVar43 + 0x10;
            do {
              lVar34 = lVar51;
              lVar51 = lVar34 + 8;
            } while (lVar34 + 8 != lVar43 + 0x18 + (ulong)(iVar56 - 2) * 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar34;
          if (!bVar59) goto LAB_006f2030;
LAB_006f2028:
          uVar22 = uVar48;
          *(uint *)(unaff_RBP + -0x540) = uVar22;
        }
LAB_006f2030:
        if (uVar22 < 0x30) {
          plVar38 = (long *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
        }
        else {
          plVar38 = *(long **)(unaff_RBP + -0x538);
          *(long **)(unaff_RBP + -0x538) = plVar38 + 1;
        }
        puVar28 = (undefined8 *)*plVar38;
      }
      lVar43 = *(long *)(unaff_RBP + -0x460);
      *puVar28 = uVar27;
      puVar28[1] = extraout_XMM0_Qb;
      goto LAB_006ec7e0;
    }
    if (*(int *)(unaff_RBP + -0x6e0) != 0) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec788;
      __strtold_internal(uVar27,unaff_RBP + -0x5e8);
      Var9 = in_ST1;
      Var10 = in_ST2;
      Var11 = in_ST3;
      Var12 = in_ST4;
      Var13 = in_ST5;
      Var14 = in_ST6;
      Var15 = in_ST7;
      if (uVar48 == 0) {
        lVar43 = *(long *)(unaff_RBP + -0x460);
        lVar50 = *(long *)(unaff_RBP + -0x5e8);
        if (lVar50 == lVar43) goto switchD_006ebb4e_default;
        if (*(int *)(unaff_RBP + -0x68c) == 0) {
          uVar22 = *(uint *)(unaff_RBP + -0x5a8);
          if (uVar22 < 0x30) {
            puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
            *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
          }
          else {
            puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
            *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
          }
          pVar26 = (unkbyte10 *)*puVar28;
        }
        else {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
          uVar5 = *puVar28;
          uVar6 = puVar28[1];
          *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
          uVar27 = puVar28[2];
          *(undefined8 *)(unaff_RBP + -0x610) = uVar5;
          *(undefined8 *)(unaff_RBP + -0x608) = uVar6;
          *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
          uVar22 = *(uint *)(unaff_RBP + -0x540);
          iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
          if (iVar56 != 0) {
            lVar34 = *(long *)(unaff_RBP + -0x538);
            bVar59 = false;
            uVar48 = uVar22;
LAB_006f2ed1:
            if (uVar48 < 0x30) goto code_r0x006f2ed6;
            lVar51 = lVar34 + 8;
            if (iVar56 != 1) {
              lVar8 = lVar34 + 0x10;
              do {
                lVar51 = lVar8;
                lVar8 = lVar51 + 8;
              } while (lVar51 + 8 != lVar34 + 0x18 + (ulong)(iVar56 - 2) * 8);
            }
            *(long *)(unaff_RBP + -0x538) = lVar51;
            if (!bVar59) goto LAB_006f2f07;
LAB_006f2eff:
            uVar22 = uVar48;
            *(uint *)(unaff_RBP + -0x540) = uVar22;
          }
LAB_006f2f07:
          if (uVar22 < 0x30) {
            puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
            *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
          }
          else {
            puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
            *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
          }
          pVar26 = (unkbyte10 *)*puVar28;
        }
        *pVar26 = in_ST0;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
        in_ST6 = in_ST7;
        goto LAB_006ec7e0;
      }
      goto LAB_006ed3c4;
    }
  }
  if ((*(byte *)(unaff_RBP + -0x63c) & 3) == 0) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f0980;
    uVar61 = __strtof_internal(uVar27,unaff_RBP + -0x5e8);
    Var9 = in_ST0;
    Var10 = in_ST1;
    Var11 = in_ST2;
    Var12 = in_ST3;
    Var13 = in_ST4;
    Var14 = in_ST5;
    Var15 = in_ST6;
    if (uVar48 == 0) {
      lVar50 = *(long *)(unaff_RBP + -0x5e8);
      if (lVar50 == *(long *)(unaff_RBP + -0x460)) goto switchD_006ebb4e_default;
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar22 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar22 < 0x30) {
          puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
        }
        else {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
        }
        puVar36 = (undefined4 *)*puVar28;
      }
      else {
        puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar5 = *puVar28;
        uVar6 = puVar28[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar6;
        uVar27 = puVar28[2];
        *(undefined8 *)(unaff_RBP + -0x610) = uVar5;
        *(undefined8 *)(unaff_RBP + -0x608) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar27;
        uVar22 = *(uint *)(unaff_RBP + -0x540);
        iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar56 != 0) {
          lVar43 = *(long *)(unaff_RBP + -0x538);
          bVar59 = false;
          uVar48 = uVar22;
LAB_006f2254:
          if (uVar48 < 0x30) goto code_r0x006f2259;
          lVar34 = lVar43 + 8;
          if (iVar56 != 1) {
            lVar51 = lVar43 + 0x10;
            do {
              lVar34 = lVar51;
              lVar51 = lVar34 + 8;
            } while (lVar34 + 8 != lVar43 + 0x18 + (ulong)(iVar56 - 2) * 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar34;
          if (!bVar59) goto LAB_006f2291;
LAB_006f2289:
          uVar22 = uVar48;
          *(uint *)(unaff_RBP + -0x540) = uVar22;
        }
LAB_006f2291:
        if (uVar22 < 0x30) {
          puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
        }
        else {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
        }
        puVar36 = (undefined4 *)*puVar28;
      }
      lVar43 = *(long *)(unaff_RBP + -0x460);
      *puVar36 = uVar61;
      goto LAB_006ec7e0;
    }
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ef8ac;
    uVar27 = __strtod_internal();
    Var9 = in_ST0;
    Var10 = in_ST1;
    Var11 = in_ST2;
    Var12 = in_ST3;
    Var13 = in_ST4;
    Var14 = in_ST5;
    Var15 = in_ST6;
    if (uVar48 == 0) {
      lVar50 = *(long *)(unaff_RBP + -0x5e8);
      if (lVar50 == *(long *)(unaff_RBP + -0x460)) goto switchD_006ebb4e_default;
      if (*(int *)(unaff_RBP + -0x68c) == 0) {
        uVar22 = *(uint *)(unaff_RBP + -0x5a8);
        if (uVar22 < 0x30) {
          puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x598));
          *(uint *)(unaff_RBP + -0x5a8) = uVar22 + 8;
        }
        else {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x5a0);
          *(undefined8 **)(unaff_RBP + -0x5a0) = puVar28 + 1;
        }
        puVar28 = (undefined8 *)*puVar28;
      }
      else {
        puVar28 = *(undefined8 **)(unaff_RBP + -0x6c8);
        uVar6 = *puVar28;
        uVar7 = puVar28[1];
        *(undefined8 *)(unaff_RBP + -0x540) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x538) = uVar7;
        uVar5 = puVar28[2];
        *(undefined8 *)(unaff_RBP + -0x610) = uVar6;
        *(undefined8 *)(unaff_RBP + -0x608) = uVar7;
        *(undefined8 *)(unaff_RBP + -0x530) = uVar5;
        uVar22 = *(uint *)(unaff_RBP + -0x540);
        iVar56 = *(int *)(unaff_RBP + -0x68c) + -1;
        if (iVar56 != 0) {
          lVar43 = *(long *)(unaff_RBP + -0x538);
          bVar59 = false;
          uVar48 = uVar22;
LAB_006f20ee:
          if (uVar48 < 0x30) goto code_r0x006f20f3;
          lVar34 = lVar43 + 8;
          if (iVar56 != 1) {
            lVar51 = lVar43 + 0x10;
            do {
              lVar34 = lVar51;
              lVar51 = lVar34 + 8;
            } while (lVar34 + 8 != lVar43 + 0x18 + (ulong)(iVar56 - 2) * 8);
          }
          *(long *)(unaff_RBP + -0x538) = lVar34;
          if (!bVar59) goto LAB_006f2124;
LAB_006f211c:
          uVar22 = uVar48;
          *(uint *)(unaff_RBP + -0x540) = uVar22;
        }
LAB_006f2124:
        if (uVar22 < 0x30) {
          puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
          *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
        }
        else {
          puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
          *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
        }
        puVar28 = (undefined8 *)*puVar28;
      }
      lVar43 = *(long *)(unaff_RBP + -0x460);
      *puVar28 = uVar27;
LAB_006ec7e0:
      if (lVar50 == lVar43) goto switchD_006ebb4e_default;
      *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
      *(undefined4 *)(unaff_RBP + -0x610) = 0;
      goto LAB_006eb6fe;
    }
  }
LAB_006ed3c4:
  in_ST6 = Var15;
  in_ST5 = Var14;
  in_ST4 = Var13;
  in_ST3 = Var12;
  in_ST2 = Var11;
  in_ST1 = Var10;
  in_ST0 = Var9;
  if (*(long *)(unaff_RBP + -0x460) == *(long *)(unaff_RBP + -0x5e8)) goto switchD_006ebb4e_default;
  goto LAB_006ed3d8;
LAB_006f2964:
  iVar55 = *(int *)(unaff_RBP + -0x648);
  bVar16 = *(byte *)(unaff_RBP + -0x668);
LAB_006f297b:
  if (*(int *)(unaff_RBP + -0x638) < 1) {
    iVar56 = *(int *)(unaff_RBP + -0x638);
  }
  *(int *)(unaff_RBP + -0x638) = iVar56;
  if (iVar55 < 10) {
    puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
    if (puVar52 == *(undefined1 **)(unaff_RBP + -0x468)) {
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2aa7;
      char_buffer_add_slow(unaff_RBP + -0x470,iVar55 + 0x30U & 0xff);
    }
    else {
      *(undefined1 **)(unaff_RBP + -0x470) = puVar52 + 1;
      *puVar52 = (char)(iVar55 + 0x30U);
    }
  }
  else if ((iVar55 == 0xb) && ((bVar16 & 1) == 0)) {
    for (pcVar54 = *(char **)(unaff_RBP + -0x6d8); cVar17 = *pcVar54, cVar17 != '\0';
        pcVar54 = pcVar54 + 1) {
      pcVar35 = *(char **)(unaff_RBP + -0x470);
      if (pcVar35 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2b85;
        char_buffer_add_slow(unaff_RBP + -0x470,(int)cVar17);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar35 + 1;
        *pcVar35 = cVar17;
      }
    }
    bVar16 = 1;
  }
  else {
    if (((*(byte *)(unaff_RBP + -0x688) & (bVar16 ^ 1)) == 0) || (iVar55 != 10)) {
LAB_006f2835:
      if ((int)unaff_R13 == -1) goto LAB_006f25f8;
      pbVar58 = pbVar58 + -1;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6f284f;
      _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
      puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
      goto LAB_006f25ff;
    }
    *(_IO_FILE **)(unaff_RBP + -0x648) = unaff_R15;
    for (pcVar54 = *(char **)(unaff_RBP + -0x680); cVar17 = *pcVar54, cVar17 != '\0';
        pcVar54 = pcVar54 + 1) {
      pcVar35 = *(char **)(unaff_RBP + -0x470);
      if (pcVar35 == *(char **)(unaff_RBP + -0x468)) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2b78;
        char_buffer_add_slow(unaff_RBP + -0x470,(int)cVar17);
      }
      else {
        *(char **)(unaff_RBP + -0x470) = pcVar35 + 1;
        *pcVar35 = cVar17;
      }
    }
    unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x648);
    bVar16 = 0;
  }
LAB_006f29b9:
  if (*(int *)(unaff_RBP + -0x638) == 0) goto LAB_006f25f8;
  if ((int)unaff_R13 == -1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = *(undefined4 *)(unaff_RBP + -0x600);
    puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
    goto LAB_006f25ff;
  }
  pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
  if (pbVar42 < unaff_R15->_IO_read_end) {
    unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
    unaff_R13 = (ulong)*pbVar42;
  }
  else {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6f2a5d;
    uVar22 = __uflow(unaff_R15);
    unaff_R13 = (ulong)uVar22;
    if (uVar22 == 0xffffffff) goto code_r0x006f2a65;
  }
  pbVar58 = pbVar58 + 1;
  if (0 < *(int *)(unaff_RBP + -0x638)) {
    *(int *)(unaff_RBP + -0x638) = *(int *)(unaff_RBP + -0x638) + -1;
  }
  goto LAB_006f270d;
code_r0x006f2a65:
  *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
LAB_006f25f8:
  puVar52 = *(undefined1 **)(unaff_RBP + -0x470);
LAB_006f25ff:
  if (puVar52 == (undefined1 *)0x0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
    goto switchD_006ebb4e_default;
  }
  if ((long)puVar52 - *(long *)(unaff_RBP + -0x460) == *(long *)(unaff_RBP + -0x620))
  goto switchD_006ebb4e_default;
  goto LAB_006ef609;
code_r0x006f201a:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f2028;
  goto LAB_006f2015;
code_r0x006f2ed6:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f2eff;
  goto LAB_006f2ed1;
code_r0x006f2259:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f2289;
  goto LAB_006f2254;
code_r0x006f20f3:
  uVar48 = uVar48 + 8;
  bVar59 = true;
  iVar56 = iVar56 + -1;
  if (iVar56 == 0) goto LAB_006f211c;
  goto LAB_006f20ee;
  while( true ) {
    pbVar42 = (byte *)unaff_R15->_IO_read_ptr;
    if (pbVar42 < unaff_R15->_IO_read_end) {
      unaff_R15->_IO_read_ptr = (char *)(pbVar42 + 1);
      unaff_R13 = (ulong)*pbVar42;
    }
    else {
      *(undefined1 **)(unaff_RBP + -0x638) = puVar52;
      *(undefined8 *)((long)register0x00000020 + -8) = 0x6eeb1c;
      uVar22 = __uflow(unaff_R15);
      puVar52 = *(undefined1 **)(unaff_RBP + -0x638);
      unaff_R13 = (ulong)uVar22;
      if (uVar22 == 0xffffffff) {
        *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
        *(undefined4 *)(unaff_RBP + -0x600) = *(undefined4 *)(in_FS_OFFSET + -0x58);
        goto LAB_006eeb4e;
      }
    }
    if (*(char *)(*(long *)(unaff_RBP + -0x460) + (long)(int)unaff_R13) ==
        *(char *)(unaff_RBP + -0x648)) break;
LAB_006eeaf2:
    pbVar58 = pbVar58 + 1;
    if (unaff_EBX == 0) {
      iVar55 = *(int *)(unaff_RBP + -0x630);
      *puVar52 = (char)unaff_R13;
      puVar52 = puVar52 + 1;
      if ((iVar55 != 0) &&
         (pvVar31 = (void *)**(long **)(unaff_RBP + -0x670),
         puVar52 == (undefined1 *)((long)pvVar31 + *(long *)(unaff_RBP + -0x698)))) {
        *(undefined4 *)(unaff_RBP + -0x650) = 0;
        *(_IO_FILE **)(unaff_RBP + -0x638) = unaff_R15;
        uVar40 = *(long *)(unaff_RBP + -0x698) + 1;
        uVar46 = *(long *)(unaff_RBP + -0x698) * 2;
        while( true ) {
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6eff55;
          pvVar31 = realloc(pvVar31,uVar46);
          if (pvVar31 != (void *)0x0) break;
          if (uVar46 <= uVar40) {
            unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x638);
            if ((*(uint *)(unaff_RBP + -0x63c) & 0x2000) == 0) {
              plVar38 = *(long **)(unaff_RBP + -0x670);
              *(undefined8 *)(unaff_RBP + -0x670) = 0;
              *(int *)(unaff_RBP + -0x640) = *(int *)(unaff_RBP + -0x640) + 1;
              *(undefined1 *)(*plVar38 + -1 + *(long *)(unaff_RBP + -0x698)) = 0;
            }
            else {
              *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
            }
            goto switchD_006ebb4e_default;
          }
          pvVar31 = (void *)**(undefined8 **)(unaff_RBP + -0x670);
          uVar46 = uVar40;
        }
        unaff_R15 = *(_IO_FILE **)(unaff_RBP + -0x638);
        unaff_EBX = *(uint *)(unaff_RBP + -0x650);
        **(undefined8 **)(unaff_RBP + -0x670) = pvVar31;
        puVar52 = (undefined1 *)((long)pvVar31 + *(long *)(unaff_RBP + -0x698));
        *(ulong *)(unaff_RBP + -0x698) = uVar46;
      }
    }
    if ((-1 < iVar56) && (iVar56 = iVar56 + -1, iVar56 == 0)) {
      *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
      goto LAB_006eeb4e;
    }
  }
  *(undefined1 **)(unaff_RBP + -0x6c0) = puVar52;
LAB_006f0332:
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f033e;
  _IO_sputbackc(unaff_R15,unaff_R13 & 0xff);
LAB_006eeb4e:
  if (pbVar58 != *(byte **)(unaff_RBP + -0x620)) goto LAB_006ee095;
switchD_006ebb4e_default:
  if ((unaff_R15->_flags & 0x8000U) == 0) {
    piVar1 = (int *)unaff_R15->_lock;
    iVar56 = piVar1[1];
    piVar1[1] = iVar56 + -1;
    if (iVar56 + -1 == 0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      LOCK();
      iVar56 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (1 < iVar56) {
        *(undefined8 *)((long)register0x00000020 + -8) = 0x6ee446;
        __lll_lock_wake_private();
      }
    }
  }
  uVar27 = *(undefined8 *)(unaff_RBP + -0x6b0);
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6ebc02;
  __libc_cleanup_pop_restore(uVar27);
  pvVar31 = *(void **)(unaff_RBP + -0x460);
  if (pvVar31 != *(void **)(unaff_RBP + -0x6a8)) {
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ebc17;
    free(pvVar31);
  }
  if (*(int *)(unaff_RBP + -0x640) == -1) {
    puVar2 = *(ulong **)(unaff_RBP + -0x6d0);
    puVar3 = *(ulong **)(unaff_RBP + -0x6d0);
    while (puVar3 != (ulong *)0x0) {
      uVar40 = 0;
      if (*puVar2 != 0) {
        do {
          pvVar31 = *(void **)puVar2[uVar40 + 2];
          *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec3fd;
          free(pvVar31);
          lVar50 = uVar40 + 2;
          uVar40 = uVar40 + 1;
          *(undefined8 *)puVar2[lVar50] = 0;
        } while (uVar40 < *puVar2);
      }
      puVar2 = (ulong *)puVar2[1];
      puVar3 = puVar2;
    }
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
  }
  else if (*(long *)(unaff_RBP + -0x670) != 0) {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x670);
    pvVar31 = (void *)*puVar28;
    *(undefined8 *)((long)register0x00000020 + -8) = 0x6ec431;
    free(pvVar31);
    *puVar28 = 0;
  }
  if (*(long *)(unaff_RBP + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)*(uint *)(unaff_RBP + -0x640);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)register0x00000020 + -8) = 0x6f21d6;
  __stack_chk_fail_local();
  while( true ) {
    uVar48 = uVar48 + 8;
    bVar59 = true;
    iVar56 = iVar56 + -1;
    if (iVar56 == 0) break;
LAB_006f071a:
    if (0x2f < uVar48) {
      if (iVar56 != 1) {
        lVar43 = lVar50 + 0x10;
        do {
          lVar34 = lVar43;
          lVar43 = lVar34 + 8;
        } while (lVar50 + 0x18 + (ulong)(iVar56 - 2) * 8 != lVar43);
        uVar40 = FUN_006f073d(lVar34);
        return uVar40;
      }
      *(long *)(unaff_RBP + -0x538) = lVar50 + 8;
      if (!bVar59) goto LAB_006f0751;
      break;
    }
  }
  uVar22 = uVar48;
  *(uint *)(unaff_RBP + -0x540) = uVar22;
LAB_006f0751:
  if (uVar22 < 0x30) {
    puVar28 = (undefined8 *)((ulong)uVar22 + *(long *)(unaff_RBP + -0x530));
    *(uint *)(unaff_RBP + -0x540) = uVar22 + 8;
  }
  else {
    puVar28 = *(undefined8 **)(unaff_RBP + -0x538);
    *(undefined8 **)(unaff_RBP + -0x538) = puVar28 + 1;
  }
  *(undefined8 *)(unaff_RBP + -0x670) = *puVar28;
  uVar40 = FUN_006ee571();
  return uVar40;
}

