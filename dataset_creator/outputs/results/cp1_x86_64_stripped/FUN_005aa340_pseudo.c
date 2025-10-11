
undefined8 FUN_005aa340(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    uVar1 = FUN_005ad820(param_1 + 0x20);
    return uVar1;
  }
  return 0;
}

