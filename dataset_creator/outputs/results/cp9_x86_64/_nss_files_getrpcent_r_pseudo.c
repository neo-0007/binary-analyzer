
int _nss_files_getrpcent_r
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __nss_files_data_open(&local_38,7,"/etc/rpc",param_4,0);
  if (iVar1 == 1) {
    iVar1 = internal_getent(*local_38,param_1,param_2,param_3,param_4);
    __nss_files_data_put(local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

