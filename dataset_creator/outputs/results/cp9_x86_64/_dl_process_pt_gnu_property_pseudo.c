
void _dl_process_pt_gnu_property(long *param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  
  if ((*(long *)(param_3 + 0x30) == 8) && (0xc < *(ulong *)(param_3 + 0x28))) {
    puVar1 = (uint *)(*param_1 + *(long *)(param_3 + 0x10));
    lVar2 = 0xc - (long)puVar1;
    do {
      if (((*puVar1 == 4) && (puVar1[2] == 5)) && (puVar1[3] == 0x554e47)) {
        return;
      }
      puVar1 = (uint *)((long)puVar1 +
                       (((ulong)*puVar1 + 0x13 & 0xfffffffffffffff8) + 7 + (ulong)puVar1[1] &
                       0xfffffffffffffff8));
    } while ((ulong)((long)puVar1 + lVar2) < *(ulong *)(param_3 + 0x28));
  }
  return;
}

