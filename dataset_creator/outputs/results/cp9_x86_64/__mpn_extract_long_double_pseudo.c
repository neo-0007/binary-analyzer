
undefined8
__mpn_extract_long_double
          (ulong *param_1,undefined8 param_2,int *param_3,uint *param_4,undefined8 param_5,
          undefined8 param_6,ulong param_7,uint param_8)

{
  ulong uVar1;
  ushort local_10;
  
  *param_4 = param_8 >> 0xf & 1;
  local_10 = (ushort)param_8;
  *param_3 = (param_8 & 0x7fff) - 0x3fff;
  *param_1 = param_7;
  if ((param_8 & 0x7fff) == 0) {
    if (param_7 != 0) {
      param_7 = param_7 & 0x7fffffffffffffff;
      if (param_7 == 0) {
        *param_1 = 0x8000000000000000;
        *param_3 = -0x3ffe;
        return 1;
      }
      uVar1 = 0x3f;
      if (param_7 != 0) {
        for (; param_7 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      *param_1 = param_7 << ((byte)(uVar1 ^ 0x3f) & 0x3f);
      *param_3 = -0x3ffe - (int)(uVar1 ^ 0x3f);
      return 1;
    }
  }
  else {
    if (param_7 != 0) {
      return 1;
    }
    if ((local_10 & 0x7fff) == 0x7fff) {
      return 1;
    }
  }
  *param_3 = 0;
  return 1;
}

