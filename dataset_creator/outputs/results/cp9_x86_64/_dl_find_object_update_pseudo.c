
undefined8 _dl_find_object_update(long param_1)

{
  byte *pbVar1;
  long *__ptr;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __size;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  
  if (param_1 == 0) {
    pvVar7 = malloc(0);
    if (pvVar7 == (void *)0x0) {
      return 0;
    }
    return 1;
  }
  uVar12 = 0;
  lVar2 = param_1;
  do {
    while (*(long *)(lVar2 + 0x28) != lVar2) {
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) goto LAB_0077b829;
    }
    pbVar1 = (byte *)(lVar2 + 0x31e);
    lVar2 = *(long *)(lVar2 + 0x18);
    uVar12 = uVar12 + ((*pbVar1 & 0x40) == 0);
  } while (lVar2 != 0);
LAB_0077b829:
  __ptr = (long *)malloc(uVar12 * 8);
  if (__ptr == (long *)0x0) {
    return 0;
  }
  lVar2 = 0;
  do {
    while ((*(long *)(param_1 + 0x28) != param_1 || ((*(byte *)(param_1 + 0x31e) & 0x40) != 0))) {
      param_1 = *(long *)(param_1 + 0x18);
      if (param_1 == 0) goto LAB_0077b880;
    }
    __ptr[lVar2] = param_1;
    param_1 = *(long *)(param_1 + 0x18);
    lVar2 = lVar2 + 1;
  } while (param_1 != 0);
LAB_0077b880:
  if (uVar12 == 0) {
    return 1;
  }
  if (uVar12 != 1) {
    uVar9 = 0;
    plVar14 = __ptr;
    do {
      lVar2 = *plVar14;
      uVar10 = uVar9 + 1;
      uVar8 = *(ulong *)(lVar2 + 0x358);
      plVar4 = plVar14;
      uVar3 = uVar10;
      lVar5 = lVar2;
      if (uVar10 < uVar12) {
        do {
          if (*(ulong *)(__ptr[uVar3] + 0x358) < uVar8) {
            uVar8 = *(ulong *)(__ptr[uVar3] + 0x358);
            uVar9 = uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (uVar12 != uVar3);
        plVar4 = __ptr + uVar9;
        lVar5 = __ptr[uVar9];
      }
      *plVar4 = lVar2;
      *plVar14 = lVar5;
      uVar9 = uVar10;
      plVar14 = plVar14 + 1;
    } while (uVar12 - 1 != uVar10);
  }
  lVar2 = 0;
  plVar4 = (long *)(&_dlfo_loaded_mappings)[(uint)_dlfo_loaded_mappings_version & 1];
  uVar11 = (uint)_dlfo_loaded_mappings_version & 1;
  plVar14 = plVar4;
  if (plVar4 == (long *)0x0) {
    uVar8 = 0x3f;
    lVar2 = (long)(int)(uVar11 ^ 1);
    plVar14 = (long *)(&_dlfo_loaded_mappings)[lVar2];
    uVar3 = uVar12;
    uVar9 = uVar12;
    plVar6 = plVar14;
    if (plVar14 != (long *)0x0) goto LAB_0077b974;
LAB_0077bb90:
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    __size = (uVar8 + 9) * 0x20;
    pvVar7 = malloc(__size);
    if (pvVar7 == (void *)0x0) {
      uVar13 = 0;
      goto LAB_0077bb6a;
    }
    plVar14 = (long *)((long)pvVar7 + 0x7fU & 0xffffffffffffff80);
    plVar14[2] = 0;
    *plVar14 = (long)plVar6;
    plVar14[1] = (long)pvVar7;
    uVar3 = (((ulong)((long)pvVar7 + __size) & 0xffffffffffffff80) - (long)plVar14) - 0x20 >> 5;
    plVar14[3] = uVar3;
    if (uVar3 < uVar8) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("result->allocated >= size","dl-find_object.c",0xec,
                    "_dlfo_mappings_segment_allocate");
    }
    (&_dlfo_loaded_mappings)[lVar2] = plVar14;
  }
  else {
    do {
      if (plVar14[2] == 0) break;
      lVar5 = 0;
      do {
        lVar2 = (lVar2 + 1) - (ulong)(plVar14[lVar5 * 4 + 6] == 0);
        lVar5 = lVar5 + 1;
      } while (lVar5 != plVar14[2]);
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
    uVar9 = lVar2 + uVar12;
    lVar2 = (long)(int)(uVar11 ^ 1);
    plVar14 = (long *)(&_dlfo_loaded_mappings)[lVar2];
    if (plVar14 == (long *)0x0) {
      if (uVar9 != 0) {
        uVar8 = 0x3f;
        uVar3 = uVar9;
        plVar6 = plVar14;
        goto LAB_0077bb90;
      }
    }
    else {
LAB_0077b974:
      uVar3 = 0;
      plVar6 = plVar14;
      do {
        uVar3 = uVar3 + plVar6[3];
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      if (uVar3 < uVar9) {
        uVar8 = plVar14[3] * 2;
        uVar3 = uVar9 - uVar3;
        plVar6 = plVar14;
        goto LAB_0077bb90;
      }
    }
  }
  uVar8 = plVar14[3];
  if (uVar9 <= (ulong)plVar14[3]) {
    uVar8 = uVar9;
  }
  lVar2 = 0;
  plVar14[2] = uVar8;
  if (plVar4 != (long *)0x0) {
    lVar2 = plVar4[2];
  }
  while (lVar5 = lVar2, lVar2 == 0) {
    if (((plVar4 == (long *)0x0) || (plVar4 = (long *)*plVar4, plVar4 == (long *)0x0)) ||
       (lVar5 = plVar4[2], lVar5 == 0)) goto LAB_0077ba70;
LAB_0077b9e3:
    lVar2 = lVar5 + -1;
    if (plVar4[lVar2 * 4 + 6] != 0) {
LAB_0077b9fa:
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("remaining_to_add > 0","dl-find_object.c",0x2da,"_dl_find_object_update_1");
      }
      if (uVar8 == 0) {
        plVar14 = (long *)*plVar14;
        uVar8 = plVar14[3];
        if (uVar9 <= (ulong)plVar14[3]) {
          uVar8 = uVar9;
        }
        plVar14[2] = uVar8;
      }
      uVar3 = uVar8 - 1;
      if ((uVar12 == 0) ||
         ((lVar2 = __ptr[uVar12 - 1], plVar4 != (long *)0x0 &&
          (*(ulong *)(lVar2 + 0x358) < (ulong)plVar4[lVar5 * 4])))) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("current_seg_index1 > 0","dl-find_object.c",0x2ed,"_dl_find_object_update_1"
                       );
        }
        lVar2 = lVar5 + -1;
        plVar14[uVar8 * 4] = plVar4[lVar5 * 4];
        plVar14[uVar8 * 4 + 1] = plVar4[lVar5 * 4 + 1];
        plVar14[uVar3 * 4 + 6] = plVar4[lVar2 * 4 + 6];
        plVar14[uVar3 * 4 + 7] = plVar4[lVar2 * 4 + 7];
        uVar8 = uVar3;
      }
      else {
        _dl_find_object_from_map();
        *(byte *)(lVar2 + 0x31e) = *(byte *)(lVar2 + 0x31e) | 0x40;
        uVar12 = uVar12 - 1;
        lVar2 = lVar5;
        uVar8 = uVar3;
      }
      uVar9 = uVar9 - 1;
    }
  }
  if (plVar4 != (long *)0x0) goto LAB_0077b9e3;
LAB_0077ba70:
  if (uVar12 != 0) {
    plVar4 = (long *)0x0;
    goto LAB_0077b9fa;
  }
  if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("remaining_to_add == 0","dl-find_object.c",0x302,"_dl_find_object_update_1");
  }
  if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("target_seg_index1 == 0","dl-find_object.c",0x305,"_dl_find_object_update_1");
  }
  if (*plVar14 != 0) {
    *(undefined8 *)(*plVar14 + 0x10) = 0;
  }
  uVar13 = 1;
  _dlfo_loaded_mappings_version = _dlfo_loaded_mappings_version + 1;
LAB_0077bb6a:
  free(__ptr);
  return uVar13;
}

