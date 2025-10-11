
void FUN_006962f0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = *(long *)(lVar1 + -0x18);
  *param_1 = lVar1;
  *(long *)((long)param_1 + lVar4) = lVar3;
  param_1[1] = param_3[1];
  lVar3 = *(long *)(lVar1 + -0x18) + (long)param_1;
  lVar4 = *(long *)(*param_3 + -0x18) + (long)param_3;
  FUN_006703b0(lVar3,lVar4);
  FUN_0066efe0(lVar3,lVar3 + 0xd0);
  uVar2 = *(undefined8 *)(lVar4 + 0xd8);
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  lVar1 = param_2[3];
  *(undefined8 *)(lVar3 + 0xd8) = uVar2;
  *(undefined2 *)(lVar3 + 0xe0) = *(undefined2 *)(lVar4 + 0xe0);
  lVar3 = *param_2;
  param_3[1] = 0;
  *param_1 = lVar3;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = lVar1;
                    /* try { // try from 006963a7 to 006963ab has its CatchHandler @ 006963c4 */
  FUN_00695600(param_1 + 2,param_3 + 2);
  *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8) = param_1 + 2;
  return;
}

