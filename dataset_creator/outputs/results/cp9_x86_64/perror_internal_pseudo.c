
void perror_internal(undefined8 param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char acStack_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (char *)0x0) || (pcVar2 = ": ", *param_2 == '\0')) {
    pcVar2 = "";
    param_2 = "";
  }
  pcVar1 = strerror_r(param_3,acStack_428,0x400);
  __fxprintf(param_1,"%s%s%s\n",param_2,pcVar2,pcVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

