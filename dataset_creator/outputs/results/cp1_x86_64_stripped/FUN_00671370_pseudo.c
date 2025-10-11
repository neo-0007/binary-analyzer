
void FUN_00671370(long *param_1,long *param_2)

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
  FUN_0066fda0(*(long *)(lVar2 + -0x18) + (long)param_1,0);
  lVar2 = param_2[3];
  param_1[2] = lVar2;
  plVar1 = (long *)((long)param_1 + *(long *)(lVar2 + -0x18) + 0x10);
  *plVar1 = param_2[4];
                    /* try { // try from 006713c3 to 006713c7 has its CatchHandler @ 006713ea */
  FUN_0066fda0(plVar1,0);
  lVar2 = *param_2;
  lVar3 = param_2[5];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = lVar3;
  param_1[2] = param_2[6];
  return;
}

