
void FUN_006b59b0(long *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  lVar5 = lVar3 - (param_3 + param_2);
  if ((lVar5 != 0) && (param_3 != 0)) {
    puVar1 = (undefined4 *)(lVar4 + (param_3 + param_2) * 4);
    puVar2 = (undefined4 *)(lVar4 + param_2 * 4);
    if (lVar5 == 1) {
      *puVar2 = *puVar1;
    }
    else {
      FUN_00771ed0(puVar2,puVar1,lVar5,0x3fffffffffffffff);
      lVar3 = param_1[1];
      lVar4 = *param_1;
    }
  }
  param_1[1] = lVar3 - param_3;
  *(undefined4 *)(lVar4 + (lVar3 - param_3) * 4) = 0;
  return;
}

