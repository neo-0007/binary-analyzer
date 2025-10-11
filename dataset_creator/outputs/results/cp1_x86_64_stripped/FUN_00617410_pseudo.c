
undefined8 FUN_00617410(long param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 0xe) {
    return 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x30) = param_3;
  return 1;
}

