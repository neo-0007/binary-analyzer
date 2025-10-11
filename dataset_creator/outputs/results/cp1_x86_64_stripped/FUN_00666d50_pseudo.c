
void FUN_00666d50(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_2[1] + -0x18);
  *param_1 = param_2[1];
  plVar3 = (long *)(lVar1 + (long)param_1);
  *plVar3 = param_2[2];
  lVar4 = *(long *)(*param_3 + -0x18) + (long)param_3;
  FUN_006703b0(plVar3,lVar4);
  FUN_0066efe0(plVar3,plVar3 + 0x1a);
  lVar1 = *(long *)(lVar4 + 0xd8);
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  plVar3[0x1d] = 0;
  lVar2 = param_2[3];
  plVar3[0x1b] = lVar1;
  *(undefined2 *)(plVar3 + 0x1c) = *(undefined2 *)(lVar4 + 0xe0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = lVar2;
                    /* try { // try from 00666df5 to 00666df9 has its CatchHandler @ 00666e12 */
  FUN_006658a0(param_1 + 1,param_3 + 1);
  *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8) = param_1 + 1;
  return;
}

