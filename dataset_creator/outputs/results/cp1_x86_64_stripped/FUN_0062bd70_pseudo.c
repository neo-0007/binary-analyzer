
void FUN_0062bd70(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00938d80;
  if ((plVar1[3] != 0) && (plVar1[2] != 0)) {
    thunk_FUN_007104f0();
    plVar1 = (long *)param_1[2];
    if (plVar1 == (long *)0x0) goto LAB_0062bdd1;
  }
  if (*(code **)(*plVar1 + 8) != FUN_0062b640) {
                    /* try { // try from 0062bde0 to 0062bde1 has its CatchHandler @ 0062bdee */
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_00625090(param_1);
    return;
  }
                    /* try { // try from 0062bdc4 to 0062bdc8 has its CatchHandler @ 0062bdfa */
  FUN_0062b5e0();
  thunk_FUN_007104f0(plVar1);
LAB_0062bdd1:
  FUN_00625090(param_1);
  return;
}

