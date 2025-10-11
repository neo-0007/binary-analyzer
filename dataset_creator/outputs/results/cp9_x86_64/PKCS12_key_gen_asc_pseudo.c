
int PKCS12_key_gen_asc(char *pass,int passlen,uchar *salt,int saltlen,int id,int iter,int n,
                      uchar *out,EVP_MD *md_type)

{
  int iVar1;
  
  iVar1 = PKCS12_key_gen_asc_ex();
  return iVar1;
}

