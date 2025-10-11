
ulong FUN_007c8770(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_838 [1040];
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_007c9350(param_1,auStack_838,0x401);
  if (-1 < iVar1) {
    iVar1 = FUN_007c9350(param_2,local_428,0x401);
    if (-1 < iVar1) {
      iVar1 = thunk_FUN_007a30f0(auStack_838,local_428);
      uVar2 = (ulong)(iVar1 == 0);
      goto LAB_007c87e5;
    }
  }
  uVar2 = 0xffffffff;
LAB_007c87e5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

