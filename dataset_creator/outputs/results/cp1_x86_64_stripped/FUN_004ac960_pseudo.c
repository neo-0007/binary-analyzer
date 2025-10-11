
undefined8 FUN_004ac960(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (0x7fffffff < param_3) {
    param_3 = 0x7fffffff;
  }
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x28))(param_1,param_2,param_3);
  lVar2 = 0;
  if (0 < (int)uVar1) {
    lVar2 = (long)(int)uVar1;
    uVar1 = 1;
  }
  *param_4 = lVar2;
  return uVar1;
}

