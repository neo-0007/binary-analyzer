
/* void std::__facet_shims::__moneypunct_fill_cache<wchar_t, true>(std::integral_constant<bool,
   true>, std::locale::facet const*, std::__moneypunct_cache<wchar_t, true>*) */

void std::__facet_shims::__moneypunct_fill_cache<wchar_t,true>(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  long in_FS_OFFSET;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (**(code **)(*param_1 + 0x10))();
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x60) = uVar3;
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(param_2 + 0x98) = 1;
  (**(code **)(lVar1 + 0x20))((string *)&local_68,param_1);
  uVar2 = local_60;
                    /* try { // try from 0064e78b to 0064e7a2 has its CatchHandler @ 0064e977 */
  pcVar4 = (char *)operator_new__(local_60 + 1);
  __cxx11::string::copy((string *)&local_68,pcVar4,uVar2,0);
  pcVar4[uVar2] = '\0';
  *(ulong *)(param_2 + 0x18) = uVar2;
  *(char **)(param_2 + 0x10) = pcVar4;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x28))((string *)&local_68,param_1);
  uVar2 = local_60;
  if (0x1ffffffffffffffe < local_60 + 1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0064e972 to 0064e976 has its CatchHandler @ 0064e980 */
    __cxa_throw_bad_array_new_length();
  }
                    /* try { // try from 0064e7fa to 0064e811 has its CatchHandler @ 0064e980 */
  pwVar5 = (wchar_t *)operator_new__((local_60 + 1) * 4);
  __cxx11::wstring::copy((wstring *)&local_68,pwVar5,uVar2,0);
  *(wchar_t **)(param_2 + 0x30) = pwVar5;
  *(ulong *)(param_2 + 0x38) = uVar2;
  pwVar5[uVar2] = L'\0';
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x30))((string *)&local_68,param_1);
  uVar2 = local_60;
  if (local_60 + 1 < 0x1fffffffffffffff) {
                    /* try { // try from 0064e86c to 0064e883 has its CatchHandler @ 0064e967 */
    pwVar5 = (wchar_t *)operator_new__((local_60 + 1) * 4);
    __cxx11::wstring::copy((wstring *)&local_68,pwVar5,uVar2,0);
    *(wchar_t **)(param_2 + 0x40) = pwVar5;
    *(ulong *)(param_2 + 0x48) = uVar2;
    pwVar5[uVar2] = L'\0';
    if (local_68 != local_58) {
      operator_delete(local_68);
    }
    (**(code **)(*param_1 + 0x38))((string *)&local_68,param_1);
    if (local_60 + 1 < 0x1fffffffffffffff) {
                    /* try { // try from 0064e8de to 0064e8f5 has its CatchHandler @ 0064e959 */
      pwVar5 = (wchar_t *)operator_new__((local_60 + 1) * 4);
      __cxx11::wstring::copy((wstring *)&local_68,pwVar5,local_60,0);
      *(wchar_t **)(param_2 + 0x50) = pwVar5;
      *(ulong *)(param_2 + 0x58) = local_60;
      pwVar5[local_60] = L'\0';
      if (local_68 != local_58) {
        operator_delete(local_68);
      }
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      *(undefined4 *)(param_2 + 100) = uVar3;
      uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
      *(undefined4 *)(param_2 + 0x68) = uVar3;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0064e962 to 0064e966 has its CatchHandler @ 0064e959 */
    __cxa_throw_bad_array_new_length();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0064e96d to 0064e971 has its CatchHandler @ 0064e967 */
  __cxa_throw_bad_array_new_length();
}

