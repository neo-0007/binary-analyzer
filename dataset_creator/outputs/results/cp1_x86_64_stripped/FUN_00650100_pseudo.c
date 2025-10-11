
void FUN_00650100(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_009182d8;
  plVar2 = (long *)param_1[4];
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
  FUN_0063e770(param_1);
  return;
}

