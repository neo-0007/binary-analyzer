
/* bool std::(anonymous namespace)::write_utf8_code_point<char8_t>(std::(anonymous
   namespace)::range<char8_t, true>&, char32_t) [clone .part.0] */

bool std::(anonymous_namespace)::write_utf8_code_point<char8_t>(range *param_1,wchar32 param_2)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  
  bVar2 = (byte)param_2;
  if ((uint)param_2 < 0x800) {
    pcVar1 = *(char **)param_1;
    bVar3 = false;
    if (1 < (ulong)(*(long *)(param_1 + 8) - (long)pcVar1)) {
      bVar3 = true;
      *pcVar1 = (char)((uint)param_2 >> 6) + -0x40;
      *(char **)param_1 = pcVar1 + 2;
      pcVar1[1] = (bVar2 & 0x3f) + 0x80;
    }
  }
  else if ((uint)param_2 < 0x10000) {
    pcVar1 = *(char **)param_1;
    bVar3 = false;
    if (2 < (ulong)(*(long *)(param_1 + 8) - (long)pcVar1)) {
      *pcVar1 = (char)((uint)param_2 >> 0xc) + -0x20;
      pcVar1[1] = ((byte)((uint)param_2 >> 6) & 0x3f) + 0x80;
      *(char **)param_1 = pcVar1 + 3;
      pcVar1[2] = (bVar2 & 0x3f) + 0x80;
      return true;
    }
  }
  else {
    bVar3 = false;
    if (((uint)param_2 < 0x110000) &&
       (pcVar1 = *(char **)param_1, 3 < (ulong)(*(long *)(param_1 + 8) - (long)pcVar1))) {
      *pcVar1 = (char)((uint)param_2 >> 0x12) + -0x10;
      pcVar1[1] = ((byte)((uint)param_2 >> 0xc) & 0x3f) + 0x80;
      pcVar1[2] = ((byte)((uint)param_2 >> 6) & 0x3f) + 0x80;
      *(char **)param_1 = pcVar1 + 4;
      pcVar1[3] = (bVar2 & 0x3f) + 0x80;
      return true;
    }
  }
  return bVar3;
}

