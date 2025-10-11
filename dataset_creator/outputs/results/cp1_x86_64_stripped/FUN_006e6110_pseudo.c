
byte * FUN_006e6110(byte *param_1,ulong param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_00939ca8;
  if (param_2 == 0) {
    pbVar5 = (byte *)FUN_007101b0(4);
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
      if (((PTR_DAT_00939ca8[(ulong)*pbVar5 * 2] & 8) != 0) &&
         (lVar8 = lVar8 + 1, 9 < *pbVar5 - 0x30)) {
        bVar2 = false;
      }
      pbVar5 = pbVar5 + 1;
    } while (param_1 + param_2 != pbVar5);
    if (bVar2) {
      pbVar5 = (byte *)FUN_007101b0(lVar8 + 4);
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
      pbVar5 = (byte *)FUN_007101b0(lVar8 + 1);
      pbVar7 = pbVar5;
      if (pbVar5 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    puVar4 = PTR_DAT_00939cb0;
    uVar6 = 0;
    do {
      while( true ) {
        bVar1 = param_1[uVar6];
        if ((puVar3[(ulong)bVar1 * 2 + 1] & 4) == 0) break;
        *pbVar7 = (byte)*(undefined4 *)(puVar4 + (ulong)bVar1 * 4);
        pbVar7 = pbVar7 + 1;
LAB_006e619b:
        uVar6 = uVar6 + 1;
        if (param_2 <= uVar6) goto LAB_006e61ce;
      }
      if (9 < bVar1 - 0x30) goto LAB_006e619b;
      uVar6 = uVar6 + 1;
      *pbVar7 = bVar1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 < param_2);
  }
LAB_006e61ce:
  *pbVar7 = 0;
  return pbVar5;
}

