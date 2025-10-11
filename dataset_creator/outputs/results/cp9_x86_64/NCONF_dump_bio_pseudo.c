
int NCONF_dump_bio(CONF *conf,BIO *out)

{
  int iVar1;
  
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004c076c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*conf->meth->dump)(conf,out);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/conf/conf_lib.c",0x18e,"NCONF_dump_bio");
  ERR_set_error(0xe,0x69,0);
  return 0;
}

