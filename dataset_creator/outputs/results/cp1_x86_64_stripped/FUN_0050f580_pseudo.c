
uint FUN_0050f580(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_68;
  undefined8 local_48;
  
  iVar3 = FUN_004f0cc0();
  if (iVar3 != 0) {
    iVar3 = FUN_004f0cc0(param_1,param_3);
    return (uint)(iVar3 == 0);
  }
  iVar3 = FUN_004f0cc0(param_1,param_3);
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0)) {
    iVar3 = FUN_004b7840(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_004b7840(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18));
    return (uint)(iVar3 != 0);
  }
  local_68 = 0;
  pcVar1 = *(code **)(*param_1 + 0xf8);
  pcVar2 = *(code **)(*param_1 + 0x100);
  if ((param_4 == 0) && (param_4 = FUN_004b2a70(param_1[0x15]), local_68 = param_4, param_4 == 0)) {
    return 0xffffffff;
  }
  FUN_004b2c00(param_4);
  uVar5 = FUN_004b2df0(param_4);
  uVar6 = FUN_004b2df0(param_4);
  uVar7 = FUN_004b2df0(param_4);
  lVar8 = FUN_004b2df0(param_4);
  if (lVar8 == 0) {
LAB_0050f708:
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,lVar8,*(undefined8 *)(param_3 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_2 + 0x10),lVar8,param_4),
         local_48 = uVar5, iVar3 == 0)) goto LAB_0050f708;
    }
    else {
      local_48 = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,uVar7,*(undefined8 *)(param_2 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x10),uVar7,param_4),
         uVar9 = uVar6, iVar3 == 0)) goto LAB_0050f708;
    }
    else {
      uVar9 = *(undefined8 *)(param_3 + 0x10);
    }
    iVar3 = FUN_004b7840(local_48,uVar9);
    uVar4 = 1;
    if (iVar3 != 0) goto LAB_0050f70d;
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar3 = (*pcVar1)(param_1,lVar8,lVar8,*(undefined8 *)(param_3 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_2 + 0x18),lVar8,param_4), iVar3 == 0
         )) goto LAB_0050f708;
    }
    else {
      local_48 = *(undefined8 *)(param_2 + 0x18);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar1)(param_1,uVar7,uVar7,*(undefined8 *)(param_2 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x18),uVar7,param_4), iVar3 == 0
         )) goto LAB_0050f708;
    }
    else {
      uVar9 = *(undefined8 *)(param_3 + 0x18);
    }
    iVar3 = FUN_004b7840(local_48,uVar9);
    uVar4 = (uint)(iVar3 != 0);
  }
LAB_0050f70d:
  FUN_004b2d50(param_4);
  FUN_004b2b50(local_68);
  return uVar4;
}

