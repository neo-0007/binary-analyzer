
int FUN_007a2400(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  iVar1 = FUN_00708fd0(FUN_007a2320,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(uint)(iVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

