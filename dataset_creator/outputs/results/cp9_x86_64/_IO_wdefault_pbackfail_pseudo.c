
wchar_t _IO_wdefault_pbackfail(uint *param_1,wchar_t param_2)

{
  size_t __size;
  wchar_t *__s2;
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  size_t __n;
  ulong *puVar6;
  wchar_t *__s1;
  uint uVar7;
  
  puVar6 = *(ulong **)(param_1 + 0x28);
  uVar7 = *param_1;
  pwVar4 = (wchar_t *)*puVar6;
  __s2 = (wchar_t *)puVar6[2];
  if (__s2 < pwVar4) {
    __s1 = pwVar4;
    if ((uVar7 & 0x100) != 0) goto LAB_006f56ed;
    wVar5 = (wchar_t)*(char *)(*(long *)(param_1 + 2) + -1);
    if (wVar5 == param_2) {
      *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + -1;
      return wVar5;
    }
    if (puVar6[8] == 0) {
LAB_006f5818:
      pvVar3 = malloc(0x200);
      if (pvVar3 == (void *)0x0) {
        return L'\xffffffff';
      }
      __s1 = (wchar_t *)((long)pvVar3 + 0x200);
      puVar6[10] = (ulong)__s1;
      puVar6[8] = (ulong)pvVar3;
      puVar6[9] = (ulong)__s1;
    }
    else {
      iVar2 = save_for_wbackup(param_1,pwVar4);
      if (iVar2 != 0) {
        return L'\xffffffff';
      }
      puVar6 = *(ulong **)(param_1 + 0x28);
      uVar7 = *param_1;
      pwVar4 = (wchar_t *)*puVar6;
      __s1 = (wchar_t *)puVar6[10];
      pvVar3 = (void *)puVar6[8];
    }
  }
  else {
    if ((uVar7 & 0x100) != 0) {
      uVar1 = puVar6[1];
      __n = (long)(uVar1 - (long)__s2) >> 2;
      __size = __n * 8;
      pvVar3 = malloc(__size);
      if (pvVar3 == (void *)0x0) {
        return L'\xffffffff';
      }
      __s1 = (wchar_t *)((uVar1 - (long)__s2) + (long)pvVar3);
      wmemcpy(__s1,__s2,__n);
      free(*(void **)(*(long *)(param_1 + 0x28) + 0x10));
      puVar6 = *(ulong **)(param_1 + 0x28);
      puVar6[2] = (ulong)pvVar3;
      *puVar6 = (ulong)__s1;
      puVar6[1] = (ulong)((long)pvVar3 + __size);
      puVar6[9] = (ulong)__s1;
      goto LAB_006f56ed;
    }
    pvVar3 = (void *)puVar6[8];
    if (pvVar3 == (void *)0x0) goto LAB_006f5818;
    __s1 = (wchar_t *)puVar6[10];
  }
  uVar1 = puVar6[1];
  *param_1 = uVar7 | 0x100;
  puVar6[10] = uVar1;
  puVar6[2] = (ulong)pvVar3;
  puVar6[8] = (ulong)pwVar4;
  *puVar6 = (ulong)__s1;
  puVar6[1] = (ulong)__s1;
LAB_006f56ed:
  *puVar6 = (ulong)(__s1 + -1);
  __s1[-1] = param_2;
  return param_2;
}

