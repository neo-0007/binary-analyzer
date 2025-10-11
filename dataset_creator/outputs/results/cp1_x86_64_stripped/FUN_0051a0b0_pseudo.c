
int FUN_0051a0b0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(code **)(param_1 + 0x68) != (code *)0x0)) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x68))();
    }
    else {
      FUN_004222e0(DAT_00941008);
      iVar2 = (**(code **)(param_1 + 0x68))(param_1);
      iVar3 = FUN_004222c0(DAT_00941008);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = 1;
  }
  iVar3 = FUN_0051a4e0(param_1,0);
  if (iVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_init.c",0x4a,"engine_unlocked_finish");
    FUN_0051f8f0(0x26,0x6a,0);
    return 0;
  }
  return iVar2;
}

