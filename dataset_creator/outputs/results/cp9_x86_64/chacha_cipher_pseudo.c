
undefined8 chacha_cipher(long param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  lVar2 = *(long *)(param_1 + 0x78);
  uVar3 = *(uint *)(lVar2 + 0x70);
  if (uVar3 == 0) {
    uVar6 = *(uint *)(lVar2 + 0x20);
  }
  else {
    if (param_4 != 0) {
      do {
        if (0x3f < uVar3) break;
        uVar8 = (ulong)uVar3;
        bVar1 = *param_3;
        pbVar9 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar3 = uVar3 + 1;
        *param_2 = bVar1 ^ *(byte *)(lVar2 + 0x30 + uVar8);
        param_4 = param_4 - 1;
        param_2 = pbVar9;
      } while (param_4 != 0);
    }
    *(uint *)(lVar2 + 0x70) = uVar3;
    if (param_4 == 0) {
      return 1;
    }
    uVar6 = *(uint *)(lVar2 + 0x20);
    if (uVar3 == 0x40) {
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar2 + 0x70) = 0;
      *(uint *)(lVar2 + 0x20) = uVar6;
      if (uVar6 == 0) {
        *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      }
    }
  }
  uVar3 = (uint)param_4 & 0x3f;
  uVar8 = param_4 - uVar3;
  if (0x3f < uVar8) {
LAB_0052122e:
    do {
      if (uVar8 < 0x400000040) {
        uVar4 = uVar8 >> 6;
        uVar6 = (int)uVar4 + uVar6;
        uVar7 = (ulong)uVar6;
        if (uVar7 < uVar4) goto LAB_005211f1;
LAB_0052124f:
        lVar5 = uVar4 * 0x40;
        ChaCha20_ctr32(param_2,param_3,lVar5,lVar2,lVar2 + 0x20);
        uVar8 = uVar8 + uVar4 * -0x40;
        param_3 = param_3 + lVar5;
        param_2 = param_2 + lVar5;
        *(uint *)(lVar2 + 0x20) = uVar6;
        if (uVar6 != 0) {
          if (uVar8 < 0x40) break;
          goto LAB_0052122e;
        }
      }
      else {
        uVar4 = 0x10000000;
        uVar6 = uVar6 + 0x10000000;
        uVar7 = (ulong)uVar6;
        if (0xfffffff < uVar7) goto LAB_0052124f;
LAB_005211f1:
        lVar5 = (uVar4 - uVar7) * 0x40;
        ChaCha20_ctr32(param_2,param_3,lVar5,lVar2,lVar2 + 0x20);
        uVar8 = uVar8 + (uVar4 - uVar7) * -0x40;
        param_3 = param_3 + lVar5;
        param_2 = param_2 + lVar5;
        *(undefined4 *)(lVar2 + 0x20) = 0;
      }
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      uVar6 = 0;
    } while (0x3f < uVar8);
  }
  if ((param_4 & 0x3f) != 0) {
    *(undefined1 (*) [16])(lVar2 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar2 + 0x40) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar2 + 0x50) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar2 + 0x60) = (undefined1  [16])0x0;
    ChaCha20_ctr32(lVar2 + 0x30,lVar2 + 0x30,0x40,lVar2,lVar2 + 0x20);
    uVar8 = 0;
    do {
      param_2[uVar8] = param_3[uVar8] ^ *(byte *)(lVar2 + 0x30 + uVar8);
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
    *(uint *)(lVar2 + 0x70) = uVar3;
  }
  return 1;
}

