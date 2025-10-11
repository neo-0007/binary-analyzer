
/* std::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_narrow
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  ctype<wchar_t> *pcVar1;
  wchar_t __c;
  long lVar2;
  ctype<wchar_t> cVar3;
  uint uVar4;
  __locale_t __dataset;
  char *pcVar5;
  char *pcVar6;
  
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  if (this[0x18] == (ctype<wchar_t>)0x0) {
    if (param_1 < param_2) {
      lVar2 = -1 - (long)param_1;
      pcVar5 = param_4;
      do {
        uVar4 = wctob(*param_1);
        if (uVar4 == 0xffffffff) {
          uVar4 = (uint)(byte)param_3;
        }
        pcVar6 = pcVar5 + 1;
        param_1 = param_1 + 1;
        *pcVar5 = (char)uVar4;
        pcVar5 = pcVar6;
      } while (pcVar6 != param_4 + ((ulong)((long)param_2 + lVar2) >> 2) + 1);
    }
  }
  else if (param_1 < param_2) {
    pcVar1 = (ctype<wchar_t> *)(param_4 + ((ulong)((long)param_2 + (-1 - (long)param_1)) >> 2) + 1);
    do {
      __c = *param_1;
      if ((uint)__c < 0x80) {
        cVar3 = this[(long)__c + 0x19];
      }
      else {
        uVar4 = wctob(__c);
        if (uVar4 == 0xffffffff) {
          uVar4 = (uint)(byte)param_3;
        }
        cVar3 = SUB41(uVar4,0);
      }
      *param_4 = (char)cVar3;
      param_4 = (char *)((ctype<wchar_t> *)param_4 + 1);
      param_1 = param_1 + 1;
    } while (pcVar1 != (ctype<wchar_t> *)param_4);
  }
  uselocale(__dataset);
  return param_2;
}

