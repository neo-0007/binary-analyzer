
undefined8 save_for_wbackup(long param_1,long param_2)

{
  size_t __size;
  wchar_t *pwVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  wchar_t *pwVar6;
  long lVar7;
  long *plVar8;
  size_t __n;
  size_t sVar9;
  wchar_t *pwVar10;
  ulong uVar11;
  long lVar12;
  size_t __n_00;
  
  lVar7 = *(long *)(param_1 + 0xa0);
  plVar5 = *(long **)(param_1 + 0x60);
  pwVar1 = *(wchar_t **)(lVar7 + 0x10);
  pwVar6 = *(wchar_t **)(lVar7 + 0x50);
  lVar12 = (long)pwVar6 - *(long *)(lVar7 + 0x40);
  __n_00 = param_2 - (long)pwVar1 >> 2;
  uVar11 = lVar12 >> 2;
  plVar8 = plVar5;
  sVar9 = __n_00;
  if (plVar5 == (long *)0x0) {
    pwVar10 = pwVar6;
    if (-1 < param_2 - (long)pwVar1) {
      *(wchar_t **)(lVar7 + 0x48) = pwVar6;
      return 0;
    }
LAB_006f54b0:
    wmemmove(pwVar10,pwVar6 + sVar9,-sVar9);
    pwVar1 = *(wchar_t **)(*(long *)(param_1 + 0xa0) + 0x10);
    wmemcpy((wchar_t *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x40) + (uVar11 - sVar9) * 4),pwVar1,
            param_2 - (long)pwVar1 >> 2);
    lVar7 = *(long *)(param_1 + 0xa0);
    pwVar10 = (wchar_t *)(lVar12 + *(long *)(lVar7 + 0x40));
LAB_006f5484:
    lVar3 = *(long *)(lVar7 + 0x10);
    plVar5 = *(long **)(param_1 + 0x60);
  }
  else {
    do {
      plVar2 = (long *)*plVar8;
      if ((long)(int)plVar8[2] < (long)sVar9) {
        sVar9 = (long)(int)plVar8[2];
      }
      plVar8 = plVar2;
    } while (plVar2 != (long *)0x0);
    __n = __n_00 - sVar9;
    if (uVar11 < __n) {
      __size = __n * 4 + 400;
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
        return 0xffffffff;
      }
      pwVar10 = (wchar_t *)((long)pvVar4 + 400);
      if ((long)sVar9 < 0) {
        pwVar6 = wmempcpy(pwVar10,pwVar6 + sVar9,-sVar9);
        wmempcpy(pwVar6,pwVar1,__n_00);
      }
      else {
        wmemcpy(pwVar10,pwVar1 + sVar9,__n);
      }
      free(*(void **)(*(long *)(param_1 + 0xa0) + 0x40));
      lVar7 = *(long *)(param_1 + 0xa0);
      *(void **)(lVar7 + 0x40) = pvVar4;
      *(size_t *)(lVar7 + 0x50) = __size + (long)pvVar4;
      goto LAB_006f5484;
    }
    uVar11 = uVar11 - __n;
    lVar12 = uVar11 * 4;
    pwVar10 = (wchar_t *)(*(long *)(lVar7 + 0x40) + lVar12);
    if ((long)sVar9 < 0) goto LAB_006f54b0;
    if (__n == 0) {
      *(wchar_t **)(lVar7 + 0x48) = pwVar10;
      goto LAB_006f53e0;
    }
    wmemcpy(pwVar10,pwVar1 + sVar9,__n);
    lVar7 = *(long *)(param_1 + 0xa0);
    plVar5 = *(long **)(param_1 + 0x60);
    lVar3 = *(long *)(lVar7 + 0x10);
    pwVar10 = (wchar_t *)(lVar12 + *(long *)(lVar7 + 0x40));
  }
  __n_00 = param_2 - lVar3 >> 2;
  *(wchar_t **)(lVar7 + 0x48) = pwVar10;
  if (plVar5 == (long *)0x0) {
    return 0;
  }
LAB_006f53e0:
  do {
    *(int *)(plVar5 + 2) = (int)plVar5[2] - (int)__n_00;
    plVar5 = (long *)*plVar5;
  } while (plVar5 != (long *)0x0);
  return 0;
}

