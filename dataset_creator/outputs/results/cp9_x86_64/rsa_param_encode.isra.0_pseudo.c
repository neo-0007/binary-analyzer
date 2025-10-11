
undefined8 rsa_param_encode_isra_0(long param_1,ASN1_OCTET_STRING **param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar3;
  
  *param_2 = (ASN1_OCTET_STRING *)0x0;
  iVar1 = RSA_test_flags(param_1,0xf000);
  if (iVar1 == 0x1000) {
    if (*(long *)(param_1 + 0x80) == 0) {
      *param_3 = 0xffffffff;
      return 1;
    }
    it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
    pAVar3 = ASN1_item_pack(*(void **)(param_1 + 0x80),it,param_2);
    if (pAVar3 != (ASN1_STRING *)0x0) {
      *param_3 = 0x10;
      return 1;
    }
    uVar2 = 0;
  }
  else {
    *param_3 = 5;
    uVar2 = 1;
  }
  return uVar2;
}

