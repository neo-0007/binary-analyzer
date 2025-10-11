
int NCONF_load_bio(CONF *conf,BIO *bp,long *eline)

{
  int iVar1;
  
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004bffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*conf->meth->load_bio)(conf,bp,eline);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/conf/conf_lib.c",0x116,"NCONF_load_bio");
  ERR_set_error(0xe,0x69,0);
  return 0;
}

