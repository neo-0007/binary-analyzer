
int SHA384_Final(uchar *md,SHA512_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA512_Final(md,c);
  return iVar1;
}

