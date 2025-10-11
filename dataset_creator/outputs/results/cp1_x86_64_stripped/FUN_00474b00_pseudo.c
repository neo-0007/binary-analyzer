
long FUN_00474b00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = FUN_0043b840();
  if ((param_1 != (undefined8 *)0x0) && (iVar1 != 0)) {
    if (*(int *)(param_1 + 2) == 0) {
      iVar1 = FUN_00433230(param_1 + 6);
      if (iVar1 == 0) {
        lVar3 = 0;
        lVar6 = 0;
        lVar5 = 0;
        goto LAB_00474bac;
      }
    }
    else if (*(int *)(param_1 + 2) != 0x1000) {
      return 0;
    }
    lVar2 = FUN_0042bce0(*param_1);
    if (lVar2 != 0) {
      param_1[10] = param_3;
      param_1[9] = param_2;
      lVar3 = FUN_004b7dd0();
      if (lVar3 != 0) {
        FUN_004b8210(lVar3,FUN_00474c20,param_1);
      }
      iVar1 = FUN_0056b490(lVar2,*(undefined4 *)(param_1 + 3),*(undefined4 *)(param_1 + 5),
                           param_1[4],lVar3);
      lVar5 = 0;
      lVar6 = lVar2;
      if (iVar1 != 0) {
        uVar4 = FUN_0042c5c0(lVar2);
        iVar1 = FUN_00433280(uVar4,param_1 + 6);
        if (iVar1 != 0) {
          FUN_0042c5d0(lVar2,0xf000);
          lVar6 = 0;
          FUN_0042c5f0(lVar2,*(undefined4 *)(param_1 + 2));
          lVar5 = lVar2;
        }
      }
LAB_00474bac:
      FUN_004b7e40(lVar3);
      FUN_0042b980(lVar6);
      return lVar5;
    }
  }
  return 0;
}

