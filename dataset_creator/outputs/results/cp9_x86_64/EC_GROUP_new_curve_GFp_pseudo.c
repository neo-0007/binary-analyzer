
EC_GROUP * EC_GROUP_new_curve_GFp(BIGNUM *p,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  EC_METHOD *pEVar2;
  undefined8 uVar3;
  EC_GROUP *group;
  EC_GROUP *pEVar4;
  
  pEVar2 = EC_GFp_mont_method();
  uVar3 = ossl_bn_get_libctx(ctx);
  group = (EC_GROUP *)ossl_ec_group_new_ex(uVar3,0,pEVar2);
  pEVar4 = group;
  if (group != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_set_curve(group,p,a,b,ctx);
    if (iVar1 == 0) {
      pEVar4 = (EC_GROUP *)0x0;
      EC_GROUP_free(group);
    }
  }
  return pEVar4;
}

