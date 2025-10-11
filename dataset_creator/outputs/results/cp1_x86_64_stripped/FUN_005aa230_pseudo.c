
int FUN_005aa230(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  iVar1 = FUN_005a99a0(param_1,param_2,0xffffffff);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    uVar2 = FUN_005a9a70(param_1,iVar1);
    piVar3 = (int *)FUN_005aa210(uVar2);
    if (param_3 == 0) {
      return *piVar3;
    }
    iVar1 = 0;
    if (0 < param_4) {
      iVar1 = *piVar3;
      if (param_4 <= *piVar3) {
        iVar1 = param_4 + -1;
      }
      thunk_FUN_00713a50(param_3,*(undefined8 *)(piVar3 + 2),(long)iVar1);
      *(undefined1 *)(param_3 + iVar1) = 0;
    }
  }
  return iVar1;
}

