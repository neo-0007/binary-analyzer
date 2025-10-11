
ulong FUN_005b44f0(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0x18;
  local_38 = thunk_FUN_007129d0(param_2);
  local_28 = 0;
  local_30 = param_2;
  uVar2 = FUN_005b44d0(&local_38);
  if (((int)uVar2 != 0) && (uVar2 = 1, param_1 != 0)) {
    iVar1 = FUN_004a20e0(param_1,&local_38);
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

