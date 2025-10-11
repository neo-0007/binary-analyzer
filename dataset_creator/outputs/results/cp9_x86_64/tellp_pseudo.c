
/* std::wostream::tellp() */

undefined1  [16] __thiscall std::wostream::tellp(wostream *this)

{
  undefined1 auVar1 [16];
  
  if ((*(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20) & 5) == 0) {
                    /* try { // try from 0068c825 to 0068c827 has its CatchHandler @ 0068c85b */
    auVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8) + 0x20))
                       (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0xe8),0,1,0x10);
    return auVar1;
  }
  return ZEXT816(0xffffffffffffffff);
}

