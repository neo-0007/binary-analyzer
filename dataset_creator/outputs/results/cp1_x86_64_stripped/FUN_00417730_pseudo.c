
undefined8 FUN_00417730(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)param_2;
  puVar3 = (undefined8 *)FUN_004174a0();
  if ((puVar3 != (undefined8 *)0x0) && (iVar1 = FUN_004222a0(*puVar3), iVar1 != 0)) {
    iVar1 = *(int *)((long)puVar3 + lVar6 * 4 + 0xb0);
    FUN_004222e0(*puVar3);
    if (iVar1 == -1) {
      lVar5 = lVar6 + 0x20;
      iVar1 = FUN_004222c0(puVar3[lVar5]);
      if (iVar1 != 0) {
        iVar1 = FUN_004222c0(*puVar3);
        if (iVar1 == 0) {
          FUN_004222e0(puVar3[lVar5]);
          return 0;
        }
        if (*(int *)((long)puVar3 + lVar6 * 4 + 0xb0) == -1) {
          lVar5 = FUN_004174a0(puVar3);
          if ((lVar5 != 0) &&
             (iVar1 = FUN_004190d0(lVar5,0x10,0,param_3,FUN_00417010,0), -1 < iVar1)) {
            *(int *)(lVar5 + 0xb0 + lVar6 * 4) = iVar1;
            FUN_004222e0(*puVar3);
            iVar1 = FUN_004192c0(0x10,0,puVar3 + 1,*(undefined4 *)((long)puVar3 + lVar6 * 4 + 0xb0))
            ;
            if ((iVar1 == 0) || (iVar1 = FUN_004222a0(*puVar3), iVar1 == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_00419480(puVar3 + 1,*(undefined4 *)((long)puVar3 + lVar6 * 4 + 0xb0));
              FUN_004222e0(*puVar3);
            }
            FUN_004222e0(puVar3[lVar6 + 0x20]);
            return uVar4;
          }
          FUN_004222e0(*puVar3);
          FUN_004222e0(puVar3[lVar6 + 0x20]);
          return 0;
        }
        uVar4 = FUN_00419480(puVar3 + 1);
        FUN_004222e0(*puVar3);
        FUN_004222e0(puVar3[lVar5]);
        return uVar4;
      }
    }
    else {
      lVar6 = lVar6 + 0x20;
      iVar2 = FUN_004222a0(puVar3[lVar6]);
      if (iVar2 != 0) {
        iVar2 = FUN_004222a0(*puVar3);
        if (iVar2 != 0) {
          uVar4 = FUN_00419480(puVar3 + 1,iVar1);
          FUN_004222e0(*puVar3);
          FUN_004222e0(puVar3[lVar6]);
          return uVar4;
        }
        FUN_004222e0(puVar3[lVar6]);
      }
    }
  }
  return 0;
}

