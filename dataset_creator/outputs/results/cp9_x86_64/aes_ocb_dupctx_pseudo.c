
undefined8 * aes_ocb_dupctx(undefined8 *param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  ptr = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)
          CRYPTO_malloc(0x3b0,"../providers/implementations/ciphers/cipher_aes_ocb.c",0x156);
    if (ptr == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x158,"aes_ocb_dupctx");
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      puVar3 = param_1;
      puVar4 = ptr;
      for (lVar2 = 0x76; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
      }
      iVar1 = CRYPTO_ocb128_copy_ctx(ptr + 0x56,param_1 + 0x56,ptr + 0x18,ptr + 0x37);
      if (iVar1 == 0) {
        CRYPTO_free(ptr);
        return (undefined8 *)0x0;
      }
    }
  }
  return ptr;
}

