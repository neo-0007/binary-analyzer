
/* std::codecvt_base::result std::(anonymous namespace)::utf16_in<char, char16_t>(std::(anonymous
   namespace)::range<char const, true>&, std::(anonymous namespace)::range<char16_t, true>&,
   unsigned long, std::codecvt_mode, std::(anonymous namespace)::surrogates) */

int std::(anonymous_namespace)::utf16_in<char,char16_t>
              (range *param_1,long *param_2,ulong param_3,uint param_4,int param_5)

{
  short *psVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  wchar32 wVar5;
  ushort uVar6;
  ushort uVar7;
  short *psVar8;
  
  psVar1 = *(short **)(param_1 + 8);
  psVar8 = *(short **)param_1;
  if (((((param_4 & 4) != 0) && (2 < (ulong)((long)psVar1 - (long)psVar8))) && (*psVar8 == -0x4411))
     && ((char)psVar8[1] == -0x41)) {
    psVar8 = (short *)((long)psVar8 + 3);
    *(short **)param_1 = psVar8;
  }
  if (psVar8 != psVar1) {
    puVar2 = (ushort *)param_2[1];
    do {
      while( true ) {
        puVar3 = (ushort *)*param_2;
        if (puVar3 == puVar2) {
          return 0;
        }
        wVar5 = read_utf8_code_point<char>(param_1,param_3);
        if (wVar5 == L'\xfffffffe') {
          return param_5 + 1;
        }
        if (param_3 < (uint)wVar5) {
          return 2;
        }
        uVar6 = (ushort)wVar5;
        if ((uint)wVar5 < 0x10000) break;
        if ((ulong)((long)puVar2 - (long)puVar3) < 3) {
          *(short **)param_1 = psVar8;
          *(short **)(param_1 + 8) = psVar1;
          return 1;
        }
        uVar4 = (uVar6 & 0x3ff) + 0xdc00;
        uVar7 = (short)((uint)wVar5 >> 10) + 0xd7c0;
        if ((param_4 & 1) == 0) {
          uVar7 = uVar7 * 0x100 | uVar7 >> 8;
          uVar4 = (uVar6 & 0x3ff) << 8 | uVar4 >> 8;
        }
        psVar8 = *(short **)param_1;
        *puVar3 = uVar7;
        *param_2 = (long)(puVar3 + 2);
        puVar3[1] = uVar4;
        if (psVar8 == psVar1) {
          return 0;
        }
      }
      psVar8 = *(short **)param_1;
      if ((param_4 & 1) == 0) {
        wVar5 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
      }
      *param_2 = (long)(puVar3 + 1);
      *puVar3 = (ushort)wVar5;
    } while (psVar8 != psVar1);
  }
  return 0;
}

