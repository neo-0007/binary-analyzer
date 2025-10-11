
bool FUN_0041ed60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00417730(param_2,0x12,&DAT_008de0c0);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
    lVar2 = FUN_00420f10(param_2,uVar3,1);
    if (lVar2 != 0) {
      FUN_00420d40(lVar2);
      iVar1 = FUN_00421da0(lVar2);
      if (iVar1 == 0) {
        return true;
      }
      iVar1 = FUN_00420b10(lVar2,1);
      return iVar1 != 0;
    }
  }
  return false;
}

