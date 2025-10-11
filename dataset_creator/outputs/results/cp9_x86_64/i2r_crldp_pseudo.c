
undefined8 i2r_crldp(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_4;
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar3) break;
    if (iVar3 != 0) {
      BIO_puts(param_3,"\n");
    }
    plVar2 = (long *)OPENSSL_sk_value(param_2,iVar3);
    if (*plVar2 != 0) {
      print_distpoint_isra_0(param_3,*plVar2,uVar4);
    }
    if (plVar2[1] != 0) {
      print_reasons_isra_0(param_3,"Reasons",plVar2[1],uVar4);
    }
    if (plVar2[2] != 0) {
      BIO_printf(param_3,"%*sCRL Issuer:\n",uVar4,&DAT_008343a2);
      print_gens_isra_0(param_3,plVar2[2],uVar4);
    }
    iVar3 = iVar3 + 1;
  }
  return 1;
}

