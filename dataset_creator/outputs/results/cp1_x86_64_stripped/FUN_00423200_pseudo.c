
void FUN_00423200(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = param_1;
  local_20 = param_2;
  local_18 = param_3;
  FUN_00545c40(DAT_0093fd28,FUN_00422c60,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

