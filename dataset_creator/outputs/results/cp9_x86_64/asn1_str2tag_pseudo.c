
undefined4 asn1_str2tag(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  undefined **ppuVar3;
  int iVar4;
  
  if (param_2 == -1) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  iVar4 = 0x31;
  iVar1 = 4;
  tntmp_5 = &tnst_4;
  while( true ) {
    ppuVar3 = tntmp_5;
    if (param_2 == iVar1) {
      iVar1 = OPENSSL_strncasecmp(*tntmp_5,param_1,(long)param_2);
      ppuVar3 = tntmp_5;
      if (iVar1 == 0) {
        return *(undefined4 *)((long)tntmp_5 + 0xc);
      }
    }
    tntmp_5 = ppuVar3 + 2;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
    iVar1 = *(int *)(ppuVar3 + 3);
  }
  return 0xffffffff;
}

