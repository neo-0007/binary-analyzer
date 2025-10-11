
byte * _nl_normalize_codeset(byte *param_1,ulong param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  
  uVar3 = _nl_C_locobj._104_8_;
  if (param_2 == 0) {
    pbVar5 = (byte *)malloc(4);
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar5[0] = 0x69;
    pbVar5[1] = 0x73;
    pbVar5[2] = 0x6f;
    pbVar5[3] = 0;
    pbVar7 = pbVar5 + 3;
  }
  else {
    bVar2 = true;
    lVar8 = 0;
    pbVar5 = param_1;
    do {
      if (((*(byte *)(_nl_C_locobj._104_8_ + (ulong)*pbVar5 * 2) & 8) != 0) &&
         (lVar8 = lVar8 + 1, 9 < *pbVar5 - 0x30)) {
        bVar2 = false;
      }
      pbVar5 = pbVar5 + 1;
    } while (param_1 + param_2 != pbVar5);
    if (bVar2) {
      pbVar5 = (byte *)malloc(lVar8 + 4);
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
      pbVar5[0] = 0x69;
      pbVar5[1] = 0x73;
      pbVar5[2] = 0x6f;
      pbVar5[3] = 0;
      pbVar7 = pbVar5 + 3;
    }
    else {
      pbVar5 = (byte *)malloc(lVar8 + 1);
      pbVar7 = pbVar5;
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    uVar4 = _nl_C_locobj._112_8_;
    uVar6 = 0;
    do {
      while( true ) {
        bVar1 = param_1[uVar6];
        if ((*(byte *)(uVar3 + 1 + (ulong)bVar1 * 2) & 4) == 0) break;
        *pbVar7 = (byte)*(undefined4 *)(uVar4 + (ulong)bVar1 * 4);
        pbVar7 = pbVar7 + 1;
LAB_006dc78b:
        uVar6 = uVar6 + 1;
        if (param_2 <= uVar6) goto LAB_006dc7be;
      }
      if (9 < bVar1 - 0x30) goto LAB_006dc78b;
      uVar6 = uVar6 + 1;
      *pbVar7 = bVar1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 < param_2);
  }
LAB_006dc7be:
  *pbVar7 = 0;
  return pbVar5;
}

