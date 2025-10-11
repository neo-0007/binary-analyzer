
int BN_RECP_CTX_set(BN_RECP_CTX *recp,BIGNUM *rdiv,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  pBVar2 = BN_copy(&recp->N,rdiv);
  if (pBVar2 != (BIGNUM *)0x0) {
    BN_zero_ex(&recp->Nr);
    iVar1 = BN_num_bits(rdiv);
    recp->shift = 0;
    recp->num_bits = iVar1;
  }
  return (uint)(pBVar2 != (BIGNUM *)0x0);
}

