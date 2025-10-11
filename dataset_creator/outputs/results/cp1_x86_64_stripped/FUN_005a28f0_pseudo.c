
bool FUN_005a28f0(long param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = thunk_FUN_004a1fa0(param_1 + 0x10,*(undefined8 *)(param_2 + 2),*param_2);
    return iVar1 != 0;
  }
  return false;
}

