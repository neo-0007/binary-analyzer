
int EC_KEY_set_public_key_affine_coordinates(EC_KEY *key,BIGNUM *x,BIGNUM *y)

{
  int iVar1;
  uint uVar2;
  BN_CTX *ctx;
  EC_POINT *pub;
  BIGNUM *b;
  BIGNUM *b_00;
  
  if ((((key == (EC_KEY *)0x0) || (*(long *)(key + 0x18) == 0)) || (x == (BIGNUM *)0x0)) ||
     (y == (BIGNUM *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_key.c",0x25f,"EC_KEY_set_public_key_affine_coordinates");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(key + 0x58));
  if (ctx == (BN_CTX *)0x0) {
    return 0;
  }
  BN_CTX_start(ctx);
  pub = EC_POINT_new(*(EC_GROUP **)(key + 0x18));
  if (pub != (EC_POINT *)0x0) {
    b = BN_CTX_get(ctx);
    b_00 = BN_CTX_get(ctx);
    if (((b_00 != (BIGNUM *)0x0) &&
        (iVar1 = EC_POINT_set_affine_coordinates(*(undefined8 *)(key + 0x18),pub,x,y,ctx),
        iVar1 != 0)) &&
       (iVar1 = EC_POINT_get_affine_coordinates(*(undefined8 *)(key + 0x18),pub,b,b_00,ctx),
       iVar1 != 0)) {
      iVar1 = BN_cmp(x,b);
      if ((iVar1 == 0) && (iVar1 = BN_cmp(y,b_00), iVar1 == 0)) {
        iVar1 = EC_KEY_set_public_key(key,pub);
        if (iVar1 != 0) {
          iVar1 = EC_KEY_check_key(key);
          uVar2 = (uint)(iVar1 != 0);
          goto LAB_004e1ce2;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/ec/ec_key.c",0x27b,"EC_KEY_set_public_key_affine_coordinates");
        ERR_set_error(0x10,0x92,0);
      }
    }
  }
  uVar2 = 0;
LAB_004e1ce2:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  EC_POINT_free(pub);
  return uVar2;
}

