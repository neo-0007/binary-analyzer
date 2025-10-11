
/* std::codecvt_base::result std::(anonymous namespace)::ucs4_out<char>(std::(anonymous
   namespace)::range<char32_t const, true>&, std::(anonymous namespace)::range<char, true>&,
   unsigned long, std::codecvt_mode) */

undefined8
std::(anonymous_namespace)::ucs4_out<char>(long *param_1,range *param_2,ulong param_3,uint param_4)

{
  undefined2 *puVar1;
  bool bVar2;
  wchar32 *pwVar3;
  
  if ((param_4 & 2) != 0) {
    puVar1 = *(undefined2 **)param_2;
    if ((ulong)(*(long *)(param_2 + 8) - (long)puVar1) < 3) {
      return 1;
    }
    *(undefined1 *)(puVar1 + 1) = 0xbf;
    *puVar1 = 0xbbef;
    *(long *)param_2 = *(long *)param_2 + 3;
  }
  pwVar3 = (wchar32 *)*param_1;
  if (pwVar3 != (wchar32 *)param_1[1]) {
    do {
      if (param_3 < (uint)*pwVar3) {
        return 2;
      }
      bVar2 = write_utf8_code_point<char>(param_2,*pwVar3);
      if (!bVar2) {
        return 1;
      }
      pwVar3 = (wchar32 *)(*param_1 + 4);
      *param_1 = (long)pwVar3;
    } while (pwVar3 != (wchar32 *)param_1[1]);
  }
  return 0;
}

