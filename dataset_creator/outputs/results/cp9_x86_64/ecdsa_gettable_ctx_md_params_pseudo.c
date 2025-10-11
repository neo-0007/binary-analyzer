
undefined8 ecdsa_gettable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    uVar1 = EVP_MD_gettable_ctx_params();
    return uVar1;
  }
  return 0;
}

