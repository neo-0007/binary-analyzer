
int FUN_005b0170(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
  }
  iVar1 = FUN_005b0140(param_1,param_2);
  if ((0 < iVar1) && (param_1 != 0)) {
    iVar2 = FUN_005b0910(*(undefined8 *)(param_1 + 0x150),param_2);
    iVar1 = iVar1 + iVar2;
    if ((iVar2 < 0) && (iVar1 = iVar2, lVar3 != 0)) {
      *param_2 = lVar3;
    }
  }
  return iVar1;
}

