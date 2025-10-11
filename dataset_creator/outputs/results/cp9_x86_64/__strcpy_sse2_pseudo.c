
ulong * __strcpy_sse2(ulong *param_1,ulong *param_2)

{
  char cVar2;
  ulong uVar1;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  puVar4 = param_1;
  if (((ulong)param_2 & 7) != 0) {
    iVar3 = 8 - ((uint)param_2 & 7);
    do {
      uVar1 = *param_2;
      *(char *)puVar4 = (char)uVar1;
      if ((char)uVar1 == '\0') {
        return param_1;
      }
      param_2 = (ulong *)((long)param_2 + 1);
      puVar4 = (ulong *)((long)puVar4 + 1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  while( true ) {
    uVar1 = *param_2;
    puVar5 = puVar4;
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar4 = uVar1;
    puVar5 = puVar4 + 1;
    uVar1 = param_2[1];
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar5 = uVar1;
    puVar5 = puVar4 + 2;
    uVar1 = param_2[2];
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar5 = uVar1;
    puVar5 = puVar4 + 3;
    uVar1 = param_2[3];
    param_2 = param_2 + 4;
    if ((uVar1 < 0x101010101010101) ||
       ((uVar1 + 0xfefefefefefefeff ^ uVar1 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar5 = uVar1;
    puVar4 = puVar4 + 4;
  }
  for (; (*(char *)puVar5 = (char)uVar1, (char)uVar1 != '\0' &&
         (cVar2 = (char)(uVar1 >> 8), *(char *)((long)puVar5 + 1) = cVar2, cVar2 != '\0'));
      uVar1 = uVar1 >> 0x10) {
    puVar5 = (ulong *)((long)puVar5 + 2);
  }
  return param_1;
}

