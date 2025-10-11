
int ASN1_parse_dump(BIO *bp,uchar *pp,long len,int indent,int dump)

{
  int iVar1;
  undefined4 in_register_00000084;
  uchar *local_10 [2];
  
  local_10[0] = pp;
  iVar1 = asn1_parse2(bp,local_10,len,0,0,indent,CONCAT44(in_register_00000084,dump));
  return iVar1;
}

