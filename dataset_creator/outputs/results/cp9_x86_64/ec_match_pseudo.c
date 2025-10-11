
bool ec_match(EC_KEY *param_1,EC_KEY *param_2,byte param_3)

{
  int iVar1;
  EC_GROUP *a;
  EC_GROUP *b;
  undefined8 uVar2;
  BN_CTX *ctx;
  EC_POINT *a_00;
  EC_POINT *b_00;
  BIGNUM *a_01;
  BIGNUM *b_01;
  bool bVar3;
  bool bVar4;
  
  a = EC_KEY_get0_group(param_1);
  b = EC_KEY_get0_group(param_2);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  uVar2 = ossl_ec_key_get_libctx(param_1);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
  if (ctx == (BN_CTX *)0x0) {
    return false;
  }
  bVar3 = true;
  if ((param_3 & 4) != 0) {
    if ((a == (EC_GROUP *)0x0) || (b == (EC_GROUP *)0x0)) {
      bVar3 = false;
    }
    else {
      iVar1 = EC_GROUP_cmp(a,b,ctx);
      bVar3 = iVar1 == 0;
    }
  }
  bVar4 = bVar3;
  if ((param_3 & 3) == 0) goto LAB_0046e9e2;
  if ((param_3 & 2) == 0) {
LAB_0046e9da:
    bVar4 = (bool)(param_3 & 1);
    if (bVar4 == false) goto LAB_0046e9e2;
    a_01 = EC_KEY_get0_private_key(param_1);
    b_01 = EC_KEY_get0_private_key(param_2);
    if (((a_01 != (BIGNUM *)0x0) && (b_01 != (BIGNUM *)0x0)) && (bVar3 != false)) {
      iVar1 = BN_cmp(a_01,b_01);
      bVar4 = iVar1 == 0;
      goto LAB_0046e9e2;
    }
  }
  else {
    a_00 = EC_KEY_get0_public_key(param_1);
    b_00 = EC_KEY_get0_public_key(param_2);
    if ((a_00 == (EC_POINT *)0x0) || (b_00 == (EC_POINT *)0x0)) goto LAB_0046e9da;
    if (bVar3 != false) {
      iVar1 = EC_POINT_cmp(b,a_00,b_00,ctx);
      bVar4 = iVar1 == 0;
      goto LAB_0046e9e2;
    }
  }
  bVar4 = false;
LAB_0046e9e2:
  BN_CTX_free(ctx);
  return bVar4;
}

