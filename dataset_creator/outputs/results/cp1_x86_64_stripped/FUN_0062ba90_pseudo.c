
void FUN_0062ba90(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[2];
  *param_1 = &PTR_FUN_009378c0;
  if ((plVar1[3] != 0) && (plVar1[2] != 0)) {
    thunk_FUN_007104f0();
    plVar1 = (long *)param_1[2];
    if (plVar1 == (long *)0x0) goto LAB_0062baf1;
  }
  if (*(code **)(*plVar1 + 8) != FUN_0062b5a0) {
                    /* try { // try from 0062bb00 to 0062bb01 has its CatchHandler @ 0062bb0e */
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_00625090(param_1);
    return;
  }
                    /* try { // try from 0062bae4 to 0062bae8 has its CatchHandler @ 0062bb1a */
  FUN_0062b540();
  thunk_FUN_007104f0(plVar1);
LAB_0062baf1:
  FUN_00625090(param_1);
  return;
}

