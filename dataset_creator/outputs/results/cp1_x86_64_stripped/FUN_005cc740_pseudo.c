
void FUN_005cc740(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 *param_5,
                 uint *param_6)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_40;
  
  uStack_4c = *(undefined4 *)((long)param_5 + 4);
  local_50 = *(undefined4 *)param_5;
  uVar2 = *param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_5;
  if (param_3 != 0) {
    iVar4 = 0;
    pbVar3 = param_1;
    do {
      if (uVar2 == 0) {
        iVar4 = iVar4 + 1;
        FUN_004ce920(&local_50,param_4,1);
        local_48 = CONCAT44(uStack_4c,local_50);
      }
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *param_2 = bVar1 ^ *(byte *)((long)&local_48 + (long)(int)uVar2);
      uVar2 = uVar2 + 1 & 7;
      param_2 = param_2 + 1;
    } while (param_1 + (param_3 - (long)pbVar3) != (byte *)0x0);
    if (iVar4 != 0) {
      *param_5 = CONCAT44(uStack_4c,local_50);
    }
  }
  *param_6 = uVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

