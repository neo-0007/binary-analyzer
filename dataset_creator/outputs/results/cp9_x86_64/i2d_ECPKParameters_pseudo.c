
int i2d_ECPKParameters(EC_GROUP *param_1,uchar **out)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EC_GROUP_get_ecpkparameters(param_1,0);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_asn1.c",0x391,"i2d_ECPKParameters");
    ERR_set_error(0x10,0x78,0);
    return 0;
  }
  iVar1 = i2d_ECPKPARAMETERS(lVar2,out);
  if (iVar1 != 0) {
    ECPKPARAMETERS_free(lVar2);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_asn1.c",0x395,"i2d_ECPKParameters");
  ERR_set_error(0x10,0x79,0);
  ECPKPARAMETERS_free(lVar2);
  return 0;
}

