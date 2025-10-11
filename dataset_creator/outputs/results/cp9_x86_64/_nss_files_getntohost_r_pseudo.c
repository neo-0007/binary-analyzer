
int _nss_files_getntohost_r(int *param_1,long param_2,undefined8 param_3,ulong param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *__stream;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = (FILE *)__nss_files_fopen("/etc/ethers");
  if (__stream == (FILE *)0x0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    do {
      if (param_4 < 2) {
        *param_5 = 0x22;
        iVar2 = -2;
        goto LAB_00774fce;
      }
LAB_00774f70:
      iVar2 = __nss_readline(__stream,param_3,param_4,&local_48);
      if (iVar2 == 2) {
        iVar2 = 0;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
        goto LAB_00774fce;
      }
      if (iVar2 != 0) goto LAB_00774fbc;
      uVar3 = _nss_files_parse_etherent(param_3,param_2,param_3,param_4,param_5);
      iVar2 = __nss_parse_line_result(__stream,local_48,uVar3);
      if (iVar2 != 0) goto code_r0x00774fb7;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
    } while ((*(int *)(param_2 + 8) != *param_1) || (*(short *)(param_2 + 0xc) != (short)param_1[1])
            );
    iVar2 = 1;
LAB_00774fce:
    fclose(__stream);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x00774fb7:
  if (iVar2 != 0x16) {
LAB_00774fbc:
    *param_5 = iVar2;
    iVar2 = (iVar2 != 0x22) - 2;
    goto LAB_00774fce;
  }
  goto LAB_00774f70;
}

