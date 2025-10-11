
short * FUN_0062ec30(short *param_1,long param_2,ulong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  short *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  if (((((param_5 & 4) != 0) && (2 < (ulong)(param_2 - (long)param_1))) && (*param_1 == -0x4411)) &&
     ((char)param_1[1] == -0x41)) {
    local_48 = (short *)((long)param_1 + 3);
  }
  local_40 = param_2;
  if (param_3 < 2) {
    uVar3 = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 1;
    do {
      uVar1 = FUN_0062c540(&local_48,param_4);
      if (param_4 < uVar1) goto LAB_0062eca5;
      if (uVar1 < 0x10000) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3 + 1;
      uVar3 = uVar3 + 2;
    } while (uVar3 < param_3);
  }
  if (param_3 == uVar3) {
    if (0xffff < param_4) {
      param_4 = 0xffff;
    }
    FUN_0062c540(&local_48,param_4);
  }
LAB_0062eca5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

