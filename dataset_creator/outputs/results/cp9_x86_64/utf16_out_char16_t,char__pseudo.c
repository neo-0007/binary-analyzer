
/* std::codecvt_base::result std::(anonymous namespace)::utf16_out<char16_t, char>(std::(anonymous
   namespace)::range<char16_t const, true>&, std::(anonymous namespace)::range<char, true>&,
   unsigned long, std::codecvt_mode, std::(anonymous namespace)::surrogates) [clone .part.0] */

undefined8
std::(anonymous_namespace)::utf16_out<char16_t,char>
          (long *param_1,range *param_2,ulong param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  ulong uVar4;
  wchar32 wVar5;
  long lVar6;
  
  puVar3 = (ushort *)*param_1;
  uVar4 = param_1[1] - (long)puVar3;
  if (puVar3 != (ushort *)param_1[1]) {
    do {
      uVar1 = *puVar3;
      wVar5 = (wchar32)uVar1;
      if (uVar1 - 0xd800 < 0x400) {
        if (param_4 == 1) {
          return 2;
        }
        if (uVar4 < 3) {
          return 0;
        }
        if (0x3ff < puVar3[1] - 0xdc00) {
          return 2;
        }
        lVar6 = 2;
        wVar5 = puVar3[1] + 0xfca02400 + wVar5 * 0x400;
      }
      else {
        if (uVar1 - 0xdc00 < 0x400) {
          return 2;
        }
        lVar6 = 1;
      }
      if (param_3 < (uint)wVar5) {
        return 2;
      }
      bVar2 = write_utf8_code_point<char>(param_2,wVar5);
      if (!bVar2) {
        return 1;
      }
      puVar3 = (ushort *)(*param_1 + lVar6 * 2);
      *param_1 = (long)puVar3;
      uVar4 = param_1[1] - (long)puVar3;
    } while (puVar3 != (ushort *)param_1[1]);
  }
  return 0;
}

