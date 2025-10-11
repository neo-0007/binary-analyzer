
void FUN_005cc6f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *param_1;
  FUN_004ce920(&local_18,param_3,param_4);
  *param_2 = local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

