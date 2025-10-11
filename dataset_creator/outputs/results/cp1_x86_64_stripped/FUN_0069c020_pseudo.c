
void FUN_0069c020(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  lVar4 = *(long *)(lVar2 + -0x18);
  *param_1 = lVar2;
  *(long *)((long)param_1 + lVar4) = lVar3;
  param_1[1] = 0;
  FUN_0066fda0(*(long *)(lVar2 + -0x18) + (long)param_1,0);
  lVar2 = param_2[4];
  param_1[2] = lVar2;
  plVar1 = (long *)((long)param_1 + *(long *)(lVar2 + -0x18) + 0x10);
  *plVar1 = param_2[5];
                    /* try { // try from 0069c07b to 0069c07f has its CatchHandler @ 0069c0e7 */
  FUN_0066fda0(plVar1,0);
  lVar2 = param_2[1];
  lVar3 = param_2[6];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = lVar3;
  param_1[2] = param_2[7];
  lVar2 = *param_2;
  lVar3 = param_2[8];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = lVar3;
  param_1[2] = param_2[9];
                    /* try { // try from 0069c0c6 to 0069c0ca has its CatchHandler @ 0069c0f9 */
  FUN_00698ef0(param_1 + 3,param_3,param_4);
                    /* try { // try from 0069c0d9 to 0069c0dd has its CatchHandler @ 0069c0f0 */
  FUN_0066fda0(*(long *)(*param_1 + -0x18) + (long)param_1,param_1 + 3);
  return;
}

