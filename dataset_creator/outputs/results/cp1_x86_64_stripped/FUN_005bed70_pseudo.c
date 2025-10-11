
void FUN_005bed70(byte *param_1,byte *param_2,long param_3,undefined8 param_4,uint *param_5,
                 uint *param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  long in_FS_OFFSET;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar2 = *param_5;
  uVar5 = *param_6;
  uVar4 = (uVar2 & 0xff0000) >> 8;
  local_50 = uVar2 >> 0x18 | uVar4 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_5[1];
  local_48 = uVar2 & 0xffff | uVar4 << 8 | (uVar2 >> 0x18) << 0x18;
  uVar2 = (uVar3 & 0xff0000) >> 8;
  local_4c = uVar3 >> 0x18 | uVar2 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  local_44 = uVar3 & 0xffff | uVar2 << 8 | (uVar3 >> 0x18) << 0x18;
  if (param_3 != 0) {
    iVar7 = 0;
    pbVar6 = param_1;
    do {
      if (uVar5 == 0) {
        iVar7 = iVar7 + 1;
        FUN_005be050(&local_50,param_4);
        local_48 = local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                   local_50 << 0x18;
        local_44 = local_4c >> 0x18 | (local_4c & 0xff0000) >> 8 | (local_4c & 0xff00) << 8 |
                   local_4c << 0x18;
      }
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      *param_2 = bVar1 ^ *(byte *)((long)&local_48 + (long)(int)uVar5);
      uVar5 = uVar5 + 1 & 7;
      param_2 = param_2 + 1;
    } while (param_1 + (param_3 - (long)pbVar6) != (byte *)0x0);
    if (iVar7 != 0) {
      *param_5 = local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                 local_50 << 0x18;
      param_5[1] = local_4c >> 0x18 | (local_4c & 0xff0000) >> 8 | (local_4c & 0xff00) << 8 |
                   local_4c << 0x18;
    }
  }
  *param_6 = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

