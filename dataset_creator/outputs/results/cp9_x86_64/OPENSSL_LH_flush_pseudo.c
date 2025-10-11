
void OPENSSL_LH_flush(long *param_1)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  void *ptr;
  uint uVar4;
  ulong uVar5;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((int)param_1[3] != 0) {
    lVar3 = *param_1;
    uVar5 = 0;
    do {
      plVar2 = (long *)(lVar3 + uVar5 * 8);
      ptr = (void *)*plVar2;
      if (ptr != (void *)0x0) {
        do {
          pvVar1 = *(void **)((long)ptr + 8);
          CRYPTO_free(ptr);
          ptr = pvVar1;
        } while (pvVar1 != (void *)0x0);
        lVar3 = *param_1;
        plVar2 = (long *)(lVar3 + uVar5 * 8);
      }
      *plVar2 = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 3));
  }
  param_1[7] = 0;
  return;
}

