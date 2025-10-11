
uint _IO_default_pbackfail(uint *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *__dest;
  uint uVar4;
  size_t __n;
  
  uVar4 = *param_1;
  pvVar2 = *(void **)(param_1 + 2);
  pvVar3 = *(void **)(param_1 + 6);
  if (pvVar3 < pvVar2) {
    __dest = pvVar2;
    if ((uVar4 & 0x100) == 0) {
      if (*(byte *)((long)pvVar2 - 1) == param_2) {
        *(ulong *)(param_1 + 2) = (long)pvVar2 - 1;
        goto LAB_006fe735;
      }
      if (*(long *)(param_1 + 0x12) == 0) goto LAB_006fe840;
      iVar1 = save_for_backup(param_1,pvVar2);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      pvVar2 = *(void **)(param_1 + 2);
      uVar4 = *param_1;
      __dest = *(void **)(param_1 + 0x16);
      pvVar3 = *(void **)(param_1 + 0x12);
LAB_006fe810:
      *(void **)(param_1 + 6) = pvVar3;
      *param_1 = uVar4 | 0x100;
      *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 4);
      *(void **)(param_1 + 0x12) = pvVar2;
      *(void **)(param_1 + 2) = __dest;
      *(void **)(param_1 + 4) = __dest;
    }
  }
  else {
    if ((uVar4 & 0x100) == 0) {
      pvVar3 = *(void **)(param_1 + 0x12);
      if (pvVar3 == (void *)0x0) {
LAB_006fe840:
        pvVar3 = malloc(0x80);
        if (pvVar3 == (void *)0x0) {
          return 0xffffffff;
        }
        __dest = (void *)((long)pvVar3 + 0x80);
        *(void **)(param_1 + 0x12) = pvVar3;
        *(void **)(param_1 + 0x14) = __dest;
      }
      else {
        __dest = *(void **)(param_1 + 0x16);
      }
      goto LAB_006fe810;
    }
    __n = *(long *)(param_1 + 4) - (long)pvVar3;
    pvVar2 = malloc(__n * 2);
    if (pvVar2 == (void *)0x0) {
      return 0xffffffff;
    }
    __dest = (void *)(__n + (long)pvVar2);
    memcpy(__dest,pvVar3,__n);
    free(pvVar3);
    *(void **)(param_1 + 6) = pvVar2;
    *(void **)(param_1 + 0x14) = __dest;
    *(void **)(param_1 + 4) = (void *)((long)pvVar2 + __n * 2);
  }
  *(ulong *)(param_1 + 2) = (long)__dest - 1;
  *(char *)((long)__dest - 1) = (char)param_2;
LAB_006fe735:
  return param_2 & 0xff;
}

