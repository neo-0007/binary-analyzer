
uint FUN_007715b0(uint param_1,long *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1 & 0xffffff80) != 0) {
    puVar1 = *(undefined4 **)(*param_2 + 0x40 + (ulong)(*(int *)(*param_2 + 200) + 3) * 8);
    bVar2 = (byte)*puVar1 & 0x1f;
    uVar3 = param_1 >> bVar2;
    uVar4 = 0 >> bVar2;
    if (((uVar3 < (uint)puVar1[1]) && (puVar1[uVar3 + 5] != 0)) &&
       (uVar3 = *(uint *)((long)puVar1 +
                         (ulong)(uint)puVar1[uVar3 + 5] +
                         (ulong)(param_1 >> ((byte)puVar1[2] & 0x1f) & puVar1[3]) * 4), uVar3 != 0))
    {
      uVar4 = *(uint *)((long)puVar1 + (ulong)uVar3 + (ulong)(param_1 >> 5 & puVar1[4]) * 4) >>
              ((byte)param_1 & 0x1f) & 1;
    }
    return uVar4;
  }
  return (uint)(param_1 - 0x30 < 10);
}

