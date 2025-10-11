
void X509V3_EXT_val_prn(BIO *out,stack_st_CONF_VALUE *val,int indent,int ml)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (val != (stack_st_CONF_VALUE *)0x0) {
    if ((ml == 0) || (iVar1 = OPENSSL_sk_num(val), iVar1 == 0)) {
      BIO_printf(out,"%*s",(ulong)(uint)indent,&DAT_008343a2);
      iVar1 = OPENSSL_sk_num(val);
      if (iVar1 == 0) {
        BIO_puts(out,"<EMPTY>\n");
      }
    }
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(val), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      if (ml == 0) {
        if (iVar1 != 0) {
          BIO_printf(out,", ");
        }
      }
      else {
        if (iVar1 != 0) {
          BIO_printf(out,"\n");
        }
        BIO_printf(out,"%*s",(ulong)(uint)indent,&DAT_008343a2);
      }
      lVar3 = OPENSSL_sk_value(val,iVar1);
      if (*(char **)(lVar3 + 8) == (char *)0x0) {
        BIO_puts(out,*(char **)(lVar3 + 0x10));
      }
      else if (*(long *)(lVar3 + 0x10) == 0) {
        BIO_puts(out,*(char **)(lVar3 + 8));
      }
      else {
        BIO_printf(out,"%s:%s");
      }
    }
    return;
  }
  return;
}

