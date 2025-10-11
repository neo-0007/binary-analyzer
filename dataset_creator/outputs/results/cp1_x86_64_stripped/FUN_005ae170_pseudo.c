
void FUN_005ae170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = FUN_0041aec0(0x30,"../crypto/x509/x_pubkey.c",0x47);
  if (local_28 != 0) {
    FUN_004a54e0(&local_28,param_1,param_2,&DAT_00912d80,param_3,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

