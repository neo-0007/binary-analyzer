
int FUN_004a1f30(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar2 = 1;
    iVar1 = iVar2;
    if (0x1e < param_3) {
      do {
        iVar1 = iVar2 + 1;
        if (param_3 >> 7 == 0) break;
        iVar2 = iVar2 + 2;
        param_3 = param_3 >> 0xe;
        iVar1 = iVar2;
      } while (param_3 != 0);
    }
    if (param_1 == 2) {
      iVar1 = iVar1 + 3;
    }
    else {
      iVar1 = iVar1 + 1;
      iVar2 = param_2;
      if (0x7f < param_2) {
        do {
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 >> 8;
        } while (iVar2 != 0);
      }
    }
    if (iVar1 < 0x7fffffff - param_2) {
      return iVar1 + param_2;
    }
  }
  return -1;
}

