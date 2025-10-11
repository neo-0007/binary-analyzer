
bool i2r_ocsp_crlid(undefined8 param_1,long *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_4;
  if (((*param_2 == 0) ||
      (((iVar1 = BIO_printf(param_3,"%*scrlUrl: ",uVar2,&DAT_008343a2), 0 < iVar1 &&
        (iVar1 = ASN1_STRING_print(param_3,(ASN1_STRING *)*param_2), iVar1 != 0)) &&
       (iVar1 = BIO_write(param_3,&DAT_0081a1ca,1), 0 < iVar1)))) &&
     ((param_2[1] == 0 ||
      (((iVar1 = BIO_printf(param_3,"%*scrlNum: ",uVar2,&DAT_008343a2), 0 < iVar1 &&
        (iVar1 = i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)param_2[1]), 0 < iVar1)) &&
       (iVar1 = BIO_write(param_3,&DAT_0081a1ca,1), 0 < iVar1)))))) {
    if (param_2[2] == 0) {
      return true;
    }
    iVar1 = BIO_printf(param_3,"%*scrlTime: ",uVar2,&DAT_008343a2);
    if ((0 < iVar1) &&
       (iVar1 = ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)param_2[2]), iVar1 != 0))
    {
      iVar1 = BIO_write(param_3,&DAT_0081a1ca,1);
      return 0 < iVar1;
    }
  }
  return false;
}

