
stack_st_X509_ATTRIBUTE *
X509at_add1_attr_by_NID(stack_st_X509_ATTRIBUTE **x,int nid,int type,uchar *bytes,int len)

{
  X509_ATTRIBUTE *attr;
  stack_st_X509_ATTRIBUTE *psVar1;
  
  attr = X509_ATTRIBUTE_create_by_NID((X509_ATTRIBUTE **)0x0,nid,type,bytes,len);
  if (attr != (X509_ATTRIBUTE *)0x0) {
    psVar1 = X509at_add1_attr(x,attr);
    X509_ATTRIBUTE_free(attr);
    return psVar1;
  }
  return (stack_st_X509_ATTRIBUTE *)0x0;
}

