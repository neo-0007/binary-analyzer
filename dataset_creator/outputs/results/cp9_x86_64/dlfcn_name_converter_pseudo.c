
char * dlfcn_name_converter(DSO *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  int num;
  
  sVar3 = strlen(param_2);
  iVar1 = (int)sVar3;
  pcVar4 = strchr(param_2,0x2f);
  if (pcVar4 == (char *)0x0) {
    uVar2 = DSO_flags(param_1);
    num = iVar1 + 4;
    if ((uVar2 & 2) == 0) {
      num = iVar1 + 7;
    }
    pcVar4 = (char *)CRYPTO_malloc(num,"../crypto/dso/dso_dlfcn.c",0x10b);
    if (pcVar4 != (char *)0x0) {
      uVar2 = DSO_flags(param_1);
      pcVar5 = "lib%s.so";
      if ((uVar2 & 2) != 0) {
        pcVar5 = "%s.so";
      }
      ___sprintf_chk(pcVar4,1,0xffffffffffffffff,pcVar5,param_2);
      return pcVar4;
    }
  }
  else {
    pcVar4 = (char *)CRYPTO_malloc(iVar1 + 1,"../crypto/dso/dso_dlfcn.c",0x10b);
    if (pcVar4 != (char *)0x0) {
      strcpy(pcVar4,param_2);
      return pcVar4;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/dso/dso_dlfcn.c",0x10d,"dlfcn_name_converter");
  ERR_set_error(0x25,0x6d,0);
  return (char *)0x0;
}

