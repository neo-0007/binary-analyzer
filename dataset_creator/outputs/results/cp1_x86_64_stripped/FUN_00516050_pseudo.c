
void FUN_00516050(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0053e0e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00435f80(param_2,param_1);
    if (iVar1 < 1) {
      FUN_0053e0f0(param_1);
      return;
    }
  }
  return;
}

