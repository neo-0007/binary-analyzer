
/* std::wstring::_Rep::_M_grab(std::allocator<wchar_t> const&, std::allocator<wchar_t> const&) */

allocator * std::wstring::_Rep::_M_grab(allocator *param_1,allocator *param_2)

{
  allocator *paVar1;
  
  if (-1 < *(int *)(param_1 + 0x10)) {
    if (param_1 != (allocator *)&_S_empty_rep_storage) {
      if (__libc_single_threaded == '\0') {
        LOCK();
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        UNLOCK();
      }
      else {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
    return param_1 + 0x18;
  }
  paVar1 = (allocator *)_M_clone((_Rep *)param_1,param_2,0);
  return paVar1;
}

