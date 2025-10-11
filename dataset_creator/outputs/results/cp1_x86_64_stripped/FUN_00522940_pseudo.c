
undefined8 FUN_00522940(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00521e40();
  if ((0 < (int)uVar1) &&
     (((param_1 == 2 || (uVar1 = 0, param_1 == 5)) && (uVar1 = 0, *(int *)(param_3 + 8) == 1)))) {
    **(undefined8 **)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x28);
    return 1;
  }
  return uVar1;
}

