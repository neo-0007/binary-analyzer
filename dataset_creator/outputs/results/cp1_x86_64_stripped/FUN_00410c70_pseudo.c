
undefined8 FUN_00410c70(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0x74) {
    uVar1 = FUN_00410840();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/p_lib.c",0x348,"evp_pkey_get0_DSA_int");
  FUN_0051f8f0(6,0x81,0);
  return 0;
}

