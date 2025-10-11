
undefined8 i2r_ocsp_serviceloc(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = BIO_printf(param_3,"%*sIssuer: ",(ulong)param_4,&DAT_008343a2);
  if ((0 < iVar1) &&
     (iVar1 = X509_NAME_print_ex(param_3,(X509_NAME *)*param_2,0,0x82031f), 0 < iVar1)) {
    iVar1 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(param_2[1]);
      if (iVar2 <= iVar1) {
        return 1;
      }
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar1);
      iVar2 = BIO_printf(param_3,"\n%*s",(ulong)(param_4 * 2),&DAT_008343a2);
      if ((((iVar2 < 1) || (iVar2 = i2a_ASN1_OBJECT(param_3,(ASN1_OBJECT *)*puVar3), iVar2 < 1)) ||
          (iVar2 = BIO_puts(param_3," - "), iVar2 < 1)) ||
         (iVar2 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)puVar3[1]), iVar2 < 1)) break;
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}

