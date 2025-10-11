
undefined8
FUN_005608e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x3d0,"PKCS7_dataVerify");
    FUN_0051f8f0(0x21,0x8f,0);
  }
  else if (*(long *)(param_4 + 0x20) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x3d5,"PKCS7_dataVerify");
    FUN_0051f8f0(0x21,0x7a,0);
  }
  else {
    iVar1 = FUN_00423da0(*(undefined8 *)(param_4 + 0x18));
    if ((iVar1 != 0x16) && (iVar1 = FUN_00423da0(*(undefined8 *)(param_4 + 0x18)), iVar1 != 0x18)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",0x3de,"PKCS7_dataVerify");
      FUN_0051f8f0(0x21,0x72,0);
      return 0;
    }
    lVar2 = FUN_0059ee60(*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10),
                         **(undefined8 **)(param_5 + 8),(*(undefined8 **)(param_5 + 8))[1]);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",1000,"PKCS7_dataVerify");
      FUN_0051f8f0(0x21,0x6a,0);
    }
    else {
      iVar1 = FUN_005a7c60(param_2,param_1,lVar2);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x3ee;
      }
      else {
        FUN_005a7a20(param_2,4);
        iVar1 = FUN_005a6db0(param_2);
        if (0 < iVar1) {
          uVar3 = FUN_00560410(param_3,param_4,param_5,lVar2);
          return uVar3;
        }
        FUN_0051f420();
        uVar3 = 0x3f4;
      }
      FUN_0051f540("../crypto/pkcs7/pk7_doit.c",uVar3,"PKCS7_dataVerify");
      FUN_0051f8f0(0x21,0x8000b,0);
    }
  }
  return 0;
}

