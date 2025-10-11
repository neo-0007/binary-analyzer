
long gf_eq(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long in_FS_OFFSET;
  ulong local_58 [8];
  ulong local_18;
  long local_10;
  
  puVar2 = local_58;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gf_sub(local_58,param_1,param_2);
  gf_strong_reduce(local_58);
  uVar1 = 0;
  do {
    uVar1 = uVar1 | *puVar2;
    puVar2 = puVar2 + 1;
  } while (&local_18 != puVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(~uVar1 & uVar1 - 1) >> 0x3f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

