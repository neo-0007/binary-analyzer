
undefined8 FUN_0046e480(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = FUN_005b1e50(*param_1,param_2,0x1000);
    if (iVar1 != 0) {
      iVar1 = FUN_0042bcf0(param_2);
      if (iVar1 != 0) {
        FUN_0042b980(param_1[1]);
        param_1[1] = param_2;
        uVar2 = FUN_0046e420(param_1,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

