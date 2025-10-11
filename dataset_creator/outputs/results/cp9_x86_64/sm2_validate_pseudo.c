
bool sm2_validate(EC_KEY *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  BN_CTX *ctx;
  EC_GROUP *group;
  bool bVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x87) == 0) {
    return true;
  }
  uVar2 = ossl_ec_key_get_libctx(param_1);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
  if (ctx == (BN_CTX *)0x0) {
    return false;
  }
  if ((param_2 & 4) == 0) {
LAB_0046fea4:
    if ((param_2 & 2) != 0) {
      if (param_3 == 1) {
        iVar1 = ossl_ec_key_public_check_quick(param_1,ctx);
      }
      else {
        iVar1 = ossl_ec_key_public_check(param_1,ctx);
      }
      if (iVar1 == 0) goto LAB_0046fed9;
    }
    if (((param_2 & 1) == 0) || (iVar1 = ossl_sm2_key_private_check(param_1), iVar1 != 0)) {
      bVar3 = true;
      if ((param_2 & 3) == 3) {
        iVar1 = ossl_ec_key_pairwise_check(param_1,ctx);
        bVar3 = iVar1 != 0;
      }
      goto LAB_0046fedc;
    }
  }
  else {
    group = EC_KEY_get0_group(param_1);
    iVar1 = EC_GROUP_check(group,ctx);
    if (iVar1 != 0) goto LAB_0046fea4;
  }
LAB_0046fed9:
  bVar3 = false;
LAB_0046fedc:
  BN_CTX_free(ctx);
  return bVar3;
}

