
bool FUN_005cedb0(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xf8))
                    (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                     *(undefined8 *)(param_3 + 0x10));
  if (((((iVar1 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0xf8))
                           (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x100))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_2 + 0x20),
                           param_5), iVar1 != 0)) &&
      (((iVar1 = (**(code **)(*param_1 + 0x100))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                            param_5), iVar1 != 0 &&
        (iVar1 = FUN_006184d0(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_3 + 0x10)), iVar1 != 0)) &&
       ((iVar1 = (**(code **)(*param_1 + 0x100))
                           (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20),
                            param_5), iVar1 != 0 &&
        ((iVar1 = (**(code **)(*param_1 + 0xf8))
                            (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x18)
                             ,*(undefined8 *)(param_3 + 0x10),param_5), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0xf8))
                            (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x20)
                             ,*(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0)))))))) &&
     ((iVar1 = FUN_006184d0(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x10),
                            *(undefined8 *)(param_2 + 0x18)), iVar1 != 0 &&
      ((((iVar1 = (**(code **)(*param_1 + 0x100))
                            (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)
                             ,param_5), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0xf8))
                            (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20)
                             ,*(undefined8 *)(param_3 + 0x18),param_5), iVar1 != 0)) &&
        (iVar1 = (**(code **)(*param_1 + 0x100))
                           (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                            param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0xf8))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                           param_1[0xd],param_5), iVar1 != 0)))))) {
    iVar1 = FUN_006184d0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                         *(undefined8 *)(param_3 + 0x18));
    return iVar1 != 0;
  }
  return false;
}

