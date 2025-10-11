
int FUN_00435d80(int *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0x7fffffff) {
    iVar3 = FUN_00435a60(param_1,1,0);
    if (iVar3 != 0) {
      iVar3 = *param_1;
      lVar2 = *(long *)(param_1 + 2);
      if ((param_3 < 0) || (iVar3 <= param_3)) {
        *(undefined8 *)(lVar2 + (long)iVar3 * 8) = param_2;
      }
      else {
        lVar1 = (long)param_3 * 8;
        thunk_FUN_00713610(lVar2 + 8 + lVar1,lVar2 + lVar1,(long)(iVar3 - param_3) << 3);
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_3 * 8) = param_2;
        iVar3 = *param_1;
      }
      param_1[4] = 0;
      *param_1 = iVar3 + 1;
      return iVar3 + 1;
    }
  }
  return 0;
}

