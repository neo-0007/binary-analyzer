
void FUN_00629010(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00936310;
  if ((plVar3[3] != 0) && (plVar3[2] != 0)) {
    thunk_FUN_007104f0();
    plVar3 = (long *)param_1[2];
  }
  if ((plVar3[9] != 0) && (plVar3[8] != 0)) {
    thunk_FUN_007104f0();
    plVar3 = (long *)param_1[2];
  }
  if (plVar3[0xb] != 0) {
    lVar1 = plVar3[10];
    iVar2 = thunk_FUN_00756460(lVar1,&DAT_0081da54);
    if (iVar2 != 0) {
      thunk_FUN_007104f0(lVar1);
      plVar3 = (long *)param_1[2];
    }
  }
  if ((plVar3[7] != 0) && (plVar3[6] != 0)) {
    thunk_FUN_007104f0();
    plVar3 = (long *)param_1[2];
    if (plVar3 == (long *)0x0) goto LAB_006290aa;
  }
                    /* try { // try from 006290a7 to 006290a9 has its CatchHandler @ 006290cf */
  (**(code **)(*plVar3 + 8))(plVar3);
LAB_006290aa:
  FUN_00625090(param_1);
  return;
}

