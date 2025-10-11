
/* std::codecvt<wchar_t, char, __mbstate_t>::do_out(__mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_out
          (codecvt<wchar_t,char,__mbstate_t> *this,__mbstate_t *param_1,wchar_t *param_2,
          wchar_t *param_3,wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar_t __wc;
  __locale_t __dataset;
  wchar_t *pwVar1;
  char *pcVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  __mbstate_t local_60;
  char local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = *param_1;
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  *param_4 = param_2;
  *param_7 = param_5;
  if (param_2 < param_3) {
    do {
      if (param_6 <= param_5) break;
      sVar3 = (long)param_3 - (long)param_2 >> 2;
      pwVar1 = wmemchr(param_2,L'\0',sVar3);
      pwVar4 = param_3;
      if (pwVar1 != (wchar_t *)0x0) {
        sVar3 = (long)pwVar1 - (long)param_2 >> 2;
        pwVar4 = pwVar1;
      }
      sVar3 = wcsnrtombs(param_5,param_4,sVar3,(long)param_6 - (long)param_5,param_1);
      if (sVar3 == 0xffffffffffffffff) {
        if (param_2 < *param_4) {
          pcVar2 = *param_7;
          do {
            __wc = *param_2;
            param_2 = param_2 + 1;
            sVar3 = wcrtomb(pcVar2,__wc,&local_60);
            pcVar2 = *param_7 + sVar3;
            *param_7 = pcVar2;
          } while (param_2 < *param_4);
        }
        uVar5 = 2;
        *param_1 = local_60;
        goto LAB_006af218;
      }
      pcVar2 = *param_7;
      if ((*param_4 != (wchar_t *)0x0) && (*param_4 < pwVar4)) {
        *param_7 = pcVar2 + sVar3;
        uVar5 = 1;
        goto LAB_006af218;
      }
      *param_4 = pwVar4;
      *param_7 = pcVar2 + sVar3;
      if (param_3 <= pwVar4) break;
      local_60 = *param_1;
      sVar3 = wcrtomb(local_58,*pwVar4,&local_60);
      if ((ulong)((long)param_6 - (long)*param_7) < sVar3) {
        uVar5 = 1;
        goto LAB_006af218;
      }
      memcpy(*param_7,local_58,sVar3);
      *param_1 = local_60;
      param_5 = *param_7 + sVar3;
      param_2 = *param_4 + 1;
      *param_7 = param_5;
      *param_4 = param_2;
    } while (param_2 < param_3);
  }
  uVar5 = 0;
LAB_006af218:
  uselocale(__dataset);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

