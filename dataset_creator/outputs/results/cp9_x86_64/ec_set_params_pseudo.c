
undefined8 ec_set_params(EC_KEY *param_1,long param_2)

{
  int iVar1;
  EC_GROUP *pEVar2;
  long lVar3;
  BN_CTX *c;
  undefined8 uVar4;
  
  if (param_1 == (EC_KEY *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 1;
  }
  pEVar2 = EC_KEY_get0_group(param_1);
  iVar1 = ossl_ec_group_set_params(pEVar2,param_2);
  if (iVar1 != 0) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
    if (lVar3 == 0) {
LAB_0046fba5:
      uVar4 = ossl_ec_key_otherparams_fromdata(param_1,param_2);
      return uVar4;
    }
    ossl_ec_key_get_libctx(param_1);
    c = (BN_CTX *)BN_CTX_new_ex();
    if (c == (BN_CTX *)0x0) {
      BN_CTX_free((BN_CTX *)0x0);
    }
    else {
      if (*(int *)(lVar3 + 8) != 5) {
        BN_CTX_free(c);
        return 0;
      }
      iVar1 = EC_KEY_oct2key(param_1,*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),c);
      if (iVar1 != 0) {
        BN_CTX_free(c);
        goto LAB_0046fba5;
      }
      BN_CTX_free(c);
    }
  }
  return 0;
}

