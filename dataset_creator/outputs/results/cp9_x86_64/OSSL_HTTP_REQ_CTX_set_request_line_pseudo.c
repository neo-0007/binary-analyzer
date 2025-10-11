
undefined8
OSSL_HTTP_REQ_CTX_set_request_line
          (undefined4 *param_1,int param_2,long param_3,long param_4,char *param_5)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *pBVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0xae,"OSSL_HTTP_REQ_CTX_set_request_line");
    ERR_set_error(0x3d,0xc0102,0);
    return 0;
  }
  BIO_free(*(BIO **)(param_1 + 0x16));
  type = BIO_s_mem();
  pBVar2 = BIO_new(type);
  *(BIO **)(param_1 + 0x16) = pBVar2;
  if (pBVar2 != (BIO *)0x0) {
    puVar3 = &DAT_008102a4;
    param_1[0x1a] = (uint)(param_2 != 0);
    if (param_2 == 0) {
      puVar3 = &DAT_008102a9;
    }
    iVar1 = BIO_printf(pBVar2,"%s ",puVar3);
    if (0 < iVar1) {
      pBVar2 = *(BIO **)(param_1 + 0x16);
      if (param_3 != 0) {
        iVar1 = BIO_printf(pBVar2,"http://%s",param_3);
        if (iVar1 < 1) {
          return 0;
        }
        pBVar2 = *(BIO **)(param_1 + 0x16);
        if (param_4 != 0) {
          iVar1 = BIO_printf(pBVar2,":%s",param_4);
          if (iVar1 < 1) {
            return 0;
          }
          pBVar2 = *(BIO **)(param_1 + 0x16);
        }
      }
      if (param_5 == (char *)0x0) {
        param_5 = (char *)((long)&slashdot_0 + 3);
      }
      else if (*param_5 != '/') {
        iVar1 = BIO_printf(pBVar2,(char *)((long)&slashdot_0 + 3));
        if (iVar1 < 1) {
          return 0;
        }
        pBVar2 = *(BIO **)(param_1 + 0x16);
      }
      iVar1 = BIO_printf(pBVar2,"%s HTTP/1.0\r\n",param_5);
      if (0 < iVar1) {
        *(undefined8 *)(param_1 + 0x24) = 0;
        *param_1 = 0x1001;
        return 1;
      }
    }
  }
  return 0;
}

