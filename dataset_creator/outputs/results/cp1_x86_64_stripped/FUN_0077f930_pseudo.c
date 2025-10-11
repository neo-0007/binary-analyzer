
ulong FUN_0077f930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_007b1110(&local_38,0,"/etc/aliases",param_4,0);
  if ((int)uVar2 == 1) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    do {
      uVar1 = FUN_0077f390(*local_38,0,param_1,param_2,param_3,param_4);
    } while (uVar1 == 2);
    FUN_007b1260(local_38);
    uVar2 = (ulong)uVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

