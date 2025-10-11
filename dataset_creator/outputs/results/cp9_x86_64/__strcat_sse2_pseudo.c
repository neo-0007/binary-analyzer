
ulong * __strcat_sse2(ulong *param_1,ulong *param_2)

{
  char cVar3;
  ulong *puVar1;
  ulong uVar2;
  int iVar4;
  ulong *puVar5;
  
  puVar1 = param_1;
  if (((ulong)param_1 & 7) != 0) {
    iVar4 = 8 - ((uint)param_1 & 7);
    do {
      if ((char)*puVar1 == '\0') goto LAB_0073fb05;
      puVar1 = (ulong *)((long)puVar1 + 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  while( true ) {
    uVar2 = *puVar1;
    puVar5 = puVar1 + 1;
    if ((uVar2 < 0x101010101010101) ||
       ((uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    uVar2 = *puVar5;
    puVar5 = puVar1 + 2;
    if ((uVar2 < 0x101010101010101) ||
       ((uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    uVar2 = *puVar5;
    puVar5 = puVar1 + 3;
    if ((uVar2 < 0x101010101010101) ||
       ((uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    uVar2 = *puVar5;
    puVar5 = puVar1 + 4;
    if ((uVar2 < 0x101010101010101) ||
       (puVar1 = puVar5,
       (uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
  }
  puVar1 = puVar5 + -1;
  if (((((char)uVar2 != '\0') && (puVar1 = (ulong *)((long)puVar5 + -7), (char)(uVar2 >> 8) != '\0')
       ) && (puVar1 = (ulong *)((long)puVar5 + -6), (uVar2 & 0xff0000) != 0)) &&
     (puVar1 = (ulong *)((long)puVar5 + -5), (uVar2 & 0xff000000) != 0)) {
    puVar1 = (ulong *)((long)puVar5 + -4);
    if ((((char)(uVar2 >> 0x20) != '\0') &&
        (puVar1 = (ulong *)((long)puVar5 + -3), (char)(uVar2 >> 0x28) != '\0')) &&
       (puVar1 = (ulong *)((long)puVar5 + -2), (uVar2 >> 0x20 & 0xff0000) != 0)) {
      puVar1 = (ulong *)((long)puVar5 + -1);
    }
  }
LAB_0073fb05:
  if (((ulong)param_2 & 7) != 0) {
    iVar4 = 8 - ((uint)param_2 & 7);
    do {
      uVar2 = *param_2;
      *(char *)puVar1 = (char)uVar2;
      if ((char)uVar2 == '\0') {
        return param_1;
      }
      param_2 = (ulong *)((long)param_2 + 1);
      puVar1 = (ulong *)((long)puVar1 + 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  while( true ) {
    uVar2 = *param_2;
    puVar5 = puVar1;
    if ((uVar2 < 0x101010101010101) ||
       ((uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar1 = uVar2;
    puVar5 = puVar1 + 1;
    uVar2 = param_2[1];
    if ((uVar2 < 0x101010101010101) ||
       ((uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar5 = uVar2;
    puVar5 = puVar1 + 2;
    uVar2 = param_2[2];
    if ((uVar2 < 0x101010101010101) ||
       ((uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar5 = uVar2;
    puVar5 = puVar1 + 3;
    uVar2 = param_2[3];
    param_2 = param_2 + 4;
    if ((uVar2 < 0x101010101010101) ||
       ((uVar2 + 0xfefefefefefefeff ^ uVar2 | 0xfefefefefefefeff) != 0xffffffffffffffff)) break;
    *puVar5 = uVar2;
    puVar1 = puVar1 + 4;
  }
  for (; (*(char *)puVar5 = (char)uVar2, (char)uVar2 != '\0' &&
         (cVar3 = (char)(uVar2 >> 8), *(char *)((long)puVar5 + 1) = cVar3, cVar3 != '\0'));
      uVar2 = uVar2 >> 0x10) {
    puVar5 = (ulong *)((long)puVar5 + 2);
  }
  return param_1;
}

