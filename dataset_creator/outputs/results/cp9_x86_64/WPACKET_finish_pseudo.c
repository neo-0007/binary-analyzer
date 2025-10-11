
ulong WPACKET_finish(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*plVar1 != 0) {
    return 0;
  }
  uVar2 = wpacket_intern_close(param_1,plVar1,1);
  if ((int)uVar2 != 0) {
    CRYPTO_free(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}

