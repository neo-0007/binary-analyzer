
undefined8 _IO_wdefault_doallocate(long param_1)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = malloc(0x2000);
  if (pvVar2 != (void *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x74);
    lVar3 = *(long *)(param_1 + 0xa0);
    if ((*(void **)(lVar3 + 0x30) != (void *)0x0) && ((uVar1 & 8) == 0)) {
      free(*(void **)(lVar3 + 0x30));
      lVar3 = *(long *)(param_1 + 0xa0);
      uVar1 = *(uint *)(param_1 + 0x74);
    }
    *(void **)(lVar3 + 0x30) = pvVar2;
    *(long *)(lVar3 + 0x38) = (long)pvVar2 + 0x2000;
    *(uint *)(param_1 + 0x74) = uVar1 & 0xfffffff7;
    return 1;
  }
  return 0xffffffff;
}

