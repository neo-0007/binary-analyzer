
ulong EVP_PKEY_CTX_set_rsa_keygen_pubexp(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = RSA_pkey_ctx_ctrl(param_1,4,0x1004,0,param_2);
  if ((0 < (int)uVar1) && (*(long *)(param_1 + 0x20) != 0)) {
    BN_free(*(BIGNUM **)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = param_2;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

