
int FUN_00607ab0(long param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  
  iVar3 = thunk_FUN_00713570(param_1,param_2,(long)param_3);
  if (iVar3 < 1) {
    return -1;
  }
  if (param_3 == 0) {
    if (param_3 + -1 == -1) {
      return 0;
    }
    iVar3 = 0;
  }
  else {
    lVar5 = 0;
    do {
      iVar3 = (int)lVar5;
      if (*(char *)(param_1 + lVar5) != *(char *)(param_2 + lVar5)) break;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != param_3);
  }
  lVar5 = (long)(param_3 + -1);
  while ((*(char *)(param_1 + lVar5) == '\0' && (*(char *)(param_2 + lVar5) == -1))) {
    lVar5 = lVar5 + -1;
    if ((int)lVar5 == -1) {
LAB_00607bc0:
      return iVar3 * 8;
    }
  }
  if (iVar3 < (int)lVar5) {
    return -1;
  }
  if (iVar3 <= (int)lVar5) {
    bVar1 = *(byte *)(param_1 + iVar3);
    bVar2 = *(byte *)(param_2 + iVar3);
    bVar6 = bVar1 ^ bVar2;
    if (bVar6 < 0x20) {
      if (bVar1 == bVar2) {
        return -1;
      }
      switch(bVar6) {
      default:
        return -1;
      case 1:
        iVar4 = 7;
        break;
      case 3:
        iVar4 = 6;
        break;
      case 7:
        iVar4 = 5;
        break;
      case 0xf:
        iVar4 = 4;
        break;
      case 0x1f:
        iVar4 = 3;
      }
    }
    else if (bVar6 == 0x3f) {
      iVar4 = 2;
    }
    else {
      if (bVar6 != 0x7f) {
        return -1;
      }
      iVar4 = 1;
    }
    if ((bVar1 & bVar6) == 0) {
      if (bVar6 == (bVar2 & bVar6)) {
        return iVar4 + iVar3 * 8;
      }
      return -1;
    }
    return -1;
  }
  goto LAB_00607bc0;
}

