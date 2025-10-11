
stack_st_CONF_VALUE *
i2v_GENERAL_NAMES(X509V3_EXT_METHOD *method,GENERAL_NAMES *gen,stack_st_CONF_VALUE *extlist)

{
  int iVar1;
  GENERAL_NAME *gen_00;
  stack_st_CONF_VALUE *psVar2;
  stack_st_CONF_VALUE *psVar3;
  int iVar4;
  
  iVar4 = 0;
  psVar3 = extlist;
  while( true ) {
    iVar1 = OPENSSL_sk_num(gen);
    if (iVar1 <= iVar4) {
      if (psVar3 != (stack_st_CONF_VALUE *)0x0) {
        return psVar3;
      }
      psVar3 = (stack_st_CONF_VALUE *)OPENSSL_sk_new_null();
      return psVar3;
    }
    gen_00 = (GENERAL_NAME *)OPENSSL_sk_value(gen,iVar4);
    psVar2 = i2v_GENERAL_NAME(method,gen_00,psVar3);
    if (psVar2 == (stack_st_CONF_VALUE *)0x0) break;
    iVar4 = iVar4 + 1;
    psVar3 = psVar2;
  }
  if (extlist == (stack_st_CONF_VALUE *)0x0) {
    OPENSSL_sk_pop_free(psVar3,X509V3_conf_free);
    return (stack_st_CONF_VALUE *)0x0;
  }
  return (stack_st_CONF_VALUE *)0x0;
}

