
int EC_GROUP_check(EC_GROUP *group,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  EC_POINT *r;
  BIGNUM *n;
  BN_CTX *c;
  
  if ((group != (EC_GROUP *)0x0) && (*(uint **)group != (uint *)0x0)) {
    if ((**(uint **)group & 2) == 0) {
      iVar2 = 0;
      c = (BN_CTX *)0x0;
      if ((ctx == (BN_CTX *)0x0) && (ctx = BN_CTX_new(), c = ctx, ctx == (BN_CTX *)0x0)) {
        ERR_new();
        r = (EC_POINT *)0x0;
        ERR_set_debug("../crypto/ec/ec_check.c",0x48,"EC_GROUP_check");
        ERR_set_error(0x10,0xc0100,0);
      }
      else {
        iVar1 = EC_GROUP_check_discriminant(group,ctx);
        if (iVar1 == 0) {
          ERR_new();
          iVar2 = 0;
          r = (EC_POINT *)0x0;
          ERR_set_debug("../crypto/ec/ec_check.c",0x4f,"EC_GROUP_check");
          ERR_set_error(0x10,0x76,0);
        }
        else if (*(EC_POINT **)(group + 8) == (EC_POINT *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/ec/ec_check.c",0x55,"EC_GROUP_check");
          ERR_set_error(0x10,0x71,0);
          r = (EC_POINT *)0x0;
        }
        else {
          iVar1 = EC_POINT_is_on_curve(group,*(EC_POINT **)(group + 8),ctx);
          if (iVar1 < 1) {
            ERR_new();
            r = (EC_POINT *)0x0;
            ERR_set_debug("../crypto/ec/ec_check.c",0x59,"EC_GROUP_check");
            ERR_set_error(0x10,0x6b,0);
          }
          else {
            r = EC_POINT_new(group);
            if ((r != (EC_POINT *)0x0) &&
               (n = (BIGNUM *)EC_GROUP_get0_order(group), n != (BIGNUM *)0x0)) {
              iVar1 = BN_is_zero(n);
              if (iVar1 == 0) {
                iVar2 = EC_POINT_mul(group,r,n,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
                if (iVar2 != 0) {
                  iVar2 = EC_POINT_is_at_infinity(group,r);
                  if (iVar2 == 0) {
                    ERR_new();
                    ERR_set_debug("../crypto/ec/ec_check.c",0x6b,"EC_GROUP_check");
                    ERR_set_error(0x10,0x7a,0);
                    iVar2 = 0;
                  }
                  else {
                    iVar2 = 1;
                  }
                }
              }
              else {
                ERR_new();
                ERR_set_debug("../crypto/ec/ec_check.c",100,"EC_GROUP_check");
                ERR_set_error(0x10,0x80,0);
              }
            }
          }
        }
      }
      BN_CTX_free(c);
      EC_POINT_free(r);
      return iVar2;
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_check.c",0x3d,"EC_GROUP_check");
  ERR_set_error(0x10,0xc0102,0);
  return 0;
}

