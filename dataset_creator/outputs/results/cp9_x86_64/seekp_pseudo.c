
/* std::wostream::seekp(long, std::_Ios_Seekdir) */

long * std::wostream::seekp(long *param_1)

{
  long lVar1;
  wios *pwVar2;
  
  if ((*(byte *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0) {
                    /* try { // try from 0068c9e8 to 0068c9ea has its CatchHandler @ 0068ca1c */
    lVar1 = (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8) + 0x20))();
    if (lVar1 == -1) {
      pwVar2 = (wios *)(*(long *)(*param_1 + -0x18) + (long)param_1);
      wios::clear(pwVar2,*(uint *)(pwVar2 + 0x20) | 4);
      return param_1;
    }
  }
  return param_1;
}

