
undefined4 match_prefix(short *param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  short *psVar4;
  byte *pbVar5;
  byte bVar6;
  long in_FS_OFFSET;
  short local_38;
  short local_36;
  undefined4 local_34;
  undefined8 local_30;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  long local_10;
  
  psVar4 = &local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 2) {
    bVar6 = 0;
    local_38 = 10;
    local_36 = param_1[1];
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_26 = 0xffff;
    local_24 = *(undefined4 *)(param_1 + 2);
    local_20 = 0;
  }
  else {
    if (*param_1 != 10) {
LAB_0075fbae:
      if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    bVar6 = *(byte *)(param_1 + 4);
    psVar4 = param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  pbVar1 = (byte *)(psVar4 + 4);
  pbVar5 = param_2;
  if (uVar2 < 8) goto LAB_0075fb97;
  do {
    while (pbVar3 = pbVar1, *param_2 == *pbVar3) {
      uVar2 = uVar2 - 8;
      param_2 = param_2 + 1;
      pbVar1 = pbVar3 + 1;
      if (uVar2 < 8) {
        uVar2 = (uint)(pbVar3[1] ^ *param_2) & 0xff00 >> ((byte)uVar2 & 0x1f);
        goto joined_r0x0075fbd8;
      }
    }
    while( true ) {
      param_2 = pbVar5 + 0x18;
      uVar2 = *(uint *)(pbVar5 + 0x28);
      pbVar1 = (byte *)(psVar4 + 4);
      pbVar5 = param_2;
      if (7 < uVar2) break;
LAB_0075fb97:
      uVar2 = (uint)(bVar6 ^ *param_2) & 0xff00 >> ((byte)uVar2 & 0x1f);
      pbVar5 = param_2;
joined_r0x0075fbd8:
      if (uVar2 == 0) {
        param_3 = *(undefined4 *)(pbVar5 + 0x14);
        goto LAB_0075fbae;
      }
    }
  } while( true );
}

