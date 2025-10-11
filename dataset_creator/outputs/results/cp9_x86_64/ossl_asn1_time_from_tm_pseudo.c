
ASN1_STRING * ossl_asn1_time_from_tm(ASN1_STRING *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *format;
  
  if (param_3 == -1) {
    param_3 = (99 < param_2[5] - 0x32) + 0x17;
  }
  else if (param_3 == 0x17) {
    if (99 < param_2[5] - 0x32) goto LAB_005a4943;
  }
  else if (param_3 != 0x18) {
LAB_005a4943:
    if (param_1 == (ASN1_STRING *)0x0) {
      return (ASN1_STRING *)0x0;
    }
    param_1 = (ASN1_STRING *)0x0;
    goto LAB_005a494a;
  }
  if (param_1 == (ASN1_STRING *)0x0) {
    param_1 = ASN1_STRING_new();
    if (param_1 == (ASN1_STRING *)0x0) {
      return (ASN1_STRING *)0x0;
    }
    iVar2 = ASN1_STRING_set(param_1,(void *)0x0,0x14);
    if (iVar2 == 0) {
LAB_005a494a:
      ASN1_STRING_free(param_1);
      return (ASN1_STRING *)0x0;
    }
  }
  else {
    iVar2 = ASN1_STRING_set(param_1,(void *)0x0,0x14);
    if (iVar2 == 0) {
      return (ASN1_STRING *)0x0;
    }
  }
  uVar1 = param_2[4];
  param_1->type = param_3;
  if (param_3 == 0x18) {
    uVar3 = param_2[5] + 0x76c;
    format = "%04d%02d%02d%02d%02d%02dZ";
  }
  else {
    format = "%02d%02d%02d%02d%02d%02dZ";
    uVar3 = (int)param_2[5] % 100;
  }
  iVar2 = BIO_snprintf((char *)param_1->data,0x14,format,(ulong)uVar3,(ulong)(uVar1 + 1),
                       (ulong)param_2[3],(ulong)param_2[2],(ulong)param_2[1],(ulong)*param_2);
  param_1->length = iVar2;
  return param_1;
}

