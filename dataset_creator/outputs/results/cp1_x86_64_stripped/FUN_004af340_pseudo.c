
bool FUN_004af340(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = param_2;
  iVar1 = FUN_004aef40(param_1,0x5421,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

