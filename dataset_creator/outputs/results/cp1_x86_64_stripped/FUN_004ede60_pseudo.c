
undefined4 FUN_004ede60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_004edc10();
  if (iVar2 != 0) {
    lVar3 = FUN_004efb90(*(undefined8 *)(param_1 + 0x18));
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      iVar2 = FUN_004b7ba0(uVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_004f1750(*(undefined8 *)(param_1 + 0x18),lVar3,0,*(undefined8 *)(param_1 + 0x20)
                             ,uVar1,param_2);
        if (iVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_key.c",0x1ec,"ossl_ec_key_public_check");
          FUN_0051f8f0(0x10,0x80010,0);
          uVar4 = 0;
        }
        else {
          iVar2 = FUN_004f0cc0(*(undefined8 *)(param_1 + 0x18),lVar3);
          if (iVar2 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_key.c",0x1f0,"ossl_ec_key_public_check");
            FUN_0051f8f0(0x10,0x82,0);
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
      else {
        FUN_0051f420();
        uVar4 = 0;
        FUN_0051f540("../crypto/ec/ec_key.c",0x1e7,"ossl_ec_key_public_check");
        FUN_0051f8f0(0x10,0x7a,0);
      }
      FUN_004efcc0(lVar3);
      return uVar4;
    }
  }
  return 0;
}

