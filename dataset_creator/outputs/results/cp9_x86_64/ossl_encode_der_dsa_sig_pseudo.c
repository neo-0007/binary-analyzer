
bool ossl_encode_der_dsa_sig(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_is_null_buf();
  iVar2 = WPACKET_start_sub_packet(param_1);
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      iVar2 = WPACKET_init_null(local_68,0);
      if (iVar2 != 0) {
        iVar2 = ossl_encode_der_integer(local_68,param_2);
        if (((iVar2 == 0) || (iVar2 = ossl_encode_der_integer(local_68,param_3), iVar2 == 0)) ||
           ((iVar2 = WPACKET_get_length(local_68,&local_70), iVar2 == 0 ||
            (iVar2 = WPACKET_finish(local_68), iVar2 == 0)))) {
          WPACKET_cleanup(local_68);
          bVar3 = false;
          goto LAB_0053843a;
        }
LAB_00538480:
        iVar2 = WPACKET_put_bytes__(param_1,0x30,1);
        if (((iVar2 != 0) && (iVar2 = ossl_encode_der_length(param_1,local_70), iVar2 != 0)) &&
           ((iVar1 != 0 ||
            ((iVar1 = ossl_encode_der_integer(param_1,param_2), iVar1 != 0 &&
             (iVar1 = ossl_encode_der_integer(param_1,param_3), iVar1 != 0)))))) {
          iVar1 = WPACKET_close(param_1);
          bVar3 = iVar1 != 0;
          goto LAB_0053843a;
        }
      }
    }
    else {
      iVar2 = ossl_encode_der_integer(param_1,param_2);
      if (((iVar2 != 0) && (iVar2 = ossl_encode_der_integer(param_1,param_3), iVar2 != 0)) &&
         (iVar2 = WPACKET_get_length(param_1,&local_70), iVar2 != 0)) goto LAB_00538480;
    }
  }
  bVar3 = false;
LAB_0053843a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar3;
}

