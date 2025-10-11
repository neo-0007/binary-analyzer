
int _nss_files_getgrent_r(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined8 *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = __nss_files_data_open(&local_50,2,"/etc/group",param_4,0);
  if (iVar3 == 1) {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    uVar2 = *local_50;
    if (param_3 < 2) {
      *param_4 = 0x22;
      iVar3 = -2;
    }
    else {
      do {
        iVar4 = __nss_readline(uVar2,param_2,param_3,&local_48);
        if (iVar4 == 2) {
          iVar3 = 0;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          goto LAB_00774247;
        }
        if (iVar4 != 0) break;
        uVar5 = _nss_files_parse_grent(param_2,param_1,param_2,param_3,param_4);
        iVar4 = __nss_parse_line_result(uVar2,local_48,uVar5);
        if (iVar4 == 0) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          goto LAB_00774247;
        }
      } while (iVar4 == 0x16);
      *param_4 = iVar4;
      iVar3 = (iVar4 != 0x22) - 2;
    }
LAB_00774247:
    __nss_files_data_put(local_50);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

