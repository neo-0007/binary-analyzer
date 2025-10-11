
void FUN_00692420(undefined8 param_1,long param_2,long param_3)

{
  long in_FS_OFFSET;
  undefined1 *local_48 [2];
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48[0] = local_38;
  FUN_00692050(local_48,param_2,param_3 + param_2);
                    /* try { // try from 0069245c to 00692460 has its CatchHandler @ 0069248d */
  FUN_00692180(param_1,local_48);
  if (local_48[0] != local_38) {
    thunk_FUN_007104f0();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

