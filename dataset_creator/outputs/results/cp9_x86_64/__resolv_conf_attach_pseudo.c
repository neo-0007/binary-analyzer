
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __resolv_conf_attach(undefined8 *param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  ulong *puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined4 *puVar8;
  long *__ptr;
  code *pcVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 (*pauVar15) [16];
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  undefined1 auVar20 [16];
  ulong local_50;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("conf->__refcount > 0","resolv_conf.c",0x244,"__resolv_conf_attach");
  }
  LOCK();
  bVar19 = lock == 0;
  if (bVar19) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar19) {
    __lll_lock_wait_private(&lock);
  }
  pauVar15 = global;
  if (global == (undefined1 (*) [16])0x0) {
    pauVar15 = (undefined1 (*) [16])calloc(1,0x58);
    if (pauVar15 == (undefined1 (*) [16])0x0) {
      return 0;
    }
    global = pauVar15;
    *(undefined8 *)pauVar15[1] = 0;
    *pauVar15 = (undefined1  [16])0x0;
    uVar17 = *(ulong *)(pauVar15[1] + 8);
    local_50 = (ulong)((uint)uVar17 & 1);
    if ((uVar17 & 1) != 0) {
      local_50 = uVar17 >> 1;
      uVar17 = 0;
      goto LAB_007a695c;
    }
LAB_007a685e:
    cVar12 = __libc_dynarray_emplace_enlarge(pauVar15,0,8);
    if (cVar12 != '\0') {
      lVar16 = *(long *)*pauVar15;
      *(long *)*pauVar15 = lVar16 + 1;
      *(long **)(*(long *)pauVar15[1] + lVar16 * 8) = param_2;
      goto LAB_007a6890;
    }
  }
  else {
    uVar17 = *(ulong *)*global;
    if ((*(ulong *)(global[1] + 8) & 1) == 0) {
      if (*(ulong *)(*global + 8) == 0xffffffffffffffff) goto LAB_007a689b;
      local_50 = uVar17;
      if (uVar17 == *(ulong *)(*global + 8)) goto LAB_007a685e;
      pauVar1 = global + 1;
      *(ulong *)*global = uVar17 + 1;
      *(long **)(*(long *)*pauVar1 + uVar17 * 8) = param_2;
LAB_007a6890:
      if (*(long *)(*pauVar15 + 8) != -1) {
LAB_007a652c:
        *param_2 = *param_2 + 1;
        iVar11 = lock;
        if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("conf->__refcount > 0","resolv_conf.c",0x26a,"__resolv_conf_attach");
        }
        LOCK();
        lock = 0;
        UNLOCK();
        if (1 < iVar11) {
          __lll_lock_wake_private(&lock);
        }
        *(byte *)((long)param_1 + 0x189) = *(byte *)((long)param_1 + 0x189) & 0xfe;
        *(undefined1 *)(param_1 + 0x10) = 0;
        *(undefined8 *)((long)param_1 + 500) = 0xffffffff;
        uVar14 = *(undefined8 *)((long)param_2 + 0x3c);
        param_1[0x30] = 0;
        *param_1 = uVar14;
        uVar5 = *(uint *)(param_2 + 7);
        bVar4 = *(byte *)((long)param_2 + 0x44);
        *(undefined1 (*) [16])(param_1 + 0x3c) = (undefined1  [16])0x0;
        param_1[1] = (ulong)uVar5;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0;
        *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xf0 | bVar4 & 0xf;
        uVar17 = param_2[2];
        uVar18 = 3;
        if (uVar17 < 4) {
          uVar18 = uVar17;
        }
        if (uVar17 != 0) {
          lVar16 = param_2[1];
          uVar17 = 0;
          do {
            psVar7 = *(short **)(lVar16 + uVar17 * 8);
            if (*psVar7 == 2) {
              uVar14 = *(undefined8 *)(psVar7 + 4);
              puVar13 = (undefined8 *)((long)param_1 + uVar17 * 0x10 + 0x14);
              *puVar13 = *(undefined8 *)psVar7;
              puVar13[1] = uVar14;
              puVar13 = (undefined8 *)0x0;
            }
            else {
              if (*psVar7 != 10) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("conf->nameserver_list[i]->sa_family == AF_INET6","resolv_conf.c",
                              0x1f2,"update_from_conf");
              }
              *(undefined2 *)((long)param_1 + uVar17 * 0x10 + 0x14) = 0;
              puVar13 = (undefined8 *)malloc(0x1c);
              if (puVar13 == (undefined8 *)0x0) {
                if (uVar17 != 0) {
                  puVar13 = param_1 + uVar17;
                  do {
                    puVar2 = param_1 + 0x43;
                    param_1 = param_1 + 1;
                    free((void *)*puVar2);
                  } while (puVar13 != param_1);
                }
                LOCK();
                bVar19 = lock == 0;
                if (bVar19) {
                  lock = 1;
                }
                UNLOCK();
                if (!bVar19) {
                  __lll_lock_wait_private(&lock);
                }
                pauVar15 = global;
                if (global == (undefined1 (*) [16])0x0) {
                  pauVar15 = (undefined1 (*) [16])calloc(1,0x58);
                  if (pauVar15 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)invalidInstructionException();
                    (*pcVar9)();
                  }
                  global = pauVar15;
                  *(undefined8 *)pauVar15[1] = 0;
                  *pauVar15 = (undefined1  [16])0x0;
                }
                else if (local_50 < *(ulong *)*global) {
                  puVar13 = (undefined8 *)(*(long *)global[1] + local_50 * 8);
                  __ptr = (long *)*puVar13;
                  if (((ulong)__ptr & 1) == 0) {
                    if (*__ptr == 0) {
                    /* WARNING: Subroutine does not return */
                      conf_decrement_part_0();
                    }
                    lVar16 = *__ptr + -1;
                    if (lVar16 == 0) {
                      free(__ptr);
                    }
                    else {
                      *__ptr = lVar16;
                    }
                    *puVar13 = *(undefined8 *)(pauVar15[1] + 8);
                    *(ulong *)(pauVar15[1] + 8) = local_50 * 2 + 1;
                  }
                }
                iVar11 = lock;
                LOCK();
                lock = 0;
                UNLOCK();
                if (iVar11 < 2) {
                  lock = 0;
                  return 0;
                }
                __lll_lock_wake_private(&lock);
                return 0;
              }
              uVar14 = *(undefined8 *)(psVar7 + 4);
              *puVar13 = *(undefined8 *)psVar7;
              puVar13[1] = uVar14;
              puVar13[2] = *(undefined8 *)(psVar7 + 8);
              *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(psVar7 + 0xc);
            }
            param_1[uVar17 + 0x43] = puVar13;
            *(undefined4 *)((long)param_1 + uVar17 * 4 + 0x208) = 0xffffffff;
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar18);
        }
        puVar13 = param_1 + 0x10;
        *(int *)(param_1 + 2) = (int)uVar18;
        auVar20._8_8_ = param_1 + 0x30;
        auVar20._0_8_ = puVar13;
        if ((undefined8 *)0xfffffffffffffeff < puVar13) {
          __libc_alloc_buffer_create_failure(puVar13,0x100);
        }
        uVar17 = param_2[4];
        uVar18 = uVar17;
        if (uVar17 != 0) {
          uVar18 = 0;
          while( true ) {
            uVar14 = auVar20._0_8_;
            auVar20 = __libc_alloc_buffer_copy_string
                                (uVar14,auVar20._8_8_,*(undefined8 *)(param_2[3] + uVar18 * 8));
            if (auVar20._0_8_ == 0) break;
            param_1[uVar18 + 9] = uVar14;
            uVar18 = uVar18 + 1;
            if ((uVar17 <= uVar18) || (5 < uVar18)) goto LAB_007a6690;
          }
          param_1[uVar18 + 9] = 0;
        }
LAB_007a6690:
        uVar17 = param_2[6];
        param_1[uVar18 + 9] = 0;
        uVar18 = 10;
        if (uVar17 < 0xb) {
          uVar18 = uVar17;
        }
        if (uVar17 != 0) {
          puVar8 = (undefined4 *)param_2[5];
          *(undefined4 *)((long)param_1 + 0x18c) = *puVar8;
          *(undefined4 *)(param_1 + 0x32) = puVar8[1];
          if (1 < uVar17) {
            *(undefined4 *)((long)param_1 + 0x194) = puVar8[2];
            *(undefined4 *)(param_1 + 0x33) = puVar8[3];
            if (uVar17 != 2) {
              *(undefined4 *)((long)param_1 + 0x19c) = puVar8[4];
              *(undefined4 *)(param_1 + 0x34) = puVar8[5];
              if (uVar17 != 3) {
                *(undefined4 *)((long)param_1 + 0x1a4) = puVar8[6];
                *(undefined4 *)(param_1 + 0x35) = puVar8[7];
                if (uVar17 != 4) {
                  *(undefined4 *)((long)param_1 + 0x1ac) = puVar8[8];
                  *(undefined4 *)(param_1 + 0x36) = puVar8[9];
                  if (uVar17 != 5) {
                    *(undefined4 *)((long)param_1 + 0x1b4) = puVar8[10];
                    *(undefined4 *)(param_1 + 0x37) = puVar8[0xb];
                    if (uVar17 != 6) {
                      *(undefined4 *)((long)param_1 + 0x1bc) = puVar8[0xc];
                      *(undefined4 *)(param_1 + 0x38) = puVar8[0xd];
                      if (uVar17 != 7) {
                        *(undefined4 *)((long)param_1 + 0x1c4) = puVar8[0xe];
                        *(undefined4 *)(param_1 + 0x39) = puVar8[0xf];
                        if (uVar17 != 8) {
                          *(undefined4 *)((long)param_1 + 0x1cc) = puVar8[0x10];
                          *(undefined4 *)(param_1 + 0x3a) = puVar8[0x11];
                          if (9 < uVar17) {
                            uVar6 = puVar8[0x13];
                            *(undefined4 *)((long)param_1 + 0x1d4) = puVar8[0x12];
                            *(undefined4 *)(param_1 + 0x3b) = uVar6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xf | (byte)((int)uVar18 << 4);
        uVar14 = resolv_conf_matches(param_1,param_2);
        if ((char)uVar14 != '\0') {
          param_1[0x46] = local_50 ^ 0x26a8fa5e48af8061;
          return uVar14;
        }
                    /* WARNING: Subroutine does not return */
        __assert_fail("resolv_conf_matches (resp, conf)","resolv_conf.c",0x227,"update_from_conf");
      }
      goto LAB_007a689b;
    }
    local_50 = *(ulong *)(global[1] + 8) >> 1;
    if (local_50 < uVar17) {
      puVar3 = (ulong *)(*(long *)global[1] + local_50 * 8);
      uVar17 = *puVar3;
      *(ulong *)(global[1] + 8) = uVar17;
      if ((uVar17 != 0) && ((uVar17 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("global_copy->free_list_start == 0 || global_copy->free_list_start & 1",
                      "resolv_conf.c",0x253,"__resolv_conf_attach");
      }
      *puVar3 = (ulong)param_2;
      goto LAB_007a652c;
    }
LAB_007a695c:
    __libc_dynarray_at_failure(uVar17,local_50);
  }
  free(*(void **)pauVar15[1]);
  uVar10 = _UNK_00824968;
  uVar14 = _DAT_00824960;
  *(undefined8 *)pauVar15[1] = 0;
  *(undefined8 *)*pauVar15 = uVar14;
  *(undefined8 *)(*pauVar15 + 8) = uVar10;
LAB_007a689b:
  iVar11 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar11) {
    __lll_lock_wake_private(&lock);
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
  return 0;
}

