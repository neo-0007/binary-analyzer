
void FUN_006b7350(undefined8 param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = param_2[1] - param_3;
  if (uVar1 <= param_4) {
    param_4 = uVar1;
  }
  if (param_3 <= (ulong)param_2[1]) {
    FUN_006b7280(param_1,*param_2 + param_3 * 4,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::append");
}

