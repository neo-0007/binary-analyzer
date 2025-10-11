
uint FUN_00771360(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if ((((param_2 != (undefined4 *)0x0) &&
       (uVar1 = param_1 >> ((byte)*param_2 & 0x1f), uVar1 < (uint)param_2[1])) &&
      (param_2[uVar1 + 5] != 0)) &&
     (uVar1 = *(uint *)((long)param_2 +
                       (ulong)(uint)param_2[uVar1 + 5] +
                       (ulong)(param_1 >> ((byte)param_2[2] & 0x1f) & param_2[3]) * 4), uVar1 != 0))
  {
    return param_1 + *(int *)((long)param_2 + (ulong)uVar1 + (ulong)(param_1 & param_2[4]) * 4);
  }
  return param_1;
}

