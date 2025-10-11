
undefined8 FUN_004d6e10(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00415850(param_2);
  lVar3 = FUN_004d8c80(*(undefined8 *)(param_2 + 8));
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_ameth.c",0x1e3,"dsa_pkey_import_from");
    FUN_0051f8f0(10,0xc0100,0);
    return 0;
  }
  iVar1 = FUN_004d8e70(lVar3,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004d7c40(lVar3,param_1,1);
    if (iVar1 != 0) {
      iVar1 = FUN_0040f1c0(uVar2,0x74,lVar3);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  FUN_004d8960(lVar3);
  return 0;
}

