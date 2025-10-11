
bool FUN_00427bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = FUN_00427ac0(param_3,param_1,param_2);
  bVar3 = false;
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0xc) & 1) == 0)) &&
      (iVar1 = *(int *)(lVar2 + 8), iVar1 != 2)) && (bVar3 = false, *(int *)(lVar2 + 4) == 0)) {
    if (iVar1 == 0) {
      return *(int *)(lVar2 + 0x10) == 1;
    }
    if (iVar1 == 1) {
      bVar3 = *(int *)(lVar2 + 0x10) != 1;
    }
  }
  return bVar3;
}

