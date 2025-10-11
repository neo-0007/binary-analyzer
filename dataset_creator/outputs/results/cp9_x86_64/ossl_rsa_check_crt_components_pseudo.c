
bool ossl_rsa_check_crt_components(long param_1,BN_CTX *param_2)

{
  int iVar1;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar2;
  bool bVar3;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      return false;
    }
    return *(long *)(param_1 + 0x60) == 0;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return false;
  }
  BN_CTX_start(param_2);
  r = BN_CTX_get(param_2);
  a = BN_CTX_get(param_2);
  a_00 = BN_CTX_get(param_2);
  if (a_00 != (BIGNUM *)0x0) {
    BN_set_flags(r,4);
    BN_set_flags(a,4);
    BN_set_flags(a_00,4);
    pBVar2 = BN_copy(a,*(BIGNUM **)(param_1 + 0x40));
    if ((((pBVar2 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) &&
        (pBVar2 = BN_copy(a_00,*(BIGNUM **)(param_1 + 0x48)), pBVar2 != (BIGNUM *)0x0)) &&
       (iVar1 = BN_sub_word(a_00,1), iVar1 != 0)) {
      pBVar2 = BN_value_one();
      iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x50),pBVar2);
      if ((0 < iVar1) && (iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x50),a), iVar1 < 0)) {
        pBVar2 = BN_value_one();
        iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x58),pBVar2);
        if ((0 < iVar1) && (iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x58),a_00), iVar1 < 0)) {
          pBVar2 = BN_value_one();
          iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x60),pBVar2);
          if (((((0 < iVar1) &&
                (iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_1 + 0x40)),
                iVar1 < 0)) &&
               (iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x50),*(BIGNUM **)(param_1 + 0x30),a,
                                   param_2), iVar1 != 0)) &&
              (((iVar1 = BN_is_one(r), iVar1 != 0 &&
                (iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x58),*(BIGNUM **)(param_1 + 0x30),a_00
                                    ,param_2), iVar1 != 0)) && (iVar1 = BN_is_one(r), iVar1 != 0))))
             && (iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_1 + 0x48),
                                    *(BIGNUM **)(param_1 + 0x40),param_2), iVar1 != 0)) {
            iVar1 = BN_is_one(r);
            bVar3 = iVar1 != 0;
            goto LAB_0055ce0b;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0055ce0b:
  BN_clear(r);
  BN_clear(a);
  BN_clear(a_00);
  BN_CTX_end(param_2);
  return bVar3;
}

