
long * FUN_006c94d0(long *param_1,undefined8 param_2,int param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_3 != 1) {
                    /* try { // try from 006c9504 to 006c952d has its CatchHandler @ 006c9536 */
    FUN_0069f220(param_1,0,0,"Unknown error",0xd);
    return param_1;
  }
  FUN_0069f220(param_1,0,0,"iostream error",0xe);
  return param_1;
}

