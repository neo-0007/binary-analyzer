
int _nss_files_gethostent_r
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __nss_files_data_open(&local_48,3,"/etc/hosts");
  if (iVar1 == 1) {
    iVar1 = internal_getent(*local_48,param_1,param_2,param_3,param_4,param_5,2);
    __nss_files_data_put(local_48);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

