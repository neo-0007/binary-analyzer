
long * FUN_0063b880(long *param_1,long param_2,long param_3,ulong param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  
  if ((ulong)((param_3 + 0xffffffffffffffe) - *(long *)(*param_1 + -0x18)) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::_M_replace_aux");
  }
  FUN_0063b2f0();
  if (param_4 != 0) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
    if (param_4 == 1) {
      *puVar1 = param_5;
      return param_1;
    }
    FUN_00771ff0(puVar1,param_5,param_4,0x3fffffffffffffff);
  }
  return param_1;
}

