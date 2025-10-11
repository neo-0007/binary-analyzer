
/* std::codecvt_base::result std::(anonymous namespace)::ucs4_in<char>(std::(anonymous
   namespace)::range<char const, true>&, std::(anonymous namespace)::range<char32_t, true>&,
   unsigned long, std::codecvt_mode) */

undefined8
std::(anonymous_namespace)::ucs4_in<char>
          (range *param_1,undefined8 *param_2,ulong param_3,uint param_4)

{
  short *psVar1;
  wchar32 *pwVar2;
  wchar32 wVar3;
  short *psVar4;
  wchar32 *pwVar5;
  
  psVar1 = *(short **)(param_1 + 8);
  psVar4 = *(short **)param_1;
  if (((((param_4 & 4) != 0) && (2 < (ulong)((long)psVar1 - (long)psVar4))) && (*psVar4 == -0x4411))
     && ((char)psVar4[1] == -0x41)) {
    psVar4 = (short *)((long)psVar4 + 3);
    *(short **)param_1 = psVar4;
  }
  if (psVar1 != psVar4) {
    pwVar2 = (wchar32 *)param_2[1];
    pwVar5 = (wchar32 *)*param_2;
    do {
      if (pwVar2 == pwVar5) {
        return 1;
      }
      wVar3 = read_utf8_code_point<char>(param_1,param_3);
      if (wVar3 == L'\xfffffffe') {
        return 1;
      }
      if (param_3 < (uint)wVar3) {
        return 2;
      }
      *param_2 = pwVar5 + 1;
      *pwVar5 = wVar3;
      pwVar5 = pwVar5 + 1;
    } while (*(short **)param_1 != psVar1);
  }
  return 0;
}

