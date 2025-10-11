
undefined8 FUN_004d2510(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00415850(param_2);
  lVar3 = FUN_004d5e90(*(undefined8 *)(param_2 + 8));
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_ameth.c",0x1fb,"dh_pkey_import_from_type");
    FUN_0051f8f0(5,0xc0100,0);
    return 0;
  }
  FUN_004d6100(lVar3,0xf000);
  FUN_004d6120(lVar3,(ulong)(param_3 != 0x1c) << 0xc);
  iVar1 = FUN_004d33f0(lVar3,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004d34a0(lVar3,param_1,1);
    if (iVar1 != 0) {
      iVar1 = FUN_0040f1c0(uVar2,param_3,lVar3);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  FUN_004d5b70(lVar3);
  return 0;
}

