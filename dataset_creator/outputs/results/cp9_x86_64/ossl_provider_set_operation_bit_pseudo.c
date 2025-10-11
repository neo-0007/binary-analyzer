
undefined8 ossl_provider_set_operation_bit(long param_1,ulong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xb8));
  if ((int)uVar1 != 0) {
    pvVar2 = *(void **)(param_1 + 0xa8);
    uVar3 = param_2 >> 3;
    if (*(ulong *)(param_1 + 0xb0) <= uVar3) {
      pvVar2 = CRYPTO_realloc(pvVar2,(int)(uVar3 + 1),"../crypto/provider_core.c",0x646);
      if (pvVar2 == (void *)0x0) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xb8));
        ERR_new();
        ERR_set_debug("../crypto/provider_core.c",0x64b,"ossl_provider_set_operation_bit");
        ERR_set_error(0xf,0xc0100,0);
        return 0;
      }
      *(void **)(param_1 + 0xa8) = pvVar2;
      memset((void *)((long)pvVar2 + *(long *)(param_1 + 0xb0)),0,
             (uVar3 - *(long *)(param_1 + 0xb0)) + 1);
      *(ulong *)(param_1 + 0xb0) = uVar3 + 1;
      pvVar2 = *(void **)(param_1 + 0xa8);
    }
    *(byte *)((long)pvVar2 + uVar3) =
         *(byte *)((long)pvVar2 + uVar3) | (byte)(1 << ((byte)param_2 & 7));
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xb8));
    uVar1 = 1;
  }
  return uVar1;
}

