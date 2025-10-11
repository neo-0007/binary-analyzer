
int FUN_00780180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_007b1110(&local_38,7,"/etc/rpc",param_4,0);
  if (iVar1 == 1) {
    iVar1 = FUN_00780040(*local_38,param_1,param_2,param_3,param_4);
    FUN_007b1260(local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

