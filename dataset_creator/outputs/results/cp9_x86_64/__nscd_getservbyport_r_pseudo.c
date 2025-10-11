
void __nscd_getservbyport_r
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_41 = 0;
  lVar1 = _itoa_word((long)param_1,&local_41,10,0);
  nscd_getserv_r(lVar1,(long)&local_41 - lVar1,param_2,0x11,param_3,param_4,param_5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

