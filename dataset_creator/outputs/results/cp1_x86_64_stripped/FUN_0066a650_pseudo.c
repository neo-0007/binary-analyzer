
void FUN_0066a650(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_0066f450(*(long *)(lVar3 + -0x18) + (long)param_1,0);
  lVar3 = param_2[4];
  param_1[2] = lVar3;
  plVar1 = (long *)((long)param_1 + *(long *)(lVar3 + -0x18) + 0x10);
  *plVar1 = param_2[5];
                    /* try { // try from 0066a6ab to 0066a6af has its CatchHandler @ 0066a766 */
  FUN_0066f450(plVar1,0);
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
                    /* try { // try from 0066a6f0 to 0066a6f4 has its CatchHandler @ 0066a75d */
  FUN_00665720(plVar1);
                    /* try { // try from 0066a703 to 0066a74a has its CatchHandler @ 0066a754 */
  FUN_0066f450(*(long *)(*param_1 + -0x18) + (long)param_1,plVar1);
  lVar3 = FUN_00669ed0(plVar1,param_3,param_4);
  lVar4 = *(long *)(*param_1 + -0x18) + (long)param_1;
  if (lVar3 != 0) {
    FUN_0066ec40(lVar4,0);
    return;
  }
  FUN_0066ec40(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  return;
}

