
undefined8 FUN_0044a200(long param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x130);
  if (uVar2 == 0) {
    uVar8 = *(uint *)(param_1 + 0xe0);
  }
  else {
    if (param_4 != 0) {
      do {
        if (0x3f < uVar2) break;
        uVar6 = (ulong)uVar2;
        bVar1 = *param_3;
        pbVar7 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar2 = uVar2 + 1;
        *param_2 = bVar1 ^ *(byte *)(param_1 + 0xf0 + uVar6);
        param_4 = param_4 - 1;
        param_2 = pbVar7;
      } while (param_4 != 0);
    }
    *(uint *)(param_1 + 0x130) = uVar2;
    if (param_4 == 0) {
      return 1;
    }
    uVar8 = *(uint *)(param_1 + 0xe0);
    if (uVar2 == 0x40) {
      *(undefined4 *)(param_1 + 0x130) = 0;
      uVar8 = uVar8 + 1;
      *(uint *)(param_1 + 0xe0) = uVar8;
      if (uVar8 == 0) {
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      }
    }
  }
  uVar2 = (uint)param_4 & 0x3f;
  uVar6 = param_4 - uVar2;
  if (0x3f < uVar6) {
    uVar5 = (ulong)uVar8;
LAB_0044a2dd:
    do {
      if (uVar6 < 0x400000040) {
        uVar3 = uVar6 >> 6;
        uVar5 = (ulong)(uint)((int)uVar3 + (int)uVar5);
        if (uVar5 < uVar3) goto LAB_0044a294;
LAB_0044a301:
        lVar4 = uVar3 * 0x40;
        FUN_004c7880(param_2,param_3,lVar4,param_1 + 0xc0);
        uVar6 = uVar6 + uVar3 * -0x40;
        param_3 = param_3 + lVar4;
        param_2 = param_2 + lVar4;
        *(int *)(param_1 + 0xe0) = (int)uVar5;
        if ((int)uVar5 != 0) {
          if (uVar6 < 0x40) break;
          goto LAB_0044a2dd;
        }
      }
      else {
        uVar3 = 0x10000000;
        uVar5 = (ulong)((int)uVar5 + 0x10000000);
        if (0xfffffff < uVar5) goto LAB_0044a301;
LAB_0044a294:
        lVar4 = (uVar3 - uVar5) * 0x40;
        FUN_004c7880(param_2,param_3,lVar4,param_1 + 0xc0);
        uVar6 = uVar6 + (uVar3 - uVar5) * -0x40;
        param_3 = param_3 + lVar4;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        param_2 = param_2 + lVar4;
      }
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      uVar5 = 0;
    } while (0x3f < uVar6);
  }
  if ((param_4 & 0x3f) != 0) {
    *(undefined1 (*) [16])(param_1 + 0xf0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x100) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x110) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x120) = (undefined1  [16])0x0;
    FUN_004c7880(param_1 + 0xf0,param_1 + 0xf0,0x40,param_1 + 0xc0,param_1 + 0xe0);
    uVar6 = 0;
    do {
      param_2[uVar6] = param_3[uVar6] ^ *(byte *)(param_1 + 0xf0 + uVar6);
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
    *(uint *)(param_1 + 0x130) = uVar2;
  }
  return 1;
}

