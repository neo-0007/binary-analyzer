
void FUN_004ce070(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 *param_7,uint *param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  uVar4 = *param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == 0) {
    pbVar5 = param_1;
    if (param_3 != 0) {
      do {
        if (uVar4 == 0) {
          local_48 = *param_7;
          FUN_004d10e0(&local_48,param_4,param_5,param_6);
          *param_7 = local_48;
        }
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        bVar1 = *(byte *)((long)(int)uVar4 + (long)param_7);
        *(byte *)((long)(int)uVar4 + (long)param_7) = bVar2;
        uVar4 = uVar4 + 1 & 7;
        *param_2 = bVar2 ^ bVar1;
        param_2 = param_2 + 1;
      } while (param_1 + (param_3 - (long)pbVar5) != (byte *)0x0);
    }
  }
  else if (param_3 != 0) {
    pbVar5 = param_1;
    do {
      if (uVar4 == 0) {
        local_48 = *param_7;
        FUN_004d10e0(&local_48,param_4,param_5,param_6);
        *param_7 = local_48;
      }
      lVar3 = (long)(int)uVar4;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = bVar2 ^ *(byte *)(lVar3 + (long)param_7);
      uVar4 = uVar4 + 1 & 7;
      *param_2 = bVar2;
      *(byte *)(lVar3 + (long)param_7) = bVar2;
      param_2 = param_2 + 1;
    } while (param_1 + (param_3 - (long)pbVar5) != (byte *)0x0);
  }
  *param_8 = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

