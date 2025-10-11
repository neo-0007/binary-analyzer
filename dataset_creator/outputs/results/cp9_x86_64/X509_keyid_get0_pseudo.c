
uchar * X509_keyid_get0(X509 *x,int *len)

{
  stack_st_GENERAL_NAME *psVar1;
  
  psVar1 = x[1].altname;
  if ((psVar1 != (stack_st_GENERAL_NAME *)0x0) &&
     (psVar1 = (stack_st_GENERAL_NAME *)(psVar1->stack).comp, psVar1 != (stack_st_GENERAL_NAME *)0x0
     )) {
    if (len != (int *)0x0) {
      *len = (psVar1->stack).num;
    }
    psVar1 = (stack_st_GENERAL_NAME *)(psVar1->stack).data;
  }
  return (uchar *)psVar1;
}

