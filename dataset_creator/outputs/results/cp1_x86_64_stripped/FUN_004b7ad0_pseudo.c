
int FUN_004b7ad0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar1 = 0x50;
        }
        else {
          iVar1 = 0x70;
        }
      }
      else {
        iVar1 = 0x80;
      }
    }
    else {
      iVar1 = 0xc0;
    }
  }
  else {
    iVar1 = 0x100;
  }
  if (param_2 == -1) {
    return iVar1;
  }
  if (param_2 >> 1 < iVar1) {
    iVar1 = param_2 >> 1;
  }
  if (param_2 < 0xa0) {
    iVar1 = 0;
  }
  return iVar1;
}

