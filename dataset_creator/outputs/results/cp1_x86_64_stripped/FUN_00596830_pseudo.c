
undefined8 FUN_00596830(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x30);
  if ((pcVar1 != (code *)0x0) && (*(long *)(*param_1 + 0x38) != 0)) {
    lVar2 = (*pcVar1)();
    if (lVar2 != 0) {
      FUN_005967e0(param_1);
      *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
      return 0;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ui/ui_lib.c",0x1a0,"UI_dup_user_data");
    FUN_0051f8f0(0x28,0xc0100,0);
    return 0xffffffff;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ui/ui_lib.c",0x19a,"UI_dup_user_data");
  FUN_0051f8f0(0x28,0x70,0);
  return 0xffffffff;
}

