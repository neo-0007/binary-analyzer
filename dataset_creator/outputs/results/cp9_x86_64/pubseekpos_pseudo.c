
/* std::wstreambuf::pubseekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode) */

undefined1  [16] std::wstreambuf::pubseekpos(long *param_1)

{
  undefined1 auVar1 [16];
  
  if (*(code **)(*param_1 + 0x28) == seekpos) {
    return ZEXT816(0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x006906e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar1 = (**(code **)(*param_1 + 0x28))();
  return auVar1;
}

