
int EC_GROUP_get_cofactor(EC_GROUP *group,BIGNUM *cofactor,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  if (*(BIGNUM **)(group + 0x18) != (BIGNUM *)0x0) {
    pBVar2 = BN_copy(cofactor,*(BIGNUM **)(group + 0x18));
    if (pBVar2 != (BIGNUM *)0x0) {
      iVar1 = BN_is_zero(*(undefined8 *)(group + 0x18));
      return (int)(iVar1 == 0);
    }
  }
  return 0;
}

