
undefined8 FUN_0046e670(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0043b840();
  if ((int)uVar1 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      return 0;
    }
    uVar1 = FUN_004d6140(param_2);
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

