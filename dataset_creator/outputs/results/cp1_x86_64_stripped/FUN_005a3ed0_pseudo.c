
long FUN_005a3ed0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long local_40;
  
  iVar7 = 0;
  local_40 = 0;
  iVar2 = FUN_00436480(param_2);
  if (0 < iVar2) {
    do {
      lVar4 = FUN_004364a0(param_2,iVar7);
      iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,lVar4);
      lVar1 = local_40;
      if (iVar2 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x98);
        if ((*(byte *)(param_3 + 0xe8) & 0x20) == 0) {
LAB_005a3f5b:
          iVar8 = 0;
          iVar2 = FUN_00436480(uVar5);
          if (0 < iVar2) {
            do {
              uVar6 = FUN_004364a0(uVar5,iVar8);
              iVar3 = FUN_0059e700(uVar6,lVar4);
              if (iVar3 == 0) goto LAB_005a3f97;
              iVar8 = iVar8 + 1;
            } while (iVar2 != iVar8);
          }
        }
        else {
          iVar2 = FUN_00436480(uVar5);
          if (iVar2 != 1) {
            uVar5 = *(undefined8 *)(param_1 + 0x98);
            goto LAB_005a3f5b;
          }
        }
        iVar2 = FUN_005a3c90(param_1,lVar4,0xffffffff);
        if (iVar2 != 0) {
          return lVar4;
        }
        lVar1 = lVar4;
        if (local_40 != 0) {
          uVar5 = FUN_005a1b60(local_40);
          uVar6 = FUN_005a1b60(lVar4);
          iVar2 = FUN_005b8480(uVar6,uVar5);
          if (iVar2 < 1) {
            lVar1 = local_40;
          }
        }
      }
LAB_005a3f97:
      local_40 = lVar1;
      iVar7 = iVar7 + 1;
      iVar2 = FUN_00436480(param_2);
    } while (iVar7 < iVar2);
  }
  return local_40;
}

