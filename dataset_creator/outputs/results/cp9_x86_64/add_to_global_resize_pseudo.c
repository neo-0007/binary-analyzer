
undefined * add_to_global_resize(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *extraout_RAX;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  ulong uVar13;
  void *__ptr;
  long in_FS_OFFSET;
  bool bVar14;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar10 = *(uint *)(&DAT_00931b9c + lVar3 * 0xa0);
  if (*(int *)(param_1 + 0x2c8) != 0) {
    plVar1 = *(long **)(param_1 + 0x2c0) + 1;
    uVar9 = 0;
    plVar6 = *(long **)(param_1 + 0x2c0);
    for (plVar11 = plVar1; uVar9 = uVar9 + ((*(byte *)(*plVar6 + 0x31c) & 0x10) == 0),
        plVar11 != plVar1 + (*(int *)(param_1 + 0x2c8) - 1); plVar11 = plVar11 + 1) {
      plVar6 = plVar11;
    }
    bVar14 = CARRY4(uVar9,uVar10);
    uVar10 = uVar9 + uVar10;
    *(uint *)(&DAT_00931b9c + lVar3 * 0xa0) = uVar10;
    if (bVar14) goto LAB_0077c235;
  }
  puVar4 = (undefined8 *)(&PTR_PTR_00931b90)[lVar3 * 0x14];
  uVar9 = (&DAT_00931b98)[lVar3 * 0x28];
  uVar2 = *(uint *)(puVar4 + 1);
  puVar12 = (undefined *)((ulong)uVar10 + (ulong)uVar2);
  if (uVar9 == 0) {
    puVar12 = puVar12 + 8;
    iVar5 = (int)puVar12;
    puVar7 = (undefined *)((ulong)puVar12 & 0xffffffff);
    if (puVar12 != puVar7) goto LAB_0077c235;
    __ptr = (void *)0x0;
  }
  else {
    if (puVar12 <= (undefined *)(ulong)uVar9) {
      return (undefined *)(ulong)uVar9;
    }
    puVar12 = (undefined *)((long)puVar12 * 2);
    iVar5 = (int)puVar12;
    puVar7 = (undefined *)((ulong)puVar12 & 0xffffffff);
    if (puVar12 != puVar7) goto LAB_0077c235;
    __ptr = (void *)*puVar4;
  }
  if (iVar5 == 0) {
    return puVar7;
  }
  pvVar8 = malloc(((ulong)puVar12 & 0xffffffff) << 3);
  if (pvVar8 != (void *)0x0) {
    pvVar8 = memcpy(pvVar8,(void *)*puVar4,(ulong)uVar2 * 8);
    (&DAT_00931b98)[lVar3 * 0x28] = (int)puVar12;
    *puVar4 = pvVar8;
    if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
      __thread_gscope_wait();
    }
    free(__ptr);
    return extraout_RAX;
  }
LAB_0077c235:
  uVar13 = *(ulong *)(param_1 + 0x38);
  add_to_global_resize_failure_isra_0();
  puVar12 = _dl_ns;
  if (_dl_nns != 0) {
    for (; puVar12 != (undefined *)0x0; puVar12 = *(undefined **)(puVar12 + 0x18)) {
      if (((*(ulong *)(puVar12 + 0x358) <= uVar13) && (uVar13 < *(ulong *)(puVar12 + 0x360))) &&
         (((puVar12[0x31e] & 4) != 0 || (iVar5 = _dl_addr_inside_object(puVar12,uVar13), iVar5 != 0)
          ))) {
        if (*(long *)(puVar12 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("ns == l->l_ns","dl-open.c",0xe0,"_dl_find_dso_for_object");
        }
        return puVar12;
      }
    }
  }
  return (undefined *)0x0;
}

