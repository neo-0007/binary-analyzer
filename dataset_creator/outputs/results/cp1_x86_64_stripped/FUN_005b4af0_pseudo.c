
undefined8 FUN_005b4af0(uint param_1,long *param_2)

{
  *(uint *)*param_2 =
       param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  *param_2 = *param_2 + 4;
  return 1;
}

