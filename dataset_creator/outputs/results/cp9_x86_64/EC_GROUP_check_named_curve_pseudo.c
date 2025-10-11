
int EC_GROUP_check_named_curve(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  BN_CTX *c;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_check.c",0x1a,"EC_GROUP_check_named_curve");
    ERR_set_error(0x10,0xc0102,0);
    iVar1 = 0;
  }
  else {
    c = (BN_CTX *)0x0;
    if ((param_3 == 0) && (c = (BN_CTX *)BN_CTX_new_ex(0,0), c == (BN_CTX *)0x0)) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("../crypto/ec/ec_check.c",0x21,"EC_GROUP_check_named_curve");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      iVar1 = ossl_ec_curve_nid_from_params(param_1);
      if (((0 < iVar1) && (param_2 != 0)) && (lVar2 = EC_curve_nid2nist(iVar1), lVar2 == 0)) {
        iVar1 = 0;
      }
      BN_CTX_free(c);
    }
  }
  return iVar1;
}

