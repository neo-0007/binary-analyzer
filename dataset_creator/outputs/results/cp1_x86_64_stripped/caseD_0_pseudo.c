
void switchD_00612472::caseD_0(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_RBX;
  
  iVar1 = FUN_00423da0(**(undefined8 **)(param_2 + 8));
  if (iVar1 == 0x4ba) {
    if (**(int **)(*(long *)(unaff_RBX + 8) + 8) == 0x16) {
      FUN_004ae9e0();
      FUN_006124c0();
      return;
    }
  }
  else if (**(int **)(*(long *)(unaff_RBX + 8) + 8) == 0xc) {
    if (iVar1 == 0x4b9) {
      FUN_004ae9e0();
      FUN_006124c0();
      return;
    }
    if (iVar1 < 0x4ba) {
      if (iVar1 == 0x289) {
        FUN_004ae9e0();
        FUN_006124c0();
        return;
      }
      if (iVar1 == 0x4b8) {
        FUN_004ae9e0();
        FUN_006124c0();
        return;
      }
    }
    else if (iVar1 == 0x4bb) {
      FUN_004ae9e0();
      FUN_006124c0();
      return;
    }
    FUN_004ae9e0();
    FUN_006124c0();
    return;
  }
  FUN_004ae9e0();
  FUN_006124c0();
  return;
}

