
ulong FUN_007b94a0(byte *param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  bVar2 = *param_1;
  if (bVar2 != 0x20) goto LAB_007b94bc;
  do {
    do {
      bVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (bVar2 == 0x20);
LAB_007b94bc:
  } while (bVar2 == 9);
  if (bVar2 == 0x2d) {
    bVar2 = param_1[1];
    bVar1 = false;
    param_1 = param_1 + 1;
  }
  else {
    bVar1 = true;
    if (bVar2 == 0x2b) {
      bVar2 = param_1[1];
      param_1 = param_1 + 1;
      bVar1 = true;
    }
  }
  if (9 < (byte)(bVar2 - 0x30)) {
    uVar5 = 0;
joined_r0x007b9564:
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return uVar5;
  }
  bVar6 = 0x39;
  uVar5 = 10;
  if (bVar2 == 0x30) {
    if ((param_1[1] & 0xdf) == 0x58) {
      param_1 = param_1 + 2;
      uVar4 = 0;
      while( true ) {
        bVar2 = *param_1;
        if (((char)bVar2 < '0') || ('9' < (char)bVar2)) {
          if ((byte)(bVar2 + 0x9f) < 6) {
            cVar3 = bVar2 + 0xa9;
          }
          else {
            if (5 < (byte)(bVar2 + 0xbf)) goto LAB_007b95fd;
            cVar3 = bVar2 - 0x37;
          }
        }
        else {
          cVar3 = bVar2 - 0x30;
        }
        if (0xffffffffffffffe < uVar4) break;
        param_1 = param_1 + 1;
        uVar4 = uVar4 * 0x10 + (long)cVar3;
      }
LAB_007b955a:
      uVar5 = 0xffffffffffffffff;
      goto joined_r0x007b9564;
    }
    bVar6 = 0x37;
    uVar5 = 8;
  }
  uVar4 = 0;
  for (; (bVar2 = *param_1, '/' < (char)bVar2 && (bVar2 <= bVar6)); param_1 = param_1 + 1) {
    if ((ulong)~(long)(char)(bVar2 - 0x30) / uVar5 <= uVar4) goto LAB_007b955a;
    uVar4 = uVar4 * uVar5 + (long)(char)(bVar2 - 0x30);
  }
LAB_007b95fd:
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  if (!bVar1) {
    uVar4 = -uVar4;
  }
  return uVar4;
}

