
ulong FUN_0040e720(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    iVar2 = FUN_0040e590(param_1);
    if (iVar2 == 0x198) {
      uVar6 = FUN_004eed80(*(undefined8 *)(param_1 + 0x20));
      return uVar6;
    }
    if (0x198 < iVar2) {
      return (ulong)(iVar2 - 0x43fU < 2);
    }
    uVar6 = 1;
    if (iVar2 != 6) {
      return (ulong)(iVar2 == 0x74);
    }
  }
  else {
    uVar3 = FUN_0053e6e0();
    uVar3 = FUN_00420cf0(uVar3);
    pcVar1 = *(code **)(*(long *)(param_1 + 0x60) + 0x98);
    if (pcVar1 == (code *)0x0) {
      uVar4 = FUN_0053e710();
    }
    else {
      uVar4 = (*pcVar1)(0xc);
    }
    lVar5 = FUN_00416390(uVar3,uVar4,0);
    uVar6 = 0;
    if (lVar5 != 0) {
      FUN_00415cd0();
      return 1;
    }
  }
  return uVar6;
}

