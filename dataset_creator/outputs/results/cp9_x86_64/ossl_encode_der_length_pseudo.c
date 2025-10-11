
bool ossl_encode_der_length(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0xffff < param_2) {
    return false;
  }
  if (param_2 < 0x100) {
    if ((0x7f < param_2) && (iVar1 = WPACKET_put_bytes__(param_1,0x81,1), iVar1 == 0)) {
      return false;
    }
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_put_bytes__(param_1,0x82,1);
    uVar2 = 2;
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = WPACKET_put_bytes__(param_1,param_2 & 0xffffffff,uVar2);
  return iVar1 != 0;
}

