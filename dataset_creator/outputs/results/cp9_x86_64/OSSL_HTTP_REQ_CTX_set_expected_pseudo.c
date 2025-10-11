
undefined8
OSSL_HTTP_REQ_CTX_set_expected(int *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  time_t tVar4;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0xf1,"OSSL_HTTP_REQ_CTX_set_expected");
    ERR_set_error(0x3d,0xc0102,0);
    uVar3 = 0;
  }
  else {
    if ((param_5 != 0) && (1 < *param_1 - 0x1000U)) {
      ERR_new();
      ERR_set_debug("../crypto/http/http_client.c",0xf7,"OSSL_HTTP_REQ_CTX_set_expected");
      ERR_set_error(0x3d,0xc0101,0);
      return 0;
    }
    CRYPTO_free(*(void **)(param_1 + 0x1c));
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if (param_2 != (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_2,"../crypto/http/http_client.c",0xfe);
      *(char **)(param_1 + 0x1c) = pcVar1;
      if (pcVar1 == (char *)0x0) {
        return 0;
      }
    }
    param_1[0x1e] = param_3;
    if (param_4 < 0) {
      lVar2 = *(long *)(param_1 + 0x2c);
    }
    else {
      lVar2 = 0;
      if (param_4 != 0) {
        tVar4 = time((time_t *)0x0);
        lVar2 = tVar4 + param_4;
      }
    }
    param_1[0x28] = param_5;
    *(long *)(param_1 + 0x2a) = lVar2;
    uVar3 = 1;
  }
  return uVar3;
}

