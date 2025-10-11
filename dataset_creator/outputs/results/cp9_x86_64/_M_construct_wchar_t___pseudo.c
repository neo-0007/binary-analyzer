
/* void std::__cxx11::wstring::_M_construct<wchar_t*>(wchar_t*, wchar_t*, std::forward_iterator_tag)
    */

void std::__cxx11::wstring::_M_construct<wchar_t*>
               (wstring *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && (param_2 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    __throw_logic_error("basic_string::_M_construct null not valid");
  }
  uVar2 = param_3 - (long)param_2 >> 2;
  local_28 = uVar2;
  if ((ulong)(param_3 - (long)param_2) < 0xd) {
    puVar1 = *(undefined4 **)param_1;
  }
  else {
    puVar1 = (undefined4 *)_M_create(param_1,&local_28,0);
    *(undefined4 **)param_1 = puVar1;
    *(ulong *)(param_1 + 0x10) = local_28;
  }
  if (uVar2 == 1) {
    *puVar1 = *param_2;
  }
  else if (uVar2 != 0) {
    __wmemcpy_chk(puVar1,param_2,uVar2,0x3fffffffffffffff);
    puVar1 = *(undefined4 **)param_1;
  }
  *(ulong *)(param_1 + 8) = local_28;
  puVar1[local_28] = 0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

