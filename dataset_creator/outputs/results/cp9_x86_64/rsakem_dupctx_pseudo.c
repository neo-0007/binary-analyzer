
undefined8 * rsakem_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  undefined8 *puVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x18,"../providers/implementations/kem/rsa_kem.c",0x6c);
  puVar3 = ptr;
  if (ptr != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *ptr = *param_1;
    ptr[1] = uVar1;
    ptr[2] = param_1[2];
    if ((RSA *)ptr[1] != (RSA *)0x0) {
      iVar2 = RSA_up_ref((RSA *)ptr[1]);
      if (iVar2 == 0) {
        puVar3 = (undefined8 *)0x0;
        CRYPTO_free(ptr);
      }
    }
  }
  return puVar3;
}

