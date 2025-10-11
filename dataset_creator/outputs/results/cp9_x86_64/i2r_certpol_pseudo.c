
undefined8 i2r_certpol(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar3) break;
    if (iVar3 != 0) {
      BIO_puts(param_3,"\n");
    }
    puVar2 = (undefined8 *)OPENSSL_sk_value(param_2,iVar3);
    BIO_printf(param_3,"%*sPolicy: ",(ulong)param_4,&DAT_008343a2);
    i2a_ASN1_OBJECT(param_3,(ASN1_OBJECT *)*puVar2);
    if (puVar2[1] != 0) {
      BIO_puts(param_3,"\n");
      print_qualifiers(param_3,puVar2[1],param_4 + 2);
    }
    iVar3 = iVar3 + 1;
  }
  return 1;
}

