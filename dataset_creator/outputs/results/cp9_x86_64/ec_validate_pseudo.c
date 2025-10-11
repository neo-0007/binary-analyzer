
bool ec_validate(EC_KEY *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  BN_CTX *ctx;
  EC_GROUP *pEVar4;
  bool bVar5;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x87) == 0) {
    return true;
  }
  uVar3 = ossl_ec_key_get_libctx(param_1);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar3);
  if (ctx == (BN_CTX *)0x0) {
    return false;
  }
  if ((param_2 & 4) == 0) {
LAB_0046f9fc:
    if ((param_2 & 2) != 0) {
      if (param_3 == 1) {
        iVar1 = ossl_ec_key_public_check_quick(param_1,ctx);
      }
      else {
        iVar1 = ossl_ec_key_public_check(param_1,ctx);
      }
      if (iVar1 == 0) goto LAB_0046fa31;
    }
    if (((param_2 & 1) == 0) || (iVar1 = ossl_ec_key_private_check(param_1), iVar1 != 0)) {
      bVar5 = true;
      if ((param_2 & 3) == 3) {
        iVar1 = ossl_ec_key_pairwise_check(param_1,ctx);
        bVar5 = iVar1 != 0;
      }
      goto LAB_0046fa34;
    }
  }
  else {
    uVar2 = EC_KEY_get_flags(param_1);
    if ((uVar2 & 0x2000) == 0) {
      pEVar4 = EC_KEY_get0_group(param_1);
      iVar1 = EC_GROUP_check(pEVar4,ctx);
    }
    else {
      pEVar4 = EC_KEY_get0_group(param_1);
      iVar1 = EC_GROUP_check_named_curve(pEVar4,uVar2 >> 0xe & 1,ctx);
    }
    if (iVar1 != 0) goto LAB_0046f9fc;
  }
LAB_0046fa31:
  bVar5 = false;
LAB_0046fa34:
  BN_CTX_free(ctx);
  return bVar5;
}

