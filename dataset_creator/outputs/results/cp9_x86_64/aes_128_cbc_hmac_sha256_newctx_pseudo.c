
long aes_128_cbc_hmac_sha256_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x348,"../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c",
                          0x164);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_cbc_hmac_sha256();
      ossl_cipher_generic_initkey(lVar2,0x80,0x80,0x80,2,9,uVar3,param_1);
      *(undefined8 *)(lVar2 + 0x1d0) = *(undefined8 *)(lVar2 + 0xa8);
    }
  }
  return lVar2;
}

