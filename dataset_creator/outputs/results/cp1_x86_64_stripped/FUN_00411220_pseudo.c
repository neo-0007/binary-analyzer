
undefined8 FUN_00411220(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = FUN_0053e990(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x1a),param_2);
      return uVar1;
    }
    if (*param_1 != 0) {
      uVar1 = FUN_00525260();
      return uVar1;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/p_lib.c",0x930,"EVP_PKEY_get_params");
  FUN_0051f8f0(6,0xa3,0);
  return 0;
}

