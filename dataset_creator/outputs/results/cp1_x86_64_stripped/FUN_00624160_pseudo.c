
undefined8
FUN_00624160(long param_1,long param_2,undefined4 param_3,long param_4,long param_5,long param_6,
            long param_7,long *param_8)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  pcVar2 = *(char **)(param_1 + 8);
  if (pcVar2 == *(char **)(param_4 + 8)) {
LAB_006241d6:
    *param_8 = param_5;
    *(undefined4 *)(param_8 + 1) = param_3;
    if (param_2 < 0) {
      if (param_2 == -2) {
        *(undefined4 *)(param_8 + 2) = 1;
      }
    }
    else {
      *(uint *)(param_8 + 2) = (uint)(param_7 == param_5 + param_2) * 5 + 1;
    }
  }
  else {
    cVar1 = *pcVar2;
    if (cVar1 != '*') {
      iVar3 = thunk_FUN_00712780(pcVar2);
      if (iVar3 == 0) goto LAB_006241d6;
    }
    if (param_5 != param_7) goto LAB_00624215;
    if (pcVar2 != *(char **)(param_6 + 8)) {
      if (cVar1 == '*') {
LAB_00624215:
                    /* WARNING: Could not recover jumptable at 0x00624244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                          (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6);
        return uVar4;
      }
      iVar3 = thunk_FUN_00712780(pcVar2);
      if (iVar3 != 0) goto LAB_00624215;
    }
    *(undefined4 *)((long)param_8 + 0xc) = param_3;
  }
  return 0;
}

