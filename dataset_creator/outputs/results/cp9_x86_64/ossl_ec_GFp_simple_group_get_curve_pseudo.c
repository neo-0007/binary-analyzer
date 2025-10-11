
uint ossl_ec_GFp_simple_group_get_curve
               (long *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  uint uVar1;
  int iVar2;
  BIGNUM *pBVar3;
  code *pcVar4;
  BN_CTX *c;
  
  if ((param_2 != (BIGNUM *)0x0) &&
     (pBVar3 = BN_copy(param_2,(BIGNUM *)param_1[8]), pBVar3 == (BIGNUM *)0x0)) {
    return 0;
  }
  if (param_3 == (BIGNUM *)0x0 && param_4 == (BIGNUM *)0x0) {
LAB_00500e5e:
    c = (BN_CTX *)0x0;
    uVar1 = 1;
  }
  else {
    pcVar4 = *(code **)(*param_1 + 0x120);
    if (pcVar4 != (code *)0x0) {
      c = (BN_CTX *)0x0;
      if (param_5 == (BN_CTX *)0x0) {
        param_5 = (BN_CTX *)BN_CTX_new_ex(param_1[0x15]);
        if (param_5 == (BN_CTX *)0x0) {
          return 0;
        }
        pcVar4 = *(code **)(*param_1 + 0x120);
        c = param_5;
      }
      if (param_3 != (BIGNUM *)0x0) {
        uVar1 = (*pcVar4)(param_1,param_3,param_1[0xc],param_5);
        if ((uVar1 == 0) || (uVar1 = 1, param_4 == (BIGNUM *)0x0)) goto LAB_00500e24;
        pcVar4 = *(code **)(*param_1 + 0x120);
      }
      iVar2 = (*pcVar4)(param_1,param_4,param_1[0xd],param_5);
      uVar1 = (uint)(iVar2 != 0);
      goto LAB_00500e24;
    }
    if (param_3 != (BIGNUM *)0x0) {
      pBVar3 = BN_copy(param_3,(BIGNUM *)param_1[0xc]);
      if (pBVar3 == (BIGNUM *)0x0) {
        uVar1 = 0;
        c = (BN_CTX *)0x0;
        goto LAB_00500e24;
      }
      if (param_4 == (BIGNUM *)0x0) goto LAB_00500e5e;
    }
    pBVar3 = BN_copy(param_4,(BIGNUM *)param_1[0xd]);
    uVar1 = (uint)(pBVar3 != (BIGNUM *)0x0);
    c = (BN_CTX *)0x0;
  }
LAB_00500e24:
  BN_CTX_free(c);
  return uVar1;
}

