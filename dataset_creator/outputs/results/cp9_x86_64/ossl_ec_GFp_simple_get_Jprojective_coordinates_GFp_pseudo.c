
uint ossl_ec_GFp_simple_get_Jprojective_coordinates_GFp
               (long *param_1,long param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
               BN_CTX *param_6)

{
  uint uVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BN_CTX *c;
  
  if (*(long *)(*param_1 + 0x120) == 0) {
    if (((param_3 != (BIGNUM *)0x0) &&
        (pBVar3 = BN_copy(param_3,*(BIGNUM **)(param_2 + 0x10)), pBVar3 == (BIGNUM *)0x0)) ||
       ((param_4 != (BIGNUM *)0x0 &&
        (pBVar3 = BN_copy(param_4,*(BIGNUM **)(param_2 + 0x18)), pBVar3 == (BIGNUM *)0x0)))) {
      uVar1 = 0;
      c = (BN_CTX *)0x0;
      goto LAB_0050425e;
    }
    if (param_5 != (BIGNUM *)0x0) {
      pBVar3 = BN_copy(param_5,*(BIGNUM **)(param_2 + 0x20));
      uVar1 = (uint)(pBVar3 != (BIGNUM *)0x0);
      c = (BN_CTX *)0x0;
      goto LAB_0050425e;
    }
    c = (BN_CTX *)0x0;
  }
  else {
    c = (BN_CTX *)0x0;
    if ((param_6 == (BN_CTX *)0x0) &&
       (c = (BN_CTX *)BN_CTX_new_ex(param_1[0x15]), param_6 = c, c == (BN_CTX *)0x0)) {
      return 0;
    }
    if (((param_3 != (BIGNUM *)0x0) &&
        (uVar1 = (**(code **)(*param_1 + 0x120))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_6), uVar1 == 0))
       || ((param_4 != (BIGNUM *)0x0 &&
           (uVar1 = (**(code **)(*param_1 + 0x120))
                              (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_6), uVar1 == 0)
           ))) goto LAB_0050425e;
    if (param_5 != (BIGNUM *)0x0) {
      iVar2 = (**(code **)(*param_1 + 0x120))
                        (param_1,param_5,*(undefined8 *)(param_2 + 0x20),param_6);
      uVar1 = (uint)(iVar2 != 0);
      goto LAB_0050425e;
    }
  }
  uVar1 = 1;
LAB_0050425e:
  BN_CTX_free(c);
  return uVar1;
}

