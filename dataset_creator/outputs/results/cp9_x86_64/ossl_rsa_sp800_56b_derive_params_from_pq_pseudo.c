
undefined4
ossl_rsa_sp800_56b_derive_params_from_pq(long param_1,int param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *d;
  BIGNUM *d_00;
  BIGNUM *n;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar2;
  long lVar3;
  undefined4 local_40;
  
  BN_CTX_start(param_4);
  d = BN_CTX_get(param_4);
  d_00 = BN_CTX_get(param_4);
  n = BN_CTX_get(param_4);
  a = BN_CTX_get(param_4);
  a_00 = BN_CTX_get(param_4);
  if (a_00 == (BIGNUM *)0x0) goto LAB_0055e040;
  BN_set_flags(d,4);
  BN_set_flags(d_00,4);
  BN_set_flags(n,4);
  BN_set_flags(a,4);
  BN_set_flags(a_00,4);
  iVar1 = ossl_rsa_get_lcm(param_4,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),n
                           ,a_00,d,d_00,a);
  pBVar2 = *(BIGNUM **)(param_1 + 0x30);
  if (iVar1 == 1) {
    BN_free(pBVar2);
    pBVar2 = BN_dup(param_3);
    *(BIGNUM **)(param_1 + 0x30) = pBVar2;
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_0055de20;
    BN_clear_free(*(BIGNUM **)(param_1 + 0x38));
    lVar3 = BN_secure_new();
    *(long *)(param_1 + 0x38) = lVar3;
    if (lVar3 == 0) {
LAB_0055e040:
      local_40 = 0xffffffff;
      pBVar2 = *(BIGNUM **)(param_1 + 0x30);
    }
    else {
      BN_set_flags(lVar3,4);
      pBVar2 = BN_mod_inverse(*(BIGNUM **)(param_1 + 0x38),param_3,n,param_4);
      if (pBVar2 == (BIGNUM *)0x0) goto LAB_0055e040;
      iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x38));
      if (param_2 >> 1 < iVar1) {
        pBVar2 = *(BIGNUM **)(param_1 + 0x28);
        if (pBVar2 == (BIGNUM *)0x0) {
          pBVar2 = BN_new();
          *(BIGNUM **)(param_1 + 0x28) = pBVar2;
          if (pBVar2 == (BIGNUM *)0x0) goto LAB_0055e040;
        }
        iVar1 = BN_mul(pBVar2,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),param_4);
        if (iVar1 != 0) {
          lVar3 = *(long *)(param_1 + 0x50);
          if (lVar3 == 0) {
            lVar3 = BN_secure_new();
            *(long *)(param_1 + 0x50) = lVar3;
            if (lVar3 == 0) goto LAB_0055e040;
          }
          BN_set_flags(lVar3,4);
          iVar1 = BN_div((BIGNUM *)0x0,*(BIGNUM **)(param_1 + 0x50),*(BIGNUM **)(param_1 + 0x38),d,
                         param_4);
          if (iVar1 != 0) {
            lVar3 = *(long *)(param_1 + 0x58);
            if (lVar3 == 0) {
              lVar3 = BN_secure_new();
              *(long *)(param_1 + 0x58) = lVar3;
              if (lVar3 == 0) goto LAB_0055e040;
            }
            BN_set_flags(lVar3,4);
            iVar1 = BN_div((BIGNUM *)0x0,*(BIGNUM **)(param_1 + 0x58),*(BIGNUM **)(param_1 + 0x38),
                           d_00,param_4);
            if (iVar1 != 0) {
              BN_free(*(BIGNUM **)(param_1 + 0x60));
              lVar3 = BN_secure_new();
              *(long *)(param_1 + 0x60) = lVar3;
              if (lVar3 != 0) {
                BN_set_flags(lVar3,4);
                pBVar2 = BN_mod_inverse(*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_1 + 0x48),
                                        *(BIGNUM **)(param_1 + 0x40),param_4);
                if (pBVar2 != (BIGNUM *)0x0) {
                  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
                  local_40 = 1;
                  goto LAB_0055de8a;
                }
              }
            }
          }
        }
        goto LAB_0055e040;
      }
      local_40 = 0;
      pBVar2 = *(BIGNUM **)(param_1 + 0x30);
    }
  }
  else {
LAB_0055de20:
    local_40 = 0xffffffff;
  }
  BN_free(pBVar2);
  *(undefined8 *)(param_1 + 0x30) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_0055de8a:
  BN_clear(d);
  BN_clear(d_00);
  BN_clear(n);
  BN_clear(a);
  BN_clear(a_00);
  BN_CTX_end(param_4);
  return local_40;
}

