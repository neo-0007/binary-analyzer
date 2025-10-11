
void krb5kdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  ossl_prov_cipher_reset(param_1 + 1);
  CRYPTO_clear_free(param_1[4],param_1[5],"../providers/implementations/kdfs/krb5kdf.c",0x5a);
  CRYPTO_clear_free(param_1[6],param_1[7],"../providers/implementations/kdfs/krb5kdf.c",0x5b);
  *param_1 = uVar1;
  param_1[7] = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  return;
}

