
int DSO_pathbyaddr(void *addr,char *path,int sz)

{
  int iVar1;
  DSO_METHOD *pDVar2;
  
  pDVar2 = DSO_METHOD_openssl();
  if (pDVar2->finish != (_func_3880 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004cecee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*pDVar2->finish)((DSO *)addr);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_lib.c",0x131,"DSO_pathbyaddr");
  ERR_set_error(0x25,0x6c,0);
  return -1;
}

