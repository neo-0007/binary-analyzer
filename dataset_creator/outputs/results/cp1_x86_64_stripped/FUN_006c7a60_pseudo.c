
void FUN_006c7a60(long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = param_2 - *param_1 >> 2;
  if (uVar1 <= (ulong)param_1[1]) {
    FUN_006b6740(param_1,uVar1,0,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               uVar1,param_1[1],param_4 - param_3 >> 2);
}

