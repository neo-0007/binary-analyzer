
int unknown_ext_print(BIO *param_1,uchar *param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  
  param_4 = param_4 & 0xf0000;
  if (param_4 == 0x20000) {
    iVar1 = ASN1_parse_dump(param_1,param_2,(long)param_3,param_5,-1);
    return iVar1;
  }
  if (param_4 < 0x20001) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_4 == 0x10000) {
      if (param_6 == 0) {
        BIO_printf(param_1,"%*s<Not Supported>",(ulong)param_5,&DAT_008343a2);
        return 1;
      }
      BIO_printf(param_1,"%*s<Parse Error>",(ulong)param_5,&DAT_008343a2);
      return param_6;
    }
  }
  else if (param_4 == 0x30000) {
    iVar1 = BIO_dump_indent(param_1,(char *)param_2,param_3,param_5);
    return iVar1;
  }
  return 1;
}

