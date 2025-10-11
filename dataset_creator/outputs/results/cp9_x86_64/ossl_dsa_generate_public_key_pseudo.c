
bool ossl_dsa_generate_public_key(BN_CTX *param_1,long param_2,undefined8 param_3,BIGNUM *param_4)

{
  int iVar1;
  BIGNUM *p;
  bool bVar2;
  
  bVar2 = false;
  p = BN_new();
  if (p != (BIGNUM *)0x0) {
    BN_with_flags(p,param_3,4);
    iVar1 = BN_mod_exp(param_4,*(BIGNUM **)(param_2 + 0x18),p,*(BIGNUM **)(param_2 + 8),param_1);
    bVar2 = iVar1 != 0;
    BN_clear_free(p);
  }
  return bVar2;
}

