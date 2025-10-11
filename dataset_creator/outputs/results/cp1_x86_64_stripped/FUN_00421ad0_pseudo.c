
int FUN_00421ad0(long param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x90) == (code *)0x0) {
    return 1;
  }
  iVar1 = (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 0xd0));
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_0041fe90(param_1);
  return 0;
}

