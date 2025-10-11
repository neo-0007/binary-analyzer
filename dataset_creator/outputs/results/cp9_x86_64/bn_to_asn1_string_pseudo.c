
ASN1_STRING * bn_to_asn1_string(BIGNUM *param_1,ASN1_STRING *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ASN1_STRING *str;
  
  if (param_2 == (ASN1_STRING *)0x0) {
    str = ASN1_STRING_type_new(param_3);
    if (str == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_int.c",0x1db,"bn_to_asn1_string");
      ERR_set_error(0xd,0x8010a,0);
      return (ASN1_STRING *)0x0;
    }
  }
  else {
    param_2->type = param_3;
    str = param_2;
  }
  iVar1 = BN_is_negative(param_1);
  if (iVar1 != 0) {
    iVar1 = BN_is_zero(param_1);
    if (iVar1 == 0) {
      str->type = str->type | 0x102;
    }
  }
  iVar2 = BN_num_bits(param_1);
  iVar1 = iVar2 + 7;
  if (iVar2 + 7 < 0) {
    iVar1 = iVar2 + 0xe;
  }
  iVar2 = 1;
  if (iVar1 >> 3 != 0) {
    iVar2 = iVar1 >> 3;
  }
  iVar1 = ASN1_STRING_set(str,(void *)0x0,iVar2);
  if (iVar1 != 0) {
    iVar1 = BN_is_zero(param_1);
    if (iVar1 == 0) {
      iVar2 = BN_bn2bin(param_1,str->data);
    }
    else {
      *str->data = '\0';
    }
    str->length = iVar2;
    return str;
  }
  ERR_new();
  ERR_set_debug("../crypto/asn1/a_int.c",0x1e8,"bn_to_asn1_string");
  ERR_set_error(0xd,0xc0100,0);
  if (param_2 != str) {
    ASN1_INTEGER_free(str);
  }
  return (ASN1_STRING *)0x0;
}

