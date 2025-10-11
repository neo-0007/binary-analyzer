
DSO * DSO_dsobyaddr(void *param_1,int param_2)

{
  int num;
  int iVar1;
  char *path;
  DSO *pDVar2;
  
  num = DSO_pathbyaddr(param_1,(char *)0x0,0);
  if (-1 < num) {
    path = (char *)CRYPTO_malloc(num,"../crypto/dso/dso_lib.c",0x140);
    if ((path == (char *)0x0) || (iVar1 = DSO_pathbyaddr(param_1,path,num), iVar1 != num)) {
      pDVar2 = (DSO *)0x0;
    }
    else {
      pDVar2 = DSO_load((DSO *)0x0,path,(DSO_METHOD *)0x0,param_2);
    }
    CRYPTO_free(path);
    return pDVar2;
  }
  return (DSO *)0x0;
}

