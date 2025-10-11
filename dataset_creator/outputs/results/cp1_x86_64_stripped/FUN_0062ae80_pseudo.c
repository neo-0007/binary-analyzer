
void FUN_0062ae80(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00938f90;
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
    if (plVar3 == (long *)0x0) goto LAB_0062af31;
  }
  if (*(code **)(*plVar3 + 8) != FUN_00629350) {
                    /* try { // try from 0062af50 to 0062af51 has its CatchHandler @ 0062af5f */
    (**(code **)(*plVar3 + 8))(plVar3);
    FUN_00625090(param_1);
    return;
  }
                    /* try { // try from 0062af24 to 0062af28 has its CatchHandler @ 0062af6b */
  FUN_006292f0();
  thunk_FUN_007104f0(plVar3);
LAB_0062af31:
  FUN_00625090(param_1);
  return;
}

