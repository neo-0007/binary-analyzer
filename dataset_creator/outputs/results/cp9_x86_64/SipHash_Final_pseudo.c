
undefined8 SipHash_Final(long *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(uint *)((long)param_1 + 0x2c) != param_3) {
    return 0;
  }
  uVar5 = *param_1 << 0x38;
  switch((int)param_1[5]) {
  case 7:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3e) << 0x30;
  case 6:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3d) << 0x28;
  case 5:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3c) << 0x20;
  case 4:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3b) << 0x18;
  case 3:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x3a) << 0x10;
  case 2:
    uVar5 = uVar5 | (ulong)*(byte *)((long)param_1 + 0x39) << 8;
  case 1:
    uVar5 = uVar5 | *(byte *)(param_1 + 7);
  default:
    uVar6 = param_1[1];
    uVar1 = param_1[2];
    uVar4 = param_1[3];
    uVar2 = param_1[4] ^ uVar5;
    if ((int)param_1[6] != 0) {
      iVar7 = 0;
      do {
        uVar6 = uVar6 + uVar1;
        iVar7 = iVar7 + 1;
        uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar6;
        uVar3 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar4 + uVar2;
        uVar4 = uVar4 + uVar2 + uVar1;
        uVar6 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar3;
        uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar4;
        uVar2 = (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar6;
        uVar4 = uVar4 << 0x20 | uVar4 >> 0x20;
      } while (iVar7 != (int)param_1[6]);
    }
    uVar5 = uVar5 ^ uVar6;
    uVar6 = uVar4 ^ 0xff;
    if (*(uint *)((long)param_1 + 0x2c) == 0x10) {
      uVar6 = uVar4 ^ 0xee;
    }
    iVar7 = 0;
    if (*(int *)((long)param_1 + 0x34) != 0) {
      do {
        uVar5 = uVar5 + uVar1;
        uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar5;
        iVar7 = iVar7 + 1;
        uVar4 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar6 + uVar2;
        uVar6 = uVar6 + uVar2 + uVar1;
        uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar4;
        uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar6;
        uVar2 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar5;
        uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
      } while (iVar7 != *(int *)((long)param_1 + 0x34));
    }
    *param_2 = uVar5 ^ uVar1 ^ uVar6 ^ uVar2;
    if (*(int *)((long)param_1 + 0x2c) != 8) {
      uVar1 = uVar1 ^ 0xdd;
      if (*(int *)((long)param_1 + 0x34) != 0) {
        iVar7 = 0;
        do {
          uVar5 = uVar5 + uVar1;
          iVar7 = iVar7 + 1;
          uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar5;
          uVar4 = (uVar2 << 0x10 | uVar2 >> 0x30) ^ uVar6 + uVar2;
          uVar6 = uVar6 + uVar2 + uVar1;
          uVar5 = (uVar5 << 0x20 | uVar5 >> 0x20) + uVar4;
          uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar6;
          uVar2 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar5;
          uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
        } while (*(int *)((long)param_1 + 0x34) != iVar7);
      }
      param_2[1] = uVar1 ^ uVar5 ^ uVar6 ^ uVar2;
    }
    return 1;
  }
}

