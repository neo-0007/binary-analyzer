
bool ossl_encode_der_integer(undefined8 param_1,BIGNUM *param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_38;
  long local_30;
  
  bVar3 = false;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_negative(param_2);
  if (iVar1 == 0) {
    bVar3 = false;
    iVar1 = BN_num_bits(param_2);
    iVar2 = WPACKET_start_sub_packet(param_1);
    if (iVar2 != 0) {
      iVar2 = WPACKET_put_bytes__(param_1,2,1);
      if (iVar2 != 0) {
        if (iVar1 < 0) {
          iVar1 = iVar1 + 7;
        }
        iVar2 = (iVar1 >> 3) + 1;
        iVar1 = ossl_encode_der_length(param_1,(long)iVar2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_allocate_bytes(param_1,(long)iVar2,&local_38);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_1);
            if (iVar1 != 0) {
              bVar3 = true;
              if (local_38 != 0) {
                iVar1 = BN_bn2binpad(param_2,local_38,iVar2);
                bVar3 = iVar2 == iVar1;
              }
            }
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

