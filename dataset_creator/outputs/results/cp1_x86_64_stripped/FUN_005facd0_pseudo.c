
bool FUN_005facd0(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005fa870(param_1,0x12,(long)param_2,0,0);
  if (-1 < (int)uVar1) {
    return (uVar1 & 7) != 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/engine/eng_ctrl.c",0xba,"ENGINE_cmd_is_executable");
  FUN_0051f8f0(0x26,0x8a,0);
  return false;
}

