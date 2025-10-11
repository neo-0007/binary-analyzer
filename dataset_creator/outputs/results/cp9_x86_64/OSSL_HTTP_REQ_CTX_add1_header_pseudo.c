
bool OSSL_HTTP_REQ_CTX_add1_header(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  BIO *b;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0xd9,"OSSL_HTTP_REQ_CTX_add1_header");
    ERR_set_error(0x3d,0xc0102,0);
    return false;
  }
  if (*(BIO **)(param_1 + 0x58) == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0xdd,"OSSL_HTTP_REQ_CTX_add1_header");
    ERR_set_error(0x3d,0xc0101,0);
    return false;
  }
  iVar1 = BIO_puts(*(BIO **)(param_1 + 0x58),param_2);
  if (0 < iVar1) {
    b = *(BIO **)(param_1 + 0x58);
    if (param_3 == (char *)0x0) {
LAB_005f6104:
      iVar1 = BIO_write(b,&DAT_007fb8aa,2);
      return iVar1 == 2;
    }
    iVar1 = BIO_write(b,": ",2);
    if (iVar1 == 2) {
      iVar1 = BIO_puts(*(BIO **)(param_1 + 0x58),param_3);
      if (0 < iVar1) {
        b = *(BIO **)(param_1 + 0x58);
        goto LAB_005f6104;
      }
    }
  }
  return false;
}

