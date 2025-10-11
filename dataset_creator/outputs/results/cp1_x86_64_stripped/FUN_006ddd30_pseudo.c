
int FUN_006ddd30(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4,ulong param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ushort *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  lVar12 = DAT_00946100;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_00946100 == 0) {
    iVar6 = 2;
    goto LAB_006dddbc;
  }
  uVar3 = *(ushort *)(DAT_00946100 + 4);
  uVar4 = *(ushort *)(DAT_00946100 + 10);
  iVar6 = FUN_006dd840(param_2,&local_50);
  if ((((iVar6 != 0) ||
       (lVar10 = (local_50 * 3 + 3) * 4, DAT_009460f8 < (ulong)*(ushort *)(lVar12 + 10) + lVar10))
      || (iVar6 = FUN_006dd840(param_1,&local_48), iVar6 != 0)) ||
     (lVar8 = (local_48 * 3 + 3) * 4, DAT_009460f8 < (ulong)*(ushort *)(lVar12 + 10) + lVar8))
  goto LAB_006dddb6;
  lVar17 = (ulong)uVar4 + lVar12;
  puVar1 = (ushort *)(lVar17 + -0xc + lVar8);
  if ((local_50 == local_48) && ((param_5 & 1) != 0)) {
    iVar6 = -1;
    goto LAB_006dddbc;
  }
  lVar8 = (ulong)uVar3 + lVar12;
  puVar2 = (ushort *)(lVar17 + -0xc + lVar10);
  iVar6 = 0;
  if (local_50 == 0) {
    if ((local_48 == 0) || (puVar1[4] == 0)) goto LAB_006dddb6;
    lVar12 = FUN_007101b0(0xd0);
    if (lVar12 == 0) goto LAB_006de051;
    iVar13 = 0;
    *param_3 = lVar12;
    *param_4 = 0;
    lVar10 = lVar12;
LAB_006ddf91:
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    *(char **)(lVar12 + 0x18) = "INTERNAL";
    uVar5 = puVar1[2];
    *(undefined4 *)(lVar12 + 0x10) = 1;
    *(undefined8 *)(lVar12 + 0x60) = 0;
    *(ulong *)(lVar12 + 0x20) = (ulong)uVar3 + lVar8;
    if (*(char *)((ulong)uVar4 + lVar8) == '\0') {
      FUN_006d5340((ulong)uVar5 + lVar8,lVar12);
    }
    else {
      iVar7 = FUN_006dd920((char *)((ulong)uVar4 + lVar8),(ulong)uVar5 + lVar8);
      if (iVar7 != 0) {
        if (iVar13 != 0) {
          FUN_006d3e40(lVar10);
        }
        goto LAB_006de06e;
      }
    }
    *param_4 = *param_4 + 1;
  }
  else {
    if (local_48 == 0) {
      uVar3 = puVar2[2];
    }
    else {
      if (puVar2[5] != 0) {
        puVar11 = (ushort *)
                  (((ulong)*(ushort *)(lVar12 + 0xc) - 1) + (ulong)puVar2[5] + DAT_00946100);
        uVar3 = *puVar11;
        while (uVar3 != 0) {
          uVar9 = (ulong)uVar3;
          if (local_48 == puVar11[(long)(int)(uVar3 - 1) * 3 + 1]) {
            *param_4 = uVar9;
            lVar12 = FUN_007101b0(uVar9 * 0x68);
            *param_3 = lVar12;
            if (lVar12 == 0) goto LAB_006de051;
            puVar16 = puVar11 + 1;
            iVar13 = 0;
            lVar10 = lVar12;
            lVar14 = lVar8 + (ulong)*puVar2;
            goto LAB_006de179;
          }
          puVar11 = puVar11 + uVar9 * 3 + 1;
          uVar3 = *puVar11;
        }
      }
LAB_006ddff6:
      if (puVar2[2] == 0) goto LAB_006dddb6;
      uVar3 = puVar1[4];
    }
    if (uVar3 == 0) {
LAB_006dddb6:
      iVar6 = 1;
      goto LAB_006dddbc;
    }
    lVar10 = FUN_007101b0(0xd0);
    if (lVar10 == 0) {
LAB_006de051:
      iVar6 = 3;
      goto LAB_006dddbc;
    }
    uVar3 = puVar2[3];
    *param_3 = lVar10;
    uVar4 = *puVar2;
    *param_4 = 0;
    *(char **)(lVar10 + 0x20) = "INTERNAL";
    *(ulong *)(lVar10 + 0x18) = (ulong)uVar4 + lVar8;
    uVar4 = puVar2[4];
    *(undefined4 *)(lVar10 + 0x10) = 1;
    *(undefined8 *)(lVar10 + 0x60) = 0;
    if (*(char *)((ulong)uVar3 + lVar8) == '\0') {
      FUN_006d5340(lVar8 + (ulong)uVar4,lVar10);
LAB_006ddf01:
      uVar9 = *param_4;
      *param_4 = uVar9 + 1;
      if (local_48 == 0) goto LAB_006dddbc;
      iVar13 = (int)(uVar9 + 1);
      lVar12 = (long)iVar13 * 0x68 + lVar10;
      goto LAB_006ddf91;
    }
    iVar7 = FUN_006dd920((char *)((ulong)uVar3 + lVar8),lVar8 + (ulong)uVar4,lVar10);
    if (iVar7 == 0) goto LAB_006ddf01;
LAB_006de06e:
    FUN_007104f0(lVar10);
    iVar6 = iVar7;
  }
LAB_006dddbc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_006de179:
  do {
    uVar3 = puVar16[1];
    uVar4 = *(ushort *)(lVar17 + (ulong)*puVar16 * 0xc);
    uVar5 = puVar16[2];
    *(undefined4 *)(lVar10 + 0x10) = 1;
    *(undefined8 *)(lVar10 + 0x60) = 0;
    lVar15 = (ulong)uVar4 + lVar8;
    *(long *)(lVar10 + 0x18) = lVar14;
    *(long *)(lVar10 + 0x20) = lVar15;
    if (*(char *)((ulong)uVar3 + lVar8) == '\0') {
      FUN_006d5340(lVar8 + (ulong)uVar5,lVar10);
    }
    else {
      iVar7 = FUN_006dd920((char *)((ulong)uVar3 + lVar8),lVar8 + (ulong)uVar5,lVar10);
      if (iVar7 != 0) {
        FUN_007104f0(lVar12);
        goto LAB_006ddff6;
      }
    }
    iVar13 = iVar13 + 1;
    puVar16 = puVar16 + 3;
    lVar10 = lVar10 + 0x68;
    lVar14 = lVar15;
  } while (iVar13 < (int)(uint)*puVar11);
  goto LAB_006dddbc;
}

