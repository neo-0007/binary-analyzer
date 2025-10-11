
undefined8 BIO_hex_string(BIO *param_1,uint param_2,int param_3,byte *param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  
  if (0 < param_5) {
    if (param_5 != 1) {
      iVar1 = 0;
      pbVar2 = param_4;
      do {
        BIO_printf(param_1,"%02X:",(ulong)*pbVar2);
        iVar1 = (iVar1 + 1) % param_3;
        if (iVar1 == 0) {
          BIO_printf(param_1,"\n");
          if (param_4 + (param_5 - 2) == pbVar2) {
            BIO_printf(param_1,"%*s",(ulong)param_2,&DAT_008343a2);
            break;
          }
          BIO_printf(param_1,"%*s",(ulong)param_2,&DAT_008343a2);
        }
        else if (param_4 + (param_5 - 2) == pbVar2) break;
        pbVar2 = pbVar2 + 1;
      } while( true );
    }
    BIO_printf(param_1,"%02X",(ulong)param_4[(long)param_5 + -1]);
  }
  return 1;
}

