
/* WARNING: Removing unreachable block (ram,0x0075a6ea) */
/* WARNING: Removing unreachable block (ram,0x0075a6d7) */

void FUN_0075a340(long param_1)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  ulong **ppuVar10;
  ulong **ppuVar12;
  undefined1 *puVar13;
  ulong **ppuVar14;
  char cVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  char *pcVar22;
  char *pcVar23;
  long in_FS_OFFSET;
  ulong *local_68;
  long *local_60;
  ulong local_50;
  long local_48;
  long local_40;
  ulong **ppuVar11;
  ulong **ppuVar15;
  ulong uVar21;
  
  ppuVar11 = &local_68;
  ppuVar10 = &local_68;
  ppuVar12 = &local_68;
  ppuVar15 = &local_68;
  ppuVar14 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0070b2d0(&DAT_00946120);
  if (*(long *)(param_1 + 0x28) != 0) goto LAB_0075a536;
  plVar5 = (long *)FUN_00711600(1,0x20);
  puVar3 = PTR_DAT_00939cb8;
  ppuVar12 = &local_68;
  if (plVar5 == (long *)0x0) {
LAB_0075a57c:
    *(undefined ***)(param_1 + 0x28) = &PTR_DAT_00919180;
  }
  else {
    pcVar22 = "TRANSLIT";
    pcVar6 = *(char **)(param_1 + 0xb0);
    uVar20 = -(uint)(*(int *)(param_1 + 0x34) != 0) & 8;
    uVar21 = (ulong)uVar20;
    if (*(int *)(param_1 + 0x34) == 0) {
      pcVar22 = "";
    }
    cVar1 = *pcVar6;
    if (cVar1 == '\0') {
      uVar19 = (-(ulong)(*(int *)(param_1 + 0x34) == 0) & 0xfffffffffffffff8) + 0x22;
      ppuVar10 = &local_68;
      while (ppuVar15 != (ulong **)((long)&local_68 - (uVar19 & 0xfffffffffffff000))) {
        ppuVar14 = (ulong **)((long)ppuVar10 + -0x1000);
        *(undefined8 *)((long)ppuVar10 + -8) = *(undefined8 *)((long)ppuVar10 + -8);
        ppuVar15 = (ulong **)((long)ppuVar10 + -0x1000);
        ppuVar10 = (ulong **)((long)ppuVar10 + -0x1000);
      }
      uVar19 = (ulong)((uint)uVar19 & 0xff0);
      lVar7 = -uVar19;
      puVar13 = (undefined1 *)((long)ppuVar14 + lVar7);
      if (uVar19 != 0) {
        *(undefined8 *)((long)ppuVar14 + -8) = *(undefined8 *)((long)ppuVar14 + -8);
      }
      pcVar8 = (char *)((ulong)((long)ppuVar14 + lVar7 + 0xf) & 0xfffffffffffffff0);
      *pcVar8 = '/';
      pcVar23 = pcVar8;
LAB_0075a5e3:
      pcVar8[1] = '/';
      pcVar6 = pcVar8 + 2;
      ppuVar12 = (ulong **)puVar13;
      if (uVar21 != 0) {
        if (uVar20 < 8) {
          if (uVar20 != 0) {
            *pcVar6 = *pcVar22;
          }
        }
        else {
          *(undefined8 *)pcVar6 = *(undefined8 *)pcVar22;
          *(undefined8 *)(pcVar8 + (uVar21 - 6)) = *(undefined8 *)(pcVar22 + (uVar21 - 8));
          lVar7 = (long)pcVar6 - ((ulong)(pcVar8 + 10) & 0xfffffffffffffff8);
          uVar20 = (int)lVar7 + uVar20 & 0xfffffff8;
          if (7 < uVar20) {
            uVar17 = 0;
            do {
              uVar19 = (ulong)uVar17;
              uVar17 = uVar17 + 8;
              *(undefined8 *)(((ulong)(pcVar8 + 10) & 0xfffffffffffffff8) + uVar19) =
                   *(undefined8 *)(pcVar22 + (uVar19 - lVar7));
            } while (uVar17 < uVar20);
          }
        }
        pcVar6 = pcVar6 + uVar21;
      }
    }
    else {
      uVar19 = 0;
      pcVar8 = pcVar6;
      cVar16 = cVar1;
      do {
        pcVar8 = pcVar8 + 1;
        uVar19 = uVar19 + (cVar16 == '/');
        cVar16 = *pcVar8;
      } while (cVar16 != '\0');
      ppuVar14 = &local_68;
      while (ppuVar11 !=
             (ulong **)
             ((long)&local_68 -
             ((ulong)(pcVar8 + ((uVar21 + 0x1a) - (long)pcVar6)) & 0xfffffffffffff000))) {
        ppuVar10 = (ulong **)((long)ppuVar14 + -0x1000);
        *(undefined8 *)((long)ppuVar14 + -8) = *(undefined8 *)((long)ppuVar14 + -8);
        ppuVar11 = (ulong **)((long)ppuVar14 + -0x1000);
        ppuVar14 = (ulong **)((long)ppuVar14 + -0x1000);
      }
      uVar18 = (ulong)((uint)(pcVar8 + ((uVar21 + 0x1a) - (long)pcVar6)) & 0xff0);
      lVar7 = -uVar18;
      puVar13 = (undefined1 *)((long)ppuVar10 + lVar7);
      if (uVar18 != 0) {
        *(undefined8 *)((long)ppuVar10 + -8) = *(undefined8 *)((long)ppuVar10 + -8);
      }
      pcVar23 = (char *)((ulong)((long)ppuVar10 + lVar7 + 0xf) & 0xfffffffffffffff0);
      pcVar8 = pcVar23;
      do {
        pcVar9 = pcVar8;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar9 + 1;
        *pcVar9 = (char)*(undefined4 *)(puVar3 + (long)cVar1 * 4);
        cVar1 = *pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8;
      ppuVar12 = (ulong **)((long)ppuVar10 + lVar7);
      if (uVar19 < 2) {
        *pcVar8 = '/';
        if (uVar19 == 0) goto LAB_0075a5e3;
        pcVar6 = pcVar9 + 2;
        ppuVar12 = (ulong **)((long)ppuVar10 + lVar7);
      }
    }
    *pcVar6 = '\0';
    local_68 = &local_50;
    local_60 = &local_48;
    *(undefined8 *)((long)ppuVar12 + -8) = 0x75a4bb;
    iVar4 = FUN_006d3fc0("INTERNAL",pcVar23,local_60,local_68,0);
    if (iVar4 == 0) {
      if (1 < local_50) {
        *(undefined8 *)((long)ppuVar12 + -8) = 0x75a565;
        FUN_006d4220(local_48,local_50,local_60,local_68);
        goto LAB_0075a565;
      }
      plVar5[1] = local_50;
      *plVar5 = local_48;
      if (local_48 == 0) goto LAB_0075a56d;
      *(undefined8 *)((long)ppuVar12 + -8) = 0x75a4fc;
      iVar4 = FUN_006d3fc0(pcVar23,"INTERNAL",local_60,local_68,0);
      if (iVar4 != 0) {
LAB_0075a5ad:
        plVar5[2] = 0;
LAB_0075a5b5:
        lVar7 = *plVar5;
        if (lVar7 != 0) {
          lVar2 = plVar5[1];
          *(undefined8 *)((long)ppuVar12 + -8) = 0x75a5c7;
          FUN_006d4220(lVar7,lVar2);
        }
        goto LAB_0075a574;
      }
      if (1 < local_50) {
        *(undefined8 *)((long)ppuVar12 + -8) = 0x75a5ad;
        FUN_006d4220();
        goto LAB_0075a5ad;
      }
      plVar5[3] = local_50;
      plVar5[2] = local_48;
      if (local_48 == 0) goto LAB_0075a5b5;
    }
    else {
LAB_0075a565:
      *plVar5 = 0;
LAB_0075a56d:
      if (plVar5[2] == 0) {
LAB_0075a574:
        *(undefined8 *)((long)ppuVar12 + -8) = 0x75a57c;
        FUN_007104f0(plVar5);
        goto LAB_0075a57c;
      }
    }
    *(long **)(param_1 + 0x28) = plVar5;
    *(code **)(param_1 + 0x20) = FUN_0075a270;
  }
LAB_0075a536:
  *(undefined8 *)((long)ppuVar12 + -8) = 0x75a53e;
  FUN_0070b100(&DAT_00946120);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppuVar12 + -8) = &UNK_0075a6ff;
    FUN_00771f60();
  }
  return;
}

