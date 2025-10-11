
void FUN_004d1c30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = *param_1;
  if (param_6 == 0) {
    FUN_004d11f0(&local_18,param_3,param_4,param_5);
  }
  else {
    FUN_004d10e0();
  }
  *param_2 = local_18;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

