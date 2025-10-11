
undefined8 FUN_0054f140(long param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  int local_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  uVar7 = param_4 + *(ulong *)(param_1 + 0x38);
  pcVar3 = *(code **)(param_1 + 0x168);
  if ((0xfffffffe0 < uVar7) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(param_1 + 0x170);
  *(ulong *)(param_1 + 0x38) = uVar7;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar8 = *(uint *)(param_1 + 0xc);
    uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    uVar9 = uVar6 & 0xf;
    if (uVar9 != 0) {
      if (param_4 == 0) {
LAB_0054f21b:
        *(uint *)(param_1 + 0x170) = uVar6;
        return 0;
      }
      do {
        uVar7 = (ulong)uVar6;
        bVar1 = *param_2;
        pbVar10 = param_3 + 1;
        param_2 = param_2 + 1;
        uVar6 = uVar6 + 1;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 0x188 + uVar7) = bVar1;
        *param_3 = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar9);
        uVar9 = uVar9 + 1 & 0xf;
        param_3 = pbVar10;
        if (uVar9 == 0) goto LAB_0054f270;
      } while (param_4 != 0);
      if (uVar9 != 0) goto LAB_0054f21b;
LAB_0054f270:
      (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188);
      goto LAB_0054f286;
    }
    bVar11 = uVar6 != 0;
    uVar9 = uVar6;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(uint *)(param_1 + 0xc);
    bVar11 = true;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    uVar9 = 0x10;
    *(undefined4 *)(param_1 + 0x174) = 0;
    uVar8 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    *(undefined8 *)(param_1 + 0x188) = uVar4;
    *(undefined8 *)(param_1 + 400) = uVar5;
  }
  if ((0xf < param_4) && (bVar11)) {
    uVar9 = 0;
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188);
  }
LAB_0054f286:
  for (; 0xbff < param_4; param_4 = param_4 - 0xc00) {
    uVar8 = uVar8 + 0xc0;
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,0xc00);
    (*param_5)(param_2,param_3,0xc0,uVar2,param_1);
    param_2 = param_2 + 0xc00;
    *(uint *)(param_1 + 0xc) =
         uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
    param_3 = param_3 + 0xc00;
  }
  uVar7 = param_4 & 0xfffffffffffffff0;
  if (uVar7 != 0) {
    (*pcVar3)(param_1 + 0x40,param_1 + 0x60,param_2,uVar7);
    (*param_5)(param_2,param_3,param_4 >> 4,uVar2,param_1);
    local_48 = (int)(param_4 >> 4);
    uVar8 = uVar8 + local_48;
    *(uint *)(param_1 + 0xc) =
         uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
    param_3 = param_3 + uVar7;
    param_2 = param_2 + uVar7;
    param_4 = param_4 - uVar7;
  }
  if (param_4 != 0) {
    (**(code **)(param_1 + 0x178))(param_1,param_1 + 0x10,uVar2);
    uVar8 = uVar8 + 1;
    uVar7 = 0;
    *(uint *)(param_1 + 0xc) =
         uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
    do {
      bVar1 = param_2[uVar7];
      *(byte *)(param_1 + 0x188 + (ulong)(uVar9 + (int)uVar7)) = bVar1;
      param_3[uVar7] = bVar1 ^ *(byte *)(param_1 + 0x10 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_4);
    uVar9 = uVar9 + (int)param_4;
  }
  *(uint *)(param_1 + 0x170) = uVar9;
  return 0;
}

