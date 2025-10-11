
undefined8 EVP_PKEY_get0_provider(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = EVP_KEYMGMT_get0_provider();
    return uVar1;
  }
  return 0;
}

