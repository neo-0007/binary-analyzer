
void FUN_00636d30(long *param_1,ulong param_2,undefined8 param_3)

{
  if (param_2 <= *(ulong *)(*param_1 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)",param_3,param_2);
}

