
long FUN_006b6010(long *param_1,ulong param_2)

{
  if (param_2 < (ulong)param_1[1]) {
    return *param_1 + param_2 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
}

