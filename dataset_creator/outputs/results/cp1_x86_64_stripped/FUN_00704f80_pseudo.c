
int FUN_00704f80(uint *param_1,undefined8 param_2,ulong param_3)

{
  short sVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x36);
  if ((*param_1 & 0x1000) == 0) {
    lVar2 = *(long *)(param_1 + 4);
    lVar6 = *(long *)(param_1 + 8);
    if (lVar2 != lVar6) {
      if (0x827 < lVar3 - 0x93f160U) {
        FUN_00703130();
        lVar6 = *(long *)(param_1 + 8);
        lVar2 = *(long *)(param_1 + 4);
      }
      lVar3 = (**(code **)(lVar3 + 0x80))(param_1,lVar6 - lVar2,1);
      if (lVar3 == -1) {
        return -1;
      }
      *(long *)(param_1 + 0x24) = lVar3;
      lVar3 = *(long *)(param_1 + 0x36);
    }
  }
  else {
    param_1[0x24] = 0xffffffff;
    param_1[0x25] = 0xffffffff;
  }
  if (0x827 < lVar3 - 0x93f160U) {
    FUN_00703130();
  }
  uVar4 = (**(code **)(lVar3 + 0x78))(param_1,param_2,param_3);
  if ((uVar4 != 0) && ((ushort)param_1[0x20] != 0)) {
    sVar1 = FUN_007076f0((ushort)param_1[0x20] - 1,param_2,uVar4 & 0xffffffff);
    *(short *)(param_1 + 0x20) = sVar1 + 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 10) = uVar5;
  *(undefined8 *)(param_1 + 2) = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar5;
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar5;
  if ((0 < (int)param_1[0x30]) || ((*param_1 & 0x202) == 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  return -(uint)(param_3 != uVar4);
}

