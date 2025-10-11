
undefined8 FUN_0050ee50(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  if ((((((*(int *)(param_4 + 0x28) != 0) &&
         (iVar5 = (**(code **)(*param_1 + 0x100))
                            (param_1,uVar1,*(undefined8 *)(param_4 + 0x10),param_5), iVar5 != 0)) &&
        (iVar5 = FUN_004b8f90(uVar3,uVar1,param_1[0xc],param_1[8]), iVar5 != 0)) &&
       (((iVar5 = (**(code **)(*param_1 + 0x100))(param_1,uVar3,uVar3,param_5), iVar5 != 0 &&
         (iVar5 = (**(code **)(*param_1 + 0xf8))
                            (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),param_1[0xd],param_5),
         iVar5 != 0)) &&
        ((iVar5 = FUN_004b9170(uVar4,uVar4,3,param_1[8]), iVar5 != 0 &&
         ((iVar5 = FUN_004b8f90(*(undefined8 *)(param_2 + 0x10),uVar3,uVar4,param_1[8]), iVar5 != 0
          && (iVar5 = FUN_004b8d50(uVar7,uVar1,param_1[0xc],param_1[8]), iVar5 != 0)))))))) &&
      (iVar5 = (**(code **)(*param_1 + 0xf8))
                         (param_1,uVar2,*(undefined8 *)(param_4 + 0x10),uVar7,param_5), iVar5 != 0))
     && ((iVar5 = FUN_004b8d50(uVar2,param_1[0xd],uVar2,param_1[8]), iVar5 != 0 &&
         (iVar5 = FUN_004b9170(*(undefined8 *)(param_2 + 0x20),uVar2,2,param_1[8]), iVar5 != 0)))) {
    do {
      iVar5 = FUN_004bb5a0(*(undefined8 *)(param_2 + 0x18),param_1[8],0,param_5);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = FUN_004b7ba0(*(undefined8 *)(param_2 + 0x18));
    } while (iVar5 != 0);
    do {
      iVar5 = FUN_004bb5a0(*(undefined8 *)(param_3 + 0x20),param_1[8],0,param_5);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = FUN_004b7ba0(*(undefined8 *)(param_3 + 0x20));
    } while (iVar5 != 0);
    lVar6 = *param_1;
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    if (*(code **)(lVar6 + 0x118) != (code *)0x0) {
      iVar5 = (**(code **)(lVar6 + 0x118))(param_1,uVar7,uVar7,param_5);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = (**(code **)(*param_1 + 0x118))
                        (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20),
                         param_5);
      if (iVar5 == 0) {
        return 0;
      }
      lVar6 = *param_1;
      uVar7 = *(undefined8 *)(param_2 + 0x18);
    }
    iVar5 = (**(code **)(lVar6 + 0xf8))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),uVar7
                       ,param_5);
    if (((iVar5 != 0) &&
        (iVar5 = (**(code **)(*param_1 + 0xf8))
                           (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_2 + 0x18),param_5), iVar5 != 0)) &&
       (iVar5 = (**(code **)(*param_1 + 0xf8))
                          (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)(param_3 + 0x20),param_5), iVar5 != 0)) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_3 + 0x28) = 0;
      return 1;
    }
  }
  return 0;
}

