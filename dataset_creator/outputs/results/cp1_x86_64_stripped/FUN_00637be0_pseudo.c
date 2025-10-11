
void FUN_00637be0(ulong param_1,ulong param_2)

{
  long lVar1;
  
  if (0x3ffffffffffffff9 < param_1) {
LAB_00637c6e:
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::_S_create");
  }
  if (param_2 < param_1) {
    if (param_1 < param_2 * 2) {
      param_1 = param_2 * 2;
    }
    if ((param_1 + 0x39 < 0x1001) || (param_1 <= param_2)) {
      lVar1 = param_1 + 0x19;
      if (lVar1 < 0) {
        FUN_004037bc();
        goto LAB_00637c6e;
      }
    }
    else {
      param_1 = (param_1 + 0x1000) - (ulong)((uint)(param_1 + 0x39) & 0xfff);
      if (0x3ffffffffffffff9 < param_1) {
        param_1 = 0x3ffffffffffffff9;
      }
      lVar1 = param_1 + 0x19;
    }
  }
  else {
    lVar1 = param_1 + 0x19;
  }
  lVar1 = FUN_006c31f0(lVar1);
  *(ulong *)(lVar1 + 8) = param_1;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  return;
}

