
void FUN_0062b1f0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00935558;
  plVar1 = (long *)param_1[2];
  if ((plVar1[3] != 0) && (plVar1[2] != 0)) {
    thunk_FUN_007104f0(plVar1[2]);
    plVar1 = (long *)param_1[2];
    if (plVar1 == (long *)0x0) goto LAB_0062b23e;
  }
                    /* try { // try from 0062b23b to 0062b23d has its CatchHandler @ 0062b24d */
  (**(code **)(*plVar1 + 8))();
LAB_0062b23e:
  FUN_00625090(param_1);
  return;
}

