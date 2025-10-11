
bool PKCS8_pkey_add1_attr(long param_1,X509_ATTRIBUTE *param_2)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr((stack_st_X509_ATTRIBUTE **)(param_1 + 0x18),param_2);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}

