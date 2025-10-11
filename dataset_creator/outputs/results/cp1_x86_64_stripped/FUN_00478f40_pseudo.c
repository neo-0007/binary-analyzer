
ulong FUN_00478f40(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = 0;
  local_14 = 0x10;
  do {
    *(byte *)(param_2 + lVar1) = *(byte *)(param_2 + lVar1) ^ *(byte *)(param_3 + lVar1);
    lVar1 = lVar1 + 1;
  } while (param_4 != lVar1);
  uVar2 = FUN_005366f0(*(undefined8 *)(param_1 + 0x10),param_2,&local_14,param_2,param_4);
  if ((int)uVar2 != 0) {
    uVar2 = (ulong)(local_14 == param_4);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

