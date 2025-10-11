
undefined * FUN_0063cec0(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_1 == param_2) {
    return &DAT_009452d8;
  }
  if (param_1 != 0) {
    puVar1 = (undefined *)FUN_0063b0b0();
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403890("basic_string::_S_construct null not valid");
}

