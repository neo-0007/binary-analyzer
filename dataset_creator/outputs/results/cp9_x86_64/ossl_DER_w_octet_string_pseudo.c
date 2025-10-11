
bool ossl_DER_w_octet_string(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((((param_2 < 0) || ((param_2 < 0x1f && (iVar1 = WPACKET_start_sub_packet(), iVar1 != 0)))) &&
      (iVar1 = WPACKET_start_sub_packet(param_1), iVar1 != 0)) &&
     (((iVar1 = WPACKET_memcpy(param_1,param_3,param_4), iVar1 != 0 &&
       (iVar1 = WPACKET_close(param_1), iVar1 != 0)) &&
      (iVar1 = WPACKET_put_bytes__(param_1,4,1), iVar1 != 0)))) {
    iVar1 = int_end_context(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}

