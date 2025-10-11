
long * FUN_0063ba70(long *param_1,long param_2,undefined8 param_3,undefined4 *param_4,long param_5)

{
  undefined4 *puVar1;
  
  FUN_0063b2f0();
  if (param_5 != 0) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
    if (param_5 != 1) {
      FUN_00771ea0(puVar1,param_4,param_5,0x3fffffffffffffff);
      return param_1;
    }
    *puVar1 = *param_4;
  }
  return param_1;
}

