
bool ossl_DER_w_end_sequence(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_get_total_written(param_1,&local_30);
  if (((iVar1 != 0) && (iVar1 = WPACKET_close(param_1), iVar1 != 0)) &&
     (iVar1 = WPACKET_get_total_written(param_1,&local_28), iVar1 != 0)) {
    if (local_30 == local_28) {
      iVar1 = WPACKET_set_flags(param_1,2);
    }
    else {
      iVar1 = WPACKET_put_bytes__(param_1,0x30,1);
    }
    if (iVar1 != 0) {
      iVar1 = int_end_context(param_1,param_2);
      bVar2 = iVar1 != 0;
      goto LAB_00539241;
    }
  }
  bVar2 = false;
LAB_00539241:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

