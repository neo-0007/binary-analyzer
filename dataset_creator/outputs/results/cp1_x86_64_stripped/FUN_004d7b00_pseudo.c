
undefined8 FUN_004d7b00(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = FUN_004d8c90();
    *(long *)(param_1 + 0x20) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_00542210(lVar3 + 8,*(long *)(param_2 + 0x20) + 8);
  if (iVar2 == 0) {
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0xc0);
  *plVar1 = *plVar1 + 1;
  return 1;
}

