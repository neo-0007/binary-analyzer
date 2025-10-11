
undefined8 FUN_004d8140(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_check.c",0x19,"dsa_precheck_params");
    uVar3 = 0x72;
  }
  else {
    iVar1 = FUN_004b7bb0();
    if (iVar1 < 0x2711) {
      iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x10));
      iVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
      if (iVar1 < iVar2) {
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/dsa/dsa_check.c",0x25,"dsa_precheck_params");
      uVar3 = 0x66;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/dsa/dsa_check.c",0x1f,"dsa_precheck_params");
      uVar3 = 0x67;
    }
  }
  FUN_0051f8f0(10,uVar3,0);
  *param_2 = 0x800;
  return 0;
}

