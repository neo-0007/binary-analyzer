
long FUN_00703f30(uint *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 local_d8 [24];
  uint local_c0;
  long local_a8;
  long local_40;
  
  lVar3 = *(long *)(param_1 + 2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(long *)(param_1 + 4) - lVar3;
  lVar4 = param_2;
  if (uVar7 < param_3) {
    if ((*param_1 & 0x100) != 0) {
      param_3 = param_3 - uVar7;
      lVar4 = thunk_FUN_00713820(param_2,lVar3,uVar7);
      FUN_00706410(param_1);
      lVar3 = *(long *)(param_1 + 2);
      uVar7 = *(long *)(param_1 + 4) - lVar3;
      if (param_3 <= uVar7) goto LAB_007040ce;
    }
    lVar3 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar3 - 0x93f160U) {
      FUN_00703130();
    }
    iVar1 = (**(code **)(lVar3 + 0x90))(param_1,local_d8);
    lVar3 = local_a8;
    if (((iVar1 != 0) || ((local_c0 & 0xf000) != 0x8000)) || (local_a8 == 0)) {
LAB_00704160:
      FUN_0076f080(*(long *)(param_1 + 0xe),*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe));
      puVar5 = &DAT_0093f5e0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
      if (0 < (int)param_1[0x30]) {
        puVar5 = &DAT_0093f2e0;
      }
      *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      *(undefined **)(param_1 + 0x36) = puVar5;
      *(undefined **)(*(long *)(param_1 + 0x28) + 0xe0) = &DAT_0093f2e0;
      lVar3 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar3 - 0x93f160U) {
        FUN_00703130();
      }
      lVar3 = (**(code **)(lVar3 + 0x40))(param_1,param_2,param_3);
      lVar4 = lVar3 + (lVar4 - param_2);
      goto LAB_007040f8;
    }
    iVar1 = FUN_0076ece0();
    uVar7 = *(ulong *)(param_1 + 0xe);
    lVar2 = (long)iVar1;
    uVar6 = lVar3 + -1 + lVar2 & -lVar2;
    uVar8 = ~uVar7 + *(long *)(param_1 + 0x10) + lVar2 & -lVar2;
    if (uVar6 < uVar8) {
      FUN_0076f080(uVar7 + uVar6,uVar8 - uVar6);
      uVar7 = *(ulong *)(param_1 + 0xe);
      lVar2 = uVar7 + local_a8;
    }
    else if (uVar8 < uVar6) {
      uVar7 = FUN_00770970(uVar7,uVar8,uVar6,1);
      if (uVar7 == 0xffffffffffffffff) goto LAB_00704160;
      *(ulong *)(param_1 + 0xe) = uVar7;
      lVar2 = uVar7 + local_a8;
    }
    else {
      lVar2 = uVar7 + lVar3;
      local_a8 = lVar3;
    }
    *(ulong *)(param_1 + 6) = uVar7;
    *(long *)(param_1 + 0x10) = lVar2;
    lVar3 = *(long *)(param_1 + 0x24) - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
    *(long *)(param_1 + 0x24) = lVar3;
    if (lVar3 < local_a8) {
      *(ulong *)(param_1 + 2) = lVar3 + uVar7;
      *(long *)(param_1 + 4) = lVar2;
      lVar2 = FUN_0076db00(param_1[0x1c],local_a8,0);
      if (lVar2 == *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)) {
        lVar3 = *(long *)(param_1 + 2);
        *(long *)(param_1 + 0x24) = lVar2;
        uVar7 = *(long *)(param_1 + 4) - lVar3;
      }
      else {
        *param_1 = *param_1 | 0x20;
        lVar3 = *(long *)(param_1 + 2);
        uVar7 = *(long *)(param_1 + 4) - lVar3;
      }
      if (uVar7 < param_3) {
        *param_1 = *param_1 | 0x10;
      }
      goto LAB_007040ce;
    }
    *(long *)(param_1 + 2) = lVar2;
    *(long *)(param_1 + 4) = lVar2;
    if (param_3 != 0) {
      *param_1 = *param_1 | 0x10;
    }
  }
  else {
LAB_007040ce:
    if (uVar7 != 0) {
      if (param_3 <= uVar7) {
        uVar7 = param_3;
      }
      lVar4 = thunk_FUN_00713820(lVar4,lVar3,uVar7);
      *(ulong *)(param_1 + 2) = lVar3 + uVar7;
    }
  }
  lVar4 = lVar4 - param_2;
LAB_007040f8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}

