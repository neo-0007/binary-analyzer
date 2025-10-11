
int EC_POINT_get_Jprojective_coordinates_GFp
              (EC_GROUP *group,EC_POINT *p,BIGNUM *x,BIGNUM *y,BIGNUM *z,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(int *)(*(long *)group + 4) != 0x196) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_lib.c",0x351,"EC_POINT_get_Jprojective_coordinates_GFp");
    ERR_set_error(0x10,0xc0101,0);
    return 0;
  }
  if ((*(long *)group == *(long *)p) &&
     (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
      (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
    iVar1 = ossl_ec_GFp_simple_get_Jprojective_coordinates_GFp();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_lib.c",0x355,"EC_POINT_get_Jprojective_coordinates_GFp");
  ERR_set_error(0x10,0x65,0);
  return 0;
}

