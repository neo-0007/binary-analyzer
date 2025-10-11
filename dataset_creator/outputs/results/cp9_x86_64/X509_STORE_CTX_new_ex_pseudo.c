
void * X509_STORE_CTX_new_ex(undefined8 param_1,char *param_2)

{
  void *ptr;
  char *pcVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x110,"../crypto/x509/x509_vfy.c",0x8ee);
  if (ptr == (void *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0x8f1,"X509_STORE_CTX_new_ex");
    ERR_set_error(0xb,0xc0100,0);
  }
  else {
    *(undefined8 *)((long)ptr + 0x100) = param_1;
    if (param_2 != (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_2,"../crypto/x509/x509_vfy.c",0x8f7);
      *(char **)((long)ptr + 0x108) = pcVar1;
      if (pcVar1 == (char *)0x0) {
        CRYPTO_free(ptr);
        ERR_new();
        ERR_set_debug("../crypto/x509/x509_vfy.c",0x8fa,"X509_STORE_CTX_new_ex");
        ERR_set_error(0xb,0xc0100,0);
        ptr = (void *)0x0;
      }
    }
  }
  return ptr;
}

