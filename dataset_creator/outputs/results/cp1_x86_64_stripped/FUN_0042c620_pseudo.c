
undefined8
FUN_0042c620(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 != 0) && (*(int **)(param_1 + 0x78) != (int *)0x0)) &&
      (iVar1 = **(int **)(param_1 + 0x78), iVar1 != 6)) && (iVar1 != 0x390)) {
    return 0xffffffff;
  }
  uVar2 = FUN_00414800(param_1,0xffffffff,param_2,param_3,param_4,param_5);
  return uVar2;
}

