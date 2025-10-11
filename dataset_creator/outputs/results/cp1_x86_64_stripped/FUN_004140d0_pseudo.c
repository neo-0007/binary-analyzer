
undefined8 FUN_004140d0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0x800) {
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 10) + 0x68) == 0) {
      return 0;
    }
    uVar2 = FUN_0053ae70();
    uVar2 = FUN_00420b60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0041424d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x68))(*(undefined8 *)(param_1 + 0xc),uVar2);
    return uVar2;
  }
  if (iVar1 < 0x41) {
    if (iVar1 < 0x10) {
LAB_004140f3:
      if ((((iVar1 - 0x200U & 0xfffffdff) == 0) && (*(long *)(param_1 + 10) != 0)) &&
         (*(long *)(*(long *)(param_1 + 10) + 0x80) != 0)) {
        uVar2 = FUN_00520230();
        goto LAB_0041417f;
      }
    }
    else if ((0x1000000010001U >> ((ulong)(iVar1 - 0x10) & 0x3f) & 1) != 0) goto LAB_004141af;
  }
  else {
    if ((iVar1 - 0x80U & 0xffffff7f) != 0) goto LAB_004140f3;
LAB_004141af:
    if ((*(long *)(param_1 + 10) != 0) && (*(long *)(*(long *)(param_1 + 10) + 0xd0) != 0)) {
      uVar2 = FUN_00416380();
      uVar2 = FUN_00420b60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x004141ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0xd0))(*(undefined8 *)(param_1 + 0xc),uVar2);
      return uVar2;
    }
  }
  if ((((iVar1 - 2U & 0xfffffffd) == 0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(long *)(*(long *)(param_1 + 8) + 0x78) != 0)) {
    uVar2 = FUN_0053e6e0();
    uVar2 = FUN_00420b60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00414225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x78))(*(undefined8 *)(param_1 + 10),uVar2);
    return uVar2;
  }
  if ((((iVar1 - 0x1000U & 0xffffefff) != 0) || (*(long *)(param_1 + 10) == 0)) ||
     (*(long *)(*(long *)(param_1 + 10) + 0x80) == 0)) {
    return 0;
  }
  uVar2 = FUN_0053cb70();
LAB_0041417f:
  uVar2 = FUN_00420b60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0041419a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x80))(*(undefined8 *)(param_1 + 0xc),uVar2);
  return uVar2;
}

