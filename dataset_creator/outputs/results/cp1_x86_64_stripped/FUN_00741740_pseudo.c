
ulong * FUN_00741740(ulong *param_1,ulong *param_2)

{
  char cVar2;
  ulong uVar1;
  int iVar3;
  ulong *puVar4;
  
  if (((ulong)param_2 & 7) != 0) {
    iVar3 = 8 - ((uint)param_2 & 7);
    do {
      uVar1 = *param_2;
      *(char *)param_1 = (char)uVar1;
      if ((char)uVar1 == '\0') {
        return param_1;
      }
      param_2 = (ulong *)((long)param_2 + 1);
      param_1 = (ulong *)((long)param_1 + 1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  while( true ) {
    uVar1 = *param_2;
    puVar4 = param_1;
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *param_1 = uVar1;
    puVar4 = param_1 + 1;
    uVar1 = param_2[1];
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar4 = uVar1;
    puVar4 = param_1 + 2;
    uVar1 = param_2[2];
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar4 = uVar1;
    puVar4 = param_1 + 3;
    uVar1 = param_2[3];
    param_2 = param_2 + 4;
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar4 = uVar1;
    param_1 = param_1 + 4;
  }
  while( true ) {
    *(char *)puVar4 = (char)uVar1;
    if ((char)uVar1 == '\0') {
      return puVar4;
    }
    cVar2 = (char)(uVar1 >> 8);
    *(char *)((long)puVar4 + 1) = cVar2;
    if (cVar2 == '\0') break;
    puVar4 = (ulong *)((long)puVar4 + 2);
    uVar1 = uVar1 >> 0x10;
  }
  return (ulong *)((long)puVar4 + 1);
}

