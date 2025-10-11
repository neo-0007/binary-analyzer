
void wait_on_socket(int param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  timespec local_58;
  pollfd local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48.events = 0x19;
  local_48.fd = param_1;
  iVar2 = poll(&local_48,1,(int)param_2);
  if ((iVar2 == -1) && (*(int *)(in_FS_OFFSET + -0x58) == 4)) {
    clock_gettime(0,&local_58);
    lVar1 = local_58.tv_nsec + 500000;
    lVar3 = local_58.tv_sec * 1000 + param_2;
    while ((iVar2 = poll(&local_48,1,(int)param_2), iVar2 == -1 &&
           (*(int *)(in_FS_OFFSET + -0x58) == 4))) {
      clock_gettime(0,&local_58);
      param_2 = (lVar3 + lVar1 / 1000000) -
                ((local_58.tv_nsec + 500000) / 1000000 + local_58.tv_sec * 1000);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

