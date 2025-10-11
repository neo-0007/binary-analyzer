
void print_gens_isra_0(BIO *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  GENERAL_NAME *gen;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar2) break;
    if (iVar2 != 0) {
      BIO_puts(param_1,"\n");
    }
    BIO_printf(param_1,"%*s",(ulong)(param_3 + 2),&DAT_008343a2);
    gen = (GENERAL_NAME *)OPENSSL_sk_value(param_2,iVar2);
    GENERAL_NAME_print(param_1,gen);
    iVar2 = iVar2 + 1;
  }
  return;
}

