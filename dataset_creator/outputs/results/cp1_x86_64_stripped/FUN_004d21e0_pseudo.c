
undefined8 FUN_004d21e0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar4 = FUN_004d5e70();
    *(long *)(param_1 + 0x20) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  puVar1 = *(undefined **)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x20);
  iVar3 = FUN_00542210(lVar4 + 8,lVar2 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  if (puVar1 != &DAT_00902400) {
    *(undefined4 *)(lVar4 + 0x68) = *(undefined4 *)(lVar2 + 0x68);
  }
  *(long *)(lVar4 + 200) = *(long *)(lVar4 + 200) + 1;
  return 1;
}

