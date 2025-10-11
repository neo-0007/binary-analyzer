
bool ossl_DER_w_begin_sequence(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (param_2 < 0x1f) {
      iVar1 = WPACKET_start_sub_packet();
      if (iVar1 != 0) goto LAB_005391f1;
    }
    return false;
  }
LAB_005391f1:
  iVar1 = WPACKET_start_sub_packet(param_1);
  return iVar1 != 0;
}

