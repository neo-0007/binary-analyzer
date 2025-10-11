
int FUN_005a25f0(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    param_3 = param_3 + 1;
    if (param_3 < 0) {
      param_3 = 0;
    }
    iVar1 = FUN_00436480();
    if (param_3 < iVar1) {
      do {
        lVar2 = FUN_004364a0(param_1,param_3);
        if (*(int *)(lVar2 + 8) < 1) {
          if (param_2 == 0) {
            return param_3;
          }
        }
        else if (param_2 != 0) {
          return param_3;
        }
        param_3 = param_3 + 1;
      } while (iVar1 != param_3);
    }
  }
  return -1;
}

