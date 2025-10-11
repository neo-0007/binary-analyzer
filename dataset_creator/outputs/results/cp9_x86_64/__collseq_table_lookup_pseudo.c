
undefined4 __collseq_table_lookup(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  uVar1 = param_2 >> ((byte)*param_1 & 0x1f);
  if (((uVar1 < (uint)param_1[1]) && (param_1[uVar1 + 5] != 0)) &&
     (uVar1 = *(uint *)((long)param_1 +
                       (ulong)(uint)param_1[uVar1 + 5] +
                       (ulong)(param_2 >> ((byte)param_1[2] & 0x1f) & param_1[3]) * 4), uVar1 != 0))
  {
    uVar2 = *(undefined4 *)((long)param_1 + (ulong)uVar1 + (ulong)(param_2 & param_1[4]) * 4);
  }
  return uVar2;
}

