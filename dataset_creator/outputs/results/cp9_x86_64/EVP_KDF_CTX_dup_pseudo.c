
long * EVP_KDF_CTX_dup(long *param_1)

{
  int iVar1;
  long *ptr;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  ptr = (long *)param_1[1];
  if ((long *)param_1[1] != (long *)0x0) {
    if (*(long *)(*param_1 + 0x38) == 0) {
      return (long *)0x0;
    }
    ptr = (long *)CRYPTO_malloc(0x10,"../crypto/evp/kdf_lib.c",0x3e);
    if (ptr == (long *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/kdf_lib.c",0x40,"EVP_KDF_CTX_dup");
      ERR_set_error(6,0xc0100,0);
    }
    else {
      lVar2 = param_1[1];
      *ptr = *param_1;
      ptr[1] = lVar2;
      iVar1 = EVP_KDF_up_ref();
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/kdf_lib.c",0x46,"EVP_KDF_CTX_dup");
        ERR_set_error(6,0xc0100,0);
        CRYPTO_free(ptr);
        ptr = (long *)0x0;
      }
      else {
        lVar2 = (**(code **)(*param_1 + 0x38))(param_1[1]);
        ptr[1] = lVar2;
        if (lVar2 == 0) {
          EVP_KDF_CTX_free(ptr);
          ptr = (long *)0x0;
        }
      }
    }
  }
  return ptr;
}

