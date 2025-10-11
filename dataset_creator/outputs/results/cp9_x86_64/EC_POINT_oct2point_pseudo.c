
int EC_POINT_oct2point(EC_GROUP *group,EC_POINT *p,uchar *buf,size_t len,BN_CTX *ctx)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = *(byte **)group;
  if ((*(code **)(pbVar1 + 0x98) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_oct.c",0x6e,"EC_POINT_oct2point");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == *(byte **)p) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004e859c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(pbVar1 + 0x98))();
        return iVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        iVar2 = ossl_ec_GF2m_simple_oct2point();
        return iVar2;
      }
      iVar2 = ossl_ec_GFp_simple_oct2point();
      return iVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_oct.c",0x72,"EC_POINT_oct2point");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

