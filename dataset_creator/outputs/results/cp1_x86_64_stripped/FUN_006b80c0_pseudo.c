
long * FUN_006b80c0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_007564d0(param_2);
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  lVar1 = param_3[1];
  *(undefined4 *)(param_1 + 2) = 0;
                    /* try { // try from 006b8105 to 006b8152 has its CatchHandler @ 006b8153 */
  FUN_006b5de0(param_1,lVar1 + uVar2);
  if (uVar2 <= 0xfffffffffffffffU - param_1[1]) {
    FUN_006b7280(param_1,param_2,uVar2);
    FUN_006b7280(param_1,*param_3,param_3[1]);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403998("basic_string::append");
}

