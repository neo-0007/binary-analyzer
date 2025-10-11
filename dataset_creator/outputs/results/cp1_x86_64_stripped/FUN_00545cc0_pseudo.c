
ulong FUN_00545cc0(char *param_1)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  if (param_1 != (char *)0x0) {
    uVar4 = 0;
    if (*param_1 != '\0') {
      uVar4 = 0;
      uVar6 = 0x100;
      do {
        iVar2 = FUN_00546710();
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        uVar3 = (long)iVar2 | uVar6;
        uVar6 = uVar6 + 0x100;
        bVar5 = ((byte)(uVar3 >> 2) ^ (byte)iVar2) & 0xf;
        uVar4 = uVar3 * uVar3 ^
                (ulong)((uint)(uVar4 << bVar5) | (uint)(uVar4 >> (0x20 - bVar5 & 0x3f)));
      } while (*pcVar1 != '\0');
      uVar4 = uVar4 >> 0x10 ^ uVar4;
    }
    return uVar4;
  }
  return 0;
}

