
bool ossl_DER_w_precompiled(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (0x1e < param_2) {
      return false;
    }
    iVar1 = WPACKET_start_sub_packet();
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = WPACKET_memcpy(param_1,param_3,param_4);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = int_end_context(param_1,param_2);
  return iVar1 != 0;
}

