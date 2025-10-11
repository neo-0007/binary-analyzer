
undefined8 async_fibre_makecontext(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = getcontext();
  if (iVar1 == 0) {
    pvVar2 = CRYPTO_malloc(0x8000,"../crypto/async/arch/async_posix.c",0x29);
    *(void **)(param_1 + 0x10) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0x8000;
      *(undefined8 *)(param_1 + 8) = 0;
      makecontext(param_1,async_start_func,0);
      return 1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return 0;
}

