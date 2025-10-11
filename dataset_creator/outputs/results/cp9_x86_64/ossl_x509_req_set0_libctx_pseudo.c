
bool ossl_x509_req_set0_libctx(long param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    CRYPTO_free(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    bVar2 = true;
    if (param_3 != (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_3,"../crypto/x509/x_req.c",0x9b);
      bVar2 = pcVar1 != (char *)0x0;
      *(char **)(param_1 + 0x70) = pcVar1;
    }
    return bVar2;
  }
  return true;
}

