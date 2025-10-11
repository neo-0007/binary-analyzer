
void FUN_0054a3e0(long param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_2;
  if (param_1 != 0) {
    FUN_0054a1f0(param_1,0,FUN_0054a300,&local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

