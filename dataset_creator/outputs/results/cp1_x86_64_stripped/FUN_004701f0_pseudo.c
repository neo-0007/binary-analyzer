
long FUN_004701f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 == 0) || (param_1 == (undefined8 *)0x0)) ||
     (lVar2 = FUN_004d8c80(*param_1), lVar2 == 0)) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0x3c) == 2) {
    *(uint *)((long)param_1 + 0x3c) = (uint)((ulong)param_1[3] < 0x800);
  }
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  lVar3 = FUN_004b7dd0();
  if (lVar3 != 0) {
    FUN_004b8210(lVar3,FUN_0046fa90,param_1);
  }
  plVar4 = (long *)FUN_004d8e60(lVar2);
  if (((param_1[1] == 0) || (iVar1 = FUN_00542210(plVar4), iVar1 != 0)) &&
     ((param_1[5] == 0 || (iVar1 = FUN_00542070(plVar4,param_1[5],param_1[6]), iVar1 != 0)))) {
    if (*(int *)(param_1 + 7) == -1) {
      if (*(int *)((long)param_1 + 0x44) != 0) {
        FUN_00542150(plVar4);
      }
    }
    else {
      FUN_00542130(plVar4);
      if (*(int *)(param_1 + 8) != -1) {
        FUN_00542140(plVar4);
      }
    }
    if ((((param_1[9] == 0) || (iVar1 = FUN_00542190(plVar4,param_1[9],param_1[10]), iVar1 != 0)) &&
        (((*(byte *)(param_1 + 2) & 4) == 0 ||
         (iVar1 = FUN_004d8450(lVar2,*(undefined4 *)((long)param_1 + 0x3c),
                               *(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 4),lVar3),
         0 < iVar1)))) &&
       ((FUN_00542170(plVar4,4,*(int *)((long)param_1 + 0x3c) == 1), lVar5 = lVar2,
        (*(byte *)(param_1 + 2) & 3) == 0 ||
        ((((*plVar4 != 0 && (plVar4[1] != 0)) && (plVar4[2] != 0)) &&
         (iVar1 = FUN_004d8650(lVar2), 0 < iVar1)))))) goto LAB_0047034b;
  }
  lVar5 = 0;
  FUN_004d8960(lVar2);
LAB_0047034b:
  FUN_004b7e40(lVar3);
  return lVar5;
}

