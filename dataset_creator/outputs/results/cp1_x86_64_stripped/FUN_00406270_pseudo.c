
undefined8 FUN_00406270(long param_1)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if ((((*piVar1 - 0x80U & 0xffffff7f) == 0) && (*(long *)(piVar1 + 0xc) != 0)) &&
       (*(code **)(*(long *)(piVar1 + 10) + 0xe8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004062a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(piVar1 + 10) + 0xe8))(*(long *)(piVar1 + 0xc));
      return uVar2;
    }
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 200),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004062c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x38));
    return uVar2;
  }
  return 0;
}

