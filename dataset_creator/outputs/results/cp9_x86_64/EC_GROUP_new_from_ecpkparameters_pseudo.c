
EC_GROUP * EC_GROUP_new_from_ecpkparameters(int *param_1)

{
  int iVar1;
  EC_GROUP *pEVar2;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_asn1.c",0x34e,"EC_GROUP_new_from_ecpkparameters");
    ERR_set_error(0x10,0x7c,0);
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 2));
      pEVar2 = EC_GROUP_new_by_curve_name(iVar1);
      if (pEVar2 != (EC_GROUP *)0x0) {
        EC_GROUP_set_asn1_flag(pEVar2,1);
        return pEVar2;
      }
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x356,"EC_GROUP_new_from_ecpkparameters");
      ERR_set_error(0x10,0x77,0);
    }
    else if (iVar1 == 1) {
      pEVar2 = (EC_GROUP *)EC_GROUP_new_from_ecparameters(*(undefined8 *)(param_1 + 2));
      if (pEVar2 != (EC_GROUP *)0x0) {
        EC_GROUP_set_asn1_flag(pEVar2,0);
        return pEVar2;
      }
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x35e,"EC_GROUP_new_from_ecpkparameters");
      ERR_set_error(0x10,0x80010,0);
    }
    else if (iVar1 != 2) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x366,"EC_GROUP_new_from_ecpkparameters");
      ERR_set_error(0x10,0x73,0);
      return (EC_GROUP *)0x0;
    }
  }
  return (EC_GROUP *)0x0;
}

