
int FUN_0062e9f0(long param_1,undefined8 param_2,short *param_3,long param_4,long param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  short *local_48;
  long local_40;
  long local_30;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_3;
  if (((((*(byte *)(param_1 + 0x20) & 4) != 0) && (2 < (ulong)(param_4 - (long)param_3))) &&
      (*param_3 == -0x4411)) && ((char)param_3[1] == -0x41)) {
    local_48 = (short *)((long)param_3 + 3);
  }
  lVar3 = param_5 + -1;
  local_40 = param_4;
  if (param_5 != 0) {
    do {
      uVar2 = FUN_0062c540(&local_48,uVar1 & 0xffffffff);
      bVar4 = lVar3 != 0;
      lVar3 = lVar3 + -1;
    } while (bVar4 && uVar2 <= (uint)uVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)local_48 - (int)param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

