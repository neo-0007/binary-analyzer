
undefined8 FUN_00596f20(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ui/ui_lib.c",0x1b2,"UI_get0_result");
    FUN_0051f8f0(0x28,0x67,0);
    return 0;
  }
  iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 8));
  if (param_2 < iVar1) {
    uVar2 = FUN_004364a0(*(undefined8 *)(param_1 + 8),param_2);
    uVar2 = FUN_00596f00(uVar2);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ui/ui_lib.c",0x1b6,"UI_get0_result");
  FUN_0051f8f0(0x28,0x66,0);
  return 0;
}

