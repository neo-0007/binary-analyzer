
undefined8 asn1_get_uint64(ulong *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (8 < param_3) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_int.c",0xdb,"asn1_get_uint64");
    ERR_set_error(0xd,0xdf,0);
    return 0;
  }
  if (param_2 != (byte *)0x0) {
    if (param_3 != 0) {
      pbVar1 = param_2 + param_3;
      param_3 = 0;
      do {
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 << 8 | (ulong)bVar2;
      } while (param_2 != pbVar1);
    }
    *param_1 = param_3;
    return 1;
  }
  return 0;
}

