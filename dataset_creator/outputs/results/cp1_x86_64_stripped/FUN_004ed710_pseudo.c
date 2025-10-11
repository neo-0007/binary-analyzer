
long * FUN_004ed710(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_004ed610();
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = FUN_004ec9c0(param_1,param_2,param_3);
  plVar2[3] = lVar3;
  if (lVar3 != 0) {
    if (*(code **)(*plVar2 + 0x28) == (code *)0x0) {
      return plVar2;
    }
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3);
    if (iVar1 != 0) {
      return plVar2;
    }
  }
  FUN_004ed620(plVar2);
  return (long *)0x0;
}

