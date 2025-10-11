
uint ossl_ec_GFp_simple_group_check_discriminant(long *param_1,BN_CTX *param_2)

{
  BIGNUM *m;
  uint uVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *pBVar3;
  BN_CTX *c;
  
  m = (BIGNUM *)param_1[8];
  c = (BN_CTX *)0x0;
  if ((param_2 == (BN_CTX *)0x0) &&
     (param_2 = (BN_CTX *)BN_CTX_new_ex(param_1[0x15]), c = param_2, param_2 == (BN_CTX *)0x0)) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("../crypto/ec/ecp_smpl.c",0x105,"ossl_ec_GFp_simple_group_check_discriminant");
    ERR_set_error(0x10,0xc0100,0);
  }
  else {
    BN_CTX_start(param_2);
    a = BN_CTX_get(param_2);
    a_00 = BN_CTX_get(param_2);
    r = BN_CTX_get(param_2);
    r_00 = BN_CTX_get(param_2);
    pBVar3 = BN_CTX_get(param_2);
    if (pBVar3 == (BIGNUM *)0x0) {
      uVar1 = 0;
    }
    else {
      if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
        uVar1 = 0;
        pBVar3 = BN_copy(a,(BIGNUM *)param_1[0xc]);
        if ((pBVar3 == (BIGNUM *)0x0) ||
           (pBVar3 = BN_copy(a_00,(BIGNUM *)param_1[0xd]), pBVar3 == (BIGNUM *)0x0))
        goto LAB_00501031;
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0x120))(param_1,a,(BIGNUM *)param_1[0xc],param_2);
        if ((uVar1 == 0) ||
           (uVar1 = (**(code **)(*param_1 + 0x120))(param_1,a_00,param_1[0xd],param_2), uVar1 == 0))
        goto LAB_00501031;
      }
      iVar2 = BN_is_zero(a);
      if (iVar2 == 0) {
        uVar1 = 1;
        iVar2 = BN_is_zero(a_00);
        if ((((iVar2 == 0) && (uVar1 = BN_mod_sqr(r,a,m,param_2), uVar1 != 0)) &&
            (uVar1 = BN_mod_mul(r_00,r,a,m,param_2), uVar1 != 0)) &&
           (((uVar1 = BN_lshift(r,r_00,2), uVar1 != 0 &&
             (uVar1 = BN_mod_sqr(r_00,a_00,m,param_2), uVar1 != 0)) &&
            ((uVar1 = BN_mul_word(r_00,0x1b), uVar1 != 0 &&
             (uVar1 = BN_mod_add(a,r,r_00,m,param_2), uVar1 != 0)))))) {
          iVar2 = BN_is_zero(a);
          uVar1 = (uint)(iVar2 == 0);
        }
      }
      else {
        iVar2 = BN_is_zero(a_00);
        uVar1 = (uint)(iVar2 == 0);
      }
    }
  }
LAB_00501031:
  BN_CTX_end(param_2);
  BN_CTX_free(c);
  return uVar1;
}

