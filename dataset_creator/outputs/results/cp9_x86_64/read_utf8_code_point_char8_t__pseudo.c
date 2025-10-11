
/* char32_t std::(anonymous namespace)::read_utf8_code_point<char8_t>(std::(anonymous
   namespace)::range<char8_t const, true>&, unsigned long) */

wchar32 std::(anonymous_namespace)::read_utf8_code_point<char8_t>(range *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  wchar32 wVar4;
  ulong uVar5;
  
  pbVar3 = *(byte **)param_1;
  wVar4 = L'\xfffffffe';
  uVar5 = (long)*(byte **)(param_1 + 8) - (long)pbVar3;
  if (*(byte **)(param_1 + 8) != pbVar3) {
    bVar1 = *pbVar3;
    if (bVar1 < 0x80) {
      *(byte **)param_1 = pbVar3 + 1;
      return (uint)bVar1;
    }
    if (0xc1 < bVar1) {
      if (bVar1 < 0xe0) {
        if (uVar5 == 1) {
          return L'\xfffffffe';
        }
        if ((pbVar3[1] & 0xc0) == 0x80) {
          wVar4 = (uint)bVar1 * 0x40 + -0x3080 + (uint)pbVar3[1];
          if (param_2 < (uint)wVar4) {
            return wVar4;
          }
          *(byte **)param_1 = pbVar3 + 2;
          return wVar4;
        }
      }
      else if (bVar1 < 0xf0) {
        if (uVar5 < 3) {
          return L'\xfffffffe';
        }
        bVar2 = pbVar3[1];
        if (((bVar2 & 0xc0) == 0x80) &&
           (((bVar1 != 0xe0 || (0x9f < bVar2)) && ((pbVar3[2] & 0xc0) == 0x80)))) {
          wVar4 = (uint)bVar2 * 0x40 + (uint)bVar1 * 0x1000 + -0xe2080 + (uint)pbVar3[2];
          if (param_2 < (uint)wVar4) {
            return wVar4;
          }
          *(byte **)param_1 = pbVar3 + 3;
          return wVar4;
        }
      }
      else if (bVar1 < 0xf5) {
        if (uVar5 < 4) {
          return L'\xfffffffe';
        }
        bVar2 = pbVar3[1];
        if (((((bVar2 & 0xc0) == 0x80) && ((bVar1 != 0xf0 || (0x8f < bVar2)))) &&
            ((bVar1 != 0xf4 || (bVar2 < 0x90)))) &&
           (((pbVar3[2] & 0xc0) == 0x80 && ((pbVar3[3] & 0xc0) == 0x80)))) {
          wVar4 = (uint)bVar1 * 0x40000 + -0x3c82080 + (uint)pbVar3[3] + (uint)bVar2 * 0x1000 +
                  (uint)pbVar3[2] * 0x40;
          if (param_2 < (uint)wVar4) {
            return wVar4;
          }
          *(byte **)param_1 = pbVar3 + 4;
          return wVar4;
        }
      }
    }
    wVar4 = L'\xffffffff';
  }
  return wVar4;
}

