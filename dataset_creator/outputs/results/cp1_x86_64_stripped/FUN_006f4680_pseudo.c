
uint FUN_006f4680(undefined8 *param_1,int param_2,int param_3)

{
  return (param_2 + 0x7fU & 0xff) << 0x17 | (uint)*param_1 & 0x7fffff | param_3 << 0x1f;
}

