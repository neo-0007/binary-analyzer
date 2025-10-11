
undefined8 EVP_PKEY_private_check(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = try_provided_check(param_1,1,0);
    if ((int)uVar1 == -1) {
      ERR_new();
      ERR_set_debug("../crypto/evp/pmeth_check.c",0x97,"EVP_PKEY_private_check");
      ERR_set_error(6,0x96,0);
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/pmeth_check.c",0x8e,"EVP_PKEY_private_check");
  ERR_set_error(6,0x9a,0);
  return 0;
}

