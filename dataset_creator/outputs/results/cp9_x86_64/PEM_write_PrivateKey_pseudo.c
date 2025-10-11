
int PEM_write_PrivateKey
              (FILE *fp,EVP_PKEY *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_write_PrivateKey_ex();
  return iVar1;
}

