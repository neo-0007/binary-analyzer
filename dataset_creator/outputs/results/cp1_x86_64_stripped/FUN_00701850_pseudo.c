
undefined8 FUN_00701850(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  
  plVar7 = *(long **)(param_1 + 0xa0);
  uVar1 = plVar7[3];
  if (uVar1 < (ulong)plVar7[4]) {
    if (*(int *)(param_1 + 0xc0) < 1) {
      iVar6 = FUN_00704f80(param_1,*(long *)(param_1 + 0x20),
                           *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
    }
    else {
      iVar6 = FUN_00701350(param_1,uVar1,(long)(plVar7[4] - uVar1) >> 2);
    }
    if (iVar6 != 0) {
      return 0xffffffff;
    }
    plVar7 = *(long **)(param_1 + 0xa0);
  }
  lVar8 = *plVar7;
  lVar2 = plVar7[1];
  if (lVar8 != lVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    iVar6 = FUN_00701fb0(uVar3);
    if (iVar6 < 1) {
      plVar7 = *(long **)(param_1 + 0xa0);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      plVar7[0xb] = plVar7[0xc];
      iVar6 = FUN_00701fe0(uVar3,plVar7 + 0xb,uVar5,uVar4,*plVar7 - plVar7[2] >> 2);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 0x18) + (long)iVar6;
      lVar8 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) + (long)iVar6;
    }
    else {
      lVar8 = (long)iVar6 * (lVar8 - lVar2 >> 2);
    }
    lVar2 = *(long *)(param_1 + 0xd8);
    if (0x827 < lVar2 - 0x93f160U) {
      FUN_00703130();
    }
    lVar8 = (**(code **)(lVar2 + 0x80))(param_1,lVar8,1);
    if (lVar8 == -1) {
      if (*(int *)(in_FS_OFFSET + -0x58) != 0x1d) {
        return 0xffffffff;
      }
    }
    else {
      (*(undefined8 **)(param_1 + 0xa0))[1] = **(undefined8 **)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  return 0;
}

