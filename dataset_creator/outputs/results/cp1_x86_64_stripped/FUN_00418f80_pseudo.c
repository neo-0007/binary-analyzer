
bool FUN_00418f80(void)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  plVar1 = (long *)FUN_00417930();
  bVar3 = false;
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_00422240();
    bVar3 = lVar2 != 0;
    *plVar1 = lVar2;
  }
  return bVar3;
}

