
void FUN_006a15b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[4];
  *param_1 = &PTR_FUN_00938f08;
  lVar2 = FUN_006256d0();
  if ((lVar1 != lVar2) && (lVar1 != 0)) {
    thunk_FUN_007104f0(lVar1);
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_006c4530(param_1 + 3);
  FUN_00625090(param_1);
  return;
}

