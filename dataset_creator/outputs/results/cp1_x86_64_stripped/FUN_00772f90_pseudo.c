
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00772f90(void)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 **ppuVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  undefined1 *local_498;
  undefined1 *local_490;
  int local_488 [2];
  undefined8 *local_480;
  undefined1 local_478 [32];
  undefined1 *local_458;
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  undefined1 **ppuVar11;
  
  ppuVar8 = &local_498;
  ppuVar11 = &local_498;
  ppuVar10 = &local_498;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar9 = &local_498;
  if (DAT_0094abd0 != 0) goto LAB_00772fbd;
  LOCK();
  bVar13 = DAT_0094abcc == 0;
  if (bVar13) {
    DAT_0094abcc = 1;
  }
  UNLOCK();
  if (!bVar13) {
    FUN_00709590(&DAT_0094abcc);
  }
  if (DAT_0094abd0 == 0) {
    local_490 = local_448;
    local_450 = 0x400;
    DAT_0094abd0 = 1;
    local_458 = local_490;
    do {
      iVar4 = FUN_00772740("localhost",local_478,local_458,local_450,&local_480,local_488);
      if (((iVar4 == 0) || (local_488[0] != -1)) || (*(int *)(in_FS_OFFSET + -0x58) != 0x22)) {
        if ((local_480 != (undefined8 *)0x0) &&
           (lVar5 = thunk_FUN_00712710(*local_480,0x2e), ppuVar9 = &local_498, lVar5 != 0))
        goto LAB_0077310e;
        goto LAB_00773130;
      }
      cVar3 = FUN_007a2dc0(&local_458);
      ppuVar8 = &local_498;
    } while (cVar3 != '\0');
    goto LAB_007730b5;
  }
  goto LAB_007730ca;
code_r0x00773147:
  cVar3 = FUN_007a2dc0(&local_458);
  ppuVar8 = &local_498;
  if (cVar3 == '\0') goto LAB_007730b5;
LAB_00773130:
  iVar4 = FUN_007abcf0(local_458,local_450);
  if (iVar4 != 0) goto code_r0x00773147;
  local_498 = local_458;
  lVar5 = thunk_FUN_00712710(local_458,0x2e);
  ppuVar9 = &local_498;
  if (lVar5 != 0) goto LAB_0077310e;
  lVar5 = thunk_FUN_007129d0(local_498);
  ppuVar8 = &local_498;
  while (ppuVar11 != (undefined1 **)((long)&local_498 - (lVar5 + 0x18U & 0xfffffffffffff000))) {
    ppuVar10 = (undefined1 **)((long)ppuVar8 + -0x1000);
    *(undefined8 *)((long)ppuVar8 + -8) = *(undefined8 *)((long)ppuVar8 + -8);
    ppuVar11 = (undefined1 **)((long)ppuVar8 + -0x1000);
    ppuVar8 = (undefined1 **)((long)ppuVar8 + -0x1000);
  }
  uVar7 = (ulong)((uint)(lVar5 + 0x18U) & 0xff0);
  lVar2 = -uVar7;
  ppuVar8 = (undefined1 **)((long)ppuVar10 + lVar2);
  if (uVar7 != 0) {
    *(undefined8 *)((long)ppuVar10 + -8) = *(undefined8 *)((long)ppuVar10 + -8);
  }
  *(undefined8 *)((long)ppuVar10 + lVar2 + -8) = 0x773224;
  uVar6 = thunk_FUN_00713a50((ulong)((long)ppuVar10 + lVar2 + 0xf) & 0xfffffffffffffff0,local_498,
                             lVar5 + 1);
  puVar12 = local_498;
  while( true ) {
    *(undefined8 *)((long)ppuVar10 + lVar2 + -8) = 0x773252;
    iVar4 = FUN_00772740(uVar6,local_478,puVar12,local_450,&local_480,local_488);
    if (((iVar4 == 0) || (local_488[0] != -1)) || (*(int *)(in_FS_OFFSET + -0x58) != 0x22)) break;
    *(undefined8 *)((long)ppuVar10 + lVar2 + -8) = 0x773274;
    cVar3 = FUN_007a2dc0(&local_458);
    puVar12 = local_458;
    if (cVar3 == '\0') goto LAB_007730b5;
  }
  if (local_480 == (undefined8 *)0x0) {
LAB_0077329f:
    local_488[1] = 0x100007f;
    do {
      *(int **)((long)ppuVar10 + lVar2 + -8) = local_488;
      *(undefined8 ***)((long)ppuVar10 + lVar2 + -0x10) = &local_480;
      *(undefined8 *)((long)ppuVar10 + lVar2 + -0x18) = 0x7732dd;
      iVar4 = FUN_007acde0(local_488 + 1,4,2,local_478,local_458,local_450);
      uVar6 = *(undefined8 *)((long)ppuVar10 + lVar2 + -8);
      if (((iVar4 == 0) || (local_488[0] != -1)) || (*(int *)(in_FS_OFFSET + -0x58) != 0x22)) {
        ppuVar8 = (undefined1 **)((long)ppuVar10 + lVar2);
        if (local_480 != (undefined8 *)0x0) {
          uVar1 = *local_480;
          *(undefined8 *)((long)ppuVar10 + lVar2 + -8) = 0x773327;
          lVar5 = thunk_FUN_00712710(uVar1,0x2e,*(undefined8 *)((long)ppuVar10 + lVar2 + -0x10),
                                     uVar6);
          ppuVar8 = (undefined1 **)((long)ppuVar10 + lVar2);
          ppuVar9 = (undefined1 **)((long)ppuVar10 + lVar2);
          if (lVar5 != 0) goto LAB_0077310e;
        }
        break;
      }
      *(undefined8 *)((long)ppuVar10 + lVar2 + -8) = 0x773301;
      cVar3 = FUN_007a2dc0(&local_458);
      ppuVar8 = (undefined1 **)((long)ppuVar10 + lVar2);
    } while (cVar3 != '\0');
  }
  else {
    uVar6 = *local_480;
    *(undefined8 *)((long)ppuVar10 + lVar2 + -8) = 0x773296;
    lVar5 = thunk_FUN_00712710(uVar6,0x2e);
    ppuVar9 = (undefined1 **)((long)ppuVar10 + lVar2);
    if (lVar5 == 0) goto LAB_0077329f;
LAB_0077310e:
    *(undefined8 *)((long)ppuVar9 + -8) = 0x773117;
    DAT_0094b5c8 = FUN_007128a0(lVar5 + 1);
    ppuVar8 = ppuVar9;
  }
LAB_007730b5:
  if (local_458 != local_490) {
    *(undefined8 *)((long)ppuVar8 + -8) = 0x7730ca;
    FUN_007104f0();
  }
LAB_007730ca:
  iVar4 = DAT_0094abcc;
  LOCK();
  DAT_0094abcc = 0;
  UNLOCK();
  ppuVar9 = ppuVar8;
  if (1 < iVar4) {
    *(undefined8 *)((long)ppuVar8 + -8) = 0x7730e7;
    FUN_00709660(&DAT_0094abcc);
  }
LAB_00772fbd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return DAT_0094b5c8;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppuVar9 + -8) = &UNK_0077333a;
  FUN_00771f60();
}

