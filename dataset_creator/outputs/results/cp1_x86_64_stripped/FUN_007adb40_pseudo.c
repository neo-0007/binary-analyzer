
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_007adb40(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  
  if (param_1[1] == -1) {
    return (undefined8 *)0x0;
  }
  lVar6 = *param_1;
  if (lVar6 == param_1[1]) {
    plVar1 = param_1 + 3;
    cVar5 = FUN_007a2e50(param_1,plVar1,8);
    lVar6 = *param_1;
    if (cVar5 == '\0') {
      plVar7 = (long *)param_1[2];
      if (lVar6 != 0) {
        plVar3 = plVar7 + lVar6;
        do {
          lVar6 = *plVar7;
          plVar7 = plVar7 + 1;
          FUN_007104f0(lVar6);
        } while (plVar7 != plVar3);
        plVar7 = (long *)param_1[2];
      }
      if (plVar1 != plVar7) {
        FUN_007104f0(plVar7);
      }
      lVar4 = _UNK_0082eb88;
      lVar6 = _DAT_0082eb80;
      param_1[2] = (long)plVar1;
      *param_1 = lVar6;
      param_1[1] = lVar4;
      return (undefined8 *)0x0;
    }
  }
  puVar2 = (undefined8 *)(param_1[2] + lVar6 * 8);
  *param_1 = lVar6 + 1;
  *puVar2 = 0;
  return puVar2;
}

