
long FUN_0063b750(long *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_2 < *(ulong *)(lVar1 + -0x18)) {
    if (-1 < *(int *)(lVar1 + -8)) {
      FUN_0063b560();
      lVar1 = *param_1;
    }
    return lVar1 + param_2 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
}

