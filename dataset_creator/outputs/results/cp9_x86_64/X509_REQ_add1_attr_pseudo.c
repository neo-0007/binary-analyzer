
int X509_REQ_add1_attr(X509_REQ *req,X509_ATTRIBUTE *attr)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr((stack_st_X509_ATTRIBUTE **)&req[1].signature,attr);
  return (int)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
}

