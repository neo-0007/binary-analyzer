
undefined8 FUN_00466460(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = FUN_00473aa0(param_2);
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x10) = param_2;
      uVar2 = FUN_0053bf20(*(undefined8 *)(param_1 + 8),param_3);
      return uVar2;
    }
  }
  return 0;
}

