
void FUN_006d3060(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  plVar3 = param_1 + 2;
  do {
    do {
      plVar4 = plVar3;
      if ((*(byte *)(plVar4 + 2) & 1) != 0) goto LAB_006d309d;
      plVar3 = plVar4 + 6;
    } while (*plVar4 == 0);
    FUN_007104f0();
  } while ((*(byte *)(plVar4 + 2) & 1) == 0);
LAB_006d309d:
  FUN_007104f0(param_1);
  FUN_006d4220(uVar1,uVar2);
  return;
}

