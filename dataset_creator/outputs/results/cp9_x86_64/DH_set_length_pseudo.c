
undefined8 DH_set_length(long param_1,undefined4 param_2)

{
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return 1;
}

