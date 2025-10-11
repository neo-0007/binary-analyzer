
int BIO_dump_fp(FILE *fp,char *s,int len)

{
  int iVar1;
  
  iVar1 = BIO_dump_cb(write_fp,fp,s,len);
  return iVar1;
}

