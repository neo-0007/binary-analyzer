
bool FUN_00547090(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = -1;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 - 1U < 7) {
    lVar1 = (1L << ((char)param_2 * '\b' & 0x3fU)) + (param_2 - 1U);
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  param_1[4] = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = FUN_0041aec0(0x28,"../crypto/packet.c",0x6b);
  param_1[5] = lVar1;
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/packet.c",0x6c,"wpacket_intern_init_len");
    FUN_0051f8f0(0xf,0xc0100,0);
  }
  return lVar1 != 0;
}

