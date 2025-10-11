
char * dlfcn_merger(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_2 == (char *)0x0 && param_3 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/dso/dso_dlfcn.c",0xc9,"dlfcn_merger");
    ERR_set_error(0x25,0xc0102,0);
    return (char *)0x0;
  }
  if (param_3 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      pcVar3 = CRYPTO_strdup(param_3,"../crypto/dso/dso_dlfcn.c",0xdb);
      if (pcVar3 != (char *)0x0) {
        return pcVar3;
      }
      ERR_new();
      uVar5 = 0xdd;
      goto LAB_005c1848;
    }
    if (*param_2 != '/') {
      sVar2 = strlen(param_3);
      iVar4 = (int)sVar2;
      sVar2 = strlen(param_2);
      iVar1 = (int)sVar2 + iVar4;
      if ((iVar4 != 0) && (param_3[(long)iVar4 + -1] == '/')) {
        iVar4 = iVar4 + -1;
        iVar1 = iVar1 + -1;
      }
      pcVar3 = (char *)CRYPTO_malloc(iVar1 + 2,"../crypto/dso/dso_dlfcn.c",0xf1);
      if (pcVar3 != (char *)0x0) {
        strcpy(pcVar3,param_3);
        pcVar3[iVar4] = '/';
        strcpy(pcVar3 + (long)iVar4 + 1,param_2);
        return pcVar3;
      }
      ERR_new();
      uVar5 = 0xf3;
      goto LAB_005c1848;
    }
  }
  pcVar3 = CRYPTO_strdup(param_2,"../crypto/dso/dso_dlfcn.c",0xd1);
  if (pcVar3 != (char *)0x0) {
    return pcVar3;
  }
  ERR_new();
  uVar5 = 0xd3;
LAB_005c1848:
  ERR_set_debug("../crypto/dso/dso_dlfcn.c",uVar5,"dlfcn_merger");
  ERR_set_error(0x25,0xc0100,0);
  return (char *)0x0;
}

