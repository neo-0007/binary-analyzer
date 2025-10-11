
uint ossl_dh_check_pairwise(long param_1)

{
  uint uVar1;
  int iVar2;
  BN_CTX *c;
  BIGNUM *a;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb0));
    if ((c == (BN_CTX *)0x0) || (a = BN_new(), a == (BIGNUM *)0x0)) {
      a = (BIGNUM *)0x0;
      uVar1 = 0;
    }
    else {
      uVar1 = ossl_dh_generate_public_key(c,param_1,*(undefined8 *)(param_1 + 0x78),a);
      if (uVar1 != 0) {
        iVar2 = BN_cmp(a,*(BIGNUM **)(param_1 + 0x70));
        uVar1 = (uint)(iVar2 == 0);
      }
    }
    BN_free(a);
    BN_CTX_free(c);
    return uVar1;
  }
  return 0;
}

