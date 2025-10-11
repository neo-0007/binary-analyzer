
long FUN_004d7d90(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_004d7d50();
  if (iVar1 != 0) {
    return 0;
  }
  lVar2 = FUN_004d8c80(*(undefined8 *)(param_1 + 0xb8));
  if (lVar2 == 0) {
    return 0;
  }
  if ((param_2 & 4) == 0) {
    *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    if ((param_2 & 3) != 0) goto LAB_004d7dea;
  }
  else {
    iVar1 = FUN_00542210(lVar2 + 8,param_1 + 8);
    if (iVar1 == 0) goto LAB_004d7dea;
    *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    if (((param_2 & 2) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
      lVar3 = FUN_004b82e0();
      *(long *)(lVar2 + 0x68) = lVar3;
      if (lVar3 == 0) goto LAB_004d7dea;
    }
    if (((param_2 & 1) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      lVar3 = FUN_004b82e0();
      *(long *)(lVar2 + 0x70) = lVar3;
      if (lVar3 == 0) goto LAB_004d7dea;
    }
  }
  iVar1 = FUN_004196d0(7,lVar2 + 0x90,param_1 + 0x90);
  if (iVar1 != 0) {
    return lVar2;
  }
LAB_004d7dea:
  FUN_004d8960(lVar2);
  return 0;
}

