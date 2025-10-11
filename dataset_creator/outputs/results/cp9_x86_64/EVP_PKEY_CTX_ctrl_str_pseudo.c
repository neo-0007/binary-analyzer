
int EVP_PKEY_CTX_ctrl_str(EVP_PKEY_CTX *ctx,char *type,char *value)

{
  int iVar1;
  
  ERR_set_mark();
  strlen(value);
  iVar1 = evp_pkey_ctx_store_cached_data(ctx,0xffffffff,0xffffffff,0xffffffff,type,value);
  if (iVar1 == -2) {
    ERR_pop_to_mark();
  }
  else {
    ERR_clear_last_mark();
    if ((iVar1 < 1) || (*(int *)ctx == 0)) {
      return iVar1;
    }
  }
  iVar1 = evp_pkey_ctx_ctrl_str_int(ctx,type,value);
  return iVar1;
}

