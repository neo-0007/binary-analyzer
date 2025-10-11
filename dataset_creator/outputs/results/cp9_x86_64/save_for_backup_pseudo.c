
undefined8 save_for_backup(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  size_t __n;
  size_t sVar7;
  void *pvVar8;
  void *pvVar9;
  size_t __n_00;
  ulong uVar10;
  void *__dest;
  
  pvVar8 = *(void **)(param_1 + 0x18);
  pvVar5 = *(void **)(param_1 + 0x58);
  plVar4 = *(long **)(param_1 + 0x60);
  pvVar9 = *(void **)(param_1 + 0x48);
  __n_00 = param_2 - (long)pvVar8;
  uVar10 = (long)pvVar5 - (long)pvVar9;
  plVar6 = plVar4;
  sVar7 = __n_00;
  if (plVar4 == (long *)0x0) {
    pvVar9 = pvVar5;
    if (-1 < (long)__n_00) {
      *(void **)(param_1 + 0x50) = pvVar5;
      return 0;
    }
LAB_006fc438:
    memmove(pvVar9,(void *)((long)pvVar5 + sVar7),-sVar7);
    pvVar8 = *(void **)(param_1 + 0x18);
    pvVar9 = (void *)((uVar10 - sVar7) + *(long *)(param_1 + 0x48));
    __n = param_2 - (long)pvVar8;
LAB_006fc45a:
    memcpy(pvVar9,pvVar8,__n);
    lVar2 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_1 + 0x60);
    __dest = (void *)(uVar10 + *(long *)(param_1 + 0x48));
  }
  else {
    do {
      plVar1 = plVar6 + 2;
      plVar6 = (long *)*plVar6;
      if ((long)(int)*plVar1 < (long)sVar7) {
        sVar7 = (long)(int)*plVar1;
      }
    } while (plVar6 != (long *)0x0);
    __n = __n_00 - sVar7;
    if (__n <= uVar10) {
      uVar10 = uVar10 - __n;
      pvVar9 = (void *)((long)pvVar9 + uVar10);
      if ((long)sVar7 < 0) goto LAB_006fc438;
      if (__n == 0) {
        *(void **)(param_1 + 0x50) = pvVar9;
        goto LAB_006fc380;
      }
      pvVar8 = (void *)((long)pvVar8 + sVar7);
      goto LAB_006fc45a;
    }
    pvVar3 = malloc(__n + 100);
    if (pvVar3 == (void *)0x0) {
      return 0xffffffff;
    }
    __dest = (void *)((long)pvVar3 + 100);
    if ((long)sVar7 < 0) {
      pvVar5 = mempcpy(__dest,(void *)((long)pvVar5 + sVar7),-sVar7);
      memcpy(pvVar5,pvVar8,__n_00);
    }
    else {
      memcpy(__dest,(void *)((long)pvVar8 + sVar7),__n);
    }
    free(pvVar9);
    lVar2 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_1 + 0x60);
    *(void **)(param_1 + 0x48) = pvVar3;
    *(size_t *)(param_1 + 0x58) = (long)pvVar3 + __n + 100;
  }
  __n_00 = param_2 - lVar2;
  *(void **)(param_1 + 0x50) = __dest;
  if (plVar4 == (long *)0x0) {
    return 0;
  }
LAB_006fc380:
  do {
    *(int *)(plVar4 + 2) = (int)plVar4[2] - (int)__n_00;
    plVar4 = (long *)*plVar4;
  } while (plVar4 != (long *)0x0);
  return 0;
}

