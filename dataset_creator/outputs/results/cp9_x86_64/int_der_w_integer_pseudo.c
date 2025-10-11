
bool int_der_w_integer(undefined8 param_1,int param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (param_2 < 0) {
LAB_00538df9:
    iVar1 = WPACKET_start_sub_packet(param_1);
    if (iVar1 != 0) {
      iVar1 = (*param_3)(param_1,param_4,&local_34);
      if (iVar1 != 0) {
        if ((local_34 & 0x80) != 0) {
          iVar1 = WPACKET_put_bytes__(param_1,0,1);
          if (iVar1 == 0) goto LAB_00538dc6;
        }
        iVar1 = WPACKET_close(param_1);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(param_1,2,1);
          if (iVar1 != 0) {
            iVar1 = int_end_context(param_1,param_2);
            bVar2 = iVar1 != 0;
            goto LAB_00538dc8;
          }
        }
      }
    }
  }
  else if (param_2 < 0x1f) {
    iVar1 = WPACKET_start_sub_packet();
    if (iVar1 != 0) goto LAB_00538df9;
  }
LAB_00538dc6:
  bVar2 = false;
LAB_00538dc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

