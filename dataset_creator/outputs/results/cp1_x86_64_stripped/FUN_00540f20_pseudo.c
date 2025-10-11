
undefined8 FUN_00540f20(int *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_legacy.c",0x25,"evp_pkey_get0_RSA_int");
    FUN_0051f8f0(6,0x7f,0);
    return 0;
  }
  uVar1 = FUN_00410840();
  return uVar1;
}

