
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 aesni_cbc_hmac_sha256_tls1_multiblock_aad(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  uVar3 = 0xffffffff;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    return uVar3;
  }
  lVar1 = *(long *)(param_2 + 8);
  if (0x301 < (ushort)(*(ushort *)(lVar1 + 9) << 8 | *(ushort *)(lVar1 + 9) >> 8)) {
    uVar4 = *(ushort *)(lVar1 + 0xb) << 8 | *(ushort *)(lVar1 + 0xb) >> 8;
    if (uVar4 == 0) {
      if (7 < *(uint *)(param_2 + 0x18) - 4) {
        return 0xffffffff;
      }
      uVar5 = *(uint *)(param_2 + 0x18) >> 2;
      uVar2 = *(uint *)(param_2 + 0x10);
      bVar7 = (char)uVar5 + 1;
      iVar6 = uVar5 << 2;
    }
    else {
      uVar2 = (uint)uVar4;
      if (uVar2 < 0x1000) {
        return 0;
      }
      if (uVar2 < 0x2000) {
        iVar6 = 4;
        bVar7 = 2;
      }
      else {
        iVar6 = (-(uint)((_DAT_0093e5a0 & 0x20) == 0) & 0xfffffffc) + 8;
        bVar7 = 3 - ((_DAT_0093e5a0 & 0x20) == 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 600);
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x260);
    sha256_update(param_1 + 0x2d8,lVar1,0xd);
    uVar5 = uVar2 >> (bVar7 & 0x1f);
    uVar2 = (uVar2 + uVar5) - (uVar5 << (bVar7 & 0x1f));
    if ((uVar5 < uVar2) && ((uVar2 + 0x16 & 0x3f) < iVar6 - 1U)) {
      uVar5 = uVar5 + 1;
      uVar2 = (uVar2 - iVar6) + 1;
    }
    *(int *)(param_2 + 0x18) = iVar6;
    *(int *)(param_1 + 0x1d8) = iVar6;
    iVar6 = (uVar5 + 0x30 & 0xfffffff0) + 0x15;
    *(uint *)(param_1 + 0x1dc) =
         ((uVar2 + 0x30 & 0xfffffff0) + 0x15 + (iVar6 << (bVar7 & 0x1f))) - iVar6;
    uVar3 = 1;
  }
  return uVar3;
}

