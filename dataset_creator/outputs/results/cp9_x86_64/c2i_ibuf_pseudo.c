
ulong c2i_ibuf(byte *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_int.c",0xa0,__func___8);
    ERR_set_error(0xd,0xde,0);
    return 0;
  }
  bVar2 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar2 & 0x80;
  }
  if (param_4 == 1) {
    if (param_1 == (byte *)0x0) {
      return 1;
    }
    bVar3 = -*param_3;
    if (-1 < (char)bVar2) {
      bVar3 = *param_3;
    }
    *param_1 = bVar3;
    return 1;
  }
  if (*param_3 != 0) {
    uVar6 = param_4;
    if (*param_3 != 0xff) goto LAB_0049c5c8;
    uVar5 = 1;
    bVar3 = 0;
    do {
      pbVar1 = param_3 + uVar5;
      uVar5 = uVar5 + 1;
      bVar3 = bVar3 | *pbVar1;
    } while (uVar5 < param_4);
    if (bVar3 == 0) goto LAB_0049c5c8;
  }
  uVar6 = param_4 - 1;
  if (-1 < (char)(bVar2 ^ param_3[1])) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_int.c",0xc1,__func___8);
    ERR_set_error(0xd,0xdd,0);
    return 0;
  }
LAB_0049c5c8:
  if (param_1 != (byte *)0x0) {
    uVar4 = (uint)(int)(char)bVar2 >> 0x1f;
    uVar5 = uVar6;
    do {
      uVar5 = uVar5 - 1;
      uVar4 = uVar4 + (byte)(param_3[uVar5 + (param_4 - uVar6)] ^ (char)bVar2 >> 7);
      param_1[uVar5] = (byte)uVar4;
      uVar4 = uVar4 >> 8;
    } while (uVar5 != 0);
  }
  return uVar6;
}

