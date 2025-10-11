
void FUN_00628150(undefined8 *param_1)

{
  char *pcVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_009355e8;
  plVar2 = (long *)param_1[2];
  if ((plVar2[3] != 0) && (plVar2[2] != 0)) {
    thunk_FUN_007104f0(plVar2[2]);
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2[8] != 0) && (plVar2[7] != 0)) {
    thunk_FUN_007104f0(plVar2[7]);
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2[10] != 0) &&
     (((pcVar1 = (char *)plVar2[9], *pcVar1 != '(' || (pcVar1[1] != ')')) || (pcVar1[2] != '\0'))))
  {
    thunk_FUN_007104f0(pcVar1);
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2[6] != 0) && (plVar2[5] != 0)) {
    thunk_FUN_007104f0(plVar2[5]);
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) goto LAB_006281f6;
  }
                    /* try { // try from 006281f3 to 006281f5 has its CatchHandler @ 00628218 */
  (**(code **)(*plVar2 + 8))();
LAB_006281f6:
  FUN_00625090(param_1);
  return;
}

