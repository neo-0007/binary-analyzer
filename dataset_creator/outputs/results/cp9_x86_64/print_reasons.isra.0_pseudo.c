
void print_reasons_isra_0(BIO *param_1,undefined8 param_2,ASN1_BIT_STRING *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *buf;
  
  bVar1 = true;
  BIO_printf(param_1,"%*s%s:\n%*s",(ulong)param_4,&DAT_008343a2,param_2,(ulong)(param_4 + 2),
             &DAT_008343a2);
  iVar2 = 0;
  piVar3 = &reason_flags;
  while( true ) {
    iVar2 = ASN1_BIT_STRING_get_bit(param_3,iVar2);
    if (iVar2 != 0) {
      if (!bVar1) {
        BIO_puts(param_1,", ");
      }
      bVar1 = false;
      BIO_puts(param_1,*(char **)(piVar3 + 2));
    }
    if (*(long *)(piVar3 + 8) == 0) break;
    iVar2 = piVar3[6];
    piVar3 = piVar3 + 6;
  }
  buf = "<EMPTY>\n";
  if (!bVar1) {
    buf = "\n";
  }
  BIO_puts(param_1,buf);
  return;
}

