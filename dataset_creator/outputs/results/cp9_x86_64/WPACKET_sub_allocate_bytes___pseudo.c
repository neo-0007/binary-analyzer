
bool WPACKET_sub_allocate_bytes__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = WPACKET_start_sub_packet_len__(param_1,param_4);
  if (iVar1 != 0) {
    iVar1 = WPACKET_allocate_bytes(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

