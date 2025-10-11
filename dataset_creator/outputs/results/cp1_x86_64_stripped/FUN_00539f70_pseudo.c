
undefined8 FUN_00539f70(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00539f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1[1]);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/evp_rand.c",0x60,"EVP_RAND_enable_locking");
  FUN_0051f8f0(6,0xd5,0);
  return 0;
}

