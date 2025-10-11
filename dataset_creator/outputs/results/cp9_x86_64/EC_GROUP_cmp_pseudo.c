
int EC_GROUP_cmp(EC_GROUP *a,EC_GROUP *b,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *a_00;
  BIGNUM *b_00;
  BIGNUM *b_01;
  BIGNUM *b_02;
  BN_CTX *c;
  EC_POINT *b_03;
  EC_POINT *a_01;
  uint uVar5;
  
  iVar1 = EC_GROUP_get_field_type();
  iVar2 = EC_GROUP_get_field_type(b);
  if (iVar1 != iVar2) {
    return 1;
  }
  iVar1 = EC_GROUP_get_curve_name(a);
  if ((iVar1 != 0) && (iVar1 = EC_GROUP_get_curve_name(b), iVar1 != 0)) {
    iVar1 = EC_GROUP_get_curve_name(a);
    iVar2 = EC_GROUP_get_curve_name(b);
    if (iVar1 != iVar2) {
      return 1;
    }
  }
  if ((**(byte **)a & 2) != 0) {
    return 0;
  }
  c = (BN_CTX *)0x0;
  if ((ctx == (BN_CTX *)0x0) && (c = BN_CTX_new(), ctx = c, c == (BN_CTX *)0x0)) {
    return -1;
  }
  BN_CTX_start(ctx);
  pBVar3 = BN_CTX_get(ctx);
  pBVar4 = BN_CTX_get(ctx);
  a_00 = BN_CTX_get(ctx);
  b_00 = BN_CTX_get(ctx);
  b_01 = BN_CTX_get(ctx);
  b_02 = BN_CTX_get(ctx);
  if (b_02 == (BIGNUM *)0x0) {
    BN_CTX_end(ctx);
    BN_CTX_free(c);
    return -1;
  }
  iVar1 = (**(code **)(*(long *)a + 0x30))(a,pBVar3,pBVar4,a_00,ctx);
  if ((((iVar1 != 0) && (iVar1 = (**(code **)(*(long *)b + 0x30))(b,b_00,b_01,b_02,ctx), iVar1 != 0)
       ) && (iVar1 = BN_cmp(pBVar3,b_00), iVar1 == 0)) &&
     ((iVar1 = BN_cmp(pBVar4,b_01), iVar1 == 0 && (iVar1 = BN_cmp(a_00,b_02), iVar1 == 0)))) {
    b_03 = EC_GROUP_get0_generator(b);
    a_01 = EC_GROUP_get0_generator(a);
    iVar1 = EC_POINT_cmp(a,a_01,b_03,ctx);
    if (iVar1 == 0) {
      pBVar3 = (BIGNUM *)EC_GROUP_get0_order(a);
      pBVar4 = (BIGNUM *)EC_GROUP_get0_order(b);
      if ((pBVar3 == (BIGNUM *)0x0) || (pBVar4 == (BIGNUM *)0x0)) {
        uVar5 = 0xffffffff;
        goto LAB_004e4a60;
      }
      iVar1 = BN_cmp(pBVar3,pBVar4);
      if (iVar1 == 0) {
        pBVar3 = (BIGNUM *)EC_GROUP_get0_cofactor(a);
        pBVar4 = (BIGNUM *)EC_GROUP_get0_cofactor(b);
        iVar1 = BN_is_zero(pBVar3);
        uVar5 = 0;
        if ((iVar1 == 0) && (iVar1 = BN_is_zero(pBVar4), iVar1 == 0)) {
          iVar1 = BN_cmp(pBVar3,pBVar4);
          uVar5 = (uint)(iVar1 != 0);
        }
        goto LAB_004e4a60;
      }
    }
  }
  uVar5 = 1;
LAB_004e4a60:
  BN_CTX_end(ctx);
  BN_CTX_free(c);
  return uVar5;
}

