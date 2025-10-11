
long test_r4_cipher(void)

{
  int iVar1;
  long lVar2;
  
  if (r4_cipher == 0) {
    lVar2 = EVP_CIPHER_meth_new(5,1,0x10);
    if ((((lVar2 == 0) || (iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0), iVar1 == 0)) ||
        (iVar1 = EVP_CIPHER_meth_set_flags(lVar2,8), iVar1 == 0)) ||
       (((iVar1 = EVP_CIPHER_meth_set_init(lVar2,test_rc4_init_key), iVar1 == 0 ||
         (iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,test_rc4_cipher), iVar1 == 0)) ||
        (iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x418), iVar1 == 0)))) {
      EVP_CIPHER_meth_free(lVar2);
      lVar2 = 0;
    }
    r4_cipher = lVar2;
    return lVar2;
  }
  return r4_cipher;
}

