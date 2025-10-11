
/* std::codecvt<wchar_t, char, __mbstate_t>::do_in(__mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

undefined8 __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_in
          (codecvt<wchar_t,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  __locale_t __dataset;
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  __mbstate_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_1;
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  *param_4 = param_2;
  *param_7 = param_5;
  if ((param_2 < param_3) && (param_5 < param_6)) {
    while( true ) {
      sVar3 = (long)param_3 - (long)param_2;
      pcVar1 = (char *)memchr(param_2,0,sVar3);
      pcVar5 = param_3;
      if (pcVar1 != (char *)0x0) {
        sVar3 = (long)pcVar1 - (long)param_2;
        pcVar5 = pcVar1;
      }
      lVar2 = __mbsnrtowcs_chk(param_5,param_4,sVar3,(long)param_6 - (long)param_5 >> 2,param_1,
                               0x3fffffffffffffff);
      if (lVar2 == -1) {
        pwVar4 = *param_7;
        while (sVar3 = mbrtowc(pwVar4,param_2,(long)param_3 - (long)param_2,&local_48),
              sVar3 < 0xfffffffffffffffe) {
          param_2 = param_2 + sVar3;
          pwVar4 = *param_7 + 1;
          *param_7 = pwVar4;
        }
        *param_4 = param_2;
        uVar6 = 2;
        *param_1 = local_48;
        goto LAB_006af444;
      }
      pwVar4 = *param_7 + lVar2;
      if ((*param_4 != (char *)0x0) && (*param_4 < pcVar5)) {
        *param_7 = pwVar4;
        uVar6 = 1;
        goto LAB_006af444;
      }
      *param_4 = pcVar5;
      *param_7 = pwVar4;
      if (param_3 <= pcVar5) break;
      if (param_6 <= pwVar4) {
        uVar6 = 1;
        goto LAB_006af444;
      }
      local_48 = *param_1;
      param_2 = pcVar5 + 1;
      param_5 = pwVar4 + 1;
      *param_4 = param_2;
      *param_7 = param_5;
      *pwVar4 = L'\0';
      if ((param_3 <= param_2) || (param_6 <= param_5)) break;
    }
  }
  uVar6 = 0;
LAB_006af444:
  uselocale(__dataset);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}

