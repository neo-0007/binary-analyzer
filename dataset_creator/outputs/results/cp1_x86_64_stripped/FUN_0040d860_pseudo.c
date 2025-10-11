
void FUN_0040d860(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00419fe0(4,0);
  local_38 = param_2;
  local_30 = param_1;
  FUN_00423200(2,FUN_0040d560,&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

