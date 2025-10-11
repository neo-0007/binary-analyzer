
undefined8 ossl_ec_key_simple_generate_key(EC_KEY *param_1)

{
  EC_GROUP *group;
  uint uVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *b;
  BIGNUM *n;
  EC_POINT *r_00;
  undefined8 uVar3;
  
  group = *(EC_GROUP **)(param_1 + 0x18);
  ctx = (BN_CTX *)BN_CTX_secure_new_ex(*(undefined8 *)(param_1 + 0x58));
  uVar1 = EC_KEY_get_flags(param_1);
  if ((ctx == (BN_CTX *)0x0) ||
     ((n = *(BIGNUM **)(param_1 + 0x28), n == (BIGNUM *)0x0 &&
      (n = (BIGNUM *)BN_secure_new(), n == (BIGNUM *)0x0)))) {
    r = (BIGNUM *)0x0;
    n = (BIGNUM *)0x0;
    r_00 = (EC_POINT *)0x0;
  }
  else {
    a = (BIGNUM *)EC_GROUP_get0_order(group);
    if (a == (BIGNUM *)0x0) {
      r = (BIGNUM *)0x0;
      r_00 = (EC_POINT *)0x0;
    }
    else {
      if ((uVar1 & 4) == 0) {
        r = BN_dup(a);
        if (r != (BIGNUM *)0x0) {
LAB_004e1f20:
          do {
            iVar2 = BN_priv_rand_range_ex(n,r,0);
            if (iVar2 == 0) goto LAB_004e1f34;
            iVar2 = BN_is_zero(n);
          } while (iVar2 != 0);
          r_00 = *(EC_POINT **)(param_1 + 0x20);
          if (((r_00 != (EC_POINT *)0x0) || (r_00 = EC_POINT_new(group), r_00 != (EC_POINT *)0x0))
             && (iVar2 = EC_POINT_mul(group,r_00,n,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx), iVar2 != 0))
          {
            *(BIGNUM **)(param_1 + 0x28) = n;
            n = (BIGNUM *)0x0;
            *(EC_POINT **)(param_1 + 0x20) = r_00;
            r_00 = (EC_POINT *)0x0;
            *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
            uVar3 = 1;
            goto LAB_004e1f5f;
          }
          goto LAB_004e1f37;
        }
      }
      else {
        r = BN_new();
        if (r != (BIGNUM *)0x0) {
          b = BN_value_one();
          iVar2 = BN_sub(r,a,b);
          if (iVar2 != 0) goto LAB_004e1f20;
        }
      }
LAB_004e1f34:
      r_00 = (EC_POINT *)0x0;
    }
  }
LAB_004e1f37:
  ossl_set_error_state("Conditional_PCT");
  BN_clear(*(BIGNUM **)(param_1 + 0x28));
  uVar3 = 0;
  if (*(EC_POINT **)(param_1 + 0x20) != (EC_POINT *)0x0) {
    EC_POINT_set_to_infinity(group,*(EC_POINT **)(param_1 + 0x20));
  }
LAB_004e1f5f:
  EC_POINT_free(r_00);
  BN_clear_free(n);
  BN_CTX_free(ctx);
  BN_free(r);
  return uVar3;
}

