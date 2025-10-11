
void FUN_00635ec0(long *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 1;
  while( true ) {
    cVar1 = func_0x00000000(param_2 + -1 + lVar3);
    if (cVar1 == '\0') break;
    lVar3 = lVar3 + 1;
  }
                    /* try { // try from 00635ef6 to 00635efa has its CatchHandler @ 00635f2f */
  plVar2 = (long *)func_0x00000000(lVar3 + 0x18);
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[1] = lVar3 + -1;
  *plVar2 = lVar3 + -1;
  func_0x00000000(plVar2 + 3,param_2,lVar3);
  *param_1 = (long)(plVar2 + 3);
  return;
}

