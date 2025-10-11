
undefined8 FUN_0054ede0(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  
  pcVar1 = *(code **)(param_1 + 0x168);
  uVar8 = param_4 + *(ulong *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  if ((0xfffffffe0 < uVar8) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x170);
  *(ulong *)(param_1 + 0x38) = uVar8;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar9 = *(uint *)(param_1 + 0xc);
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar10 = uVar7 & 0xf;
    if (uVar10 != 0) {
      if (param_4 == 0) {
LAB_0054eeb3:
        *(uint *)(param_1 + 0x170) = uVar7;
        return 0;
      }
      do {
        uVar8 = (ulong)uVar7;
        pbVar11 = param_3 + 1;
        bVar6 = *param_2 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar10);
        param_2 = param_2 + 1;
        uVar7 = uVar7 + 1;
        *param_3 = bVar6;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 0x188 + uVar8) = bVar6;
        uVar10 = uVar10 + 1 & 0xf;
        param_3 = pbVar11;
        if (uVar10 == 0) goto LAB_0054ef00;
      } while (param_4 != 0);
      if (uVar10 != 0) goto LAB_0054eeb3;
LAB_0054ef00:
      (*pcVar1)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188);
      goto LAB_0054ef20;
    }
    bVar12 = uVar7 != 0;
    uVar10 = uVar7;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    bVar12 = true;
    uVar10 = 0x10;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar7 = *(uint *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x188) = uVar4;
    *(undefined8 *)(param_1 + 400) = uVar5;
    uVar9 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  }
  if ((0xf < param_4) && (bVar12)) {
    uVar10 = 0;
    (*pcVar1)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188);
  }
LAB_0054ef20:
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    uVar9 = uVar9 + 0xc0;
    (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
    param_2 = param_2 + 0xc00;
    *(uint *)(param_1 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    (*pcVar1)(param_1 + 0x40,param_1 + 0x60,param_3,0xc00);
    param_3 = param_3 + 0xc00;
  }
  uVar8 = param_4 & 0xfffffffffffffff0;
  if (uVar8 != 0) {
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    uVar9 = uVar9 + (int)(param_4 >> 4);
    param_2 = param_2 + uVar8;
    param_4 = param_4 - uVar8;
    *(uint *)(param_1 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    (*pcVar1)(param_1 + 0x40,param_1 + 0x60,param_3,uVar8);
    param_3 = param_3 + uVar8;
  }
  if (param_4 != 0) {
    uVar9 = uVar9 + 1;
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar2);
    uVar8 = 0;
    *(uint *)(param_1 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    do {
      bVar6 = param_2[uVar8] ^ *(byte *)(param_1 + 0x10 + uVar8);
      iVar3 = (int)uVar8;
      param_3[uVar8] = bVar6;
      uVar8 = uVar8 + 1;
      *(byte *)(param_1 + 0x188 + (ulong)(uVar10 + iVar3)) = bVar6;
    } while (param_4 != uVar8);
    uVar10 = uVar10 + (int)param_4;
  }
  *(uint *)(param_1 + 0x170) = uVar10;
  return 0;
}

