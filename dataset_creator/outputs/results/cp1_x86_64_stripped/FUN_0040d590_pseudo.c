
undefined8 FUN_0040d590(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar2 = FUN_00423b00(*param_1);
  iVar1 = FUN_00422f70(uVar2,2,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00423c40(*param_1);
  uVar2 = FUN_00422f70(uVar2,2,param_1);
  return uVar2;
}

