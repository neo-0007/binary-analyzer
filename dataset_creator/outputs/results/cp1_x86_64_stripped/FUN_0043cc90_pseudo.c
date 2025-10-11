
void FUN_0043cc90(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  if (*param_2 != 0) {
    return;
  }
  if (*param_1 != 0) {
    iVar5 = 0;
    do {
      if ((code *)param_1[4] == (code *)0x0) {
LAB_0043ccc7:
        lVar3 = (long)iVar5;
        lVar1 = param_1[1];
        iVar5 = iVar5 + 1;
        plVar4 = param_2 + lVar3 * 4;
        *plVar4 = *param_1;
        plVar4[1] = lVar1;
        lVar1 = param_1[3];
        plVar4[2] = param_1[2];
        plVar4[3] = lVar1;
      }
      else {
        iVar2 = (*(code *)param_1[4])();
        if (iVar2 != 0) goto LAB_0043ccc7;
      }
      param_1 = param_1 + 5;
    } while (*param_1 != 0);
    param_2 = param_2 + (long)iVar5 * 4;
  }
  lVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  lVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = lVar1;
  return;
}

