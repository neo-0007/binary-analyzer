
void FUN_00650ba0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_00935d08;
  lVar2 = param_1[4];
  plVar3 = (long *)param_1[3];
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  if (DAT_0093ea10 == '\0') {
    LOCK();
    plVar1 = plVar3 + 1;
    iVar4 = (int)*plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
  }
  else {
    iVar4 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar4 + -1;
  }
  if (iVar4 == 1) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_00628150(param_1);
  return;
}

