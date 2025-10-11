
undefined8 _Unwind_GetIPInfo(long param_1,uint *param_2)

{
  *param_2 = (uint)((long)*(undefined8 *)(param_1 + 0xc0) >> 0x3f) & 1;
  return *(undefined8 *)(param_1 + 0x98);
}

