
int ns_name_compress(char *param_1,u_char *param_2,size_t param_3,u_char **param_4,u_char **param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  u_char auStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ns_name_pton(param_1,auStack_138,0xff);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = ns_name_pack(auStack_138,param_2,(int)param_3,param_4,param_5);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

