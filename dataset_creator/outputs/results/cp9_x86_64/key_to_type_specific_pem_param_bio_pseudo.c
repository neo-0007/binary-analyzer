
bool key_to_type_specific_pem_param_bio
               (BIO *param_1,void *param_2,undefined8 param_3,char *param_4,undefined8 param_5,
               undefined1 *param_6,long param_7)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(param_6,param_4,param_1,param_2,*(EVP_CIPHER **)(param_7 + 0x10),
                             (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return 0 < iVar1;
}

