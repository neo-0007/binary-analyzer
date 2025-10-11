
undefined8
FUN_0040d0e0(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if ((((piVar1 == (int *)0x0) || (*piVar1 != 0x80)) || (*(long *)(piVar1 + 0xc) == 0)) ||
     (*(long *)(piVar1 + 10) == 0)) {
    if ((*(long *)(piVar1 + 0x1e) != 0) &&
       (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(piVar1 + 0x1e) + 0xd0),
       UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040d126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(piVar1 + 10) + 0x80);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = *param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x0040d19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE_00)
                        (*(long *)(piVar1 + 0xc),param_2,param_3,uVar3,param_4,param_5);
      return uVar3;
    }
  }
  if (param_2 != 0) {
    iVar2 = FUN_0040cb40(param_1,param_4,param_5);
    if (iVar2 < 1) {
      return 0;
    }
  }
  uVar3 = FUN_0040cd00(param_1,param_2,param_3);
  return uVar3;
}

