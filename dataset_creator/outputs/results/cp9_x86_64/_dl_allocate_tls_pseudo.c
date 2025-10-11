
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _dl_allocate_tls(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  void *pvVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long local_40;
  
  if (param_1 == 0) {
    local_40 = _dl_allocate_tls_storage();
    if (local_40 == 0) {
      return 0;
    }
    puVar8 = *(ulong **)(local_40 + 8);
  }
  else {
    lVar1 = _dl_tls_max_dtv_idx + 0xe;
    plVar5 = (long *)calloc(_dl_tls_max_dtv_idx + 0x10,0x10);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    puVar8 = (ulong *)(plVar5 + 2);
    *plVar5 = lVar1;
    *(ulong **)(param_1 + 8) = puVar8;
    local_40 = param_1;
  }
  pthread_mutex_lock((pthread_mutex_t *)_dl_load_tls_lock);
  uVar11 = _dl_tls_max_dtv_idx;
  if (puVar8[-2] < _dl_tls_max_dtv_idx) {
    puVar8 = (ulong *)_dl_resize_dtv(puVar8);
    uVar11 = _dl_tls_max_dtv_idx;
    *(ulong **)(local_40 + 8) = puVar8;
  }
  uVar9 = 0;
  uVar10 = 0;
  puVar14 = _dl_tls_dtv_slotinfo_list;
  uVar16 = _DAT_0081f240;
  uVar17 = _UNK_0081f248;
  do {
    uVar12 = *puVar14;
    uVar13 = (ulong)(uVar10 == 0);
    if (uVar13 < uVar12) {
      uVar15 = uVar10 + uVar13;
      do {
        while( true ) {
          if (uVar11 < uVar15) goto LAB_00780b90;
          uVar2 = puVar14[uVar13 * 2 + 3];
          if (uVar2 != 0) break;
LAB_00780ad6:
          uVar13 = uVar13 + 1;
          uVar15 = uVar15 + 1;
          if (uVar12 <= uVar13) goto LAB_00780b53;
        }
        uVar11 = puVar14[uVar13 * 2 + 2];
        if (_dl_tls_generation < uVar11) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("listp->slotinfo[cnt].gen <= GL(dl_tls_generation)","../elf/dl-tls.c",0x23f,
                        "_dl_allocate_tls_init");
        }
        uVar3 = *(ulong *)(uVar2 + 0x460);
        uVar4 = *(ulong *)(uVar2 + 0x458);
        if (uVar9 < uVar11) {
          uVar9 = uVar11;
        }
        puVar7 = puVar8 + uVar3 * 2;
        *puVar7 = uVar16;
        puVar7[1] = uVar17;
        if (1 < uVar4 + 1) {
          if (uVar3 != uVar15) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("map->l_tls_modid == total + cnt","../elf/dl-tls.c",0x249,
                          "_dl_allocate_tls_init");
          }
          uVar11 = *(ulong *)(uVar2 + 0x440);
          uVar16 = *(ulong *)(uVar2 + 0x438);
          if (uVar11 < uVar16) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("map->l_tls_blocksize >= map->l_tls_initimage_size","../elf/dl-tls.c",
                          0x24a,"_dl_allocate_tls_init");
          }
          if (uVar4 < uVar11) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("(size_t) map->l_tls_offset >= map->l_tls_blocksize","../elf/dl-tls.c",
                          0x24c,"_dl_allocate_tls_init");
          }
          pvVar6 = *(void **)(uVar2 + 0x430);
          *puVar7 = local_40 - uVar4;
          pvVar6 = mempcpy((void *)(local_40 - uVar4),pvVar6,uVar16);
          memset(pvVar6,0,uVar11 - uVar16);
          uVar12 = *puVar14;
          uVar11 = _dl_tls_max_dtv_idx;
          uVar16 = _DAT_0081f240;
          uVar17 = _UNK_0081f248;
          goto LAB_00780ad6;
        }
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + 1;
        uVar11 = _dl_tls_max_dtv_idx;
      } while (uVar13 < uVar12);
    }
LAB_00780b53:
    uVar10 = uVar10 + uVar13;
    if (uVar11 < uVar10) {
LAB_00780b90:
      pthread_mutex_unlock((pthread_mutex_t *)_dl_load_tls_lock);
      *puVar8 = uVar9;
      return local_40;
    }
    puVar14 = (ulong *)puVar14[1];
    if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("listp != NULL","../elf/dl-tls.c",0x26a,"_dl_allocate_tls_init");
    }
  } while( true );
}

