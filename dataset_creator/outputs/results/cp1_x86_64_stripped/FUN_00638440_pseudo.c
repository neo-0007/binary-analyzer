
long * FUN_00638440(long *param_1,long param_2,long param_3,ulong param_4,char param_5)

{
  if ((ulong)((param_3 + 0x3ffffffffffffff9) - *(long *)(*param_1 + -0x18)) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::_M_replace_aux");
  }
  FUN_00637f00();
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(char *)(param_2 + *param_1) = param_5;
      return param_1;
    }
    thunk_FUN_00713720((char *)(param_2 + *param_1),(int)param_5,param_4);
  }
  return param_1;
}

