
void * DSO_global_lookup(char *name)

{
  int iVar1;
  DSO_METHOD *pDVar2;
  undefined4 extraout_var;
  int sz;
  char *in_RSI;
  
  pDVar2 = DSO_METHOD_openssl();
  if (pDVar2->pathbyaddr != (_func_3881 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004cedea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pDVar2->pathbyaddr)(name,in_RSI,sz);
    return (void *)CONCAT44(extraout_var,iVar1);
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_lib.c",0x14e,"DSO_global_lookup");
  ERR_set_error(0x25,0x6c,0);
  return (void *)0x0;
}

