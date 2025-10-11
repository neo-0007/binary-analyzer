
undefined8 eckey_param2type(undefined4 *param_1,undefined8 *param_2,EC_KEY *param_3)

{
  int iVar1;
  EC_GROUP *group;
  ASN1_STRING *a;
  ASN1_OBJECT *a_00;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_3 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_3), group == (EC_GROUP *)0x0))
  {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_ameth.c",0x23,"eckey_param2type");
    ERR_set_error(0x10,0x7c,0);
    return 0;
  }
  iVar1 = EC_GROUP_get_asn1_flag(group);
  if ((iVar1 != 0) && (iVar1 = EC_GROUP_get_curve_name(group), iVar1 != 0)) {
    a_00 = OBJ_nid2obj(iVar1);
    if ((a_00 != (ASN1_OBJECT *)0x0) && (lVar2 = OBJ_length(a_00), lVar2 != 0)) {
      *param_2 = a_00;
      *param_1 = 6;
      return 1;
    }
    ASN1_OBJECT_free(a_00);
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_ameth.c",0x2e,"eckey_param2type");
    ERR_set_error(0x10,0xa7,0);
    return 0;
  }
  a = ASN1_STRING_new();
  uVar3 = 0;
  if (a != (ASN1_STRING *)0x0) {
    iVar1 = i2d_ECParameters(param_3,&a->data);
    a->length = iVar1;
    if (iVar1 < 1) {
      ASN1_STRING_free(a);
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_ameth.c",0x3c,"eckey_param2type");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      *param_2 = a;
      uVar3 = 1;
      *param_1 = 0x10;
    }
  }
  return uVar3;
}

