
uint prepare_ec_params(EC_KEY *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  ASN1_STRING *a;
  ASN1_OBJECT *a_00;
  long lVar3;
  
  group = EC_KEY_get0_group(param_1);
  if (group != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_get_curve_name(group);
    if (iVar1 != 0) {
      a_00 = OBJ_nid2obj(iVar1);
      if (a_00 == (ASN1_OBJECT *)0x0) {
        return 0;
      }
      uVar2 = EC_GROUP_get_asn1_flag(group);
      if ((uVar2 & 1) != 0) {
        lVar3 = OBJ_length(a_00);
        if (lVar3 == 0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x2b1,
                        "prepare_ec_params");
          ERR_set_error(0x39,0xd1,0);
          ASN1_OBJECT_free(a_00);
          return 0;
        }
        *param_4 = a_00;
        *param_5 = 6;
        return uVar2 & 1;
      }
    }
    a = ASN1_STRING_new();
    if (a == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x288,
                    "prepare_ec_explicit_params");
      ERR_set_error(0x39,0xc0100,0);
      return 0;
    }
    iVar1 = i2d_ECParameters(param_1,&a->data);
    a->length = iVar1;
    if (0 < iVar1) {
      *param_5 = 0x10;
      *param_4 = a;
      return 1;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x28e,
                  "prepare_ec_explicit_params");
    ERR_set_error(0x39,0xc0100,0);
    ASN1_STRING_free(a);
  }
  return 0;
}

