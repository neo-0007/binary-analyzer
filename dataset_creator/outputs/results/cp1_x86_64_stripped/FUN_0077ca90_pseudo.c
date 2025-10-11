
int FUN_0077ca90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_007b1110(&local_48,3,"/etc/hosts");
  if (iVar1 == 1) {
    iVar1 = FUN_0077bbf0(*local_48,param_1,param_2,param_3,param_4,param_5,2);
    FUN_007b1260(local_48);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

