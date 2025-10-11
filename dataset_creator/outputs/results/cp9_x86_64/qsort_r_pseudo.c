
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void qsort_r(void *__base,size_t __nmemb,size_t __size,__compar_d_fn_t __compar,void *__arg)

{
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  void *__dest;
  void *__src;
  undefined1 *puVar12;
  long *plVar13;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  undefined1 *local_90;
  long *local_88;
  undefined1 *local_80;
  void *local_78;
  undefined1 *local_70;
  size_t local_68;
  undefined8 uStack_60;
  __compar_d_fn_t local_58;
  void *local_50;
  undefined1 *puStack_48;
  long local_40;
  
  puVar12 = auStack_98;
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (undefined1 *)__nmemb;
  local_78 = __base;
  if (__size < 0x21) {
    uVar10 = __nmemb * __size;
    if (uVar10 < 0x400) goto LAB_006df07b;
LAB_006df0f3:
    if (pagesize_0 == 0) {
      lVar5 = sysconf(0x55);
      phys_pages_1 = 0x1fffffffffffffff;
      if (lVar5 != -1) {
        lVar6 = lVar5 + 3;
        if (-1 < lVar5) {
          lVar6 = lVar5;
        }
        phys_pages_1 = lVar6 >> 2;
      }
      lVar5 = sysconf(0x1e);
      pagesize_0 = (int)lVar5;
    }
    if (phys_pages_1 < uVar10 / (ulong)(long)pagesize_0) {
LAB_006df338:
      _quicksort(local_78,local_80,__size,__compar,__arg);
      goto LAB_006df312;
    }
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
    local_90 = (undefined1 *)malloc(uVar10);
    *(undefined4 *)(in_FS_OFFSET + -0x58) = local_70._0_4_;
    puVar4 = auStack_98;
    puVar12 = local_90;
    if (local_90 == (undefined1 *)0x0) goto LAB_006df338;
  }
  else {
    uVar10 = __nmemb * 0x10 + __size;
    if (0x3ff < uVar10) goto LAB_006df0f3;
LAB_006df07b:
    puVar4 = auStack_98;
    while (puVar8 != auStack_98 + -(uVar10 + 0x17 & 0xfffffffffffff000)) {
      puVar12 = puVar4 + -0x1000;
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      puVar8 = puVar4 + -0x1000;
      puVar4 = puVar4 + -0x1000;
    }
    uVar10 = (ulong)((uint)(uVar10 + 0x17) & 0xff0);
    lVar5 = -uVar10;
    if (uVar10 != 0) {
      *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
    }
    local_90 = (undefined1 *)0x0;
    puVar4 = puVar12 + lVar5;
    puVar12 = (undefined1 *)((ulong)(puVar12 + lVar5 + 0xf) & 0xfffffffffffffff0);
  }
  local_70 = puVar12;
  puVar9 = puVar4;
  uStack_60 = 4;
  puStack_48 = local_70;
  local_58 = __compar;
  local_50 = __arg;
  if (__size < 0x21) {
    if ((((ulong)local_78 | __size) & 3) == 0) {
      if (__size == 4) {
        uStack_60 = 0;
      }
      else if ((__size == 8) && (((ulong)local_78 & 7) == 0)) {
        uStack_60 = 1;
      }
      else if ((((ulong)local_78 | __size) & 7) == 0) {
        uStack_60 = 2;
      }
    }
    local_68 = __size;
    if ((undefined1 *)0x1 < local_80) {
      *(undefined8 *)(puVar9 + -8) = 0x6df306;
      msort_with_tmp_part_0(&local_68,local_78);
    }
  }
  else {
    lVar5 = (long)local_80 * 8;
    plVar13 = (long *)(local_70 + lVar5);
    local_88 = plVar13 + (long)local_80;
    if (plVar13 < local_88) {
      uVar10 = (lVar5 - 1U >> 3) + 1;
      pvVar7 = local_78;
      plVar2 = plVar13;
      if (7 < lVar5 - 1U) {
        lVar6 = (long)local_78 + __size;
        do {
          plVar3 = plVar2 + 2;
          *plVar2 = (long)pvVar7;
          plVar2[1] = lVar6;
          plVar2 = plVar3;
          pvVar7 = (void *)((long)pvVar7 + __size * 2);
          lVar6 = lVar6 + __size * 2;
        } while (plVar3 != plVar13 + (uVar10 & 0xfffffffffffffffe));
        uVar11 = uVar10 & 0xfffffffffffffffe;
        pvVar7 = (void *)(uVar11 * __size + (long)local_78);
        plVar2 = plVar13 + uVar11;
        if (uVar11 == uVar10) goto LAB_006df21f;
      }
      *plVar2 = (long)pvVar7;
    }
LAB_006df21f:
    local_68 = _DAT_0081ab40;
    uStack_60 = _UNK_0081ab48;
    if (local_80 < &_nl_current_LC_PAPER_used) {
      if (local_80 == (undefined1 *)0x0) goto LAB_006df306;
    }
    else {
      *(undefined8 *)(puVar9 + -8) = 0x6df242;
      msort_with_tmp_part_0(&local_68,local_70 + lVar5);
    }
    local_70 = (undefined1 *)0x0;
    pvVar7 = local_78;
    do {
      pvVar1 = (void *)plVar13[(long)local_70];
      if (pvVar1 != pvVar7) {
        *(undefined8 *)(puVar9 + -8) = 0x6df282;
        memcpy(local_88,pvVar7,__size);
        __dest = pvVar7;
        puVar12 = local_70;
        do {
          __src = pvVar1;
          puVar4 = (undefined1 *)((ulong)((long)__src - (long)local_78) / __size);
          plVar13[(long)puVar12] = (long)__dest;
          *(undefined8 *)(puVar9 + -8) = 0x6df2b4;
          memcpy(__dest,__src,__size);
          pvVar1 = (void *)plVar13[(long)puVar4];
          __dest = __src;
          puVar12 = puVar4;
        } while (pvVar1 != pvVar7);
        plVar13[(long)puVar4] = (long)__src;
        *(undefined8 *)(puVar9 + -8) = 0x6df2d2;
        memcpy(__src,local_88,__size);
      }
      local_70 = local_70 + 1;
      pvVar7 = (void *)((long)pvVar7 + __size);
    } while (local_70 < local_80);
  }
LAB_006df306:
  *(undefined8 *)(puVar9 + -8) = 0x6df312;
  free(local_90);
LAB_006df312:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_006df40a;
  __stack_chk_fail_local();
}

