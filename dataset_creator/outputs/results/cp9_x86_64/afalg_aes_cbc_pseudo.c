
long afalg_aes_cbc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0x1a7) {
    puVar3 = &DAT_0092e250;
    if (DAT_0092e258 != 0) {
      return DAT_0092e258;
    }
    lVar4 = 0;
  }
  else {
    if (iVar1 == 0x1ab) {
      puVar3 = &DAT_0092e260;
    }
    else {
      puVar3 = &cbc_handle;
      if (iVar1 != 0x1a3) {
        return 0;
      }
    }
    lVar4 = *(long *)(puVar3 + 2);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  lVar2 = EVP_CIPHER_meth_new(param_1,0x10,*puVar3);
  *(long *)(puVar3 + 2) = lVar2;
  if (lVar2 != 0) {
    iVar1 = EVP_CIPHER_meth_set_iv_length(lVar2,0x10);
    lVar2 = *(long *)(puVar3 + 2);
    if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_meth_set_flags(lVar2,2);
      lVar2 = *(long *)(puVar3 + 2);
      if (iVar1 != 0) {
        iVar1 = EVP_CIPHER_meth_set_init(lVar2,afalg_cipher_init);
        lVar2 = *(long *)(puVar3 + 2);
        if (iVar1 != 0) {
          iVar1 = EVP_CIPHER_meth_set_do_cipher(lVar2,afalg_do_cipher);
          lVar2 = *(long *)(puVar3 + 2);
          if (iVar1 != 0) {
            iVar1 = EVP_CIPHER_meth_set_cleanup(lVar2,afalg_cipher_cleanup);
            lVar2 = *(long *)(puVar3 + 2);
            if (iVar1 != 0) {
              iVar1 = EVP_CIPHER_meth_set_impl_ctx_size(lVar2,0x80);
              if (iVar1 != 0) {
                return *(long *)(puVar3 + 2);
              }
              lVar2 = *(long *)(puVar3 + 2);
            }
          }
        }
      }
    }
  }
  EVP_CIPHER_meth_free(lVar2);
  *(undefined8 *)(puVar3 + 2) = 0;
  return lVar4;
}

