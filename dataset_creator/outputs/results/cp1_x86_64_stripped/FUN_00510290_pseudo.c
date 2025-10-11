
ulong FUN_00510290(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  iVar1 = FUN_004b7ba0(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    uVar10 = FUN_004f0830(param_1,param_2);
    return uVar10;
  }
  uVar2 = FUN_004b7ba0(*(undefined8 *)(param_3 + 0x20));
  uVar10 = (ulong)uVar2;
  if (uVar2 != 0) {
    uVar2 = FUN_004efec0(param_2,param_4);
    if (uVar2 == 0) {
      return (ulong)uVar2;
    }
    iVar1 = FUN_004f0c10(param_1,param_2,param_5);
    return (ulong)(iVar1 != 0);
  }
  FUN_004b2c00(param_5);
  uVar3 = FUN_004b2df0(param_5);
  uVar4 = FUN_004b2df0(param_5);
  uVar5 = FUN_004b2df0(param_5);
  uVar6 = FUN_004b2df0(param_5);
  uVar7 = FUN_004b2df0(param_5);
  uVar8 = FUN_004b2df0(param_5);
  lVar9 = FUN_004b2df0(param_5);
  if (((((((((lVar9 != 0) &&
            (iVar1 = FUN_004b9110(uVar7,*(undefined8 *)(param_4 + 0x18),param_1[8]), iVar1 != 0)) &&
           (iVar1 = (**(code **)(*param_1 + 0xf8))
                              (param_1,lVar9,*(undefined8 *)(param_2 + 0x10),uVar7,param_5),
           iVar1 != 0)) &&
          ((iVar1 = (**(code **)(*param_1 + 0xf8))
                              (param_1,lVar9,*(undefined8 *)(param_3 + 0x20),lVar9,param_5),
           iVar1 != 0 &&
           (iVar1 = (**(code **)(*param_1 + 0xf8))
                              (param_1,uVar8,*(undefined8 *)(param_2 + 0x20),lVar9,param_5),
           iVar1 != 0)))) && (iVar1 = FUN_004b9110(uVar4,param_1[0xd],param_1[8]), iVar1 != 0)) &&
        (((iVar1 = (**(code **)(*param_1 + 0xf8))
                             (param_1,uVar4,*(undefined8 *)(param_3 + 0x20),uVar4,param_5),
          iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0x100))
                             (param_1,uVar6,*(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0))
         && ((iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,uVar5,uVar6,uVar4,param_5), iVar1 != 0
             && (((iVar1 = (**(code **)(*param_1 + 0xf8))
                                     (param_1,lVar9,*(undefined8 *)(param_2 + 0x20),param_1[0xc],
                                      param_5), iVar1 != 0 &&
                  (iVar1 = (**(code **)(*param_1 + 0xf8))
                                     (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),
                                      *(undefined8 *)(param_2 + 0x10),param_5), iVar1 != 0)) &&
                 (iVar1 = FUN_004b8d50(uVar4,uVar4,lVar9,param_1[8]), iVar1 != 0)))))))) &&
       ((iVar1 = (**(code **)(*param_1 + 0xf8))
                           (param_1,uVar4,*(undefined8 *)(param_3 + 0x20),uVar4,param_5), iVar1 != 0
        && (iVar1 = (**(code **)(*param_1 + 0xf8))
                              (param_1,uVar3,*(undefined8 *)(param_4 + 0x10),
                               *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0)))) &&
      ((iVar1 = FUN_004b8d50(lVar9,*(undefined8 *)(param_2 + 0x10),uVar3,param_1[8]), iVar1 != 0 &&
       (((iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,lVar9,lVar9,uVar4,param_5), iVar1 != 0 &&
         (iVar1 = FUN_004b8d50(lVar9,lVar9,uVar5,param_1[8]), iVar1 != 0)) &&
        ((iVar1 = FUN_004b8f90(uVar3,uVar3,*(undefined8 *)(param_2 + 0x10),param_1[8]), iVar1 != 0
         && (((iVar1 = (**(code **)(*param_1 + 0x100))(param_1,uVar3,uVar3,param_5), iVar1 != 0 &&
              (iVar1 = (**(code **)(*param_1 + 0xf8))
                                 (param_1,uVar3,uVar3,*(undefined8 *)(param_3 + 0x10),param_5),
              iVar1 != 0)) && (iVar1 = FUN_004b8f90(uVar3,lVar9,uVar3,param_1[8]), iVar1 != 0)))))))
       ))) && ((iVar1 = (**(code **)(*param_1 + 0xf8))
                                  (param_1,uVar4,*(undefined8 *)(param_3 + 0x20),uVar7,param_5),
               iVar1 != 0 &&
               (iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,uVar4,uVar6,uVar4,param_5),
               iVar1 != 0)))) {
    lVar9 = *param_1;
    if (*(code **)(lVar9 + 0x120) != (code *)0x0) {
      iVar1 = (**(code **)(lVar9 + 0x120))(param_1,uVar4,uVar4,param_5);
      if (iVar1 == 0) goto LAB_005103c8;
      lVar9 = *param_1;
    }
    iVar1 = (**(code **)(lVar9 + 0x110))(param_1,uVar4,uVar4,param_5);
    if (iVar1 != 0) {
      lVar9 = *param_1;
      if (*(code **)(lVar9 + 0x118) != (code *)0x0) {
        iVar1 = (**(code **)(lVar9 + 0x118))(param_1,uVar4,uVar4,param_5);
        if (iVar1 == 0) goto LAB_005103c8;
        lVar9 = *param_1;
      }
      iVar1 = (**(code **)(lVar9 + 0xf8))
                        (param_1,*(undefined8 *)(param_2 + 0x10),uVar8,uVar4,param_5);
      if ((iVar1 != 0) &&
         (iVar1 = (**(code **)(*param_1 + 0xf8))
                            (param_1,*(undefined8 *)(param_2 + 0x18),uVar3,uVar4,param_5),
         iVar1 != 0)) {
        if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
          iVar1 = FUN_004b8190(*(undefined8 *)(param_2 + 0x20),1);
        }
        else {
          iVar1 = (**(code **)(*param_1 + 0x128))(param_1,*(undefined8 *)(param_2 + 0x20),param_5);
        }
        if (iVar1 != 0) {
          *(undefined4 *)(param_2 + 0x28) = 1;
          uVar10 = 1;
        }
      }
    }
  }
LAB_005103c8:
  FUN_004b2d50(param_5);
  return uVar10;
}

