
undefined8 FUN_00410bd0(int *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 != 0x1c) && (*param_1 != 0x398)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_lib.c",0x3ab,"evp_pkey_get0_DH_int");
    FUN_0051f8f0(6,0x80,0);
    return 0;
  }
  uVar1 = FUN_00410840();
  return uVar1;
}

