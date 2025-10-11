
undefined8 FUN_004e7ab0(undefined4 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_3 == 0) || (lVar2 = FUN_004ee2d0(param_3), lVar2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_ameth.c",0x23,"eckey_param2type");
    FUN_0051f8f0(0x10,0x7c,0);
    return 0;
  }
  iVar1 = FUN_004ef8b0(lVar2);
  if ((iVar1 != 0) && (iVar1 = FUN_004ef870(lVar2), iVar1 != 0)) {
    lVar2 = FUN_004239c0(iVar1);
    if ((lVar2 != 0) && (lVar4 = FUN_00424a00(lVar2), lVar4 != 0)) {
      *param_2 = lVar2;
      *param_1 = 6;
      return 1;
    }
    FUN_004a06b0(lVar2);
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_ameth.c",0x2e,"eckey_param2type");
    FUN_0051f8f0(0x10,0xa7,0);
    return 0;
  }
  piVar3 = (int *)FUN_004a21f0();
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    iVar1 = FUN_004ea7e0(param_3,piVar3 + 2);
    *piVar3 = iVar1;
    if (iVar1 < 1) {
      FUN_004a2270(piVar3);
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_ameth.c",0x3c,"eckey_param2type");
      FUN_0051f8f0(0x10,0x80010,0);
    }
    else {
      *param_2 = (long)piVar3;
      uVar5 = 1;
      *param_1 = 0x10;
    }
  }
  return uVar5;
}

