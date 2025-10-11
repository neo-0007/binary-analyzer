
int RSA_padding_add_PKCS1_OAEP(uchar *to,int tlen,uchar *f,int fl,uchar *p,int pl)

{
  int iVar1;
  undefined4 in_register_0000008c;
  
  iVar1 = ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
                    (0,to,tlen,f,fl,p,CONCAT44(in_register_0000008c,pl),0,0);
  return iVar1;
}

