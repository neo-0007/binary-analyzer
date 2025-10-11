
undefined8 FUN_004e71c0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00415850(param_2);
  lVar3 = FUN_004ed610(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_ameth.c",0x26e,"ec_pkey_import_from");
    FUN_0051f8f0(5,0xc0100,0);
    return 0;
  }
  iVar1 = FUN_004ebc60(lVar3,param_1);
  if ((((iVar1 != 0) && (iVar1 = FUN_004ec060(lVar3,param_1), iVar1 != 0)) &&
      (iVar1 = FUN_004eba00(lVar3,param_1,1), iVar1 != 0)) &&
     (iVar1 = FUN_0040f1c0(uVar2,0x198,lVar3), iVar1 != 0)) {
    return 1;
  }
  FUN_004ed620(lVar3);
  return 0;
}

