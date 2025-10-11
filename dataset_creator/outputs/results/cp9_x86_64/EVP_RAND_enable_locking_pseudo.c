
undefined8 EVP_RAND_enable_locking(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005267a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1[1]);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_rand.c",0x60,"EVP_RAND_enable_locking");
  ERR_set_error(6,0xd5,0);
  return 0;
}

