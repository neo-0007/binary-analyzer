
undefined8 chacha_poly1305_tls_init(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  
  if (param_3 != 0xd) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x30c) = *param_2;
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)((long)param_2 + 0xc);
  uVar2 = *(ushort *)((long)param_2 + 0xb) << 8 | *(ushort *)((long)param_2 + 0xb) >> 8;
  uVar1 = (ulong)uVar2;
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    if (uVar2 < 0x10) {
      return 0;
    }
    uVar1 = (ulong)(uVar2 - 0x10);
    uVar2 = (ushort)(uVar2 - 0x10);
    *(ushort *)(param_1 + 0x317) = uVar2 << 8 | uVar2 >> 8;
  }
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd;
  *(ulong *)(param_1 + 0x348) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x2f0);
  *(ulong *)(param_1 + 0x1a8) = *(ulong *)(param_1 + 0x2f4) ^ *(ulong *)(param_1 + 0x30c);
  return 0x10;
}

