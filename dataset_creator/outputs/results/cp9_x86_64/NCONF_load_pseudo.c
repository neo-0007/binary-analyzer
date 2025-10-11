
int NCONF_load(CONF *conf,char *file,long *eline)

{
  int iVar1;
  
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004bff9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*conf->meth->load)(conf,file,eline);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/conf/conf_lib.c",0xfd,"NCONF_load");
  ERR_set_error(0xe,0x69,0);
  return 0;
}

