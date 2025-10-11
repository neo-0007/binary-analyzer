
undefined8 FUN_004cb740(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x11) == -1) {
    return 0;
  }
  iVar1 = FUN_004096f0(*param_2);
  lVar2 = (long)iVar1;
  if (-1 < iVar1) {
    iVar1 = FUN_00537bb0(*param_1,*param_2);
    if (iVar1 != 0) {
      thunk_FUN_00713a50(param_1 + 1,param_2 + 1,lVar2);
      thunk_FUN_00713a50(param_1 + 5,param_2 + 5,lVar2);
      thunk_FUN_00713a50(param_1 + 9,param_2 + 9,lVar2);
      thunk_FUN_00713a50(param_1 + 0xd,param_2 + 0xd,lVar2);
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      return 1;
    }
  }
  return 0;
}

