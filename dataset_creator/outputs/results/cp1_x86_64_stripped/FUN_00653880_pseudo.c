
void FUN_00653880(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[3];
  *param_1 = &PTR_FUN_00936378;
  lVar2 = FUN_006256d0();
  if ((lVar1 != lVar2) && (lVar1 != 0)) {
    thunk_FUN_007104f0(lVar1);
  }
  FUN_006c4530(param_1 + 2);
  FUN_00625090(param_1);
  return;
}

