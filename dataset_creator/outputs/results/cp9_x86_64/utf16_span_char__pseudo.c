
/* char const* std::(anonymous namespace)::utf16_span<char>(char const*, char const*, unsigned long,
   char32_t, std::codecvt_mode) */

char * std::(anonymous_namespace)::utf16_span<char>
                 (short *param_1,long param_2,ulong param_3,wchar32 param_4,uint param_5)

{
  wchar32 wVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  short *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  if (((((param_5 & 4) != 0) && (2 < (ulong)(param_2 - (long)param_1))) && (*param_1 == -0x4411)) &&
     ((char)param_1[1] == -0x41)) {
    local_48 = (short *)((long)param_1 + 3);
  }
  local_40 = param_2;
  if (param_3 < 2) {
    uVar3 = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 1;
    do {
      wVar1 = read_utf8_code_point<char>((range *)&local_48,(ulong)(uint)param_4);
      if ((uint)param_4 < (uint)wVar1) goto LAB_0062d275;
      if ((uint)wVar1 < 0x10000) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3 + 1;
      uVar3 = uVar3 + 2;
    } while (uVar3 < param_3);
  }
  if (param_3 == uVar3) {
    if (0xffff < (uint)param_4) {
      param_4 = L'\xffff';
    }
    read_utf8_code_point<char>((range *)&local_48,(ulong)(uint)param_4);
  }
LAB_0062d275:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)local_48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

