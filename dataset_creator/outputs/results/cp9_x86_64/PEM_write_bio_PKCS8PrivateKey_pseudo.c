
int PEM_write_bio_PKCS8PrivateKey
              (BIO *param_1,EVP_PKEY *param_2,EVP_CIPHER *param_3,char *param_4,int param_5,
              undefined1 *param_6,void *param_7)

{
  int iVar1;
  undefined4 in_register_00000084;
  
  iVar1 = do_pk8pkey_constprop_0
                    (param_1,param_2,0,0xffffffff,param_3,param_4,
                     CONCAT44(in_register_00000084,param_5),param_6,param_7);
  return iVar1;
}

