
long FUN_0046e720(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  iVar1 = FUN_0043b840();
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((long)param_1 + 0x14);
  if (iVar1 == 0) {
    if ((*(int *)((long)param_1 + 0x3c) == 3) && (param_1[1] == 0)) {
      iVar1 = FUN_004d4600(*(undefined4 *)(param_1 + 3));
      *(int *)((long)param_1 + 0x14) = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      goto LAB_0046e8da;
    }
LAB_0046e760:
    lVar3 = FUN_004d5e90(*param_1);
    if (lVar3 == 0) {
      return 0;
    }
    plVar4 = (long *)FUN_004d6140(lVar3);
    if (((param_1[1] == 0) || (iVar1 = FUN_00542210(plVar4), iVar1 != 0)) &&
       (iVar1 = FUN_00542070(plVar4,param_1[5],param_1[6]), iVar1 != 0)) {
      if (*(int *)(param_1 + 7) == -1) {
        if (*(int *)(param_1 + 9) != 0) {
          FUN_00542150(plVar4);
        }
      }
      else {
        FUN_00542130(plVar4);
        if (*(int *)((long)param_1 + 0x44) != -1) {
          FUN_00542140(plVar4);
        }
      }
      if ((param_1[10] == 0) || (iVar1 = FUN_00542190(plVar4,param_1[10],param_1[0xb]), iVar1 != 0))
      {
        param_1[0xc] = param_2;
        param_1[0xd] = param_3;
        lVar5 = FUN_004b7dd0();
        if (lVar5 != 0) {
          FUN_004b8210(lVar5,FUN_0046e9c0,param_1);
        }
        uVar2 = *(uint *)(param_1 + 2);
        uVar6 = uVar2 & 4;
        if (uVar6 != 0) {
          if (*(int *)((long)param_1 + 0x3c) == 0) {
            uVar6 = FUN_004d4660(lVar3,*(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 8),
                                 lVar5);
          }
          else {
            uVar6 = FUN_004d4560(lVar3,*(int *)((long)param_1 + 0x3c),*(undefined4 *)(param_1 + 3),
                                 *(undefined4 *)(param_1 + 4),lVar5);
          }
          if ((int)uVar6 < 1) goto LAB_0046e932;
          uVar2 = *(uint *)(param_1 + 2);
        }
        goto LAB_0046e846;
      }
    }
    lVar5 = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x3c) = 3;
    if (param_1[1] != 0) goto LAB_0046e760;
LAB_0046e8da:
    lVar3 = FUN_004d49d0(*param_1,iVar1);
    if (lVar3 == 0) {
      return 0;
    }
    lVar5 = 0;
    uVar6 = 0;
    plVar4 = (long *)FUN_004d6140(lVar3);
    uVar2 = *(uint *)(param_1 + 2);
LAB_0046e846:
    if ((uVar2 & 3) == 0) {
LAB_0046e895:
      FUN_004d6100(lVar3,0xf000);
      FUN_004d6120(lVar3,*(undefined4 *)(param_1 + 0xe));
      FUN_004b7e40(lVar5);
      return lVar3;
    }
    if ((*plVar4 != 0) && (plVar4[2] != 0)) {
      if (0 < *(int *)((long)param_1 + 0x4c)) {
        FUN_004d6020(lVar3);
      }
      FUN_00542170(plVar4,4,*(int *)((long)param_1 + 0x3c) == 1);
      iVar1 = FUN_004d5370(lVar3);
      if (0 < iVar1) goto LAB_0046e895;
    }
    if (uVar6 != 0) {
      FUN_004b7e40(lVar5);
      return lVar3;
    }
  }
LAB_0046e932:
  FUN_004d5b70(lVar3);
  FUN_004b7e40(lVar5);
  return 0;
}

