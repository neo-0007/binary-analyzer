
void FUN_00631b80(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00934f90;
  plVar2 = (long *)param_1[3];
  if (DAT_0093ea10 == '\0') {
    LOCK();
    plVar1 = plVar2 + 1;
    iVar3 = (int)*plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
  }
  else {
    iVar3 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar3 + -1;
  }
  if (iVar3 == 1) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = &PTR_FUN_00938c90;
  FUN_006c4530(param_1 + 2);
  FUN_00625090(param_1);
  return;
}

