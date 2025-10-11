
undefined4 FUN_005d0370(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_4 + 0x28) != 0) {
    do {
      iVar1 = FUN_004b7bb0(param_1[8]);
      iVar1 = FUN_004bb500(*(undefined8 *)(param_3 + 0x20),iVar1 + -1,0xffffffff,0,0,param_5);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar3 = 0x2de;
        goto LAB_005d03e7;
      }
      iVar1 = FUN_004b7ba0(*(undefined8 *)(param_3 + 0x20));
    } while (iVar1 != 0);
    lVar2 = *param_1;
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
      iVar1 = (**(code **)(lVar2 + 0x118))(param_1,uVar3,uVar3,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      lVar2 = *param_1;
      uVar3 = *(undefined8 *)(param_3 + 0x20);
    }
    iVar1 = (**(code **)(lVar2 + 0xf8))
                      (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10),uVar3
                       ,param_5);
    if (iVar1 != 0) {
      do {
        iVar1 = FUN_004b7bb0(param_1[8]);
        iVar1 = FUN_004bb500(*(undefined8 *)(param_2 + 0x18),iVar1 + -1,0xffffffff,0,0,param_5);
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar3 = 0x2ed;
LAB_005d03e7:
          FUN_0051f540("../crypto/ec/ec2_smpl.c",uVar3,"ec_GF2m_simple_ladder_pre");
          FUN_0051f8f0(0x10,0x80003,0);
          return 0;
        }
        iVar1 = FUN_004b7ba0(*(undefined8 *)(param_2 + 0x18));
      } while (iVar1 != 0);
      lVar2 = *param_1;
      if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
        iVar1 = (**(code **)(lVar2 + 0x118))
                          (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x18),
                           param_5);
        if (iVar1 == 0) {
          return 0;
        }
        lVar2 = *param_1;
      }
      iVar1 = (**(code **)(lVar2 + 0x100))
                        (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_4 + 0x10),
                         param_5);
      if ((((iVar1 != 0) &&
           (iVar1 = (**(code **)(*param_1 + 0x100))
                              (param_1,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0)) &&
          (iVar1 = FUN_006184d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                                param_1[0xd]), iVar1 != 0)) &&
         ((iVar1 = (**(code **)(*param_1 + 0xf8))
                             (param_1,*(undefined8 *)(param_2 + 0x20),
                              *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18),
                              param_5), iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0xf8))
                             (param_1,*(undefined8 *)(param_2 + 0x10),
                              *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                              param_5), iVar1 != 0)))) {
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        return 1;
      }
    }
  }
  return 0;
}

