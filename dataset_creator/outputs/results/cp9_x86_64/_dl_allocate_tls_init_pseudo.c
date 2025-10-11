
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _dl_allocate_tls_init(long param_1,char param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  void *__s;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *local_58;
  ulong local_40;
  
  if (param_1 != 0) {
    local_58 = *(ulong **)(param_1 + 8);
    pthread_mutex_lock((pthread_mutex_t *)_dl_load_tls_lock);
    uVar8 = _dl_tls_max_dtv_idx;
    if (local_58[-2] < _dl_tls_max_dtv_idx) {
      local_58 = (ulong *)_dl_resize_dtv(local_58);
      uVar8 = _dl_tls_max_dtv_idx;
      *(ulong **)(param_1 + 8) = local_58;
    }
    local_40 = 0;
    uVar10 = 0;
    puVar11 = _dl_tls_dtv_slotinfo_list;
    while( true ) {
      uVar9 = *puVar11;
      uVar7 = (ulong)(local_40 == 0);
      if (uVar7 < uVar9) {
        uVar12 = local_40 + uVar7;
        do {
          uVar4 = _UNK_0081f248;
          if (uVar8 < uVar12) goto LAB_00780890;
          uVar1 = puVar11[uVar7 * 2 + 3];
          if (uVar1 != 0) {
            uVar8 = puVar11[uVar7 * 2 + 2];
            if (_dl_tls_generation < uVar8) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("listp->slotinfo[cnt].gen <= GL(dl_tls_generation)","../elf/dl-tls.c",
                            0x23f,"_dl_allocate_tls_init");
            }
            uVar2 = *(ulong *)(uVar1 + 0x460);
            if (uVar10 < uVar8) {
              uVar10 = uVar8;
            }
            uVar3 = *(ulong *)(uVar1 + 0x458);
            puVar6 = local_58 + uVar2 * 2;
            *puVar6 = _DAT_0081f240;
            puVar6[1] = uVar4;
            uVar8 = _dl_tls_max_dtv_idx;
            if (1 < uVar3 + 1) {
              if (uVar2 != uVar12) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("map->l_tls_modid == total + cnt","../elf/dl-tls.c",0x249,
                              "_dl_allocate_tls_init");
              }
              uVar4 = *(ulong *)(uVar1 + 0x440);
              uVar2 = *(ulong *)(uVar1 + 0x438);
              if (uVar4 < uVar2) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("map->l_tls_blocksize >= map->l_tls_initimage_size","../elf/dl-tls.c",
                              0x24a,"_dl_allocate_tls_init");
              }
              if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("(size_t) map->l_tls_offset >= map->l_tls_blocksize","../elf/dl-tls.c"
                              ,0x24c,"_dl_allocate_tls_init");
              }
              lVar5 = *(long *)(uVar1 + 0x30);
              *puVar6 = param_1 - uVar3;
              if ((lVar5 == 0) || (uVar8 = _dl_tls_max_dtv_idx, param_2 != '\0')) {
                __s = mempcpy((void *)(param_1 - uVar3),*(void **)(uVar1 + 0x430),uVar2);
                memset(__s,0,uVar4 - uVar2);
                uVar9 = *puVar11;
                uVar8 = _dl_tls_max_dtv_idx;
              }
            }
          }
          uVar7 = uVar7 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar7 < uVar9);
      }
      local_40 = local_40 + uVar7;
      if (uVar8 < local_40) break;
      puVar11 = (ulong *)puVar11[1];
      if (puVar11 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("listp != NULL","../elf/dl-tls.c",0x26a,"_dl_allocate_tls_init");
      }
    }
LAB_00780890:
    pthread_mutex_unlock((pthread_mutex_t *)_dl_load_tls_lock);
    *local_58 = uVar10;
  }
  return param_1;
}

