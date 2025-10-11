
undefined4 FUN_004edc10(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) || (*(long *)(param_1 + 0x20) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x1bc,"ossl_ec_key_public_check_quick");
    FUN_0051f8f0(0x10,0xc0102,0);
    return 0;
  }
  iVar1 = FUN_004f0cc0();
  if (iVar1 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x1c2,"ossl_ec_key_public_check_quick");
    FUN_0051f8f0(0x10,0x6a,0);
    return 0;
  }
  FUN_004b2c00(param_2);
  uVar3 = FUN_004b2df0(param_2);
  lVar4 = FUN_004b2df0(param_2);
  if ((lVar4 != 0) &&
     (iVar1 = FUN_004f0d70(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),uVar3,
                           lVar4,param_2), iVar1 != 0)) {
    iVar1 = FUN_004ef890(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x196) {
      iVar1 = FUN_004b7d60(uVar3);
      if (((iVar1 == 0) &&
          (iVar1 = FUN_004b7840(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40)), iVar1 < 0)
          ) && ((iVar1 = FUN_004b7d60(lVar4), iVar1 == 0 &&
                (iVar1 = FUN_004b7840(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40)),
                iVar1 < 0)))) goto LAB_004edd9e;
    }
    else {
      iVar1 = FUN_004efad0(*(undefined8 *)(param_1 + 0x18));
      iVar2 = FUN_004b7bb0(uVar3);
      if ((iVar2 <= iVar1) && (iVar2 = FUN_004b7bb0(lVar4), iVar2 <= iVar1)) {
LAB_004edd9e:
        FUN_004b2d50(param_2);
        iVar1 = FUN_004f0ed0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_2
                            );
        if (0 < iVar1) {
          return 1;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_key.c",0x1ce,"ossl_ec_key_public_check_quick");
        FUN_0051f8f0(0x10,0x6b,0);
        return 0;
      }
    }
  }
  FUN_004b2d50(param_2);
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_key.c",0x1c8,"ossl_ec_key_public_check_quick");
  FUN_0051f8f0(0x10,0x92,0);
  return 0;
}

