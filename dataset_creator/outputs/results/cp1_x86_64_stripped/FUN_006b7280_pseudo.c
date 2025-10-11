
long * FUN_006b7280(long *param_1,undefined4 *param_2,long param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar3 = param_1[1];
  plVar4 = (long *)*param_1;
  uVar1 = lVar3 + param_3;
  if (plVar4 == param_1 + 2) {
    uVar5 = 3;
  }
  else {
    uVar5 = param_1[2];
  }
  if (uVar5 < uVar1) {
    FUN_006b5810(param_1,lVar3,0,param_2);
    plVar4 = (long *)*param_1;
  }
  else if (param_3 != 0) {
    puVar2 = (undefined4 *)((long)plVar4 + lVar3 * 4);
    if (param_3 == 1) {
      *puVar2 = *param_2;
    }
    else {
      FUN_00771ea0(puVar2,param_2,param_3,0x3fffffffffffffff);
      plVar4 = (long *)*param_1;
    }
  }
  param_1[1] = uVar1;
  *(undefined4 *)((long)plVar4 + uVar1 * 4) = 0;
  return param_1;
}

