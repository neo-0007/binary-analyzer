
void FUN_0069f660(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 <= *(ulong *)(param_1 + 8)) {
    FUN_0069f220(param_1,param_2,0,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               param_2,*(ulong *)(param_1 + 8),param_4);
}

