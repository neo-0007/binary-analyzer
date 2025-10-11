
long * FUN_006b8490(long *param_1,long *param_2,undefined8 *param_3)

{
  *param_1 = (long)(param_1 + 2);
  FUN_006b8390(param_1,*param_2,*param_2 + param_2[1] * 4);
                    /* try { // try from 006b84c8 to 006b84cc has its CatchHandler @ 006b84db */
  FUN_006b7280(param_1,*param_3,param_3[1]);
  return param_1;
}

