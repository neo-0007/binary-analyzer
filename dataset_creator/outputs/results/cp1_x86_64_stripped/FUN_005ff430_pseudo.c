
undefined8 FUN_005ff430(int *param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/http/http_client.c",0xf1,"OSSL_HTTP_REQ_CTX_set_expected");
    FUN_0051f8f0(0x3d,0xc0102,0);
    uVar2 = 0;
  }
  else {
    if ((param_5 != 0) && (1 < *param_1 - 0x1000U)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/http/http_client.c",0xf7,"OSSL_HTTP_REQ_CTX_set_expected");
      FUN_0051f8f0(0x3d,0xc0101,0);
      return 0;
    }
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x1c),"../crypto/http/http_client.c",0xfb);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    if (param_2 != 0) {
      lVar1 = FUN_0041c2c0(param_2,"../crypto/http/http_client.c",0xfe);
      *(long *)(param_1 + 0x1c) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    param_1[0x1e] = param_3;
    if (param_4 < 0) {
      lVar1 = *(long *)(param_1 + 0x2c);
    }
    else {
      lVar1 = 0;
      if (param_4 != 0) {
        lVar1 = FUN_007607a0(0);
        lVar1 = lVar1 + param_4;
      }
    }
    param_1[0x28] = param_5;
    *(long *)(param_1 + 0x2a) = lVar1;
    uVar2 = 1;
  }
  return uVar2;
}

