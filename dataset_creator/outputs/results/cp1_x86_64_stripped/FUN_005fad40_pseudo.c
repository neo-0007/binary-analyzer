
bool FUN_005fad40(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,int param_6)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0xca,"ENGINE_ctrl_cmd");
    FUN_0051f8f0(0x26,0xc0102,0);
    return false;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    iVar1 = FUN_005fa870(param_1,0xd,0,param_2,0);
    if (0 < iVar1) {
      iVar1 = FUN_005fa870(param_1,iVar1,param_3,param_4,param_5);
      return 0 < iVar1;
    }
  }
  if (param_6 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/engine/eng_ctrl.c",0xdc,"ENGINE_ctrl_cmd");
    FUN_0051f8f0(0x26,0x89,0);
    return false;
  }
  FUN_0051e390();
  return true;
}

