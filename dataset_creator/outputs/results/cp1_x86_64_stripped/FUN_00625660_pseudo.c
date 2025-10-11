
uint FUN_00625660(uint param_1)

{
  if ((param_1 != 0) && (((param_1 & 0x3f) == 0 || ((param_1 & 0xffffffc0) != 0)))) {
    if (param_1 - 1 < 6) {
      return *(uint *)(&DAT_0081da00 + (ulong)(param_1 - 1) * 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00403a6e("locale::_S_normalize_category category not found");
  }
  return param_1;
}

