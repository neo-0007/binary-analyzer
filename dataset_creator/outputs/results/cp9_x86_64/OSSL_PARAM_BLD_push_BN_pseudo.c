
void OSSL_PARAM_BLD_push_BN(undefined8 param_1,undefined8 param_2,BIGNUM *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_3 != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(param_3);
    iVar2 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar2 = iVar1 + 7;
    }
    lVar3 = (long)(iVar2 >> 3);
  }
  OSSL_PARAM_BLD_push_BN_pad(param_1,param_2,param_3,lVar3);
  return;
}

