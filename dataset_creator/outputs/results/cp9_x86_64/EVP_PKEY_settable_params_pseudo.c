
undefined8 EVP_PKEY_settable_params(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar1 = EVP_KEYMGMT_settable_params();
    return uVar1;
  }
  return 0;
}

