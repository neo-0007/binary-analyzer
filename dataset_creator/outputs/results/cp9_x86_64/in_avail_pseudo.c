
/* std::wstreambuf::in_avail() */

long __thiscall std::wstreambuf::in_avail(wstreambuf *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
    return *(long *)(this + 0x18) - *(long *)(this + 0x10) >> 2;
  }
  if (*(code **)(*(long *)this + 0x38) == showmanyc) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00690758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(long *)this + 0x38))();
  return lVar1;
}

