
void FUN_00566620(byte *param_1,byte *param_2,long param_3,undefined8 param_4,uint *param_5,
                 uint *param_6,int param_7)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar4 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 == 0) {
    pbVar5 = param_1;
    if (param_3 != 0) {
      do {
        if (uVar4 == 0) {
          local_58 = (ulong)*param_5;
          local_50 = (ulong)param_5[1];
          FUN_00565ce0(&local_58,param_4);
          *param_5 = (uint)local_58;
          param_5[1] = (uint)local_50;
        }
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = *(byte *)((long)(int)uVar4 + (long)param_5);
        *(byte *)((long)(int)uVar4 + (long)param_5) = bVar3;
        uVar4 = uVar4 + 1 & 7;
        *param_2 = bVar3 ^ bVar1;
        param_2 = param_2 + 1;
      } while (param_1 + (param_3 - (long)pbVar5) != (byte *)0x0);
    }
  }
  else if (param_3 != 0) {
    pbVar5 = param_1;
    do {
      if (uVar4 == 0) {
        local_58 = (ulong)*param_5;
        local_50 = (ulong)param_5[1];
        FUN_00565ce0(&local_58,param_4);
        *param_5 = (uint)local_58;
        param_5[1] = (uint)local_50;
      }
      lVar2 = (long)(int)uVar4;
      bVar3 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar3 = bVar3 ^ *(byte *)(lVar2 + (long)param_5);
      uVar4 = uVar4 + 1 & 7;
      *param_2 = bVar3;
      *(byte *)(lVar2 + (long)param_5) = bVar3;
      param_2 = param_2 + 1;
    } while (param_1 + (param_3 - (long)pbVar5) != (byte *)0x0);
  }
  *param_6 = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

