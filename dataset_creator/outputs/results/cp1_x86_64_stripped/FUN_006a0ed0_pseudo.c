
void FUN_006a0ed0(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2[1];
  *param_1 = (long)(param_1 + 2);
  lVar2 = *param_2;
  if (param_3 <= uVar1) {
    FUN_006a0e00(param_1,lVar2 + param_3,uVar1 + lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::basic_string"
               ,param_3,uVar1,uVar1,param_6,lVar2);
}

