
ulong FUN_0050f8c0(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  iVar4 = FUN_004f0cc0();
  if (iVar4 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0xf8);
  pcVar2 = *(code **)(*param_1 + 0x100);
  lVar3 = param_1[8];
  lVar10 = 0;
  if ((param_3 == 0) && (param_3 = FUN_004b2a70(param_1[0x15]), lVar10 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  FUN_004b2c00(param_3);
  uVar5 = FUN_004b2df0(param_3);
  lVar6 = FUN_004b2df0(param_3);
  uVar7 = FUN_004b2df0(param_3);
  lVar8 = FUN_004b2df0(param_3);
  if ((lVar8 != 0) &&
     (iVar4 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 != 0)) {
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar4 = (*pcVar2)(param_1,lVar6,*(undefined8 *)(param_2 + 0x20),param_3);
      if (((iVar4 != 0) && (iVar4 = (*pcVar2)(param_1,uVar7,lVar6,param_3), iVar4 != 0)) &&
         (iVar4 = (*pcVar1)(param_1,lVar8,uVar7,lVar6,param_3), iVar4 != 0)) {
        if ((int)param_1[0xe] == 0) {
          iVar4 = (*pcVar1)(param_1,lVar6,uVar7,param_1[0xc],param_3);
          if (iVar4 != 0) {
            iVar4 = FUN_004b8d50(uVar5,uVar5,lVar6,lVar3);
joined_r0x0050fb98:
            if (((iVar4 != 0) &&
                (iVar4 = (*pcVar1)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3),
                iVar4 != 0)) &&
               (iVar4 = (*pcVar1)(param_1,lVar6,param_1[0xd],lVar8,param_3), lVar8 = lVar6,
               iVar4 != 0)) goto LAB_0050fa78;
          }
        }
        else {
          iVar4 = FUN_004b9110(lVar6,uVar7,lVar3);
          if ((iVar4 != 0) && (iVar4 = FUN_004b8d50(lVar6,lVar6,uVar7,lVar3), iVar4 != 0)) {
            iVar4 = FUN_004b8f90(uVar5,uVar5,lVar6,lVar3);
            goto joined_r0x0050fb98;
          }
        }
      }
    }
    else {
      iVar4 = FUN_004b8d50(uVar5,uVar5,param_1[0xc],lVar3);
      if ((iVar4 != 0) &&
         (iVar4 = (*pcVar1)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 != 0
         )) {
        lVar8 = param_1[0xd];
LAB_0050fa78:
        iVar4 = FUN_004b8d50(uVar5,uVar5,lVar8,lVar3);
        if ((iVar4 != 0) &&
           (iVar4 = (*pcVar2)(param_1,lVar6,*(undefined8 *)(param_2 + 0x18),param_3), iVar4 != 0)) {
          iVar4 = FUN_004b77f0(lVar6,uVar5);
          uVar9 = (ulong)(iVar4 == 0);
          goto LAB_0050faf6;
        }
      }
    }
  }
  uVar9 = 0xffffffff;
LAB_0050faf6:
  FUN_004b2d50(param_3);
  FUN_004b2b50(lVar10);
  return uVar9;
}

