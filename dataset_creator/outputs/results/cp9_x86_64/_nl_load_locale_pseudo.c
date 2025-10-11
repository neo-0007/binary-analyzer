
void _nl_load_locale(undefined8 *param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *__ptr;
  __off_t _Var4;
  int __fd;
  int iVar5;
  void *__addr;
  undefined8 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  uint uVar16;
  size_t sVar17;
  long in_FS_OFFSET;
  byte bVar18;
  undefined1 *local_e8;
  char *local_e0;
  stat local_d8;
  long local_40;
  undefined1 **ppuVar15;
  
  bVar18 = 0;
  ppuVar13 = &local_e8;
  ppuVar15 = &local_e8;
  ppuVar14 = &local_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  __fd = __open64_nocancel(*param_1,0x80000);
  ppuVar12 = &local_e8;
  if (__fd < 0) goto LAB_006d6715;
  iVar5 = fstat(__fd,&local_d8);
  if (-1 < iVar5) {
    ppuVar12 = &local_e8;
    if ((local_d8.st_mode & 0xf000) == 0x4000) {
      __close_nocancel(__fd);
      local_e0 = (char *)*param_1;
      sVar17 = strlen(local_e0);
      pcVar7 = local_e0;
      bVar1 = (&_nl_category_name_sizes)[param_2];
      uVar10 = sVar17 + 0x1d + (ulong)bVar1;
      ppuVar12 = &local_e8;
      while (ppuVar15 != (undefined1 **)((long)&local_e8 - (uVar10 & 0xfffffffffffff000))) {
        ppuVar14 = (undefined1 **)((long)ppuVar12 + -0x1000);
        *(undefined8 *)((long)ppuVar12 + -8) = *(undefined8 *)((long)ppuVar12 + -8);
        ppuVar15 = (undefined1 **)((long)ppuVar12 + -0x1000);
        ppuVar12 = (undefined1 **)((long)ppuVar12 + -0x1000);
      }
      uVar10 = (ulong)((uint)uVar10 & 0xff0);
      lVar2 = -uVar10;
      ppuVar12 = (undefined1 **)((long)ppuVar14 + lVar2);
      ppuVar13 = (undefined1 **)((long)ppuVar14 + lVar2);
      if (uVar10 != 0) {
        *(undefined8 *)((long)ppuVar14 + -8) = *(undefined8 *)((long)ppuVar14 + -8);
      }
      uVar16 = bVar1 + 1;
      uVar10 = (ulong)uVar16;
      local_e0 = "LC_COLLATE" + (byte)(&_nl_category_name_idxs)[param_2];
      *(undefined8 *)((long)ppuVar14 + lVar2 + -8) = 0x6d688c;
      puVar8 = (undefined4 *)
               mempcpy((void *)((ulong)((long)ppuVar14 + lVar2 + 0xf) & 0xfffffffffffffff0),pcVar7,
                       sVar17);
      *puVar8 = 0x5359532f;
      *(undefined1 *)(puVar8 + 1) = 0x5f;
      if (uVar16 < 8) {
        if ((uVar16 & 4) == 0) {
          if ((uVar16 != 0) && (*(char *)((long)puVar8 + 5) = *local_e0, (uVar16 & 2) != 0)) {
            *(undefined2 *)((long)puVar8 + uVar10 + 3) = *(undefined2 *)(local_e0 + (uVar10 - 2));
          }
        }
        else {
          *(undefined4 *)((long)puVar8 + 5) = *(undefined4 *)local_e0;
          *(undefined4 *)((long)puVar8 + uVar10 + 1) = *(undefined4 *)(local_e0 + (uVar10 - 4));
        }
      }
      else {
        *(undefined8 *)((long)puVar8 + 5) = *(undefined8 *)local_e0;
        *(undefined8 *)((long)puVar8 + ((ulong)uVar16 - 3)) =
             *(undefined8 *)(local_e0 + ((ulong)uVar16 - 8));
        puVar6 = (undefined8 *)((long)puVar8 + 0xdU & 0xfffffffffffffff8);
        lVar9 = (long)puVar8 + (5 - (long)puVar6);
        pcVar7 = local_e0 + -lVar9;
        for (uVar10 = (ulong)(uVar16 + (int)lVar9 >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar6 = *(undefined8 *)pcVar7;
          pcVar7 = pcVar7 + ((ulong)bVar18 * -2 + 1) * 8;
          puVar6 = puVar6 + (ulong)bVar18 * -2 + 1;
        }
      }
      *(undefined8 *)((long)ppuVar14 + lVar2 + -8) = 0x6d68da;
      __fd = __open64_nocancel((void *)((ulong)((long)ppuVar14 + lVar2 + 0xf) & 0xfffffffffffffff0),
                               0x80000);
      if (__fd < 0) goto LAB_006d6715;
      *(undefined8 *)((long)ppuVar14 + lVar2 + -8) = 0x6d68ef;
      iVar5 = fstat(__fd,&local_d8);
      ppuVar12 = (undefined1 **)((long)ppuVar14 + lVar2);
      if (iVar5 < 0) goto LAB_006d67d0;
    }
    ppuVar13 = ppuVar12;
    _Var4 = local_d8.st_size;
    local_e0 = (char *)CONCAT44(local_e0._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
    *(undefined8 *)((long)ppuVar13 + -8) = 0x6d66d1;
    __addr = mmap64((void *)0x0,_Var4,1,2,__fd,0);
    sVar17 = local_d8.st_size;
    ppuVar12 = ppuVar13;
    if (__addr != (void *)0xffffffffffffffff) {
      *(undefined8 *)((long)ppuVar13 + -8) = 0x6d66e2;
      __close_nocancel(__fd);
      _Var4 = local_d8.st_size;
      if (__addr == (void *)0x0) goto LAB_006d6715;
      *(undefined8 *)((long)ppuVar13 + -8) = 0x6d66f9;
      puVar6 = (undefined8 *)_nl_intern_locale_data(param_2,__addr,_Var4);
      if (puVar6 == (undefined8 *)0x0) {
        *(undefined8 *)((long)ppuVar13 + -8) = 0x6d694f;
        munmap(__addr,local_d8.st_size);
        goto LAB_006d6715;
      }
      uVar11 = 1;
LAB_006d6707:
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 3) = uVar11;
      param_1[2] = puVar6;
      goto LAB_006d6715;
    }
    if (*(int *)(in_FS_OFFSET + -0x58) == 0x26) {
      *(undefined8 *)((long)ppuVar13 + -8) = 0x6d6760;
      local_e8 = (undefined1 *)malloc(sVar17);
      puVar3 = local_e8;
      if (local_e8 != (undefined1 *)0x0) {
        for (; 0 < (long)sVar17; sVar17 = sVar17 - (long)pcVar7) {
          *(undefined8 *)((long)ppuVar13 + -8) = 0x6d679d;
          pcVar7 = (char *)__read_nocancel(__fd,puVar3,sVar17);
          __ptr = local_e8;
          if ((long)pcVar7 < 1) {
            local_e0 = pcVar7;
            *(undefined8 *)((long)ppuVar13 + -8) = 0x6d67b5;
            free(__ptr);
            if (local_e0 == (char *)0x0) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
            }
            goto LAB_006d67d0;
          }
          puVar3 = puVar3 + (long)pcVar7;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = local_e0._0_4_;
        *(undefined8 *)((long)ppuVar13 + -8) = 0x6d6918;
        __close_nocancel(__fd);
        puVar3 = local_e8;
        *(undefined8 *)((long)ppuVar13 + -8) = 0x6d692e;
        puVar6 = (undefined8 *)_nl_intern_locale_data(param_2,puVar3,local_d8.st_size);
        if (puVar6 == (undefined8 *)0x0) goto LAB_006d6715;
        uVar11 = 0;
        goto LAB_006d6707;
      }
    }
  }
LAB_006d67d0:
  *(undefined8 *)((long)ppuVar13 + -8) = 0x6d67d8;
  __close_nocancel(__fd);
  ppuVar12 = ppuVar13;
LAB_006d6715:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppuVar12 + -8) = &UNK_006d69bc;
  __stack_chk_fail_local();
}

