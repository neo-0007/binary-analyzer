
long * FUN_006a09a0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_007129d0(param_2);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  lVar1 = param_3[1];
  *param_1 = (long)(param_1 + 2);
                    /* try { // try from 006a09e2 to 006a0a2f has its CatchHandler @ 006a0a30 */
  FUN_0069e840(param_1,lVar1 + uVar2);
  if (uVar2 <= 0x3fffffffffffffffU - param_1[1]) {
    FUN_0069fc40(param_1,param_2,uVar2);
    FUN_0069fc40(param_1,*param_3,param_3[1]);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403998("basic_string::append");
}

