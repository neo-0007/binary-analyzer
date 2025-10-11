
undefined4 set1_content(long param_1,long param_2,BIO *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || ((param_3 == (BIO *)0x0 && (param_2 != 0)))) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/http/http_client.c",0x110,"set1_content");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    if ((*(int *)(param_1 + 0xa0) != 0) &&
       (iVar1 = OSSL_HTTP_REQ_CTX_add1_header(param_1,"Connection","keep-alive"), iVar1 == 0)) {
      return 0;
    }
    BIO_free(*(BIO **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (param_3 == (BIO *)0x0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
      ERR_new();
      ERR_set_debug("../crypto/http/http_client.c",0x11d,"set1_content");
      ERR_set_error(0x3d,0xc0101,0);
      return 0;
    }
    if ((param_2 != 0) &&
       (iVar1 = BIO_printf(*(BIO **)(param_1 + 0x58),"Content-Type: %s\r\n",param_2), iVar1 < 1)) {
      return 0;
    }
    lVar2 = BIO_ctrl(param_3,3,0,(void *)0x0);
    if ((0 < lVar2) &&
       (iVar1 = BIO_printf(*(BIO **)(param_1 + 0x58),"Content-Length: %ld\r\n",lVar2), iVar1 < 1)) {
      return 0;
    }
    iVar1 = BIO_up_ref(param_3);
    if (iVar1 == 0) {
      return 0;
    }
    *(BIO **)(param_1 + 0x60) = param_3;
    uVar3 = 1;
  }
  return uVar3;
}

