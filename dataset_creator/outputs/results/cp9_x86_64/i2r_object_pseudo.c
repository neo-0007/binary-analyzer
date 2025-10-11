
bool i2r_object(undefined8 param_1,ASN1_OBJECT *param_2,BIO *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BIO_printf(param_3,"%*s",(ulong)param_4,&DAT_008343a2);
  bVar1 = false;
  if (0 < iVar2) {
    iVar2 = i2a_ASN1_OBJECT(param_3,param_2);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

