
undefined8 FUN_00521cc0(uint param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 4) {
    if (param_2 == (int *)0x0) {
      return 1;
    }
    if (*param_2 != 1) {
      if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) {
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",0x141,"default_check");
      FUN_0051f8f0(6,0xc0103,0);
      return 0;
    }
    FUN_0051f420();
    uVar1 = 0x13c;
  }
  else {
    if (param_1 < 5) {
      if (param_1 == 1) {
        if (param_2 == (int *)0x0) {
          FUN_0051f420();
          uVar1 = 0x12a;
          goto LAB_00521de3;
        }
        if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
          FUN_0051f420();
          uVar1 = 0x12f;
          goto LAB_00521d35;
        }
      }
      return 1;
    }
    if (1 < param_1 - 7) {
      return 1;
    }
    if (param_2 != (int *)0x0) {
      if ((param_2[4] != 0) && (param_2[0xc] != 0)) {
        return 1;
      }
      FUN_0051f420();
      uVar1 = 0x14e;
LAB_00521d35:
      FUN_0051f540("../crypto/evp/ctrl_params_translate.c",uVar1,"default_check");
      FUN_0051f8f0(6,0xc0103,0);
      return 0xffffffff;
    }
    FUN_0051f420();
    uVar1 = 0x149;
  }
LAB_00521de3:
  FUN_0051f540("../crypto/evp/ctrl_params_translate.c",uVar1,"default_check");
  FUN_0051f8f0(6,0x93,0);
  return 0xfffffffe;
}

