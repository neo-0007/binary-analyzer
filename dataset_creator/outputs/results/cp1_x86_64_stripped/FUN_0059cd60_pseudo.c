
ulong FUN_0059cd60(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_2;
  if (param_2 != param_4) {
    return 0;
  }
  do {
    if (lVar4 == 0) goto LAB_0059cdd7;
    lVar4 = lVar4 + -1;
  } while ((*(char *)(param_1 + lVar4) != '@') && (*(char *)(param_3 + lVar4) != '@'));
  lVar3 = param_2 - lVar4;
  uVar2 = FUN_0059bd60(param_1 + lVar4,lVar3,param_3 + lVar4,lVar3,0);
  if ((int)uVar2 != 0) {
    param_2 = lVar4;
    if (lVar4 == 0) {
      param_2 = lVar3;
    }
LAB_0059cdd7:
    iVar1 = thunk_FUN_00713570(param_1,param_3,param_2);
    uVar2 = (ulong)(iVar1 == 0);
  }
  return uVar2;
}

