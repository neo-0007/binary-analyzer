
void FUN_006384f0(long *param_1,ulong param_2,undefined8 param_3,char param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (param_2 <= uVar1) {
    FUN_00638440(param_1,param_2,0,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
               param_2,uVar1,(int)param_4,param_6,*param_1);
}

