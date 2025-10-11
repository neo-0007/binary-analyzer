
undefined8 FUN_005b4ad0(ushort param_1,long *param_2)

{
  *(ushort *)*param_2 = param_1 << 8 | param_1 >> 8;
  *param_2 = *param_2 + 2;
  return 1;
}

