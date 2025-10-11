
void FUN_00671160(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = *(long *)(lVar2 + -0x18);
  *param_1 = lVar2;
  *(long *)((long)param_1 + lVar4) = lVar3;
  param_1[1] = 0;
  FUN_0066fda0(*(long *)(lVar2 + -0x18) + (long)param_1,param_3);
  lVar2 = param_2[3];
  param_1[2] = lVar2;
  plVar1 = (long *)((long)param_1 + *(long *)(lVar2 + -0x18) + 0x10);
  *plVar1 = param_2[4];
                    /* try { // try from 006711b6 to 006711ba has its CatchHandler @ 006711db */
  FUN_0066fda0(plVar1,param_3);
  lVar2 = *param_2;
  lVar3 = param_2[5];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = lVar3;
  param_1[2] = param_2[6];
  return;
}

