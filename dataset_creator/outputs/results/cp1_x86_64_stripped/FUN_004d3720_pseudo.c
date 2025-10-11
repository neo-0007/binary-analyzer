
long FUN_004d3720(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_004d36e0();
  if (iVar1 != 0) {
    return 0;
  }
  lVar3 = FUN_004d5e90(*(undefined8 *)(param_1 + 0xb0));
  if (lVar3 == 0) {
    return 0;
  }
  uVar2 = FUN_004d6010(param_1);
  *(undefined4 *)(lVar3 + 0x68) = uVar2;
  if ((param_2 & 4) == 0) {
    *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(param_1 + 0x80);
    if ((param_2 & 3) != 0) goto LAB_004d378d;
  }
  else {
    iVar1 = FUN_00542210(lVar3 + 8,param_1 + 8);
    if (iVar1 == 0) goto LAB_004d378d;
    *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(param_1 + 0x80);
    if (((param_2 & 2) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
      lVar4 = FUN_004b82e0();
      *(long *)(lVar3 + 0x70) = lVar4;
      if (lVar4 == 0) goto LAB_004d378d;
    }
    if (((param_2 & 1) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
      lVar4 = FUN_004b82e0();
      *(long *)(lVar3 + 0x78) = lVar4;
      if (lVar4 == 0) goto LAB_004d378d;
    }
  }
  iVar1 = FUN_004196d0(6,lVar3 + 0x98,param_1 + 0x98);
  if (iVar1 != 0) {
    return lVar3;
  }
LAB_004d378d:
  FUN_004d5b70(lVar3);
  return 0;
}

