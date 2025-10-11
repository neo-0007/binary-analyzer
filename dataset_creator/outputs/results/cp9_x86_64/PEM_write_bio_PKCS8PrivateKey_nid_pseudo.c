
int PEM_write_bio_PKCS8PrivateKey_nid
              (BIO *bp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  undefined4 in_register_00000084;
  
  iVar1 = do_pk8pkey_constprop_0(bp,x,0,nid,0,kstr,CONCAT44(in_register_00000084,klen),cb,u);
  return iVar1;
}

