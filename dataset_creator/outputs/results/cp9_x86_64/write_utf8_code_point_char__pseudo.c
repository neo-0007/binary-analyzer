
/* bool std::(anonymous namespace)::write_utf8_code_point<char>(std::(anonymous
   namespace)::range<char, true>&, char32_t) */

bool std::(anonymous_namespace)::write_utf8_code_point<char>(range *param_1,wchar32 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  
  if ((uint)param_2 < 0x80) {
    pbVar1 = *(byte **)param_1;
    pbVar2 = *(byte **)(param_1 + 8);
    if (pbVar2 != pbVar1) {
      *(byte **)param_1 = pbVar1 + 1;
      *pbVar1 = (byte)param_2;
    }
    return pbVar2 != pbVar1;
  }
  if ((uint)param_2 < 0x800) {
    pcVar3 = *(char **)param_1;
    if ((ulong)(*(long *)(param_1 + 8) - (long)pcVar3) < 2) {
      return false;
    }
    *(char **)param_1 = pcVar3 + 1;
    cVar4 = (char)((uint)param_2 >> 6) + -0x40;
  }
  else {
    if ((uint)param_2 < 0x10000) {
      pcVar3 = *(char **)param_1;
      if ((ulong)(*(long *)(param_1 + 8) - (long)pcVar3) < 3) {
        return false;
      }
      *(char **)param_1 = pcVar3 + 1;
      cVar4 = (char)((uint)param_2 >> 0xc) + -0x20;
    }
    else {
      if (0x10ffff < (uint)param_2) {
        return false;
      }
      pcVar3 = *(char **)param_1;
      if ((ulong)(*(long *)(param_1 + 8) - (long)pcVar3) < 4) {
        return false;
      }
      *(char **)param_1 = pcVar3 + 1;
      *pcVar3 = (char)((uint)param_2 >> 0x12) + -0x10;
      pcVar3 = *(char **)param_1;
      *(char **)param_1 = pcVar3 + 1;
      cVar4 = ((byte)((uint)param_2 >> 0xc) & 0x3f) + 0x80;
    }
    *pcVar3 = cVar4;
    pcVar3 = *(char **)param_1;
    *(char **)param_1 = pcVar3 + 1;
    cVar4 = ((byte)((uint)param_2 >> 6) & 0x3f) + 0x80;
  }
  *pcVar3 = cVar4;
  pcVar3 = *(char **)param_1;
  *(char **)param_1 = pcVar3 + 1;
  *pcVar3 = ((byte)param_2 & 0x3f) + 0x80;
  return true;
}

