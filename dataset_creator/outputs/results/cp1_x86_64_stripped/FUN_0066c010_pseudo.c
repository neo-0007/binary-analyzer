
void FUN_0066c010(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  lVar3 = *(long *)(lVar1 + -0x18);
  *param_1 = lVar1;
  *(long *)((long)param_1 + lVar3) = lVar2;
  param_1[1] = 0;
  FUN_0066fda0(*(long *)(lVar1 + -0x18) + (long)param_1,0);
  lVar1 = *param_2;
  lVar2 = param_2[3];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = lVar2;
                    /* try { // try from 0066c067 to 0066c06b has its CatchHandler @ 0066c089 */
  FUN_006674c0(param_1 + 2);
                    /* try { // try from 0066c079 to 0066c07d has its CatchHandler @ 0066c092 */
  FUN_0066fda0(*(long *)(*param_1 + -0x18) + (long)param_1,param_1 + 2);
  return;
}

