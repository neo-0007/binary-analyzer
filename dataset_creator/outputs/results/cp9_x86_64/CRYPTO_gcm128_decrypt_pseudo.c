
undefined8 CRYPTO_gcm128_decrypt(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  bool bVar14;
  ulong local_68;
  ulong *local_60;
  uint local_58;
  uint local_54;
  
  pcVar2 = *(code **)(param_1 + 0x178);
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  pcVar4 = *(code **)(param_1 + 0x168);
  uVar7 = param_4 + *(ulong *)(param_1 + 0x38);
  if ((0xfffffffe0 < uVar7) || (CARRY8(param_4,*(ulong *)(param_1 + 0x38)))) {
    return 0xffffffff;
  }
  *(ulong *)(param_1 + 0x38) = uVar7;
  local_54 = *(uint *)(param_1 + 0x170);
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar9 = *(uint *)(param_1 + 0xc);
    local_58 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    uVar9 = local_54 & 0xf;
    if (uVar9 == 0) {
      bVar14 = local_54 != 0;
      goto LAB_00424c6b;
    }
    puVar10 = param_3;
    if (param_4 == 0) goto LAB_00424be8;
    do {
      uVar7 = *param_2;
      uVar12 = (ulong)local_54;
      param_3 = (ulong *)((long)puVar10 + 1);
      param_2 = (ulong *)((long)param_2 + 1);
      local_54 = local_54 + 1;
      param_4 = param_4 - 1;
      *(byte *)(param_1 + 0x188 + uVar12) = (byte)uVar7;
      *(byte *)puVar10 = (byte)uVar7 ^ *(byte *)(param_1 + 0x10 + (ulong)uVar9);
      uVar9 = uVar9 + 1 & 0xf;
      if (uVar9 == 0) goto LAB_0042498d;
      puVar10 = param_3;
    } while (param_4 != 0);
    if (uVar9 != 0) goto LAB_00424be8;
LAB_0042498d:
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_54);
    local_68 = param_4;
    local_60 = param_2;
    local_54 = uVar9;
  }
  else {
    if (param_4 == 0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x40,param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x174) = 0;
      return 0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar9 = *(uint *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0x40) = 0;
    bVar14 = true;
    local_58 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    local_54 = 0x10;
    *(undefined8 *)(param_1 + 0x188) = uVar5;
    *(undefined8 *)(param_1 + 400) = uVar6;
LAB_00424c6b:
    local_68 = param_4;
    local_60 = param_2;
    if ((0xf < param_4) && (bVar14)) {
      (*pcVar4)(param_1 + 0x40,param_1 + 0x60,param_1 + 0x188,local_54);
      local_54 = 0;
    }
  }
  if (0xbff < local_68) {
    puVar10 = param_3;
    do {
      param_3 = puVar10 + 0x180;
      (*pcVar4)(param_1 + 0x40,param_1 + 0x60,local_60,0xc00);
      puVar13 = local_60;
      uVar9 = local_58;
      do {
        uVar9 = uVar9 + 1;
        puVar11 = puVar10 + 2;
        (*pcVar2)(param_1,param_1 + 0x10,uVar3);
        *(uint *)(param_1 + 0xc) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
        *puVar10 = *puVar13 ^ *(ulong *)(param_1 + 0x10);
        puVar10[1] = puVar13[1] ^ *(ulong *)(param_1 + 0x18);
        puVar10 = puVar11;
        puVar13 = puVar13 + 2;
      } while (puVar11 != param_3);
      local_68 = local_68 - 0xc00;
      local_58 = local_58 + 0xc0;
      local_60 = local_60 + 0x180;
      puVar10 = param_3;
    } while (0xbff < local_68);
  }
  if ((local_68 & 0xfffffffffffffff0) != 0) {
    (*pcVar4)(param_1 + 0x40,param_1 + 0x60,local_60);
    puVar10 = local_60;
    puVar13 = param_3;
    uVar9 = local_58;
    do {
      uVar9 = uVar9 + 1;
      puVar11 = puVar13 + 2;
      (*pcVar2)(param_1,param_1 + 0x10);
      *(uint *)(param_1 + 0xc) =
           uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
      *puVar13 = *puVar10 ^ *(ulong *)(param_1 + 0x10);
      puVar13[1] = puVar10[1] ^ *(ulong *)(param_1 + 0x18);
      puVar10 = puVar10 + 2;
      puVar13 = puVar11;
    } while (0xf < (long)param_3 + (local_68 - (long)puVar11));
    uVar7 = local_68 - 0x10;
    local_68 = (ulong)((uint)local_68 & 0xf);
    uVar7 = uVar7 >> 4;
    local_58 = local_58 + 1 + (int)uVar7;
    lVar8 = uVar7 + 1;
    local_60 = local_60 + lVar8 * 2;
    param_3 = param_3 + lVar8 * 2;
  }
  if (local_68 != 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar3);
    local_58 = local_58 + 1;
    *(uint *)(param_1 + 0xc) =
         local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8 |
         local_58 * 0x1000000;
    uVar7 = 0;
    do {
      bVar1 = *(byte *)((long)local_60 + uVar7);
      *(byte *)(param_1 + 0x188 + (ulong)(local_54 + (int)uVar7)) = bVar1;
      *(byte *)((long)param_3 + uVar7) = bVar1 ^ *(byte *)(param_1 + 0x10 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar7 != local_68);
    local_54 = local_54 + (int)local_68;
  }
LAB_00424be8:
  *(uint *)(param_1 + 0x170) = local_54;
  return 0;
}

