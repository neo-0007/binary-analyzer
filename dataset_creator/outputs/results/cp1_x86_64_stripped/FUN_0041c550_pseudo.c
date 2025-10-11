
undefined8 FUN_0041c550(byte *param_1,ulong param_2,ulong *param_3,byte *param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  
  uVar5 = 0;
  while (pbVar4 = param_4, bVar1 = *pbVar4, bVar1 != 0) {
    while( true ) {
      param_4 = pbVar4 + 1;
      if ((uint)bVar1 == (int)param_5) break;
      pbVar6 = pbVar4 + 1;
      pbVar4 = pbVar4 + 2;
      if (*pbVar6 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/o_str.c",0x9a,"hexstr2buf_sep");
        FUN_0051f8f0(0xf,0x67,0);
        return 0;
      }
      uVar2 = FUN_0041c520();
      uVar3 = FUN_0041c520((uint)bVar1);
      if ((int)(uVar2 | uVar3) < 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/o_str.c",0xa0,"hexstr2buf_sep");
        FUN_0051f8f0(0xf,0x66,0);
        return 0;
      }
      uVar5 = uVar5 + 1;
      pbVar6 = param_1;
      if (param_1 != (byte *)0x0) {
        if (param_2 < uVar5) {
          FUN_0051f420();
          FUN_0051f540("../crypto/o_str.c",0xa6,"hexstr2buf_sep");
          FUN_0051f8f0(0xf,0x74,0);
          return 0;
        }
        pbVar6 = param_1 + 1;
        *param_1 = (byte)(uVar3 << 4) | (byte)uVar2;
      }
      bVar1 = *pbVar4;
      param_1 = pbVar6;
      if (bVar1 == 0) goto LAB_0041c5d9;
    }
  }
LAB_0041c5d9:
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar5;
  }
  return 1;
}

