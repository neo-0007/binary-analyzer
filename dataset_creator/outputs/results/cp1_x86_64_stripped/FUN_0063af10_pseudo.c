
void FUN_0063af10(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (0xffffffffffffffe < param_1) {
LAB_0063afba:
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::_S_create");
  }
  if (param_2 < param_1) {
    if (param_1 < param_2 * 2) {
      param_1 = param_2 * 2;
    }
    lVar2 = param_1 * 4 + 0x1c;
    uVar1 = param_1 * 4 + 0x3c;
    if ((uVar1 < 0x1001) || (param_1 <= param_2)) {
      if (lVar2 < 0) {
        FUN_004037bc();
        goto LAB_0063afba;
      }
    }
    else {
      param_1 = param_1 + (0x1000 - (ulong)((uint)uVar1 & 0xfff) >> 2);
      if (0xffffffffffffffe < param_1) {
        param_1 = 0xffffffffffffffe;
      }
      lVar2 = param_1 * 4 + 0x1c;
    }
  }
  else {
    lVar2 = param_1 * 4 + 0x1c;
  }
  lVar2 = FUN_006c31f0(lVar2);
  *(ulong *)(lVar2 + 8) = param_1;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  return;
}

