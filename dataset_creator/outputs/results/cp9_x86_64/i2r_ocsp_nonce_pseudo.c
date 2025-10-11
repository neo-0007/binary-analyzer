
bool i2r_ocsp_nonce(undefined8 param_1,ASN1_STRING *param_2,BIO *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BIO_printf(param_3,"%*s",(ulong)param_4,&DAT_008343a2);
  bVar1 = false;
  if (0 < iVar2) {
    iVar2 = i2a_ASN1_STRING(param_3,param_2,4);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

