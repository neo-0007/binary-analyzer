
undefined8 _IO_default_doallocate(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = malloc(0x2000);
  if (pvVar2 != (void *)0x0) {
    uVar1 = *param_1;
    if ((*(void **)(param_1 + 0xe) != (void *)0x0) && ((uVar1 & 1) == 0)) {
      free(*(void **)(param_1 + 0xe));
      uVar1 = *param_1;
    }
    *(void **)(param_1 + 0xe) = pvVar2;
    *(long *)(param_1 + 0x10) = (long)pvVar2 + 0x2000;
    *param_1 = uVar1 & 0xfffffffe;
    return 1;
  }
  return 0xffffffff;
}

