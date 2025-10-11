
bool derive_pvk_key(uchar *param_1,void *param_2,ulong param_3,void *param_4,int param_5,
                   undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  bool bVar2;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  type = (EVP_MD *)EVP_MD_fetch(param_6,&DAT_007c6514,param_7);
  if ((ctx != (EVP_MD_CTX *)0x0) && (type != (EVP_MD *)0x0)) {
    iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
    if (iVar1 != 0) {
      iVar1 = EVP_DigestUpdate(ctx,param_2,param_3 & 0xffffffff);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate(ctx,param_4,(long)param_5);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestFinal_ex(ctx,param_1,(uint *)0x0);
          bVar2 = iVar1 != 0;
          goto LAB_00543cfe;
        }
      }
    }
  }
  bVar2 = false;
LAB_00543cfe:
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(type);
  return bVar2;
}

