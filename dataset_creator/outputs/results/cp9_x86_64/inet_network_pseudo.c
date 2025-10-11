
in_addr_t inet_network(char *__cp)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint3 uVar5;
  bool bVar6;
  uint *puVar7;
  byte bVar8;
  in_addr_t iVar9;
  in_addr_t iVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
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
  bVar8 = *__cp;
  puVar7 = &local_38;
  do {
    bVar6 = bVar8 == 0x30;
    if (bVar6) {
      bVar8 = ((byte *)__cp)[1];
      __cp = (char *)((byte *)__cp + 1);
      iVar13 = 8;
    }
    else {
      iVar13 = 10;
    }
    bVar4 = !bVar6;
    if ((bVar8 & 0xdf) == 0x58) {
      bVar8 = ((byte *)__cp)[1];
      if (bVar8 != 0) {
        bVar6 = false;
        uVar12 = 0;
        pbVar11 = (byte *)__cp + 2;
        do {
          __cp = (char *)pbVar11;
          if ((int)(char)bVar8 - 0x30U < 10) {
            uVar12 = (char)bVar8 + -0x30 + uVar12 * 0x10;
          }
          else {
            pbVar11 = (byte *)__cp + -1;
            if ((*(byte *)(lVar2 + 1 + (long)(char)bVar8 * 2) & 0x10) == 0) goto LAB_007a3320;
            uVar12 = uVar12 * 0x10 + -0x57 + *(int *)(lVar3 + (long)(char)bVar8 * 4);
          }
          bVar8 = *__cp;
          bVar6 = true;
          pbVar11 = (byte *)__cp + 1;
          if (bVar8 == 0) goto LAB_007a32c2;
        } while( true );
      }
      goto LAB_007a32e8;
    }
    uVar12 = 0;
    pbVar11 = (byte *)__cp;
    if (bVar8 == 0) goto LAB_007a32cc;
    if (iVar13 == 8) {
      while (iVar13 = (int)(char)bVar8, pbVar11 = (byte *)__cp, iVar13 - 0x30U < 10) {
        if ((byte)(bVar8 - 0x38) < 2) goto LAB_007a32e8;
        bVar8 = ((byte *)__cp)[1];
        __cp = (char *)((byte *)__cp + 1);
        uVar12 = iVar13 + -0x30 + uVar12 * 8;
        bVar6 = true;
        if (bVar8 == 0) goto LAB_007a32c2;
      }
    }
    else {
      while (iVar14 = (int)(char)bVar8, pbVar11 = (byte *)__cp, iVar14 - 0x30U < 10) {
        bVar8 = ((byte *)__cp)[1];
        __cp = (char *)((byte *)__cp + 1);
        bVar6 = true;
        uVar12 = iVar14 + -0x30 + uVar12 * iVar13;
        if (bVar8 == 0) goto LAB_007a32c2;
      }
    }
LAB_007a3320:
    if (((bool)(bVar6 ^ 1) || 0xff < uVar12) || (local_28 <= puVar7)) goto LAB_007a32e8;
    if (bVar8 != 0x2e) {
      bVar8 = *pbVar11;
LAB_007a3406:
      bVar1 = *(byte *)(lVar2 + 1 + (long)(char)bVar8 * 2);
      while ((bVar1 & 0x20) != 0) {
        bVar8 = pbVar11[1];
        pbVar11 = pbVar11 + 1;
        bVar1 = *(byte *)(lVar2 + 1 + (long)(char)bVar8 * 2);
      }
      iVar9 = 0xffffffff;
      if (bVar8 == 0) {
        *puVar7 = uVar12;
        iVar10 = (in_addr_t)((long)puVar7 + (4 - (long)&local_38) >> 2);
        iVar9 = iVar10;
        if ((iVar10 != 0) && (iVar9 = (in_addr_t)(byte)local_38, iVar10 != 1)) {
          iVar9 = (in_addr_t)CONCAT11((byte)local_38,local_34);
          if (iVar10 != 2) {
            uVar5 = CONCAT21(CONCAT11((byte)local_38,local_34),local_30);
            iVar9 = (in_addr_t)uVar5;
            if (iVar10 != 3) {
              iVar9 = CONCAT31(uVar5,local_2c);
            }
          }
        }
      }
LAB_007a32ed:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail_local();
      }
      return iVar9;
    }
    bVar8 = pbVar11[1];
    __cp = (char *)(pbVar11 + 1);
    *puVar7 = uVar12;
    puVar7 = puVar7 + 1;
  } while( true );
LAB_007a32c2:
  bVar4 = 0xff < uVar12;
  pbVar11 = (byte *)__cp;
LAB_007a32cc:
  if ((puVar7 < local_28) && (bVar8 = 0, !bVar4)) goto LAB_007a3406;
LAB_007a32e8:
  iVar9 = 0xffffffff;
  goto LAB_007a32ed;
}

