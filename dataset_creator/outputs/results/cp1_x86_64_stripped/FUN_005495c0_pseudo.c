
undefined8 FUN_005495c0(undefined4 *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    FUN_00549350();
    *param_1 = 4;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/passphrase.c",0x56,"ossl_pw_set_ui_method");
  FUN_0051f8f0(0xf,0xc0102,0);
  return 0;
}

