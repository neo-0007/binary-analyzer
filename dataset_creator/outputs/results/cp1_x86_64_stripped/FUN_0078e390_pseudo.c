
ulong FUN_0078e390(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  char local_21;
  undefined1 local_20 [8];
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  uVar1 = FUN_0078dc90(local_20,&local_18,&local_21,thunk_FUN_00784110,param_1);
  if ((int)uVar1 == 0) {
    if (local_18 == 0) goto LAB_0078e3db;
    uVar1 = 1;
  }
  if (local_21 != '\0') {
    FUN_00784300(local_18);
    uVar1 = uVar1 & 0xffffffff;
  }
LAB_0078e3db:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

