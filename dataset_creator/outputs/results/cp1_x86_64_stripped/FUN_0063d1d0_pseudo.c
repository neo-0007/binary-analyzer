
void FUN_0063d1d0(void)

{
  ulong uVar1;
  long *in_RCX;
  ulong in_R8;
  ulong uVar2;
  ulong in_R9;
  
  uVar1 = *(ulong *)(*in_RCX + -0x18);
  uVar2 = uVar1 - in_R8;
  if (in_R9 < uVar1 - in_R8) {
    uVar2 = in_R9;
  }
  if (in_R8 <= uVar1) {
    FUN_0063cfa0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               in_R8,uVar1,uVar2,in_R9,*in_RCX);
}

