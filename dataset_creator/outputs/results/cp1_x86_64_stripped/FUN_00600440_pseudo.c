
undefined8 FUN_00600440(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0x357,"OSSL_HTTP_REQ_CTX_exchange");
    FUN_0051f8f0(0x3d,0xc0102,0);
  }
  else {
    do {
      iVar1 = FUN_005ff610(param_1);
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
          FUN_0051f420();
          FUN_0051f540("../crypto/http/http_client.c",0x368,"OSSL_HTTP_REQ_CTX_exchange");
          FUN_0051f8f0(0x3d,0x66,0);
          return 0;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/http/http_client.c",0x36a,"OSSL_HTTP_REQ_CTX_exchange");
        FUN_0051f8f0(0x3d,0x67,0);
        return 0;
      }
      iVar1 = FUN_004ac6c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2a),100);
    } while (0 < iVar1);
  }
  return 0;
}

