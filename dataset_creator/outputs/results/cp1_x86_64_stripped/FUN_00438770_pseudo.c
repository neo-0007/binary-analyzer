
long FUN_00438770(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0x1a7) {
    puVar3 = &DAT_0093b3f0;
    if (DAT_0093b3f8 != 0) {
      return DAT_0093b3f8;
    }
    lVar4 = 0;
  }
  else {
    if (iVar1 == 0x1ab) {
      puVar3 = &DAT_0093b400;
    }
    else {
      puVar3 = &DAT_0093b3e0;
      if (iVar1 != 0x1a3) {
        return 0;
      }
    }
    lVar4 = *(long *)(puVar3 + 2);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  lVar2 = FUN_00521680(param_1,0x10,*puVar3);
  *(long *)(puVar3 + 2) = lVar2;
  if (lVar2 != 0) {
    iVar1 = FUN_005217e0(lVar2,0x10);
    lVar2 = *(long *)(puVar3 + 2);
    if (iVar1 != 0) {
      iVar1 = FUN_00521800(lVar2,2);
      lVar2 = *(long *)(puVar3 + 2);
      if (iVar1 != 0) {
        iVar1 = FUN_00521840(lVar2,FUN_004391f0);
        lVar2 = *(long *)(puVar3 + 2);
        if (iVar1 != 0) {
          iVar1 = FUN_00521860(lVar2,&LAB_00438bc0);
          lVar2 = *(long *)(puVar3 + 2);
          if (iVar1 != 0) {
            iVar1 = FUN_00521880(lVar2,FUN_00438900);
            lVar2 = *(long *)(puVar3 + 2);
            if (iVar1 != 0) {
              iVar1 = FUN_00521820(lVar2,0x80);
              if (iVar1 != 0) {
                return *(long *)(puVar3 + 2);
              }
              lVar2 = *(long *)(puVar3 + 2);
            }
          }
        }
      }
    }
  }
  FUN_005217c0(lVar2);
  *(undefined8 *)(puVar3 + 2) = 0;
  return lVar4;
}

