
int __gconv_lookup_cache
              (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong *param_4,
              ulong param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  void *pvVar13;
  int iVar14;
  long lVar15;
  ushort *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  lVar15 = gconv_cache;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (gconv_cache == 0) {
    iVar6 = 2;
    goto LAB_006d43ac;
  }
  uVar3 = *(ushort *)(gconv_cache + 4);
  uVar4 = *(ushort *)(gconv_cache + 10);
  iVar6 = find_module_idx(param_2,&local_50);
  if ((((iVar6 != 0) ||
       (lVar11 = (local_50 * 3 + 3) * 4, cache_size < (ulong)*(ushort *)(lVar15 + 10) + lVar11)) ||
      (iVar6 = find_module_idx(param_1,&local_48), iVar6 != 0)) ||
     (lVar8 = (local_48 * 3 + 3) * 4, cache_size < (ulong)*(ushort *)(lVar15 + 10) + lVar8))
  goto LAB_006d43a6;
  lVar17 = (ulong)uVar4 + lVar15;
  puVar1 = (ushort *)(lVar17 + -0xc + lVar8);
  if ((local_50 == local_48) && ((param_5 & 1) != 0)) {
    iVar6 = -1;
    goto LAB_006d43ac;
  }
  lVar8 = (ulong)uVar3 + lVar15;
  puVar2 = (ushort *)(lVar17 + -0xc + lVar11);
  iVar6 = 0;
  if (local_50 == 0) {
    if ((local_48 == 0) || (puVar1[4] == 0)) goto LAB_006d43a6;
    pvVar13 = malloc(0xd0);
    if (pvVar13 == (void *)0x0) goto LAB_006d4641;
    iVar14 = 0;
    *param_3 = pvVar13;
    *param_4 = 0;
    pvVar9 = pvVar13;
LAB_006d4581:
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(char **)((long)pvVar13 + 0x18) = "INTERNAL";
    uVar5 = puVar1[2];
    *(undefined4 *)((long)pvVar13 + 0x10) = 1;
    *(undefined8 *)((long)pvVar13 + 0x60) = 0;
    *(ulong *)((long)pvVar13 + 0x20) = (ulong)uVar3 + lVar8;
    if (*(char *)((ulong)uVar4 + lVar8) == '\0') {
      __gconv_get_builtin_trans((ulong)uVar5 + lVar8,pvVar13);
    }
    else {
      iVar7 = find_module_constprop_0((char *)((ulong)uVar4 + lVar8),(ulong)uVar5 + lVar8);
      if (iVar7 != 0) {
        if (iVar14 != 0) {
          __gconv_release_step(pvVar9);
        }
        goto LAB_006d465e;
      }
    }
    *param_4 = *param_4 + 1;
  }
  else {
    if (local_48 == 0) {
      uVar3 = puVar2[2];
    }
    else {
      if (puVar2[5] != 0) {
        puVar12 = (ushort *)
                  (((ulong)*(ushort *)(lVar15 + 0xc) - 1) + (ulong)puVar2[5] + gconv_cache);
        uVar3 = *puVar12;
        while (uVar3 != 0) {
          uVar10 = (ulong)uVar3;
          if (local_48 == puVar12[(long)(int)(uVar3 - 1) * 3 + 1]) {
            *param_4 = uVar10;
            pvVar13 = malloc(uVar10 * 0x68);
            *param_3 = pvVar13;
            if (pvVar13 == (void *)0x0) goto LAB_006d4641;
            puVar16 = puVar12 + 1;
            iVar14 = 0;
            pvVar9 = pvVar13;
            lVar15 = lVar8 + (ulong)*puVar2;
            goto LAB_006d4769;
          }
          puVar12 = puVar12 + uVar10 * 3 + 1;
          uVar3 = *puVar12;
        }
      }
LAB_006d45e6:
      if (puVar2[2] == 0) goto LAB_006d43a6;
      uVar3 = puVar1[4];
    }
    if (uVar3 == 0) {
LAB_006d43a6:
      iVar6 = 1;
      goto LAB_006d43ac;
    }
    pvVar9 = malloc(0xd0);
    if (pvVar9 == (void *)0x0) {
LAB_006d4641:
      iVar6 = 3;
      goto LAB_006d43ac;
    }
    uVar3 = puVar2[3];
    *param_3 = pvVar9;
    uVar4 = *puVar2;
    *param_4 = 0;
    *(char **)((long)pvVar9 + 0x20) = "INTERNAL";
    *(ulong *)((long)pvVar9 + 0x18) = (ulong)uVar4 + lVar8;
    uVar4 = puVar2[4];
    *(undefined4 *)((long)pvVar9 + 0x10) = 1;
    *(undefined8 *)((long)pvVar9 + 0x60) = 0;
    if (*(char *)((ulong)uVar3 + lVar8) == '\0') {
      __gconv_get_builtin_trans(lVar8 + (ulong)uVar4,pvVar9);
LAB_006d44f1:
      uVar10 = *param_4;
      *param_4 = uVar10 + 1;
      if (local_48 == 0) goto LAB_006d43ac;
      iVar14 = (int)(uVar10 + 1);
      pvVar13 = (void *)((long)iVar14 * 0x68 + (long)pvVar9);
      goto LAB_006d4581;
    }
    iVar7 = find_module_constprop_0((char *)((ulong)uVar3 + lVar8),lVar8 + (ulong)uVar4,pvVar9);
    if (iVar7 == 0) goto LAB_006d44f1;
LAB_006d465e:
    free(pvVar9);
    iVar6 = iVar7;
  }
LAB_006d43ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_006d4769:
  do {
    uVar3 = puVar16[1];
    uVar4 = *(ushort *)(lVar17 + (ulong)*puVar16 * 0xc);
    uVar5 = puVar16[2];
    *(undefined4 *)((long)pvVar9 + 0x10) = 1;
    *(undefined8 *)((long)pvVar9 + 0x60) = 0;
    lVar11 = (ulong)uVar4 + lVar8;
    *(long *)((long)pvVar9 + 0x18) = lVar15;
    *(long *)((long)pvVar9 + 0x20) = lVar11;
    if (*(char *)((ulong)uVar3 + lVar8) == '\0') {
      __gconv_get_builtin_trans(lVar8 + (ulong)uVar5,pvVar9);
    }
    else {
      iVar7 = find_module_constprop_0((char *)((ulong)uVar3 + lVar8),lVar8 + (ulong)uVar5,pvVar9);
      if (iVar7 != 0) {
        free(pvVar13);
        goto LAB_006d45e6;
      }
    }
    iVar14 = iVar14 + 1;
    puVar16 = puVar16 + 3;
    pvVar9 = (void *)((long)pvVar9 + 0x68);
    lVar15 = lVar11;
  } while (iVar14 < (int)(uint)*puVar12);
  goto LAB_006d43ac;
}

