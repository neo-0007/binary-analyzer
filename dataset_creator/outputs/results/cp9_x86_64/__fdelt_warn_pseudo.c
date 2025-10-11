
long __fdelt_warn(ulong param_1)

{
  if (param_1 < 0x400) {
    return (long)param_1 >> 6;
  }
                    /* WARNING: Subroutine does not return */
  __chk_fail();
}

