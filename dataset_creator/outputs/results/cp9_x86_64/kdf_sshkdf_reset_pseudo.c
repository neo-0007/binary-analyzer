
void kdf_sshkdf_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  ossl_prov_digest_reset(param_1 + 1);
  CRYPTO_clear_free(param_1[4],param_1[5],"../providers/implementations/kdfs/sshkdf.c",0x52);
  CRYPTO_clear_free(param_1[6],param_1[7],"../providers/implementations/kdfs/sshkdf.c",0x53);
  CRYPTO_clear_free(param_1[9],param_1[10],"../providers/implementations/kdfs/sshkdf.c",0x54);
  *param_1 = uVar1;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  return;
}

