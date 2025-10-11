
int _nss_files_getsgnam_r
              (char *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *__stream;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = (FILE *)__nss_files_fopen("/etc/gshadow");
  if (__stream == (FILE *)0x0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    if (param_4 < 2) {
      *param_5 = 0x22;
      iVar2 = -2;
    }
    else {
LAB_00776370:
      do {
        do {
          iVar2 = __nss_readline(__stream,param_3,param_4,&local_48);
          if (iVar2 == 2) {
            iVar2 = 0;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
            goto LAB_007763d0;
          }
          if (iVar2 != 0) {
LAB_007763be:
            *param_5 = iVar2;
            iVar2 = (iVar2 != 0x22) - 2;
            goto LAB_007763d0;
          }
          uVar3 = _nss_files_parse_sgent(param_3,param_2,param_3,param_4,param_5);
          iVar2 = __nss_parse_line_result(__stream,local_48,uVar3);
          if (iVar2 != 0) {
            if (iVar2 != 0x16) goto LAB_007763be;
            goto LAB_00776370;
          }
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
        } while ((*param_1 - 0x2bU & 0xfd) == 0);
        iVar2 = strcmp(param_1,(char *)*param_2);
      } while (iVar2 != 0);
      iVar2 = 1;
    }
LAB_007763d0:
    fclose(__stream);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

