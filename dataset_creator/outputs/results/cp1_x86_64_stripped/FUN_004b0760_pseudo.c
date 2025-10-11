
int FUN_004b0760(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_007129d0(param_2);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = FUN_006fdea0(param_2,(long)iVar1,1,*(undefined8 *)(param_1 + 0x40));
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}

