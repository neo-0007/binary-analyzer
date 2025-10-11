
/* std::locale::_S_normalize_category(int) */

int std::locale::_S_normalize_category(int param_1)

{
  if ((param_1 != 0) && (((param_1 & 0x3fU) == 0 || ((param_1 & 0xffffffc0U) != 0)))) {
    if (param_1 - 1U < 6) {
      return *(int *)(CSWTCH_105 + (ulong)(param_1 - 1U) * 4);
    }
                    /* WARNING: Subroutine does not return */
    __throw_runtime_error("locale::_S_normalize_category category not found");
  }
  return param_1;
}

