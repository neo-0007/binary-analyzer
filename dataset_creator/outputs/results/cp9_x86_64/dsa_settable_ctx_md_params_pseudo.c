
undefined8 dsa_settable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    uVar1 = EVP_MD_settable_ctx_params();
    return uVar1;
  }
  return 0;
}

