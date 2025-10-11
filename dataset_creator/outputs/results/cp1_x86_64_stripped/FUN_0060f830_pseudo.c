
uint FUN_0060f830(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + lVar3);
      bVar2 = *(byte *)(param_2 + lVar3);
      if (bVar1 != bVar2) {
        bVar4 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar4 = bVar1;
        }
        if ((byte)(bVar2 + 0xbf) < 0x1a) {
          bVar2 = bVar2 + 0x20;
        }
        if (bVar4 != bVar2) {
          return -(uint)(bVar4 < bVar2) | 1;
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_3);
  }
  return 0;
}

