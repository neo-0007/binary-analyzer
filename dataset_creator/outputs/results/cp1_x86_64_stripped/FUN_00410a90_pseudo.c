
long FUN_00410a90(int *param_1)

{
  long lVar1;
  
  if (*param_1 == 0x74) {
    lVar1 = FUN_00410840();
    if (lVar1 != 0) {
      FUN_004d8ca0(lVar1);
    }
    return lVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/p_lib.c",0x348,"evp_pkey_get0_DSA_int");
  FUN_0051f8f0(6,0x81,0);
  return 0;
}

