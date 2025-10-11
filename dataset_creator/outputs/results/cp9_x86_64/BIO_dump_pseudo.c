
int BIO_dump(BIO *b,char *bytes,int len)

{
  int iVar1;
  
  iVar1 = BIO_dump_cb(write_bio,b,bytes,len);
  return iVar1;
}

