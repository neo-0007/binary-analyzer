
undefined8 FUN_005a8f80(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar1 = FUN_0059ddb0(*(long *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
    return uVar1;
  }
  return 0;
}

