
int ns_name_uncompress(u_char *param_1,u_char *param_2,u_char *param_3,char *param_4,size_t param_5)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  u_char auStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ns_name_unpack(param_1,param_2,param_3,auStack_138,0xff);
  if (-1 < iVar1) {
    iVar2 = ns_name_ntop(auStack_138,param_4,param_5);
    if (-1 < iVar2) goto LAB_007bedf5;
  }
  iVar1 = -1;
LAB_007bedf5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

