
ulong FUN_007acb60(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint3 uVar5;
  bool bVar6;
  uint *puVar7;
  byte bVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  uint local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2c;
  uint local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(in_FS_OFFSET + -0x40);
  lVar3 = *(long *)(in_FS_OFFSET + -0x50);
  bVar8 = *param_1;
  puVar7 = &local_38;
  do {
    bVar6 = bVar8 == 0x30;
    if (bVar6) {
      bVar8 = param_1[1];
      param_1 = param_1 + 1;
      iVar12 = 8;
    }
    else {
      iVar12 = 10;
    }
    bVar4 = !bVar6;
    if ((bVar8 & 0xdf) == 0x58) {
      bVar8 = param_1[1];
      if (bVar8 != 0) {
        bVar6 = false;
        uVar11 = 0;
        pbVar10 = param_1 + 2;
        do {
          param_1 = pbVar10;
          if ((int)(char)bVar8 - 0x30U < 10) {
            uVar11 = (char)bVar8 + -0x30 + uVar11 * 0x10;
          }
          else {
            pbVar10 = param_1 + -1;
            if ((*(byte *)(lVar2 + 1 + (long)(char)bVar8 * 2) & 0x10) == 0) goto LAB_007acc60;
            uVar11 = uVar11 * 0x10 + -0x57 + *(int *)(lVar3 + (long)(char)bVar8 * 4);
          }
          bVar8 = *param_1;
          bVar6 = true;
          pbVar10 = param_1 + 1;
          if (bVar8 == 0) goto LAB_007acc02;
        } while( true );
      }
      goto LAB_007acc28;
    }
    uVar11 = 0;
    pbVar10 = param_1;
    if (bVar8 == 0) goto LAB_007acc0c;
    if (iVar12 == 8) {
      while (iVar12 = (int)(char)bVar8, pbVar10 = param_1, iVar12 - 0x30U < 10) {
        if ((byte)(bVar8 - 0x38) < 2) goto LAB_007acc28;
        bVar8 = param_1[1];
        param_1 = param_1 + 1;
        uVar11 = iVar12 + -0x30 + uVar11 * 8;
        bVar6 = true;
        if (bVar8 == 0) goto LAB_007acc02;
      }
    }
    else {
      while (iVar13 = (int)(char)bVar8, pbVar10 = param_1, iVar13 - 0x30U < 10) {
        bVar8 = param_1[1];
        param_1 = param_1 + 1;
        bVar6 = true;
        uVar11 = iVar13 + -0x30 + uVar11 * iVar12;
        if (bVar8 == 0) goto LAB_007acc02;
      }
    }
LAB_007acc60:
    if (((bool)(bVar6 ^ 1) || 0xff < uVar11) || (local_28 <= puVar7)) goto LAB_007acc28;
    if (bVar8 != 0x2e) {
      bVar8 = *pbVar10;
LAB_007acd46:
      bVar1 = *(byte *)(lVar2 + 1 + (long)(char)bVar8 * 2);
      while ((bVar1 & 0x20) != 0) {
        bVar8 = pbVar10[1];
        pbVar10 = pbVar10 + 1;
        bVar1 = *(byte *)(lVar2 + 1 + (long)(char)bVar8 * 2);
      }
      uVar9 = 0xffffffff;
      if (bVar8 == 0) {
        *puVar7 = uVar11;
        uVar9 = (long)puVar7 + (4 - (long)&local_38) >> 2;
        iVar12 = (int)uVar9;
        uVar9 = uVar9 & 0xffffffff;
        if ((iVar12 != 0) && (uVar9 = (ulong)(byte)local_38, iVar12 != 1)) {
          uVar9 = (ulong)CONCAT11((byte)local_38,local_34);
          if (iVar12 != 2) {
            uVar5 = CONCAT21(CONCAT11((byte)local_38,local_34),local_30);
            uVar9 = (ulong)uVar5;
            if (iVar12 != 3) {
              uVar9 = (ulong)CONCAT31(uVar5,local_2c);
            }
          }
        }
      }
LAB_007acc2d:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar9;
    }
    bVar8 = pbVar10[1];
    param_1 = pbVar10 + 1;
    *puVar7 = uVar11;
    puVar7 = puVar7 + 1;
  } while( true );
LAB_007acc02:
  bVar4 = 0xff < uVar11;
  pbVar10 = param_1;
LAB_007acc0c:
  if ((puVar7 < local_28) && (bVar8 = 0, !bVar4)) goto LAB_007acd46;
LAB_007acc28:
  uVar9 = 0xffffffff;
  goto LAB_007acc2d;
}

