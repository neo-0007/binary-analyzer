
/* void std::__facet_shims::__numpunct_fill_cache<wchar_t>(std::integral_constant<bool, true>,
   std::locale::facet const*, std::__numpunct_cache<wchar_t>*) */

void std::__facet_shims::__numpunct_fill_cache<wchar_t>(long *param_1,long param_2)

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
  *(undefined4 *)(param_2 + 0x48) = uVar3;
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_2 + 0x148) = 1;
  *(undefined4 *)(param_2 + 0x4c) = uVar3;
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  (**(code **)(lVar1 + 0x20))((string *)&local_68,param_1);
  uVar2 = local_60;
                    /* try { // try from 0064df16 to 0064df2d has its CatchHandler @ 0064e05d */
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
                    /* try { // try from 0064e058 to 0064e05c has its CatchHandler @ 0064e066 */
    __cxa_throw_bad_array_new_length();
  }
                    /* try { // try from 0064df85 to 0064df9c has its CatchHandler @ 0064e066 */
  pwVar5 = (wchar_t *)operator_new__((local_60 + 1) * 4);
  __cxx11::wstring::copy((wstring *)&local_68,pwVar5,uVar2,0);
  *(wchar_t **)(param_2 + 0x28) = pwVar5;
  *(ulong *)(param_2 + 0x30) = uVar2;
  pwVar5[uVar2] = L'\0';
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  (**(code **)(*param_1 + 0x30))((string *)&local_68,param_1);
  if (local_60 + 1 < 0x1fffffffffffffff) {
                    /* try { // try from 0064dfee to 0064e057 has its CatchHandler @ 0064e04a */
    pwVar5 = (wchar_t *)operator_new__((local_60 + 1) * 4);
    __cxx11::wstring::copy((wstring *)&local_68,pwVar5,local_60,0);
    *(wchar_t **)(param_2 + 0x38) = pwVar5;
    pwVar5[local_60] = L'\0';
    *(ulong *)(param_2 + 0x40) = local_60;
    if (local_68 != local_58) {
      operator_delete(local_68);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
                    /* WARNING: Subroutine does not return */
  __cxa_throw_bad_array_new_length();
}

