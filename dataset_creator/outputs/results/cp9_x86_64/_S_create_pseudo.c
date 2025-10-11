
/* std::wstring::_Rep::_S_create(unsigned long, unsigned long, std::allocator<wchar_t> const&) */

void std::wstring::_Rep::_S_create(ulong param_1,ulong param_2,allocator *param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (0xffffffffffffffe < param_1) {
LAB_00637e1a:
                    /* WARNING: Subroutine does not return */
    __throw_length_error("basic_string::_S_create");
  }
  if (param_2 < param_1) {
    if (param_1 < param_2 * 2) {
      param_1 = param_2 * 2;
    }
    uVar3 = param_1 * 4 + 0x1c;
    uVar1 = param_1 * 4 + 0x3c;
    if ((uVar1 < 0x1001) || (param_1 <= param_2)) {
      if ((long)uVar3 < 0) {
        __throw_bad_alloc();
        goto LAB_00637e1a;
      }
    }
    else {
      param_1 = param_1 + (0x1000 - (ulong)((uint)uVar1 & 0xfff) >> 2);
      if (0xffffffffffffffe < param_1) {
        param_1 = 0xffffffffffffffe;
      }
      uVar3 = param_1 * 4 + 0x1c;
    }
  }
  else {
    uVar3 = param_1 * 4 + 0x1c;
  }
  pvVar2 = operator_new(uVar3);
  *(ulong *)((long)pvVar2 + 8) = param_1;
  *(undefined4 *)((long)pvVar2 + 0x10) = 0;
  return;
}

