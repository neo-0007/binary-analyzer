
undefined8 FUN_004edfc0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar2 = FUN_004b75a0();
    iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x28),uVar2);
    if (-1 < iVar1) {
      iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x28),
                           *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
      if (iVar1 < 0) {
        return 1;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x206,"ossl_ec_key_private_check");
    FUN_0051f8f0(0x10,0x7b,0);
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_key.c",0x201,"ossl_ec_key_private_check");
  FUN_0051f8f0(0x10,0xc0102,0);
  return 0;
}

