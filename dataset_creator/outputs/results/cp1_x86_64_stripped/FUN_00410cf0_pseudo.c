
undefined8 FUN_00410cf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    uVar1 = FUN_0053e9f0(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/p_lib.c",0x91b,"EVP_PKEY_set_params");
  FUN_0051f8f0(6,0xa3,0);
  return 0;
}

