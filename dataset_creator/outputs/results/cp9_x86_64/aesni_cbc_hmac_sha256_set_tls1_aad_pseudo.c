
undefined8 aesni_cbc_hmac_sha256_set_tls1_aad(long param_1,undefined8 *param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_3 != 0xd) {
    return 0xffffffff;
  }
  uVar2 = *(ushort *)((long)param_2 + 0xb) << 8 | *(ushort *)((long)param_2 + 0xb) >> 8;
  uVar4 = (uint)uVar2;
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    *(ulong *)(param_1 + 0x1b8) = (ulong)uVar2;
    uVar3 = *(ushort *)((long)param_2 + 9) << 8 | *(ushort *)((long)param_2 + 9) >> 8;
    *(uint *)(param_1 + 0x1c0) = (uint)uVar3;
    if (0x301 < uVar3) {
      if (uVar2 < 0x10) {
        return 0;
      }
      uVar4 = uVar2 - 0x10;
      *(ushort *)((long)param_2 + 0xb) = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
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
    sha256_update(param_1 + 0x2d8,param_2,0xd);
    *(long *)(param_1 + 0x1f0) = (long)(int)((uVar4 + 0x30 & 0xfffffff0) - uVar4);
    return 1;
  }
  *(undefined8 *)(param_1 + 0x1c0) = *param_2;
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 1);
  uVar1 = *(undefined1 *)((long)param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x1b8) = 0xd;
  *(undefined1 *)(param_1 + 0x1cc) = uVar1;
  *(undefined8 *)(param_1 + 0x1f0) = 0x20;
  return 1;
}

