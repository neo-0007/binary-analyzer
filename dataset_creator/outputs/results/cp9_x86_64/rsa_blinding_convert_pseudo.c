
int rsa_blinding_convert(BN_BLINDING *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  
  if (param_3 == (BIGNUM *)0x0) {
    iVar1 = BN_BLINDING_convert_ex(param_2,(BIGNUM *)0x0,param_1,param_4);
    return iVar1;
  }
  iVar1 = BN_BLINDING_lock();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = BN_BLINDING_convert_ex(param_2,param_3,param_1,param_4);
  BN_BLINDING_unlock(param_1);
  return iVar1;
}

