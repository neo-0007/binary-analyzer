
int X509_add_ext(X509 *x,X509_EXTENSION *ex,int loc)

{
  stack_st_X509_EXTENSION *psVar1;
  
  psVar1 = X509v3_add_ext((stack_st_X509_EXTENSION **)&x->skid,ex,loc);
  return (int)(psVar1 != (stack_st_X509_EXTENSION *)0x0);
}

