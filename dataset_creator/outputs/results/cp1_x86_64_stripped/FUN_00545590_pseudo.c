
ulong FUN_00545590(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, bVar4 != 0)) {
    uVar2 = 0;
    uVar5 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar1 = (long)(char)bVar4 | uVar5;
      uVar5 = uVar5 + 0x100;
      bVar3 = ((byte)(uVar1 >> 2) ^ bVar4) & 0xf;
      bVar4 = *param_1;
      uVar2 = uVar1 * uVar1 ^
              (ulong)((uint)(uVar2 << bVar3) | (uint)(uVar2 >> (0x20 - bVar3 & 0x3f)));
    } while (bVar4 != 0);
    return uVar2 >> 0x10 ^ uVar2;
  }
  return 0;
}

