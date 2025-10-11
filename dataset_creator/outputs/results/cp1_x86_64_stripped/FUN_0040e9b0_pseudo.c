
ulong FUN_0040e9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = FUN_0053de70(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2,
                           param_3);
      return uVar3;
    }
  }
  else {
    local_24 = 0;
    uVar1 = FUN_0040ea70(param_1,&local_24);
    if (0 < (int)uVar1) {
      uVar2 = FUN_00423b00(local_24);
      FUN_0041c470(param_2,uVar2,param_3);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

