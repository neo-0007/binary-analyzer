
undefined8 ecdsa_get_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x178) != 0) {
    uVar1 = EVP_MD_CTX_get_params();
    return uVar1;
  }
  return 0;
}

