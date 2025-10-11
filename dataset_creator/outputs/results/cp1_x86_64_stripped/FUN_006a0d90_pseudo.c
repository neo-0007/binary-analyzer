
long * FUN_006a0d90(long *param_1,long *param_2,undefined8 *param_3)

{
  *param_1 = (long)(param_1 + 2);
  FUN_006a0c90(param_1,*param_2,param_2[1] + *param_2);
                    /* try { // try from 006a0dc7 to 006a0dcb has its CatchHandler @ 006a0dda */
  FUN_0069fc40(param_1,*param_3,param_3[1]);
  return param_1;
}

