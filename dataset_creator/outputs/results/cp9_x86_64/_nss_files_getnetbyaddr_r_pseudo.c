
int _nss_files_getnetbyaddr_r
              (int param_1,int param_2,long param_3,undefined8 param_4,ulong param_5,int *param_6,
              undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *__stream;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = (FILE *)__nss_files_fopen("/etc/networks");
  if (__stream == (FILE *)0x0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    if (param_5 < 2) {
      *param_6 = 0x22;
      iVar2 = -2;
      *param_7 = 0xffffffff;
    }
    else {
LAB_00773fc8:
      do {
        iVar2 = __nss_readline(__stream,param_4,param_5,&local_48);
        if (iVar2 == 2) {
          iVar2 = 0;
          *param_7 = 1;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
          goto LAB_00774031;
        }
        if (iVar2 != 0) {
LAB_00774014:
          *param_6 = iVar2;
          *param_7 = 0xffffffff;
          iVar2 = (iVar2 != 0x22) - 2;
          goto LAB_00774031;
        }
        uVar3 = _nss_files_parse_netent(param_4,param_3,param_4,param_5,param_6);
        iVar2 = __nss_parse_line_result(__stream,local_48,uVar3);
        if (iVar2 != 0) {
          if (iVar2 != 0x16) goto LAB_00774014;
          goto LAB_00773fc8;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      } while (((param_2 != 0) && (*(int *)(param_3 + 0x10) != param_2)) ||
              (*(int *)(param_3 + 0x14) != param_1));
      iVar2 = 1;
    }
LAB_00774031:
    fclose(__stream);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

