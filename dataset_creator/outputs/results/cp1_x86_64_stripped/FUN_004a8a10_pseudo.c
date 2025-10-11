
bool FUN_004a8a10(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_2 == (long *)0x0) {
    return false;
  }
  if (param_1 == (long *)0x0) {
    return false;
  }
  if (*param_1 != 0) {
    FUN_004a06b0();
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
    FUN_004a7f30();
  }
  lVar2 = *param_2;
  param_1[1] = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_00424a40();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  bVar3 = true;
  if (param_2[1] != 0) {
    lVar2 = FUN_004a7f10();
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return false;
    }
    iVar1 = FUN_004a1130(lVar2,*(undefined4 *)param_2[1],
                         *(undefined8 *)((undefined4 *)param_2[1] + 2));
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

