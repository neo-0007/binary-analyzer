
bool FUN_006b8910(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long in_FS_OFFSET;
  bool bVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = 0x1000000000;
  local_18 = 0;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,*param_3,&local_28);
  bVar1 = ((uint)local_20 & 6) == 6;
  if (bVar1) {
    *param_3 = local_28;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

