
int ns_name_ntop(u_char *param_1,char *param_2,size_t param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long in_FS_OFFSET;
  
  pbVar5 = param_1 + 1;
  pbVar1 = (byte *)(param_2 + param_3);
  bVar2 = *param_1;
  pbVar6 = (byte *)param_2;
  if (bVar2 == 0) {
LAB_007ba480:
    if (pbVar1 <= param_2) goto LAB_007ba450;
    *param_2 = '.';
    pbVar6 = (byte *)(param_2 + 1);
  }
  else {
    do {
      if (0x3f < bVar2) goto LAB_007ba450;
      if ((byte *)param_2 != pbVar6) {
        if (pbVar1 <= pbVar6) goto LAB_007ba450;
        *pbVar6 = 0x2e;
        pbVar6 = pbVar6 + 1;
      }
      pbVar8 = pbVar5 + bVar2;
      pbVar7 = pbVar6;
      do {
        while( true ) {
          pbVar4 = pbVar5;
          bVar2 = *pbVar4;
          pbVar5 = pbVar4 + 1;
          lVar9 = (long)pbVar1 - (long)pbVar7;
          if (0x3a < (byte)(bVar2 - 0x22)) break;
          if ((0x4000000420010c5U >> ((ulong)(bVar2 - 0x22) & 0x3f) & 1) == 0) {
LAB_007ba38a:
            if (lVar9 < 2) goto LAB_007ba450;
            *pbVar7 = bVar2;
            pbVar6 = pbVar7 + 1;
          }
          else {
            if (lVar9 < 2) goto LAB_007ba450;
            *pbVar7 = 0x5c;
            pbVar6 = pbVar7 + 2;
            pbVar7[1] = bVar2;
          }
          pbVar7 = pbVar6;
          if (pbVar8 == pbVar5) goto LAB_007ba418;
        }
        if (bVar2 - 0x21 < 0x5e) goto LAB_007ba38a;
        if (lVar9 < 4) goto LAB_007ba450;
        *pbVar7 = 0x5c;
        pbVar6 = pbVar7 + 4;
        bVar3 = (byte)((ushort)((ushort)bVar2 * 0x29) >> 8);
        pbVar7[1] = (bVar3 >> 4) + 0x30;
        pbVar7[2] = (byte)(bVar2 + (bVar3 >> 4) * -100) / 10 + 0x30;
        pbVar7[3] = bVar2 % 10 + 0x30;
        pbVar7 = pbVar6;
      } while (pbVar8 != pbVar5);
LAB_007ba418:
      bVar2 = *pbVar8;
      pbVar5 = pbVar4 + 2;
    } while (bVar2 != 0);
    if (pbVar6 == (byte *)param_2) goto LAB_007ba480;
  }
  if (pbVar6 < pbVar1) {
    *pbVar6 = 0;
    return ((int)pbVar6 + 1) - (int)param_2;
  }
LAB_007ba450:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
  return -1;
}

