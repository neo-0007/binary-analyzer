
undefined8 * sm2_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x28,"../providers/implementations/asymciphers/sm2_enc.c",0x32);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *puVar1 = uVar2;
  }
  return puVar1;
}

