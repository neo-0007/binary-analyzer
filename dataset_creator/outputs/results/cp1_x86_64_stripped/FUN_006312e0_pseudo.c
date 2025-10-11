
void FUN_006312e0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00918228;
  plVar2 = (long *)param_1[2];
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
  *param_1 = &PTR_FUN_00939260;
  FUN_00625090(param_1);
  return;
}

