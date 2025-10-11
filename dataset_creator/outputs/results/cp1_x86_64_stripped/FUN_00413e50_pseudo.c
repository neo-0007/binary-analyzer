
undefined8 FUN_00413e50(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar3;
  
  iVar1 = FUN_00412830();
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      return 0;
    }
    uVar3 = FUN_00525240(param_1,param_2);
    return uVar3;
  }
  if (iVar1 != 2) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0x800) {
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x70);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      return 0;
    }
    goto LAB_00413ec9;
  }
  if (iVar1 < 0x41) {
    if (iVar1 < 0x10) {
LAB_00413e8c:
      if ((iVar1 - 0x200U & 0xfffffdff) == 0) {
        if (*(long *)(param_1 + 10) == 0) {
          return 0;
        }
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x68);
        goto joined_r0x00413f42;
      }
    }
    else if ((0x1000000010001U >> ((ulong)(iVar1 - 0x10) & 0x3f) & 1) != 0) goto LAB_00413f2f;
    if ((iVar1 - 0x1000U & 0xffffefff) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 10);
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar1 - 0x80U & 0xffffff7f) != 0) goto LAB_00413e8c;
LAB_00413f2f:
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0xb8);
joined_r0x00413f42:
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00413f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
      return uVar3;
    }
    if ((iVar1 - 0x1000U & 0xffffefff) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 10);
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar2 + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    return 0;
  }
LAB_00413ec9:
                    /* WARNING: Could not recover jumptable at 0x00413ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
  return uVar3;
}

