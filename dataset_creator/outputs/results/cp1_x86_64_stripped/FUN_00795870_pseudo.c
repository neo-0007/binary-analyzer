
ulong FUN_00795870(long param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  
  pbVar5 = *(byte **)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0xe0);
  iVar2 = (int)uVar6;
  if ((int)pbVar5 != iVar2) {
    lVar1 = *(long *)(lVar3 + 0xd8);
    if (0x827 < lVar1 - 0x93f160U) {
      FUN_00703130();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar7 = (long)((int)pbVar5 - iVar2);
    lVar3 = (**(code **)(lVar1 + 0x38))(lVar3,uVar6,lVar7);
    if (0xfffffffffffffffd < lVar3 - 1U) {
      return 0xffffffff;
    }
    thunk_FUN_00713610(*(long *)(param_1 + 0x20),*(long *)(param_1 + 0x20) + lVar3,lVar7 - lVar3);
    pbVar5 = (byte *)(*(long *)(param_1 + 0x28) - lVar3);
    *(byte **)(param_1 + 0x28) = pbVar5;
  }
  if (pbVar5 < *(byte **)(param_1 + 0x30)) {
    *(byte **)(param_1 + 0x28) = pbVar5 + 1;
    *pbVar5 = param_2;
    return (ulong)(uint)param_2;
  }
  uVar4 = FUN_00706570(param_1,(uint)param_2);
  return uVar4;
}

