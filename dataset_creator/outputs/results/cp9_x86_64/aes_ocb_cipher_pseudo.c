
undefined8
aes_ocb_cipher(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
              ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x1fa,"aes_ocb_cipher");
      ERR_set_error(0x39,0x6a,0);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      iVar1 = CRYPTO_ocb128_decrypt(param_1 + 0x2b0,param_5,param_2,param_6);
    }
    else {
      iVar1 = CRYPTO_ocb128_encrypt();
    }
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_aes_ocb.c",0x1ff,"aes_ocb_cipher");
      ERR_set_error(0x39,0x66,0);
      return 0;
    }
    *param_3 = param_6;
    uVar2 = 1;
  }
  return uVar2;
}

