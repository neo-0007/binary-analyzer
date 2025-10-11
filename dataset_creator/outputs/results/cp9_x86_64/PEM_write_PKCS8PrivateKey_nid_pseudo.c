
int PEM_write_PKCS8PrivateKey_nid
              (FILE *fp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  BIO *a;
  
  a = BIO_new_fp(fp,0);
  if (a == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../crypto/pem/pem_pk8.c",0xf4,__func___1);
    ERR_set_error(9,0x80007,0);
  }
  else {
    iVar1 = do_pk8pkey_constprop_0(a,x,0,nid,0,kstr,klen,cb,u);
    BIO_free(a);
  }
  return iVar1;
}

