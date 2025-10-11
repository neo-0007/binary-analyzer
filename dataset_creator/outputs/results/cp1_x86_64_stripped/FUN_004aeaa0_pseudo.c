
ulong FUN_004aeaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30[0] = param_1;
  iVar1 = FUN_004adbd0(local_30,0,&local_38,&local_18,&local_1c,param_3,param_4);
  if ((iVar1 == 0) || (local_1c != 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = local_18 & 0xffffffff;
    if (0x7fffffff < local_18) {
      uVar2 = 0xffffffff;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

