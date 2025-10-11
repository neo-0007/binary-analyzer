
void FUN_0078de80(long *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[3] = 0;
  local_18 = 0;
  local_28 = "GLIBC_PRIVATE";
  local_20 = 0x10963cf85;
  lVar1 = FUN_007b82e0(param_1[1],*param_1,param_1 + 3,*(undefined8 *)(*param_1 + 0x398),&local_28,0
                       ,0);
  param_1[2] = lVar1;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

