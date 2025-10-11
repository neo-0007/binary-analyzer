
undefined8 FUN_0054e520(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  bool bVar16;
  ulong *local_80;
  ulong local_70;
  ulong *local_68;
  uint local_60;
  uint local_5c;
  ulong *local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  uVar10 = param_4 + *(ulong *)(param_1 + 0x38);
  pcVar3 = *(code **)(param_1 + 0x178);
  pcVar4 = *(code **)(param_1 + 0x168);
  if ((0xfffffffe0 < uVar10) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x38) = uVar10;
  uVar8 = *(uint *)(param_1 + 0x170);
  uVar10 = (ulong)uVar8;
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    local_60 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    local_5c = uVar8 & 0xf;
    if (local_5c != 0) {
      puVar13 = param_3;
      if (param_4 == 0) {
LAB_0054e8d9:
        *(uint *)(param_1 + 0x170) = uVar8;
        return 0;
      }
      do {
        param_3 = (ulong *)((long)puVar13 + 1);
        bVar7 = (byte)*param_2 ^ *(byte *)(param_1 + 0x10 + (ulong)local_5c);
        param_2 = (ulong *)((long)param_2 + 1);
        uVar8 = (int)uVar10 + 1;
        *(byte *)puVar13 = bVar7;
        param_4 = param_4 - 1;
        *(byte *)(param_1 + 0x188 + uVar10) = bVar7;
        local_5c = local_5c + 1 & 0xf;
        if (local_5c == 0) goto LAB_0054e620;
        uVar10 = (ulong)uVar8;
        puVar13 = param_3;
      } while (param_4 != 0);
      if (local_5c != 0) goto LAB_0054e8d9;
LAB_0054e620:
      (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,(ulong)uVar8);
      local_70 = param_4;
      local_68 = param_2;
      goto LAB_0054e638;
    }
    bVar16 = uVar8 != 0;
    local_5c = uVar8;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(uint *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0x40) = 0;
    bVar16 = true;
    local_60 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    local_5c = 0x10;
    *(undefined8 *)(param_1 + 0x188) = uVar5;
    *(undefined8 *)(param_1 + 400) = uVar6;
  }
  local_70 = param_4;
  local_68 = param_2;
  if ((0xf < param_4) && (bVar16)) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_5c);
    local_5c = 0;
  }
LAB_0054e638:
  if (0xbff < local_70) {
    local_80 = param_3 + 0x180;
    puVar13 = local_68;
    puVar15 = param_3;
    uVar8 = local_60;
    local_58 = param_3;
    do {
      do {
        puVar14 = puVar15;
        uVar8 = uVar8 + 1;
        param_3 = puVar14 + 2;
        (*pcVar3)(param_1,param_1 + 0x10,uVar2);
        *(uint *)(param_1 + 0xc) =
             uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
        *puVar14 = *puVar13 ^ *(ulong *)(param_1 + 0x10);
        puVar14[1] = puVar13[1] ^ *(ulong *)(param_1 + 0x18);
        puVar13 = puVar13 + 2;
        puVar15 = param_3;
      } while (param_3 != local_80);
      uVar8 = local_60 + 0xc0;
      puVar13 = local_68 + 0x180;
      (*pcVar4)(param_1 + 0x40,param_1 + 0x60,local_58,0xc00);
      local_80 = puVar14 + 0x182;
      local_70 = local_70 - 0xc00;
      puVar15 = local_58 + 0x180;
      local_68 = puVar13;
      local_60 = uVar8;
      local_58 = local_58 + 0x180;
    } while (0xbff < local_70);
  }
  uVar10 = local_70 & 0xfffffffffffffff0;
  if (uVar10 != 0) {
    puVar13 = local_68;
    puVar15 = param_3;
    uVar8 = local_60;
    do {
      uVar8 = uVar8 + 1;
      puVar14 = puVar13 + 2;
      (*pcVar3)(param_1,param_1 + 0x10,uVar2);
      *(uint *)(param_1 + 0xc) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
      *puVar15 = *puVar13 ^ *(ulong *)(param_1 + 0x10);
      puVar15[1] = puVar13[1] ^ *(ulong *)(param_1 + 0x18);
      puVar13 = puVar14;
      puVar15 = puVar15 + 2;
    } while ((byte *)0xf < (byte *)((long)local_68 + (local_70 - (long)puVar14)));
    uVar11 = local_70 - 0x10;
    local_70 = (ulong)((uint)local_70 & 0xf);
    uVar11 = uVar11 >> 4;
    local_60 = local_60 + 1 + (int)uVar11;
    lVar12 = uVar11 + 1;
    local_68 = local_68 + lVar12 * 2;
    param_3 = param_3 + lVar12 * 2;
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,(long)param_3 - uVar10,uVar10);
  }
  if (local_70 != 0) {
    (*pcVar3)(param_1,param_1 + 0x10,uVar2);
    local_60 = local_60 + 1;
    *(uint *)(param_1 + 0xc) =
         local_60 >> 0x18 | (local_60 & 0xff0000) >> 8 | (local_60 & 0xff00) << 8 |
         local_60 * 0x1000000;
    uVar10 = 0;
    do {
      bVar7 = *(byte *)((long)local_68 + uVar10) ^ *(byte *)(param_1 + 0x10 + uVar10);
      iVar9 = (int)uVar10;
      *(byte *)((long)param_3 + uVar10) = bVar7;
      uVar10 = uVar10 + 1;
      *(byte *)(param_1 + 0x188 + (ulong)(local_5c + iVar9)) = bVar7;
    } while (uVar10 != local_70);
    local_5c = local_5c + (int)local_70;
  }
  *(uint *)(param_1 + 0x170) = local_5c;
  return 0;
}

