
bool ossl_DER_w_boolean(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (((param_2 < 0) || ((param_2 < 0x1f && (iVar1 = WPACKET_start_sub_packet(), iVar1 != 0)))) &&
     ((iVar1 = WPACKET_start_sub_packet(param_1), iVar1 != 0 &&
      ((((param_3 == 0 || (iVar1 = WPACKET_put_bytes__(param_1,0xff,1), iVar1 != 0)) &&
        (iVar1 = WPACKET_close(param_1), iVar1 == 0)) &&
       (iVar1 = WPACKET_put_bytes__(param_1,1,1), iVar1 == 0)))))) {
    iVar1 = int_end_context(param_1,param_2);
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

