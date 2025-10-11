
undefined8 ossl_siv128_copy_ctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  EVP_CIPHER_CTX *out;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  out = (EVP_CIPHER_CTX *)param_1[4];
  if (out == (EVP_CIPHER_CTX *)0x0) {
    out = EVP_CIPHER_CTX_new();
    param_1[4] = out;
    if (out == (EVP_CIPHER_CTX *)0x0) {
      return 0;
    }
  }
  iVar2 = EVP_CIPHER_CTX_copy(out,(EVP_CIPHER_CTX *)param_2[4]);
  if (iVar2 != 0) {
    EVP_MAC_CTX_free(param_1[6]);
    lVar3 = EVP_MAC_CTX_dup(param_2[6]);
    param_1[6] = lVar3;
    if (lVar3 != 0) {
      lVar3 = param_2[5];
      param_1[5] = lVar3;
      if (lVar3 != 0) {
        EVP_MAC_up_ref();
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

