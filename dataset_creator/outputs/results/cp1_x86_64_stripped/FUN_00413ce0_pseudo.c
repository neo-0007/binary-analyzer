
undefined8 FUN_00413ce0(int *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar3;
  
  iVar2 = FUN_00412830();
  if (iVar2 < 2) {
    if (iVar2 < 0) {
      return 0;
    }
    uVar3 = FUN_00525220(param_1,param_2);
    return uVar3;
  }
  if (iVar2 != 2) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 == 0x800) {
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x60);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      return 0;
    }
    goto LAB_00413dad;
  }
  if (iVar2 < 0x41) {
    if (iVar2 < 0x10) {
LAB_00413d1c:
      if (((iVar2 - 0x200U & 0xfffffdff) == 0) && (*(long *)(param_1 + 10) != 0)) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x78);
        goto joined_r0x00413de2;
      }
    }
    else if ((0x1000000010001U >> ((ulong)(iVar2 - 0x10) & 0x3f) & 1) != 0) goto LAB_00413dcf;
  }
  else {
    if ((iVar2 - 0x80U & 0xffffff7f) != 0) goto LAB_00413d1c;
LAB_00413dcf:
    if (*(long *)(param_1 + 10) == 0) goto LAB_00413d73;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 200);
joined_r0x00413de2:
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00413df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
      return uVar3;
    }
  }
LAB_00413d73:
  if ((((iVar2 - 2U & 0xfffffffd) == 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0x70) != 0)) {
    uVar3 = FUN_0053e860(lVar1,*(undefined8 *)(param_1 + 10),param_2);
    return uVar3;
  }
  if ((((iVar2 - 0x1000U & 0xffffefff) != 0) || (*(long *)(param_1 + 10) == 0)) ||
     (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 10) + 0x78),
     UNRECOVERED_JUMPTABLE_00 == (code *)0x0)) {
    return 0;
  }
LAB_00413dad:
                    /* WARNING: Could not recover jumptable at 0x00413dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0xc),param_2);
  return uVar3;
}

