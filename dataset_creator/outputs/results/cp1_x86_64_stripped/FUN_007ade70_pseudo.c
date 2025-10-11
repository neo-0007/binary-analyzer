
int FUN_007ade70(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_007af600();
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    uVar1 = FUN_007afde0(param_1,lVar3);
    FUN_007af9e0(lVar3);
    iVar2 = (uVar1 & 0xff) - 1;
  }
  return iVar2;
}

