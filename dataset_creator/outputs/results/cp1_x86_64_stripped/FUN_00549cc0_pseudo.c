
ulong FUN_00549cc0(undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_70;
  char *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "info";
  local_60 = 4;
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_58 = &DAT_0080656e;
  iVar1 = FUN_00549660(param_1,(long)param_2,&local_70,&local_68,param_3,param_4);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    uVar2 = local_70 & 0xffffffff;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

