
undefined8
FUN_0040d420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if ((((piVar1 == (int *)0x0) || (*piVar1 != 0x100)) || (*(long *)(piVar1 + 0xc) == 0)) ||
     (*(long *)(piVar1 + 10) == 0)) {
    if ((*(long *)(piVar1 + 0x1e) != 0) &&
       (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(piVar1 + 0x1e) + 0xd8),
       UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040d466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(piVar1 + 10) + 0xa0);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040d4be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(*(long *)(piVar1 + 0xc),param_2,param_3);
      return uVar3;
    }
  }
  iVar2 = FUN_0040cc20(param_1,param_4,param_5);
  if (0 < iVar2) {
    uVar3 = FUN_0040d1b0(param_1,param_2,param_3);
    return uVar3;
  }
  return 0xffffffff;
}

