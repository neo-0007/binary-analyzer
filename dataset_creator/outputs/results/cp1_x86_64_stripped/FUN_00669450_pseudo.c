
void FUN_00669450(long *param_1,long *param_2)

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
  FUN_0066f450(*(long *)(lVar1 + -0x18) + (long)param_1,0);
  lVar1 = *param_2;
  lVar2 = param_2[3];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = lVar2;
                    /* try { // try from 006694a7 to 006694ab has its CatchHandler @ 006694c9 */
  FUN_00665720(param_1 + 2);
                    /* try { // try from 006694b9 to 006694bd has its CatchHandler @ 006694d2 */
  FUN_0066f450(*(long *)(*param_1 + -0x18) + (long)param_1,param_1 + 2);
  return;
}

