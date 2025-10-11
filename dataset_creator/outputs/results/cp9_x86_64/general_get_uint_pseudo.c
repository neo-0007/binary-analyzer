
undefined8 general_get_uint(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    if (-1 < *(char *)(*(long *)(param_1 + 0x10) + -1 + *(long *)(param_1 + 0x18))) {
      uVar1 = copy_integer(param_2,param_3,*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x18),0,0);
      return uVar1;
    }
  }
  else if (*(int *)(param_1 + 8) == 2) {
    uVar1 = copy_integer(param_2,param_3,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18),0,0);
    return uVar1;
  }
  return 0;
}

