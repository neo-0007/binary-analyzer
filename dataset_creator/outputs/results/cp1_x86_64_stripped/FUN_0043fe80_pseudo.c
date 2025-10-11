
undefined8 FUN_0043fe80(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  byte bVar8;
  
  uVar7 = 0xffffffff;
  uVar3 = *(uint *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 8);
  uVar2 = *(ushort *)(lVar1 + 0xb);
  *(uint *)(param_1 + 0x1d8) = uVar3;
  if (((*(byte *)(param_1 + 0x3c) & 2) != 0) &&
     (0x301 < (ushort)(*(ushort *)(lVar1 + 9) << 8 | *(ushort *)(lVar1 + 9) >> 8))) {
    uVar2 = uVar2 << 8 | uVar2 >> 8;
    if (uVar2 == 0) {
      if (7 < uVar3 - 4) {
        return 0xffffffff;
      }
      uVar4 = *(uint *)(param_2 + 0x10);
      bVar8 = (char)(uVar3 >> 2) + 1;
      iVar6 = (uVar3 >> 2) * 4;
    }
    else {
      uVar4 = (uint)uVar2;
      if (uVar4 < 0x1000) {
        return 0;
      }
      if (uVar4 < 0x2000) {
        iVar6 = 4;
        bVar8 = 2;
      }
      else {
        iVar6 = (-(uint)((DAT_0094b5a0 & 0x20) == 0) & 0xfffffffc) + 8;
        bVar8 = 3 - ((DAT_0094b5a0 & 0x20) == 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x250);
    FUN_0043fdd0(param_1 + 0x2b8,lVar1,0xd);
    uVar5 = uVar4 >> (bVar8 & 0x1f);
    uVar3 = (uVar4 + uVar5) - (uVar5 << (bVar8 & 0x1f));
    if ((uVar5 < uVar3) && ((uVar3 + 0x16 & 0x3f) < iVar6 - 1U)) {
      uVar5 = uVar5 + 1;
      uVar3 = (uVar3 - iVar6) + 1;
    }
    *(int *)(param_2 + 0x18) = iVar6;
    *(int *)(param_1 + 0x1d8) = iVar6;
    uVar7 = 1;
    iVar6 = (uVar5 + 0x24 & 0xfffffff0) + 0x15;
    *(uint *)(param_1 + 0x1dc) =
         ((uVar3 + 0x24 & 0xfffffff0) + 0x15 + (iVar6 << (bVar8 & 0x1f))) - iVar6;
  }
  return uVar7;
}

