
ulong FUN_0050ddd0(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long local_88;
  
  if (param_3 == param_4) {
    uVar14 = FUN_004f0b30();
    return uVar14;
  }
  iVar3 = FUN_004f0cc0(param_1,param_3);
  lVar13 = param_4;
  if (iVar3 != 0) {
LAB_0050e09b:
    uVar14 = FUN_004efec0(param_2,lVar13);
    return uVar14;
  }
  uVar4 = FUN_004f0cc0(param_1,param_4);
  uVar14 = (ulong)uVar4;
  lVar13 = param_3;
  if (uVar4 != 0) goto LAB_0050e09b;
  local_88 = 0;
  pcVar1 = *(code **)(*param_1 + 0xf8);
  pcVar2 = *(code **)(*param_1 + 0x100);
  lVar13 = param_1[8];
  if ((param_5 == 0) && (param_5 = FUN_004b2a70(param_1[0x15]), local_88 = param_5, param_5 == 0)) {
    return uVar14;
  }
  FUN_004b2c00(param_5);
  uVar5 = FUN_004b2df0(param_5);
  uVar6 = FUN_004b2df0(param_5);
  uVar7 = FUN_004b2df0(param_5);
  uVar8 = FUN_004b2df0(param_5);
  uVar9 = FUN_004b2df0(param_5);
  uVar10 = FUN_004b2df0(param_5);
  lVar11 = FUN_004b2df0(param_5);
  if (lVar11 == 0) goto LAB_0050e070;
  if (*(int *)(param_4 + 0x28) == 0) {
    iVar3 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_4 + 0x20),param_5);
    if ((((iVar3 != 0) &&
         (iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x10),uVar5,param_5), iVar3 != 0
         )) && (iVar3 = (*pcVar1)(param_1,uVar5,uVar5,*(undefined8 *)(param_4 + 0x20),param_5),
               iVar3 != 0)) &&
       (iVar3 = (*pcVar1)(param_1,uVar7,*(undefined8 *)(param_3 + 0x18),uVar5,param_5), iVar3 != 0))
    goto LAB_0050df4d;
    goto LAB_0050e0d0;
  }
  lVar12 = FUN_004b8260(uVar6,*(undefined8 *)(param_3 + 0x10));
  if ((lVar12 == 0) || (lVar12 = FUN_004b8260(uVar7,*(undefined8 *)(param_3 + 0x18)), lVar12 == 0))
  goto LAB_0050e070;
LAB_0050df4d:
  if (*(int *)(param_3 + 0x28) == 0) {
    uVar4 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_3 + 0x20),param_5);
    uVar14 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0050e070;
    uVar4 = (*pcVar1)(param_1,uVar8,*(undefined8 *)(param_4 + 0x10),uVar5,param_5);
    uVar14 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0050e070;
    uVar4 = (*pcVar1)(param_1,uVar5,uVar5,*(undefined8 *)(param_3 + 0x20),param_5);
    uVar14 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0050e070;
    uVar4 = (*pcVar1)(param_1,uVar9,*(undefined8 *)(param_4 + 0x18),uVar5,param_5);
    uVar14 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0050e070;
  }
  else {
    lVar12 = FUN_004b8260(uVar8,*(undefined8 *)(param_4 + 0x10));
    if ((lVar12 == 0) || (lVar12 = FUN_004b8260(uVar9,*(undefined8 *)(param_4 + 0x18)), lVar12 == 0)
       ) goto LAB_0050e070;
  }
  uVar4 = FUN_004b8f90(uVar10,uVar6,uVar8,lVar13);
  uVar14 = (ulong)uVar4;
  if (uVar4 == 0) goto LAB_0050e070;
  uVar4 = FUN_004b8f90(lVar11,uVar7,uVar9,lVar13);
  uVar14 = (ulong)uVar4;
  if (uVar4 == 0) goto LAB_0050e070;
  iVar3 = FUN_004b7ba0(uVar10);
  if (iVar3 != 0) {
    iVar3 = FUN_004b7ba0(lVar11);
    if (iVar3 == 0) {
      uVar14 = 1;
      FUN_004b7b50(*(undefined8 *)(param_2 + 0x20));
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
    else {
      FUN_004b2d50(param_5);
      uVar4 = FUN_004f0b30(param_1,param_2,param_3,param_5);
      uVar14 = (ulong)uVar4;
      param_5 = 0;
    }
    goto LAB_0050e070;
  }
  uVar4 = FUN_004b8d50(uVar6,uVar6,uVar8,lVar13);
  uVar14 = (ulong)uVar4;
  if (uVar4 == 0) goto LAB_0050e070;
  uVar4 = FUN_004b8d50(uVar7,uVar7,uVar9,lVar13);
  uVar14 = (ulong)uVar4;
  if (uVar4 == 0) goto LAB_0050e070;
  uVar4 = *(uint *)(param_4 + 0x28);
  uVar14 = (ulong)uVar4;
  if (*(int *)(param_3 + 0x28) == 0) {
    if (uVar4 == 0) {
      uVar4 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_3 + 0x20),
                        *(undefined8 *)(param_4 + 0x20),param_5);
      uVar14 = (ulong)uVar4;
      if (uVar4 == 0) goto LAB_0050e070;
    }
    else {
      lVar12 = FUN_004b8260(uVar5,*(undefined8 *)(param_3 + 0x20));
      if (lVar12 == 0) goto LAB_0050e0d0;
    }
LAB_0050e1f6:
    uVar4 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x20),uVar5,uVar10,param_5);
    uVar14 = (ulong)uVar4;
    if (uVar4 == 0) goto LAB_0050e070;
  }
  else {
    if (uVar4 == 0) {
      lVar12 = FUN_004b8260(uVar5,*(undefined8 *)(param_4 + 0x20));
      if (lVar12 == 0) goto LAB_0050e070;
      goto LAB_0050e1f6;
    }
    lVar12 = FUN_004b8260(*(undefined8 *)(param_2 + 0x20),uVar10);
    if (lVar12 == 0) {
LAB_0050e0d0:
      uVar14 = 0;
      goto LAB_0050e070;
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  uVar4 = (*pcVar2)(param_1,uVar5,lVar11,param_5);
  uVar14 = (ulong)uVar4;
  if (uVar4 != 0) {
    uVar4 = (*pcVar2)(param_1,uVar9,uVar10,param_5);
    uVar14 = (ulong)uVar4;
    if (uVar4 != 0) {
      uVar4 = (*pcVar1)(param_1,uVar8,uVar6,uVar9,param_5);
      uVar14 = (ulong)uVar4;
      if (uVar4 != 0) {
        uVar4 = FUN_004b8f90(*(undefined8 *)(param_2 + 0x10),uVar5,uVar8,lVar13);
        uVar14 = (ulong)uVar4;
        if (uVar4 != 0) {
          uVar4 = FUN_004b9110(uVar5,*(undefined8 *)(param_2 + 0x10),lVar13);
          uVar14 = (ulong)uVar4;
          if (uVar4 != 0) {
            uVar4 = FUN_004b8f90(uVar5,uVar8,uVar5,lVar13);
            uVar14 = (ulong)uVar4;
            if (uVar4 != 0) {
              uVar4 = (*pcVar1)(param_1,uVar5,uVar5,lVar11,param_5);
              uVar14 = (ulong)uVar4;
              if (uVar4 != 0) {
                uVar4 = (*pcVar1)(param_1,uVar10,uVar9,uVar10,param_5);
                uVar14 = (ulong)uVar4;
                if (uVar4 != 0) {
                  uVar4 = (*pcVar1)(param_1,uVar6,uVar7,uVar10,param_5);
                  uVar14 = (ulong)uVar4;
                  if (uVar4 != 0) {
                    uVar4 = FUN_004b8f90(uVar5,uVar5,uVar6,lVar13);
                    uVar14 = (ulong)uVar4;
                    if (uVar4 != 0) {
                      iVar3 = FUN_004b7d40(uVar5);
                      if (iVar3 != 0) {
                        uVar4 = FUN_004b1810(uVar5,uVar5,lVar13);
                        uVar14 = (ulong)uVar4;
                        if (uVar4 == 0) goto LAB_0050e070;
                      }
                      iVar3 = FUN_004bbff0(*(undefined8 *)(param_2 + 0x18),uVar5);
                      uVar14 = (ulong)(iVar3 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0050e070:
  FUN_004b2d50(param_5);
  FUN_004b2b50(local_88);
  return uVar14;
}

