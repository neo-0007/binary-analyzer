
int EC_GROUP_get_order(EC_GROUP *group,BIGNUM *order,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  if (*(BIGNUM **)(group + 0x10) != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(order,*(BIGNUM **)(group + 0x10));
    if (pBVar2 != (BIGNUM *)0x0) {
      iVar1 = BN_is_zero(order);
      return (int)(iVar1 == 0);
    }
  }
  return 0;
}

