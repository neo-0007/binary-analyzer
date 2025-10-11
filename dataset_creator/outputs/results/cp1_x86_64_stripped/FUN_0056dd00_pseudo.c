
undefined4 FUN_0056dd00(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_40;
  
  FUN_004b2c00(param_4);
  uVar2 = FUN_004b2df0(param_4);
  uVar3 = FUN_004b2df0(param_4);
  uVar4 = FUN_004b2df0(param_4);
  uVar5 = FUN_004b2df0(param_4);
  lVar6 = FUN_004b2df0(param_4);
  if (lVar6 == 0) goto LAB_0056e000;
  FUN_004b7e70(uVar2,4);
  FUN_004b7e70(uVar3,4);
  FUN_004b7e70(uVar4,4);
  FUN_004b7e70(uVar5,4);
  FUN_004b7e70(lVar6,4);
  iVar1 = FUN_0056d210(param_4,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar4
                       ,lVar6,uVar2);
  lVar7 = *(long *)(param_1 + 0x30);
  if (iVar1 == 1) {
    FUN_004b7fa0(lVar7);
    lVar7 = FUN_004b82e0(param_3);
    *(long *)(param_1 + 0x30) = lVar7;
    if (lVar7 == 0) goto LAB_0056dde0;
    FUN_004b7f20(*(undefined8 *)(param_1 + 0x38));
    lVar7 = FUN_004b7700();
    *(long *)(param_1 + 0x38) = lVar7;
    if (lVar7 == 0) {
LAB_0056e000:
      local_40 = 0xffffffff;
      lVar7 = *(long *)(param_1 + 0x30);
    }
    else {
      FUN_004b7e70(lVar7,4);
      lVar7 = FUN_004b6c40(*(undefined8 *)(param_1 + 0x38),param_3,uVar4,param_4);
      if (lVar7 == 0) goto LAB_0056e000;
      iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x38));
      if (param_2 >> 1 < iVar1) {
        lVar7 = *(long *)(param_1 + 0x28);
        if (lVar7 == 0) {
          lVar7 = FUN_004b7690();
          *(long *)(param_1 + 0x28) = lVar7;
          if (lVar7 == 0) goto LAB_0056e000;
        }
        iVar1 = FUN_004bacf0(lVar7,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                             param_4);
        if (iVar1 != 0) {
          lVar7 = *(long *)(param_1 + 0x50);
          if (lVar7 == 0) {
            lVar7 = FUN_004b7700();
            *(long *)(param_1 + 0x50) = lVar7;
            if (lVar7 == 0) goto LAB_0056e000;
          }
          FUN_004b7e70(lVar7,4);
          iVar1 = FUN_004b34a0(0,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),
                               uVar2,param_4);
          if (iVar1 != 0) {
            lVar7 = *(long *)(param_1 + 0x58);
            if (lVar7 == 0) {
              lVar7 = FUN_004b7700();
              *(long *)(param_1 + 0x58) = lVar7;
              if (lVar7 == 0) goto LAB_0056e000;
            }
            FUN_004b7e70(lVar7,4);
            iVar1 = FUN_004b34a0(0,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x38),
                                 uVar3,param_4);
            if (iVar1 != 0) {
              FUN_004b7fa0(*(undefined8 *)(param_1 + 0x60));
              lVar7 = FUN_004b7700();
              *(long *)(param_1 + 0x60) = lVar7;
              if (lVar7 != 0) {
                FUN_004b7e70(lVar7,4);
                lVar7 = FUN_004b6c40(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48)
                                     ,*(undefined8 *)(param_1 + 0x40),param_4);
                if (lVar7 != 0) {
                  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
                  local_40 = 1;
                  goto LAB_0056de4a;
                }
              }
            }
          }
        }
        goto LAB_0056e000;
      }
      local_40 = 0;
      lVar7 = *(long *)(param_1 + 0x30);
    }
  }
  else {
LAB_0056dde0:
    local_40 = 0xffffffff;
  }
  FUN_004b7fa0(lVar7);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_0056de4a:
  FUN_004b7780(uVar2);
  FUN_004b7780(uVar3);
  FUN_004b7780(uVar4);
  FUN_004b7780(uVar5);
  FUN_004b7780(lVar6);
  FUN_004b2d50(param_4);
  return local_40;
}

