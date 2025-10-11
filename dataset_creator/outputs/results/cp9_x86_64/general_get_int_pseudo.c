
undefined8 general_get_int(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = copy_integer(param_2,param_3,*(long *)(param_1 + 0x10),*(long *)(param_1 + 0x18),
                         (int)*(char *)(*(long *)(param_1 + 0x10) + -1 + *(long *)(param_1 + 0x18))
                         >> 0x1f & 0xff,1);
    return uVar1;
  }
  if (*(int *)(param_1 + 8) != 2) {
    return 0;
  }
  uVar1 = copy_integer(param_2,param_3,*(undefined8 *)(param_1 + 0x10),
                       *(undefined8 *)(param_1 + 0x18),0,1);
  return uVar1;
}

