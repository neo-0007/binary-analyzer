
void FUN_0062a080(undefined8 *param_1)

{
  char *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_00937ad0;
  if ((plVar2[3] != 0) && (plVar2[2] != 0)) {
    thunk_FUN_007104f0();
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2[8] != 0) && (plVar2[7] != 0)) {
    thunk_FUN_007104f0();
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2[10] != 0) &&
     (((pcVar1 = (char *)plVar2[9], *pcVar1 != '(' || (pcVar1[1] != ')')) || (pcVar1[2] != '\0'))))
  {
    thunk_FUN_007104f0();
    plVar2 = (long *)param_1[2];
  }
  if ((plVar2[6] != 0) && (plVar2[5] != 0)) {
    thunk_FUN_007104f0();
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) goto LAB_0062a131;
  }
  if (*(code **)(*plVar2 + 8) != FUN_00629210) {
                    /* try { // try from 0062a150 to 0062a151 has its CatchHandler @ 0062a15e */
    (**(code **)(*plVar2 + 8))(plVar2);
    FUN_00625090(param_1);
    return;
  }
                    /* try { // try from 0062a124 to 0062a128 has its CatchHandler @ 0062a16a */
  FUN_006291b0();
  thunk_FUN_007104f0(plVar2);
LAB_0062a131:
  FUN_00625090(param_1);
  return;
}

