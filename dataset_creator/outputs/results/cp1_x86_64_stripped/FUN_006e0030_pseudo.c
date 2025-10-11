
void FUN_006e0030(undefined8 *param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined1 **ppuVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  uint uVar16;
  long lVar17;
  long in_FS_OFFSET;
  byte bVar18;
  undefined1 *local_e8;
  char *local_e0;
  undefined1 local_d8 [24];
  uint local_c0;
  long local_a8;
  long local_40;
  undefined1 **ppuVar15;
  
  bVar18 = 0;
  ppuVar13 = &local_e8;
  ppuVar15 = &local_e8;
  ppuVar14 = &local_e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  iVar4 = FUN_0076e620(*param_1,0x80000);
  ppuVar12 = &local_e8;
  if (iVar4 < 0) goto LAB_006e0125;
  iVar5 = FUN_0076d7f0(iVar4,local_d8);
  if (-1 < iVar5) {
    ppuVar12 = &local_e8;
    if ((local_c0 & 0xf000) == 0x4000) {
      FUN_0076e4b0(iVar4);
      local_e0 = (char *)*param_1;
      lVar17 = thunk_FUN_007129d0(local_e0);
      pcVar8 = local_e0;
      bVar1 = (&DAT_00823a08)[param_2];
      uVar10 = lVar17 + 0x1d + (ulong)bVar1;
      ppuVar12 = &local_e8;
      while (ppuVar15 != (undefined1 **)((long)&local_e8 - (uVar10 & 0xfffffffffffff000))) {
        ppuVar14 = (undefined1 **)((long)ppuVar12 + -0x1000);
        *(undefined8 *)((long)ppuVar12 + -8) = *(undefined8 *)((long)ppuVar12 + -8);
        ppuVar15 = (undefined1 **)((long)ppuVar12 + -0x1000);
        ppuVar12 = (undefined1 **)((long)ppuVar12 + -0x1000);
      }
      uVar10 = (ulong)((uint)uVar10 & 0xff0);
      lVar17 = -uVar10;
      ppuVar12 = (undefined1 **)((long)ppuVar14 + lVar17);
      ppuVar13 = (undefined1 **)((long)ppuVar14 + lVar17);
      if (uVar10 != 0) {
        *(undefined8 *)((long)ppuVar14 + -8) = *(undefined8 *)((long)ppuVar14 + -8);
      }
      uVar16 = bVar1 + 1;
      uVar10 = (ulong)uVar16;
      local_e0 = "LC_COLLATE" + (byte)(&DAT_00823a20)[param_2];
      *(undefined8 *)((long)ppuVar14 + lVar17 + -8) = 0x6e029c;
      puVar9 = (undefined4 *)
               thunk_FUN_00713820((ulong)((long)ppuVar14 + lVar17 + 0xf) & 0xfffffffffffffff0,pcVar8
                                 );
      *puVar9 = 0x5359532f;
      *(undefined1 *)(puVar9 + 1) = 0x5f;
      if (uVar16 < 8) {
        if ((uVar16 & 4) == 0) {
          if ((uVar16 != 0) && (*(char *)((long)puVar9 + 5) = *local_e0, (uVar16 & 2) != 0)) {
            *(undefined2 *)((long)puVar9 + uVar10 + 3) = *(undefined2 *)(local_e0 + (uVar10 - 2));
          }
        }
        else {
          *(undefined4 *)((long)puVar9 + 5) = *(undefined4 *)local_e0;
          *(undefined4 *)((long)puVar9 + uVar10 + 1) = *(undefined4 *)(local_e0 + (uVar10 - 4));
        }
      }
      else {
        *(undefined8 *)((long)puVar9 + 5) = *(undefined8 *)local_e0;
        *(undefined8 *)((long)puVar9 + ((ulong)uVar16 - 3)) =
             *(undefined8 *)(local_e0 + ((ulong)uVar16 - 8));
        puVar7 = (undefined8 *)((long)puVar9 + 0xdU & 0xfffffffffffffff8);
        lVar6 = (long)puVar9 + (5 - (long)puVar7);
        pcVar8 = local_e0 + -lVar6;
        for (uVar10 = (ulong)(uVar16 + (int)lVar6 >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar7 = *(undefined8 *)pcVar8;
          pcVar8 = pcVar8 + ((ulong)bVar18 * -2 + 1) * 8;
          puVar7 = puVar7 + (ulong)bVar18 * -2 + 1;
        }
      }
      *(undefined8 *)((long)ppuVar14 + lVar17 + -8) = 0x6e02ea;
      iVar4 = FUN_0076e620((ulong)((long)ppuVar14 + lVar17 + 0xf) & 0xfffffffffffffff0,0x80000);
      if (iVar4 < 0) goto LAB_006e0125;
      *(undefined8 *)((long)ppuVar14 + lVar17 + -8) = 0x6e02ff;
      iVar5 = FUN_0076d7f0(iVar4,local_d8);
      ppuVar12 = (undefined1 **)((long)ppuVar14 + lVar17);
      if (iVar5 < 0) goto LAB_006e01e0;
    }
    ppuVar13 = ppuVar12;
    lVar17 = local_a8;
    local_e0 = (char *)CONCAT44(local_e0._4_4_,*(undefined4 *)(in_FS_OFFSET + -0x58));
    *(undefined8 *)((long)ppuVar13 + -8) = 0x6e00e1;
    lVar6 = FUN_0076f020(0,lVar17,1,2,iVar4,0);
    lVar17 = local_a8;
    ppuVar12 = ppuVar13;
    if (lVar6 != -1) {
      *(undefined8 *)((long)ppuVar13 + -8) = 0x6e00f2;
      FUN_0076e4b0(iVar4);
      lVar17 = local_a8;
      if (lVar6 == 0) goto LAB_006e0125;
      *(undefined8 *)((long)ppuVar13 + -8) = 0x6e0109;
      puVar7 = (undefined8 *)FUN_006dfdd0(param_2,lVar6,lVar17);
      if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)((long)ppuVar13 + -8) = 0x6e035f;
        FUN_0076f080(lVar6,local_a8);
        goto LAB_006e0125;
      }
      uVar11 = 1;
LAB_006e0117:
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 3) = uVar11;
      param_1[2] = puVar7;
      goto LAB_006e0125;
    }
    if (*(int *)(in_FS_OFFSET + -0x58) == 0x26) {
      *(undefined8 *)((long)ppuVar13 + -8) = 0x6e0170;
      local_e8 = (undefined1 *)FUN_007101b0(lVar17);
      puVar2 = local_e8;
      if (local_e8 != (undefined1 *)0x0) {
        for (; 0 < lVar17; lVar17 = lVar17 - (long)pcVar8) {
          *(undefined8 *)((long)ppuVar13 + -8) = 0x6e01ad;
          pcVar8 = (char *)FUN_0076e770(iVar4,puVar2,lVar17);
          puVar3 = local_e8;
          if ((long)pcVar8 < 1) {
            local_e0 = pcVar8;
            *(undefined8 *)((long)ppuVar13 + -8) = 0x6e01c5;
            FUN_007104f0(puVar3);
            if (local_e0 == (char *)0x0) {
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
            }
            goto LAB_006e01e0;
          }
          puVar2 = puVar2 + (long)pcVar8;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = local_e0._0_4_;
        *(undefined8 *)((long)ppuVar13 + -8) = 0x6e0328;
        FUN_0076e4b0(iVar4);
        puVar2 = local_e8;
        *(undefined8 *)((long)ppuVar13 + -8) = 0x6e033e;
        puVar7 = (undefined8 *)FUN_006dfdd0(param_2,puVar2,local_a8);
        if (puVar7 == (undefined8 *)0x0) goto LAB_006e0125;
        uVar11 = 0;
        goto LAB_006e0117;
      }
    }
  }
LAB_006e01e0:
  *(undefined8 *)((long)ppuVar13 + -8) = 0x6e01e8;
  FUN_0076e4b0(iVar4);
  ppuVar12 = ppuVar13;
LAB_006e0125:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppuVar12 + -8) = &UNK_006e03cc;
  FUN_00771f60();
}

