
/* void std::(anonymous namespace)::read_utf16_bom<false>(std::(anonymous namespace)::range<char16_t
   const, false>&, std::codecvt_mode&) */

void std::(anonymous_namespace)::read_utf16_bom<false>(range *param_1,codecvt_mode *param_2)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = *(uint *)param_2;
  if (((uVar1 & 4) != 0) &&
     (psVar2 = *(short **)param_1, 1 < (ulong)(*(long *)(param_1 + 8) - (long)psVar2))) {
    if (*psVar2 == -2) {
      *(short **)param_1 = psVar2 + 1;
      *(uint *)param_2 = uVar1 & 0xfffffffe;
      return;
    }
    if (*psVar2 == -0x101) {
      *(short **)param_1 = psVar2 + 1;
      *(uint *)param_2 = uVar1 | 1;
      return;
    }
  }
  return;
}

