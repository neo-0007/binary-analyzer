
uint FUN_00771b10(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((((param_2 != (undefined4 *)0x0) &&
       (uVar2 = param_1 >> ((byte)*param_2 & 0x1f), uVar2 < (uint)param_2[1])) &&
      (param_2[uVar2 + 5] != 0)) &&
     (uVar2 = *(uint *)((long)param_2 +
                       (ulong)(uint)param_2[uVar2 + 5] +
                       (ulong)(param_1 >> ((byte)param_2[2] & 0x1f) & param_2[3]) * 4), uVar1 = 0,
     uVar2 != 0)) {
    uVar1 = *(uint *)((long)param_2 + (ulong)uVar2 + (ulong)(param_1 >> 5 & param_2[4]) * 4) >>
            ((byte)param_1 & 0x1f) & 1;
  }
  return uVar1;
}

