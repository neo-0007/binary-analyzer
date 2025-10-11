
undefined8 OSSL_HTTP_REQ_CTX_exchange(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x357,"OSSL_HTTP_REQ_CTX_exchange");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    do {
      iVar1 = OSSL_HTTP_REQ_CTX_nbio(param_1);
      if (iVar1 != -1) {
        if (iVar1 != 0) {
          if (*param_1 != 0x1007) {
            return *(undefined8 *)(param_1 + 0x16);
          }
          return *(undefined8 *)(param_1 + 8);
        }
        if (*(long *)(param_1 + 0x2e) != 0) {
          return 0;
        }
        if (0 < *(long *)(param_1 + 0x22)) {
          ERR_new();
          ERR_set_debug("../crypto/http/http_client.c",0x368,"OSSL_HTTP_REQ_CTX_exchange");
          ERR_set_error(0x3d,0x66,0);
          return 0;
        }
        ERR_new();
        ERR_set_debug("../crypto/http/http_client.c",0x36a,"OSSL_HTTP_REQ_CTX_exchange");
        ERR_set_error(0x3d,0x67,0);
        return 0;
      }
      iVar1 = BIO_wait(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2a),100);
    } while (0 < iVar1);
  }
  return 0;
}

