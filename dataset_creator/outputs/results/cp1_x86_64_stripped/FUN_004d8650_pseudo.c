
undefined8 FUN_004d8650(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0xa0) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004d8679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  }
  lVar4 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xb8));
  if ((lVar4 == 0) ||
     ((lVar5 = *(long *)(param_1 + 0x70), lVar5 == 0 && (lVar5 = FUN_004b7700(), lVar5 == 0)))) {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    iVar1 = FUN_00544ac0(*(undefined8 *)(param_1 + 0xb8),param_1 + 8,0,0);
    if (iVar1 != 0) {
      uVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x10));
      iVar1 = FUN_00541b00(lVar4,param_1 + 8,uVar2,0x50,lVar5);
      if ((iVar1 != 0) &&
         (((lVar6 = *(long *)(param_1 + 0x68), lVar6 != 0 || (lVar6 = FUN_004b7690(), lVar6 != 0))
          && (iVar1 = FUN_004d85d0(lVar4,param_1,lVar5,lVar6), iVar1 != 0)))) {
        *(long *)(param_1 + 0x68) = lVar6;
        uVar3 = 1;
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
        *(long *)(param_1 + 0x70) = lVar5;
        goto LAB_004d86e5;
      }
    }
  }
  if (*(long *)(param_1 + 0x68) != lVar6) {
    FUN_004b7fa0(lVar6);
  }
  uVar3 = 0;
  if (*(long *)(param_1 + 0x70) != lVar5) {
    FUN_004b7fa0(lVar5);
  }
LAB_004d86e5:
  FUN_004b2b50(lVar4);
  return uVar3;
}

