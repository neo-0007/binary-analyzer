
undefined8 FUN_00705c20(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uVar1 < *(ulong *)(param_1 + 0x28)) {
    if (*(int *)(param_1 + 0xc0) < 1) {
      iVar3 = FUN_00704f80(param_1,uVar1,*(ulong *)(param_1 + 0x28) - uVar1);
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + 0x18);
      iVar3 = FUN_00701350(param_1,lVar5,*(long *)(*(long *)(param_1 + 0xa0) + 0x20) - lVar5 >> 2);
    }
    if (iVar3 == 0) goto LAB_00705c67;
LAB_00705cd8:
    uVar4 = 0xffffffff;
  }
  else {
LAB_00705c67:
    lVar5 = *(long *)(param_1 + 8) - *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      lVar2 = *(long *)(param_1 + 0xd8);
      if (0x827 < lVar2 - 0x93f160U) {
        FUN_00703130();
      }
      lVar5 = (**(code **)(lVar2 + 0x80))(param_1,lVar5,1);
      if (lVar5 == -1) {
        if (*(int *)(in_FS_OFFSET + -0x58) != 0x1d) goto LAB_00705cd8;
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
    uVar4 = 0;
  }
  return uVar4;
}

