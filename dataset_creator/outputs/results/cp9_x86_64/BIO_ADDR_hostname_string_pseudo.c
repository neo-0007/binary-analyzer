
undefined8 BIO_ADDR_hostname_string(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = BIO_sock_init();
  if ((iVar1 != 1) ||
     (iVar1 = addr_strings_part_0(param_1,param_2,&local_28,0), uVar2 = local_28, iVar1 == 0)) {
    uVar2 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

