
bool i2r_ocsp_acutoff(undefined8 param_1,ASN1_GENERALIZEDTIME *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = BIO_printf(param_3,"%*s",(ulong)param_4,&DAT_008343a2);
  bVar2 = false;
  if (0 < iVar1) {
    iVar1 = ASN1_GENERALIZEDTIME_print(param_3,param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

