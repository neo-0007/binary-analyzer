
void FUN_0066cf30(long *param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  lVar2 = *(long *)(lVar3 + -0x18);
  *param_1 = lVar3;
  *(long *)((long)param_1 + lVar2) = lVar4;
  param_1[1] = 0;
  FUN_0066fda0(*(long *)(lVar3 + -0x18) + (long)param_1,0);
  lVar3 = param_2[4];
  param_1[2] = lVar3;
  plVar1 = (long *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x10);
  *plVar1 = param_2[5];
                    /* try { // try from 0066cf8b to 0066cf8f has its CatchHandler @ 0066d046 */
  FUN_0066fda0(plVar1,0);
  lVar3 = param_2[1];
  lVar4 = param_2[6];
  plVar1 = param_1 + 3;
  *param_1 = lVar3;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = lVar4;
  param_1[2] = param_2[7];
  lVar3 = *param_2;
  lVar4 = param_2[8];
  *param_1 = lVar3;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = lVar4;
  param_1[2] = param_2[9];
                    /* try { // try from 0066cfd0 to 0066cfd4 has its CatchHandler @ 0066d03d */
  FUN_006674c0(plVar1);
                    /* try { // try from 0066cfe3 to 0066d02a has its CatchHandler @ 0066d034 */
  FUN_0066fda0(*(long *)(*param_1 + -0x18) + (long)param_1,plVar1);
  lVar3 = FUN_0066caa0(plVar1,*param_3,param_4);
  lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
  if (lVar3 != 0) {
    FUN_0066f6e0(lVar4,0);
    return;
  }
  FUN_0066f6e0(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  return;
}

