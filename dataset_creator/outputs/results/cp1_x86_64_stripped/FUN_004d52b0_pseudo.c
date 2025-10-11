
int FUN_004d52b0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(long *)(param_3 + 0xb8) + 0x10))();
  iVar3 = iVar1;
  if (0 < iVar1) {
    iVar2 = FUN_004b7bb0(*(undefined8 *)(param_3 + 8));
    iVar3 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar3 = iVar2 + 7;
    }
    iVar3 = iVar3 >> 3;
    iVar2 = iVar3 - iVar1;
    if (0 < iVar2) {
      thunk_FUN_00713610(param_1 + iVar2,param_1,(long)iVar1);
      thunk_FUN_00713720(param_1,0,(long)iVar2);
      return iVar3;
    }
  }
  return iVar3;
}

