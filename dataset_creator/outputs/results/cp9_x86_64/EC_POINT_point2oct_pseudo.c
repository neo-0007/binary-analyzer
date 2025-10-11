
size_t EC_POINT_point2oct(EC_GROUP *group,EC_POINT *p,point_conversion_form_t form,uchar *buf,
                         size_t len,BN_CTX *ctx)

{
  byte *pbVar1;
  size_t sVar2;
  undefined4 in_register_00000014;
  
  pbVar1 = *(byte **)group;
  if ((*(code **)(pbVar1 + 0x90) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    ERR_new(group,p,CONCAT44(in_register_00000014,form));
    ERR_set_debug("../crypto/ec/ec_oct.c",0x4f,"EC_POINT_point2oct");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == *(byte **)p) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004e84c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        sVar2 = (**(code **)(pbVar1 + 0x90))();
        return sVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        sVar2 = ossl_ec_GF2m_simple_point2oct();
        return sVar2;
      }
      sVar2 = ossl_ec_GFp_simple_point2oct();
      return sVar2;
    }
    ERR_new(group,p,CONCAT44(in_register_00000014,form));
    ERR_set_debug("../crypto/ec/ec_oct.c",0x53,"EC_POINT_point2oct");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}

