
void FUN_00638ab0(long *param_1)

{
  ulong uVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (uVar1 - 1 <= uVar1) {
    FUN_00637f00(param_1,uVar1 - 1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
               0xffffffffffffffff,0,in_R8,in_R9,uVar1);
}

