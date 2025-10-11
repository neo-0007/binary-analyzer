
int SHA224_Final(uchar *md,SHA256_CTX *c)

{
  int iVar1;
  
  iVar1 = SHA256_Final(md,c);
  return iVar1;
}

