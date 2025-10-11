
int ASN1_GENERALIZEDTIME_check(ASN1_GENERALIZEDTIME *a)

{
  int iVar1;
  
  if (a->type != 0x18) {
    return 0;
  }
  iVar1 = ossl_asn1_time_to_tm(0,a);
  return iVar1;
}

