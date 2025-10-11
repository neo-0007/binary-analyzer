
bool OSSL_HTTP_set1_request
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
               undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9,
               undefined4 param_10)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x3da,"OSSL_HTTP_set1_request");
    ERR_set_error(0x3d,0xc0102,0);
  }
  else {
    if ((*(long *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x38) != 0)) {
      *(undefined8 *)(param_1 + 0x98) = param_8;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/http/http_client.c",0x3df,"OSSL_HTTP_set1_request");
        ERR_set_error(0x3d,0x80106,0);
        return false;
      }
      *(undefined8 *)(param_1 + 0x98) = param_8;
      uVar5 = *(undefined8 *)(param_1 + 0x50);
    }
    iVar2 = OSSL_HTTP_REQ_CTX_set_request_line(param_1,param_5 != 0,lVar4,uVar5,param_2);
    if (iVar2 != 0) {
      pcVar1 = *(char **)(param_1 + 0x48);
      bVar6 = false;
      if (pcVar1 != (char *)0x0) {
        bVar6 = *pcVar1 != '\0';
      }
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(param_3), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        lVar4 = OPENSSL_sk_value(param_3,iVar2);
        if (bVar6) {
          iVar3 = OPENSSL_strcasecmp("host",*(undefined8 *)(lVar4 + 8));
          bVar6 = iVar3 != 0;
        }
        iVar3 = OSSL_HTTP_REQ_CTX_add1_header
                          (param_1,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
        if (iVar3 == 0) {
          return false;
        }
      }
      if (((!bVar6) ||
          (iVar2 = OSSL_HTTP_REQ_CTX_add1_header(param_1,&DAT_00810373,pcVar1), iVar2 != 0)) &&
         (iVar2 = OSSL_HTTP_REQ_CTX_set_expected(param_1,param_6,param_7,param_9,param_10),
         iVar2 != 0)) {
        iVar2 = set1_content(param_1,param_4,param_5);
        return iVar2 != 0;
      }
    }
  }
  return false;
}

