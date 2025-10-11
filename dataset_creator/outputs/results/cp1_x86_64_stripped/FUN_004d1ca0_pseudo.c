
void FUN_004d1ca0(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 *param_7,uint *param_8)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_40;
  
  uVar3 = *param_8;
  local_50 = *(undefined4 *)param_7;
  uStack_4c = *(undefined4 *)((long)param_7 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_7;
  if (param_3 != 0) {
    iVar6 = 0;
    pbVar4 = param_1;
    uVar5 = local_50;
    uVar2 = uStack_4c;
    do {
      if (uVar3 == 0) {
        iVar6 = iVar6 + 1;
        FUN_004d10e0(&local_50,param_4,param_5,param_6,param_5,param_6,param_4);
        local_48 = CONCAT44(uStack_4c,local_50);
        uVar5 = local_50;
        uVar2 = uStack_4c;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *param_2 = bVar1 ^ *(byte *)((long)&local_48 + (long)(int)uVar3);
      uVar3 = uVar3 + 1 & 7;
      param_2 = param_2 + 1;
    } while (param_1 + (param_3 - (long)pbVar4) != (byte *)0x0);
    if (iVar6 != 0) {
      *(undefined4 *)param_7 = uVar5;
      *(undefined4 *)((long)param_7 + 4) = uVar2;
    }
  }
  *param_8 = uVar3;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

