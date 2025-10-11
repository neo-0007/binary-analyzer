
/* std::wstreambuf::pubseekoff(long, std::_Ios_Seekdir, std::_Ios_Openmode) */

undefined1  [16] std::wstreambuf::pubseekoff(long *param_1)

{
  undefined1 auVar1 [16];
  
  if (*(code **)(*param_1 + 0x20) == seekoff) {
    return ZEXT816(0xffffffffffffffff);
  }
                    /* WARNING: Could not recover jumptable at 0x006906b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar1 = (**(code **)(*param_1 + 0x20))();
  return auVar1;
}

