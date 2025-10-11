
undefined8 krb5kdf_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0x40;
  lVar2 = ossl_prov_cipher_cipher(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = EVP_CIPHER_get_key_length(lVar2);
    lVar4 = (long)iVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"size");
  if (lVar2 != 0) {
    uVar3 = OSSL_PARAM_set_size_t(lVar2,lVar4);
    return uVar3;
  }
  return 0xfffffffe;
}

