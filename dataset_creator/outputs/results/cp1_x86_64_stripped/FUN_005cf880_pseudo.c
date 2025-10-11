
undefined4 FUN_005cf880(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = 1;
  iVar3 = FUN_004f0cc0();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*param_1 + 0xf8);
    pcVar2 = *(code **)(*param_1 + 0x100);
    if ((*(int *)(param_2 + 0x28) == 0) ||
       ((lVar7 = 0, param_3 == 0 && (param_3 = FUN_004b2b10(), lVar7 = param_3, param_3 == 0)))) {
      uVar4 = 0xffffffff;
    }
    else {
      FUN_004b2c00(param_3);
      uVar5 = FUN_004b2df0(param_3);
      lVar6 = FUN_004b2df0(param_3);
      if (((((lVar6 == 0) ||
            (iVar3 = FUN_006184d0(lVar6,*(undefined8 *)(param_2 + 0x10),param_1[0xc]), iVar3 == 0))
           || (iVar3 = (*pcVar1)(param_1,lVar6,lVar6,*(undefined8 *)(param_2 + 0x10),param_3),
              iVar3 == 0)) ||
          ((iVar3 = FUN_006184d0(lVar6,lVar6,*(undefined8 *)(param_2 + 0x18)), iVar3 == 0 ||
           (iVar3 = (*pcVar1)(param_1,lVar6,lVar6,*(undefined8 *)(param_2 + 0x10),param_3),
           iVar3 == 0)))) ||
         ((iVar3 = FUN_006184d0(lVar6,lVar6,param_1[0xd]), iVar3 == 0 ||
          ((iVar3 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_2 + 0x18),param_3), iVar3 == 0 ||
           (iVar3 = FUN_006184d0(lVar6,lVar6,uVar5), iVar3 == 0)))))) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = FUN_004b7ba0(lVar6);
      }
      FUN_004b2d50(param_3);
      FUN_004b2b50(lVar7);
    }
  }
  return uVar4;
}

