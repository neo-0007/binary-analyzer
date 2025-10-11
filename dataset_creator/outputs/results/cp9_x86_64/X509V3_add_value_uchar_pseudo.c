
int X509V3_add_value_uchar(char *name,uchar *value,stack_st_CONF_VALUE **extlist)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = 0;
  if (value != (uchar *)0x0) {
    sVar2 = strlen((char *)value);
  }
  iVar1 = x509v3_add_len_value(name,value,sVar2,extlist);
  return iVar1;
}

