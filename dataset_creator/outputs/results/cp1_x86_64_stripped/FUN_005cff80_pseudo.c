
ulong FUN_005cff80(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar1 = FUN_004b7ba0(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    uVar6 = FUN_004f0830(param_1,param_2);
    return uVar6;
  }
  uVar2 = FUN_004b7ba0(*(undefined8 *)(param_3 + 0x20));
  uVar6 = (ulong)uVar2;
  if (uVar2 == 0) {
    FUN_004b2c00(param_5);
    uVar3 = FUN_004b2df0(param_5);
    uVar4 = FUN_004b2df0(param_5);
    lVar5 = FUN_004b2df0(param_5);
    if (lVar5 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec2_smpl.c",0x33d,"ec_GF2m_simple_ladder_post");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0xf8))
                        (param_1,uVar3,*(undefined8 *)(param_2 + 0x20),
                         *(undefined8 *)(param_3 + 0x20),param_5);
      if (((((((iVar1 != 0) &&
              (iVar1 = (**(code **)(*param_1 + 0xf8))
                                 (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),
                                  *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0)) &&
             (iVar1 = FUN_006184d0(uVar4,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
            ((iVar1 = (**(code **)(*param_1 + 0xf8))
                                (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),
                                 *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0 &&
             (iVar1 = (**(code **)(*param_1 + 0xf8))
                                (param_1,*(undefined8 *)(param_2 + 0x20),
                                 *(undefined8 *)(param_2 + 0x10),lVar5,param_5), iVar1 != 0)))) &&
           (((iVar1 = FUN_006184d0(lVar5,lVar5,*(undefined8 *)(param_3 + 0x10)), iVar1 != 0 &&
             ((iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,uVar4,uVar4,lVar5,param_5), iVar1 != 0
              && (iVar1 = (**(code **)(*param_1 + 0x100))
                                    (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),param_5),
                 iVar1 != 0)))) &&
            (iVar1 = FUN_006184d0(lVar5,*(undefined8 *)(param_4 + 0x18)), iVar1 != 0)))) &&
          ((((iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,lVar5,lVar5,uVar3,param_5), iVar1 != 0
             && (iVar1 = FUN_006184d0(uVar4,lVar5,uVar4), iVar1 != 0)) &&
            (iVar1 = (**(code **)(*param_1 + 0xf8))
                               (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),uVar3,param_5),
            iVar1 != 0)) &&
           (((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,lVar5,lVar5,param_5), iVar1 != 0 &&
             (iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,uVar4,uVar4,lVar5,param_5), iVar1 != 0)
             ) && ((iVar1 = (**(code **)(*param_1 + 0xf8))
                                      (param_1,*(undefined8 *)(param_2 + 0x10),
                                       *(undefined8 *)(param_2 + 0x20),lVar5,param_5), iVar1 != 0 &&
                   ((iVar1 = FUN_006184d0(lVar5,*(undefined8 *)(param_4 + 0x10),
                                          *(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
                    (iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,lVar5,lVar5,uVar4,param_5),
                    iVar1 != 0)))))))))) &&
         ((iVar1 = FUN_006184d0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_4 + 0x18),
                                lVar5), iVar1 != 0 &&
          (iVar1 = FUN_004b8190(*(undefined8 *)(param_2 + 0x20),1), iVar1 != 0)))) {
        *(undefined4 *)(param_2 + 0x28) = 1;
        uVar6 = 1;
        FUN_004b7c90(*(undefined8 *)(param_2 + 0x10),0);
        FUN_004b7c90(*(undefined8 *)(param_2 + 0x18),0);
      }
    }
    FUN_004b2d50(param_5);
  }
  else {
    iVar1 = FUN_004efec0(param_2,param_4);
    if ((iVar1 != 0) && (iVar1 = FUN_004f0c10(param_1,param_2,param_5), iVar1 != 0)) {
      return 1;
    }
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/ec/ec2_smpl.c",0x332,"ec_GF2m_simple_ladder_post");
    FUN_0051f8f0(0x10,0x80010,0);
  }
  return uVar6;
}

