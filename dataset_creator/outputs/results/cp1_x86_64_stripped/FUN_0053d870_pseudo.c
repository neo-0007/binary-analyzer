
undefined8 FUN_0053d870(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != 0)) {
    iVar1 = FUN_0040f410();
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x68) = param_3;
      FUN_0053d6f0(param_1);
      return 1;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
  FUN_0051f8f0(6,0xc0103,0);
  return 0;
}

