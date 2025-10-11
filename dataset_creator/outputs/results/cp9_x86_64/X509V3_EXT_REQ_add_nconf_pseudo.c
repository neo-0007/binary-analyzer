
int X509V3_EXT_REQ_add_nconf(CONF *conf,X509V3_CTX *ctx,char *section,X509_REQ *req)

{
  int iVar1;
  long in_FS_OFFSET;
  stack_st_X509_EXTENSION *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (stack_st_X509_EXTENSION *)0x0;
  iVar1 = X509V3_EXT_add_nconf_sk(conf,ctx,section,&local_28);
  if (((iVar1 != 0) && (req != (X509_REQ *)0x0)) && (local_28 != (stack_st_X509_EXTENSION *)0x0)) {
    iVar1 = X509_REQ_add_extensions(req,local_28);
  }
  OPENSSL_sk_pop_free(local_28,X509_EXTENSION_free);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

