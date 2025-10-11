
long * EVP_MAC_CTX_dup(long *param_1)

{
  long lVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  
  ptr = (long *)param_1[1];
  if ((long *)param_1[1] != (long *)0x0) {
    ptr = (long *)CRYPTO_malloc(0x10,"../crypto/evp/mac_lib.c",0x3a);
    if (ptr == (long *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/mac_lib.c",0x3c,"EVP_MAC_CTX_dup");
      ERR_set_error(6,0xc0100,0);
    }
    else {
      lVar1 = param_1[1];
      lVar3 = *param_1;
      *ptr = *param_1;
      ptr[1] = lVar1;
      iVar2 = EVP_MAC_up_ref(lVar3);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/mac_lib.c",0x42,"EVP_MAC_CTX_dup");
        ERR_set_error(6,0xc0100,0);
        CRYPTO_free(ptr);
        ptr = (long *)0x0;
      }
      else {
        lVar3 = (**(code **)(*param_1 + 0x38))(param_1[1]);
        ptr[1] = lVar3;
        if (lVar3 == 0) {
          EVP_MAC_CTX_free(ptr);
          ptr = (long *)0x0;
        }
      }
    }
  }
  return ptr;
}

