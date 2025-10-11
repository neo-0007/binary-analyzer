
undefined8 FUN_00760b90(long *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  
  pbVar8 = (byte *)*param_1;
  bVar2 = *pbVar8;
  pbVar7 = pbVar8;
  if ((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) {
    do {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
    } while ((byte)((*pbVar1 & 0xdf) + 0xbf) < 0x1a);
    uVar5 = (long)pbVar7 - (long)pbVar8;
    if (2 < uVar5) {
LAB_00760c3f:
      if (DAT_0094aa58 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_007101b0(uVar5 + 0x11);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        puVar4[1] = uVar5;
        puVar9 = puVar4 + 2;
        *puVar4 = 0;
        thunk_FUN_00713a50(puVar9,pbVar8,uVar5);
        *(undefined1 *)((long)puVar4 + uVar5 + 0x10) = 0;
        DAT_0094aa58 = puVar4;
      }
      else {
        puVar4 = DAT_0094aa58;
        do {
          puVar6 = puVar4;
          if (uVar5 <= (ulong)puVar6[1]) {
            puVar9 = (undefined8 *)((long)puVar6 + puVar6[1] + (0x10 - uVar5));
            iVar3 = thunk_FUN_00713570(pbVar8,puVar9,uVar5);
            if (iVar3 == 0) goto LAB_00760cc7;
          }
          puVar4 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
        puVar4 = (undefined8 *)FUN_007101b0(uVar5 + 0x11);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        puVar4[1] = uVar5;
        puVar9 = puVar4 + 2;
        *puVar4 = 0;
        thunk_FUN_00713a50(puVar9,pbVar8,uVar5);
        *(undefined1 *)((long)puVar4 + uVar5 + 0x10) = 0;
        *puVar6 = puVar4;
      }
LAB_00760cc7:
      (&DAT_0094aa60)[(long)param_2 * 6] = puVar9;
      *param_1 = (long)pbVar7;
      return 1;
    }
  }
  pbVar8 = pbVar8 + 1;
  pbVar7 = pbVar8;
  if (bVar2 != 0x3c) {
    return 0;
  }
  do {
    bVar2 = *pbVar7;
    if (0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) {
      if (0x39 < bVar2) {
        uVar5 = (long)pbVar7 - (long)pbVar8;
        if (bVar2 != 0x3e) {
          return 0;
        }
        if (uVar5 < 3) {
          return 0;
        }
        pbVar7 = pbVar7 + 1;
        goto LAB_00760c3f;
      }
      if ((0x3ff280000000000U >> ((ulong)bVar2 & 0x3f) & 1) == 0) {
        return 0;
      }
    }
    pbVar7 = pbVar7 + 1;
  } while( true );
}

