
void FUN_0062b4a0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00936218;
  plVar1 = (long *)param_1[2];
  if ((plVar1[3] != 0) && (plVar1[2] != 0)) {
    thunk_FUN_007104f0(plVar1[2]);
    plVar1 = (long *)param_1[2];
    if (plVar1 == (long *)0x0) goto LAB_0062b4ee;
  }
                    /* try { // try from 0062b4eb to 0062b4ed has its CatchHandler @ 0062b4fd */
  (**(code **)(*plVar1 + 8))();
LAB_0062b4ee:
  FUN_00625090(param_1);
  return;
}

