
undefined8
FUN_007c9420(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_007c84c0(param_1,auStack_138,0xff);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_007c94b0(auStack_138,param_2,param_3,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

