
int EC_GROUP_set_generator(EC_GROUP *group,EC_POINT *generator,BIGNUM *order,BIGNUM *cofactor)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BN_CTX *pBVar4;
  BIGNUM *pBVar5;
  EC_POINT *dst;
  BN_MONT_CTX *mont;
  
  if (generator == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x170,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  if (((*(long *)(group + 0x40) == 0) || (iVar1 = BN_is_zero(), iVar1 != 0)) ||
     (iVar1 = BN_is_negative(*(undefined8 *)(group + 0x40)), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x177,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0x67,0);
    return 0;
  }
  if (((order == (BIGNUM *)0x0) || (iVar1 = BN_is_zero(order), iVar1 != 0)) ||
     (iVar1 = BN_is_negative(order), iVar1 != 0)) {
LAB_004e3c1d:
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x182,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0x7a,0);
    return 0;
  }
  iVar1 = BN_num_bits(order);
  iVar2 = BN_num_bits(*(BIGNUM **)(group + 0x40));
  if (iVar2 + 1 < iVar1) goto LAB_004e3c1d;
  if ((cofactor != (BIGNUM *)0x0) && (iVar1 = BN_is_negative(cofactor), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x18c,"EC_GROUP_set_generator");
    ERR_set_error(0x10,0xa4,0);
    return 0;
  }
  dst = *(EC_POINT **)(group + 8);
  if (dst == (EC_POINT *)0x0) {
    dst = EC_POINT_new(group);
    *(EC_POINT **)(group + 8) = dst;
    if (dst == (EC_POINT *)0x0) {
      return 0;
    }
  }
  iVar1 = EC_POINT_copy(dst,generator);
  if (iVar1 == 0) {
    return 0;
  }
  pBVar3 = BN_copy(*(BIGNUM **)(group + 0x10),order);
  if (pBVar3 == (BIGNUM *)0x0) {
    return 0;
  }
  if ((cofactor == (BIGNUM *)0x0) || (iVar1 = BN_is_zero(cofactor), iVar1 != 0)) {
    iVar1 = BN_num_bits(*(BIGNUM **)(group + 0x10));
    iVar2 = BN_num_bits(*(BIGNUM **)(group + 0x40));
    if ((iVar2 + 1) / 2 + 3 < iVar1) {
      pBVar4 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(group + 0xa8));
      if (pBVar4 == (BN_CTX *)0x0) goto LAB_004e3e68;
      BN_CTX_start(pBVar4);
      pBVar3 = BN_CTX_get(pBVar4);
      if (pBVar3 != (BIGNUM *)0x0) {
        if (*(int *)(*(long *)group + 4) == 0x197) {
          BN_zero_ex(pBVar3);
          iVar1 = BN_num_bits(*(BIGNUM **)(group + 0x40));
          iVar1 = BN_set_bit(pBVar3,iVar1 + -1);
          if (iVar1 != 0) goto LAB_004e3d90;
        }
        else {
          pBVar5 = BN_copy(pBVar3,*(BIGNUM **)(group + 0x40));
          if (pBVar5 != (BIGNUM *)0x0) {
LAB_004e3d90:
            iVar1 = BN_rshift1(*(BIGNUM **)(group + 0x18),*(BIGNUM **)(group + 0x10));
            if ((iVar1 != 0) &&
               (iVar1 = BN_add(*(BIGNUM **)(group + 0x18),*(BIGNUM **)(group + 0x18),pBVar3),
               iVar1 != 0)) {
              pBVar3 = BN_value_one();
              iVar1 = BN_add(*(BIGNUM **)(group + 0x18),*(BIGNUM **)(group + 0x18),pBVar3);
              if ((iVar1 != 0) &&
                 (iVar1 = BN_div(*(BIGNUM **)(group + 0x18),(BIGNUM *)0x0,*(BIGNUM **)(group + 0x18)
                                 ,*(BIGNUM **)(group + 0x10),pBVar4), iVar1 != 0)) {
                BN_CTX_end(pBVar4);
                BN_CTX_free(pBVar4);
                goto LAB_004e3e01;
              }
            }
          }
        }
      }
      BN_CTX_end(pBVar4);
      BN_CTX_free(pBVar4);
LAB_004e3e68:
      BN_zero_ex(*(undefined8 *)(group + 0x18));
      return 0;
    }
    BN_zero_ex(*(undefined8 *)(group + 0x18));
  }
  else {
    pBVar3 = BN_copy(*(BIGNUM **)(group + 0x18),cofactor);
    if (pBVar3 == (BIGNUM *)0x0) {
      return 0;
    }
  }
LAB_004e3e01:
  iVar1 = BN_is_odd(*(undefined8 *)(group + 0x10));
  if (iVar1 == 0) {
    BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
    *(undefined8 *)(group + 0x90) = 0;
    return 1;
  }
  pBVar4 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(group + 0xa8));
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
  *(undefined8 *)(group + 0x90) = 0;
  if (pBVar4 != (BN_CTX *)0x0) {
    mont = BN_MONT_CTX_new();
    *(BN_MONT_CTX **)(group + 0x90) = mont;
    if (mont != (BN_MONT_CTX *)0x0) {
      iVar1 = BN_MONT_CTX_set(mont,*(BIGNUM **)(group + 0x10),pBVar4);
      if (iVar1 == 0) {
        BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
        *(undefined8 *)(group + 0x90) = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
      goto LAB_004e3f2a;
    }
  }
  iVar1 = 0;
LAB_004e3f2a:
  BN_CTX_free(pBVar4);
  return iVar1;
}

