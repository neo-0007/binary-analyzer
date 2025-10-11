
undefined8 * OPENSSL_sk_dup(int *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *__dest;
  
  puVar2 = (undefined8 *)CRYPTO_malloc(0x20,"../crypto/stack/stack.c",0x30);
  if (puVar2 == (undefined8 *)0x0) {
LAB_00434a30:
    ERR_new();
    ERR_set_debug("../crypto/stack/stack.c",0x4a,"OPENSSL_sk_dup");
    ERR_set_error(0xf,0xc0100,0);
    OPENSSL_sk_free(puVar2);
    return (undefined8 *)0x0;
  }
  if (param_1 == (int *)0x0) {
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
    *puVar2 = *(undefined8 *)param_1;
    puVar2[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 6);
    puVar2[2] = *(undefined8 *)(param_1 + 4);
    puVar2[3] = uVar1;
    if (*param_1 != 0) {
      __dest = CRYPTO_malloc(param_1[5] << 3,"../crypto/stack/stack.c",0x44);
      puVar2[1] = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(param_1 + 2),(long)*param_1 << 3);
        return puVar2;
      }
      goto LAB_00434a30;
    }
  }
  puVar2[1] = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  return puVar2;
}

