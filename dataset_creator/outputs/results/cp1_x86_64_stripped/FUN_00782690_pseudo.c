
ulong FUN_00782690(undefined4 param_1,long param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  ulong uVar12;
  long in_FS_OFFSET;
  long lVar13;
  long lVar14;
  undefined1 *local_58;
  long *local_50;
  long local_40;
  undefined1 **ppuVar11;
  
  ppuVar11 = &local_58;
  ppuVar10 = &local_58;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar5 = FUN_007abc50(param_1,param_2,param_3);
    if (uVar5 != 0xffffffffffffffff) {
      if (0 < (long)uVar5) goto LAB_007826f2;
      ppuVar9 = &local_58;
      if (uVar5 == 0) goto LAB_0078276c;
      iVar4 = *(int *)(in_FS_OFFSET + -0x58);
      break;
    }
    iVar4 = *(int *)(in_FS_OFFSET + -0x58);
  } while (iVar4 == 4);
  ppuVar9 = &local_58;
  if (iVar4 == 0xb) {
    uVar5 = 0;
LAB_007826f2:
    ppuVar9 = &local_58;
    if (0 < param_3) {
      uVar8 = param_3 - 1;
      if (uVar8 < 2) {
        uVar8 = 0;
        lVar13 = 0;
      }
      else {
        plVar6 = (long *)(param_2 + 8);
        lVar13 = 0;
        lVar14 = 0;
        do {
          lVar3 = *plVar6;
          plVar1 = plVar6 + 2;
          plVar6 = plVar6 + 4;
          lVar13 = lVar13 + lVar3;
          lVar14 = lVar14 + *plVar1;
        } while (plVar6 != (long *)(param_2 + 0x28 + (ulong)((uVar8 >> 1) - 1) * 0x20));
        uVar8 = uVar8 & 0xfffffffe;
        lVar13 = lVar13 + lVar14;
      }
      uVar12 = lVar13 + *(long *)(param_2 + 8 + (long)(int)uVar8 * 0x10);
      if ((int)(uVar8 + 1) < param_3) {
        uVar12 = uVar12 + *(long *)(param_2 + 0x18 + (long)(int)uVar8 * 0x10);
      }
      ppuVar9 = &local_58;
      if (uVar5 < uVar12) {
        ppuVar9 = &local_58;
        while (ppuVar11 !=
               (undefined1 **)((long)&local_58 - ((long)param_3 << 4 & 0xfffffffffffff000U))) {
          ppuVar10 = (undefined1 **)((long)ppuVar9 + -0x1000);
          *(undefined8 *)((long)ppuVar9 + -8) = *(undefined8 *)((long)ppuVar9 + -8);
          ppuVar11 = (undefined1 **)((long)ppuVar9 + -0x1000);
          ppuVar9 = (undefined1 **)((long)ppuVar9 + -0x1000);
        }
        uVar7 = (ulong)((uint)((long)param_3 << 4) & 0xfff);
        lVar13 = -uVar7;
        if (uVar7 != 0) {
          *(undefined8 *)((long)ppuVar10 + -8) = *(undefined8 *)((long)ppuVar10 + -8);
        }
        *(undefined8 *)((long)ppuVar10 + lVar13 + -8) = 0x78280a;
        local_50 = (long *)&local_58;
        plVar6 = (long *)thunk_FUN_00713a50((long)ppuVar10 + lVar13,param_2);
        local_58 = (undefined1 *)local_50;
        local_50 = plVar6;
        uVar7 = uVar5;
        do {
          for (; uVar2 = local_50[1], uVar2 <= uVar7; local_50 = local_50 + 2) {
            uVar7 = uVar7 - uVar2;
            param_3 = param_3 + -1;
          }
          *local_50 = *local_50 + uVar7;
          local_50[1] = uVar2 - uVar7;
LAB_00782824:
          *(undefined8 *)((long)ppuVar10 + lVar13 + -8) = 0x782839;
          uVar7 = FUN_007abc50(param_1,local_50,param_3);
          if (uVar7 == 0xffffffffffffffff) goto LAB_0078287c;
          ppuVar9 = (undefined1 **)local_58;
          if ((long)uVar7 < 1) {
            if (uVar7 != 0) {
              iVar4 = *(int *)(in_FS_OFFSET + -0x58);
              goto LAB_0078288b;
            }
            break;
          }
          uVar5 = uVar5 + uVar7;
        } while (uVar5 < uVar12);
      }
    }
  }
LAB_0078276c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppuVar9 + -8) = &UNK_007828f2;
  FUN_00771f60();
LAB_0078287c:
  iVar4 = *(int *)(in_FS_OFFSET + -0x58);
  if (iVar4 != 4) {
LAB_0078288b:
    if (iVar4 == 0xb) {
      *(undefined8 *)((long)ppuVar10 + lVar13 + -8) = 0x7828b9;
      iVar4 = FUN_00782220(param_1,200);
      if (0 < iVar4) goto LAB_00782824;
    }
    ppuVar9 = (undefined1 **)local_58;
    if ((long)uVar7 < 0) {
      uVar5 = uVar7;
    }
    goto LAB_0078276c;
  }
  goto LAB_00782824;
}

