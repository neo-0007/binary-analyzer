
long FUN_004e9eb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_asn1.c",0x34e,"EC_GROUP_new_from_ecpkparameters");
    FUN_0051f8f0(0x10,0x7c,0);
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      uVar2 = FUN_00423da0(*(undefined8 *)(param_1 + 2));
      lVar3 = FUN_004ed0e0(uVar2);
      if (lVar3 != 0) {
        FUN_004ef8a0(lVar3,1);
        return lVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x356,"EC_GROUP_new_from_ecpkparameters");
      FUN_0051f8f0(0x10,0x77,0);
    }
    else if (iVar1 == 1) {
      lVar3 = FUN_004e9240(*(undefined8 *)(param_1 + 2));
      if (lVar3 != 0) {
        FUN_004ef8a0(lVar3,0);
        return lVar3;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x35e,"EC_GROUP_new_from_ecpkparameters");
      FUN_0051f8f0(0x10,0x80010,0);
    }
    else if (iVar1 != 2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x366,"EC_GROUP_new_from_ecpkparameters");
      FUN_0051f8f0(0x10,0x73,0);
      return 0;
    }
  }
  return 0;
}

