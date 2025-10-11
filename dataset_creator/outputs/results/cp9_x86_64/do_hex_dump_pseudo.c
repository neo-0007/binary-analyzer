
int do_hex_dump(code *param_1,long param_2,byte *param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  long in_FS_OFFSET;
  char local_42;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (pbVar2 = param_3 + param_4, param_3 != pbVar2)) {
    do {
      local_41 = "0123456789ABCDEF"[*param_3 & 0xf];
      local_42 = "0123456789ABCDEF"[*param_3 >> 4];
      iVar1 = (*param_1)(param_2,&local_42,2);
      if (iVar1 == 0) {
        param_4 = -1;
        goto LAB_005a2d1e;
      }
      param_3 = param_3 + 1;
    } while (pbVar2 != param_3);
  }
  param_4 = param_4 * 2;
LAB_005a2d1e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

