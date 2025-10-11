
/* WARNING: Removing unreachable block (ram,0x006d25d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d2430(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_60;
  long local_50;
  long local_48;
  ulong local_40;
  
  puVar1 = PTR_DAT_0093eb60;
  FUN_0078a8f0();
  if (DAT_0094ae70 == (int *)0x0) {
    local_40 = 0xffffffffffffffc0;
    uVar7 = 0;
    uVar8 = 0;
    uVar6 = 1;
    local_48 = 0xa00;
    uVar5 = 0x40;
    local_50 = 0x3f;
    local_60 = 0;
    lVar2 = 0;
  }
  else {
    for (piVar9 = DAT_0094ae70; piVar9 < DAT_0094ae70 + DAT_0094ae68 * 0xe; piVar9 = piVar9 + 0xe) {
      if (*piVar9 == 7) {
        uVar7 = *(ulong *)(piVar9 + 0xc);
        local_60 = *(undefined8 *)(piVar9 + 8);
        uVar8 = *(ulong *)(piVar9 + 10);
        uVar5 = 0x40;
        if (0x3f < uVar7) {
          uVar5 = uVar7;
        }
        local_50 = uVar5 - 1;
        local_48 = uVar5 + 0x9c0;
        local_40 = -uVar5;
        uVar6 = 1;
        if (uVar7 != 0) {
          uVar6 = uVar7;
        }
        lVar2 = *(long *)(piVar9 + 4) + *(long *)puVar1;
        goto LAB_006d24e8;
      }
    }
    local_40 = 0xffffffffffffffc0;
    uVar7 = 0;
    lVar2 = 0;
    uVar6 = 1;
    local_48 = 0xa00;
    uVar5 = 0x40;
    uVar8 = 0;
    local_50 = 0x3f;
    local_60 = 0;
  }
LAB_006d24e8:
  FUN_00789d40(0);
  lVar3 = (((uVar8 - 1) + DAT_00945850 + uVar5) / uVar5) * uVar5;
  lVar4 = FUN_0076eb20(local_48 + lVar3);
  _DAT_009458a0 = 0x3e;
  _DAT_009458c8 = 0;
  local_40 = local_40 & local_50 + lVar4;
  uVar5 = (uVar8 - 1) + uVar7;
  if (uVar7 == 0) {
    uVar5 = uVar8;
  }
  lVar4 = uVar6 * (uVar5 / uVar6);
  *(long *)(puVar1 + 0x458) = lVar4;
  _DAT_009458c0 = (lVar3 - lVar4) + local_40;
  thunk_FUN_00713a50(_DAT_009458c0,lVar2,local_60);
  lVar3 = local_40 + lVar3;
  *(undefined **)(lVar3 + 8) = &DAT_009458b0;
  *(long *)lVar3 = lVar3;
  *(long *)(lVar3 + 0x10) = lVar3;
  syscall();
                    /* WARNING: Subroutine does not return */
  FUN_00703110("cannot set %fs base address for thread-local storage");
}

