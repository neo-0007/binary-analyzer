
undefined8
FUN_00510830(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = 0;
  if ((param_6 == 0) && (param_6 = FUN_004b2a70(param_1[0x15]), lVar6 = param_6, param_6 == 0)) {
    return 0;
  }
  if (((param_3 == 0) ||
      ((iVar3 = FUN_004b8a20(*(undefined8 *)(param_2 + 0x10),param_3,param_1[8],param_6), iVar3 != 0
       && ((*(code **)(*param_1 + 0x118) == (code *)0x0 ||
           (iVar3 = (**(code **)(*param_1 + 0x118))
                              (param_1,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_2 + 0x10),param_6), iVar3 != 0)))))) &&
     ((param_4 == 0 ||
      ((iVar3 = FUN_004b8a20(*(undefined8 *)(param_2 + 0x18),param_4,param_1[8],param_6), iVar3 != 0
       && ((*(code **)(*param_1 + 0x118) == (code *)0x0 ||
           (iVar3 = (**(code **)(*param_1 + 0x118))
                              (param_1,*(undefined8 *)(param_2 + 0x18),
                               *(undefined8 *)(param_2 + 0x18),param_6), iVar3 != 0)))))))) {
    if (param_5 != 0) {
      iVar3 = FUN_004b8a20(*(undefined8 *)(param_2 + 0x20),param_5,param_1[8],param_6);
      if (iVar3 == 0) goto LAB_00510912;
      iVar3 = FUN_004b7cc0(*(undefined8 *)(param_2 + 0x20));
      pcVar1 = *(code **)(*param_1 + 0x118);
      if (pcVar1 != (code *)0x0) {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        if ((iVar3 == 0) || (pcVar2 = *(code **)(*param_1 + 0x128), pcVar2 == (code *)0x0)) {
          iVar4 = (*pcVar1)(param_1,uVar5,uVar5,param_6);
        }
        else {
          iVar4 = (*pcVar2)(param_1,uVar5,param_6);
        }
        if (iVar4 == 0) goto LAB_00510912;
      }
      *(int *)(param_2 + 0x28) = iVar3;
    }
    uVar5 = 1;
  }
  else {
LAB_00510912:
    uVar5 = 0;
  }
  FUN_004b2b50(lVar6);
  return uVar5;
}

