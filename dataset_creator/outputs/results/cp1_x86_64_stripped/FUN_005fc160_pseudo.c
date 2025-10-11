
long FUN_005fc160(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  piVar3 = (int *)FUN_004ab640();
  uVar4 = FUN_004ac470(param_1);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (param_2 < 0xe) {
    switch(param_2) {
    case 1:
      piVar3[3] = 0;
      piVar3[4] = 1;
      uVar1 = FUN_004098b0(*(undefined8 *)(piVar3 + 6));
      iVar2 = FUN_00538a80(*(undefined8 *)(piVar3 + 6),0,0,0,0,uVar1);
      if (iVar2 == 0) {
        return 0;
      }
      param_2 = 1;
      break;
    case 2:
      if (piVar3[2] < 1) {
        return 1;
      }
      param_2 = 2;
      break;
    default:
      goto switchD_005fc1bf_caseD_3;
    case 10:
      if (0 < (long)(*piVar3 - piVar3[1])) {
        return (long)(*piVar3 - piVar3[1]);
      }
      param_2 = 10;
      break;
    case 0xb:
      do {
        if (*piVar3 == piVar3[1]) {
          do {
            if (piVar3[3] != 0) {
              param_2 = 0xb;
              goto LAB_005fc290;
            }
            piVar3[3] = 1;
            piVar3[1] = 0;
            iVar2 = FUN_00536ac0(*(undefined8 *)(piVar3 + 6),piVar3 + 0xc,piVar3);
            piVar3[4] = iVar2;
            if ((long)iVar2 < 1) {
              return (long)iVar2;
            }
          } while (*piVar3 == piVar3[1]);
        }
        iVar2 = FUN_005fbf80(param_1,0,0);
        if (iVar2 < 0) {
          return (long)iVar2;
        }
      } while( true );
    case 0xc:
      lVar5 = FUN_004ab640(param_4);
      lVar6 = FUN_00535890();
      *(long *)(lVar5 + 0x18) = lVar6;
      if (lVar6 != 0) {
        iVar2 = FUN_00537bb0(lVar6,*(undefined8 *)(piVar3 + 6));
        if ((long)iVar2 != 0) {
          FUN_004ab650(param_4,1);
        }
        return (long)iVar2;
      }
      return 0;
    case 0xd:
      if (0 < (long)(*piVar3 - piVar3[1])) {
        return (long)(*piVar3 - piVar3[1]);
      }
      param_2 = 0xd;
    }
  }
  else {
    if (param_2 == 0x71) {
      return (long)piVar3[4];
    }
    if (param_2 == 0x81) {
      *param_4 = *(undefined8 *)(piVar3 + 6);
      FUN_004ab650(param_1,1);
      return 1;
    }
    if (param_2 == 0x65) {
      FUN_004ab6c0(param_1,0xf);
      lVar5 = FUN_004abd40(uVar4,0x65,param_3,param_4);
      FUN_004ac5f0(param_1);
      return lVar5;
    }
switchD_005fc1bf_caseD_3:
  }
LAB_005fc290:
  lVar5 = FUN_004abd40(uVar4,param_2,param_3,param_4);
  return lVar5;
}

