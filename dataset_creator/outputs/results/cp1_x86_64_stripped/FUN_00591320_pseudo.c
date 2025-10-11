
undefined8
FUN_00591320(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
            undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_30 [2];
  
  local_30[0] = param_3;
  lVar2 = FUN_004b84d0(param_1,param_2,0);
  if (lVar2 == 0) {
    FUN_0051f420();
    lVar3 = 0;
    uVar5 = 0xffffffff;
    FUN_0051f540("../crypto/sm2/sm2_sign.c",0x1bf,"ossl_sm2_internal_sign");
    FUN_0051f8f0(0x35,0x80003,0);
  }
  else {
    lVar3 = FUN_005902f0(param_5,lVar2);
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar4 = 0x1c5;
    }
    else {
      iVar1 = FUN_004eae50(lVar3,local_30);
      if (-1 < iVar1) {
        *param_4 = iVar1;
        uVar5 = 1;
        goto LAB_0059137c;
      }
      FUN_0051f420();
      uVar4 = 0x1cb;
    }
    uVar5 = 0xffffffff;
    FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar4,"ossl_sm2_internal_sign");
    FUN_0051f8f0(0x35,0xc0103,0);
  }
LAB_0059137c:
  FUN_004eace0(lVar3);
  FUN_004b7fa0(lVar2);
  return uVar5;
}

