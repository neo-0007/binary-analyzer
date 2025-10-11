
undefined4 FUN_00412220(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != -1) {
    uVar1 = 0;
    if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x70))) {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x68) + (long)param_2 * 4);
    }
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x70);
}

