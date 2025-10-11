
int X509V3_add_value_int(char *name,ASN1_INTEGER *aint,stack_st_CONF_VALUE **extlist)

{
  int iVar1;
  char *value;
  
  iVar1 = 1;
  if (aint != (ASN1_INTEGER *)0x0) {
    iVar1 = 0;
    value = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,aint);
    if (value != (char *)0x0) {
      iVar1 = X509V3_add_value(name,value,extlist);
      CRYPTO_free(value);
    }
  }
  return iVar1;
}

