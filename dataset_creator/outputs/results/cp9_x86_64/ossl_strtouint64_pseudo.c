
long ossl_strtouint64(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = 10;
  iVar2 = (int)*param_1;
  if (*param_1 == '0') {
    iVar2 = ossl_tolower((int)param_1[1]);
    if (iVar2 == 0x78) {
      iVar2 = (int)param_1[2];
      uVar5 = 0x10;
      param_1 = param_1 + 2;
    }
    else {
      iVar2 = (int)param_1[1];
      uVar5 = 8;
      param_1 = param_1 + 1;
    }
  }
  lVar4 = 0;
  while( true ) {
    param_1 = param_1 + 1;
    iVar1 = ossl_isdigit(iVar2);
    if (iVar1 == 0) {
      iVar1 = ossl_ctype_check(iVar2,0x10);
      if (iVar1 == 0) {
        return lVar4;
      }
      iVar2 = ossl_tolower(iVar2);
      uVar3 = iVar2 - 0x57;
    }
    else {
      uVar3 = iVar2 - 0x30;
    }
    if (uVar5 <= uVar3) break;
    lVar4 = lVar4 * (ulong)uVar5 + (ulong)uVar3;
    iVar2 = (int)*param_1;
  }
  return lVar4;
}

