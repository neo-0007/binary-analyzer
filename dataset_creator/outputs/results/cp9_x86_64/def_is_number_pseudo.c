
ushort def_is_number(long param_1,char param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (-1 < param_2) {
    uVar1 = *(ushort *)(*(long *)(param_1 + 8) + (long)param_2 * 2) & 1;
  }
  return uVar1;
}

