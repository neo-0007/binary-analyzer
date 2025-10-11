
/* std::wostream::flush() */

wostream * __thiscall std::wostream::flush(wostream *this)

{
  int iVar1;
  
  if (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8) != (long *)0x0) {
                    /* try { // try from 0068c740 to 0068c742 has its CatchHandler @ 0068c76c */
    iVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8) + 0x30))();
    if (iVar1 == -1) {
      wios::clear((wios *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((wios *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 1);
      return this;
    }
  }
  return this;
}

