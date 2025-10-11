
bool gmac_setkey(long param_1,uchar *param_2,long param_3)

{
  EVP_CIPHER_CTX *ctx;
  int iVar1;
  
  ctx = *(EVP_CIPHER_CTX **)(param_1 + 8);
  iVar1 = EVP_CIPHER_CTX_get_key_length(ctx);
  if (iVar1 != param_3) {
    ERR_new();
    ERR_set_debug("../providers/implementations/macs/gmac_prov.c",0x6a,"gmac_setkey");
    ERR_set_error(0x39,0x69,0);
    return false;
  }
  iVar1 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,param_2,(uchar *)0x0);
  return iVar1 != 0;
}

