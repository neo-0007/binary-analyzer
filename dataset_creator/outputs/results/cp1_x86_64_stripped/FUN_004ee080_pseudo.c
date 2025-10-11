
undefined4 FUN_004ee080(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) && (*(long *)(param_1 + 0x20) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    uVar3 = 0;
    lVar2 = FUN_004efb90();
    if (lVar2 != 0) {
      iVar1 = FUN_004f1750(*(undefined8 *)(param_1 + 0x18),lVar2,*(undefined8 *)(param_1 + 0x28),0,0
                           ,param_2);
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_key.c",0x224,"ossl_ec_key_pairwise_check");
        FUN_0051f8f0(0x10,0x80010,0);
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        iVar1 = FUN_004f10c0(*(undefined8 *)(param_1 + 0x18),lVar2,*(undefined8 *)(param_1 + 0x20),
                             param_2);
        if (iVar1 != 0) {
          FUN_0051f420();
          uVar3 = 0;
          FUN_0051f540("../crypto/ec/ec_key.c",0x228,"ossl_ec_key_pairwise_check");
          FUN_0051f8f0(0x10,0x7b,0);
        }
      }
    }
    FUN_004efcc0(lVar2);
    return uVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_key.c",0x21a,"ossl_ec_key_pairwise_check");
  FUN_0051f8f0(0x10,0xc0102,0);
  return 0;
}

