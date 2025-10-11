
ulong FUN_007a2290(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_2 * param_3;
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_00706d20(param_4,param_1,lVar2);
  if (lVar2 - uVar1 != 0) {
    return uVar1 / param_2;
  }
  return param_3;
}

