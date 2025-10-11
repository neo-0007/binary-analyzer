
int FUN_00541b00(undefined8 param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar2 = FUN_004b7bb0(*(undefined8 *)(param_2 + 8));
  if (param_4 != 0) {
    param_4 = param_4 * 2;
    if ((param_3 == 0) && (param_3 = *(int *)(param_2 + 0x58), param_3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = param_3 < param_4;
      param_4 = param_3;
    }
    if ((iVar2 < param_4) || (bVar1)) {
      return 0;
    }
    lVar3 = FUN_004b7690();
    if (lVar3 != 0) {
      uVar4 = FUN_004b75a0();
      iVar2 = FUN_004bc220(lVar3,uVar4,param_4);
      if (iVar2 != 0) {
        iVar2 = FUN_004b7840(lVar3,*(undefined8 *)(param_2 + 8));
        lVar5 = lVar3;
        if (0 < iVar2) {
          lVar5 = *(long *)(param_2 + 8);
        }
        do {
          iVar2 = FUN_004bb5a0(param_5,lVar3,0,param_1);
          if ((iVar2 == 0) || (iVar2 = FUN_004bcc70(param_5,1), iVar2 == 0)) goto LAB_00541c16;
          iVar2 = FUN_004b7840(param_5,lVar5);
        } while (-1 < iVar2);
        iVar2 = 1;
      }
      goto LAB_00541c16;
    }
  }
  lVar3 = 0;
  iVar2 = 0;
LAB_00541c16:
  FUN_004b7fa0(lVar3);
  return iVar2;
}

