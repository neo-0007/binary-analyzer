
long * FUN_004386c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_004239c0();
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_00438660();
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar2;
      lVar2 = FUN_004a7f10();
      if (lVar2 != 0) {
        iVar1 = FUN_00435f80(plVar3[1],lVar2);
        if (iVar1 != 0) {
          FUN_004a10c0(lVar2,param_2,param_3);
          return plVar3;
        }
      }
      FUN_00438680(plVar3);
      FUN_004a7f30(lVar2);
    }
  }
  return (long *)0x0;
}

