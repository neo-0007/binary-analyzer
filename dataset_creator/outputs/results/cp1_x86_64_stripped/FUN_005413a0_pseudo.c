
undefined8 FUN_005413a0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = FUN_005410e0(param_1,1,0);
    if ((int)uVar1 == -1) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/pmeth_check.c",0x97,"EVP_PKEY_private_check");
      FUN_0051f8f0(6,0x96,0);
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/pmeth_check.c",0x8e,"EVP_PKEY_private_check");
  FUN_0051f8f0(6,0x9a,0);
  return 0;
}

