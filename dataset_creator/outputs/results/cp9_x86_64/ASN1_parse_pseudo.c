
int ASN1_parse(BIO *bp,uchar *pp,long len,int indent)

{
  int iVar1;
  uchar *local_10 [2];
  
  local_10[0] = pp;
  iVar1 = asn1_parse2(bp,local_10,len,0,0,indent,0);
  return iVar1;
}

