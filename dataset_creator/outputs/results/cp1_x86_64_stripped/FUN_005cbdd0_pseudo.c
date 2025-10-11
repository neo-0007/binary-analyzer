
undefined8 FUN_005cbdd0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = DAT_009427b8;
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_009427b8 != 0) {
    lVar4 = 0;
    puVar3 = DAT_009427c0;
    do {
      iVar2 = thunk_FUN_00712780(*puVar3,param_1);
      if (iVar2 == 0) {
        *param_2 = lVar4;
        return 1;
      }
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 3;
    } while (lVar4 != lVar1);
  }
  return 0;
}

