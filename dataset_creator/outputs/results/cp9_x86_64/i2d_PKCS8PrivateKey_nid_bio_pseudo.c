
int i2d_PKCS8PrivateKey_nid_bio
              (BIO *bp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  undefined4 in_register_00000084;
  
  iVar1 = do_pk8pkey_constprop_0(bp,x,1,nid,0,kstr,CONCAT44(in_register_00000084,klen),cb,u);
  return iVar1;
}

