
uint FUN_00771a10(uint param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(*param_2 + 0x40 + (ulong)*(uint *)(*param_2 + 0xd0) * 8);
  uVar2 = param_1 >> ((byte)*puVar1 & 0x1f);
  if (((uVar2 < (uint)puVar1[1]) && (puVar1[uVar2 + 5] != 0)) &&
     (uVar2 = *(uint *)((long)puVar1 +
                       (ulong)(uint)puVar1[uVar2 + 5] +
                       (ulong)(param_1 >> ((byte)puVar1[2] & 0x1f) & puVar1[3]) * 4), uVar2 != 0)) {
    return param_1 + *(int *)((long)puVar1 + (ulong)uVar2 + (ulong)(param_1 & puVar1[4]) * 4);
  }
  return param_1;
}

