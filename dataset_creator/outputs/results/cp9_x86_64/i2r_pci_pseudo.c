
undefined8 i2r_pci(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  uint *puVar1;
  
  BIO_printf(param_3,"%*sPath Length Constraint: ",(ulong)param_4,&DAT_008343a2);
  if ((ASN1_INTEGER *)*param_2 == (ASN1_INTEGER *)0x0) {
    BIO_printf(param_3,"infinite");
  }
  else {
    i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)*param_2);
  }
  BIO_puts(param_3,"\n");
  BIO_printf(param_3,"%*sPolicy Language: ",(ulong)param_4,&DAT_008343a2);
  i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)param_2[1]);
  puVar1 = *(uint **)(param_2[1] + 8);
  if ((puVar1 != (uint *)0x0) && (*(long *)(puVar1 + 2) != 0)) {
    BIO_printf(param_3,"\n%*sPolicy Text: %.*s",(ulong)param_4,&DAT_008343a2,(ulong)*puVar1);
  }
  return 1;
}

