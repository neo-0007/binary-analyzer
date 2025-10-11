
long * FUN_006b8170(long *param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  
  param_1[1] = 0;
  lVar1 = param_3[1];
  *param_1 = (long)(param_1 + 2);
  *(undefined4 *)(param_1 + 2) = 0;
                    /* try { // try from 006b81a4 to 006b81ce has its CatchHandler @ 006b81dd */
  FUN_006b5de0(param_1,lVar1 + 1);
  FUN_006b6430(param_1,param_1[1],0,1,param_2);
  FUN_006b7280(param_1,*param_3,param_3[1]);
  return param_1;
}

