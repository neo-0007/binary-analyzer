
undefined8 FUN_00412190(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 4) {
    uVar1 = FUN_00411e60();
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/pmeth_gn.c",0x10f,"EVP_PKEY_keygen");
  FUN_0051f8f0(6,0x97,0);
  return 0xffffffff;
}

