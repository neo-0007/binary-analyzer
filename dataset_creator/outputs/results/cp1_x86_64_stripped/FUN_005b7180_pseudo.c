
ulong FUN_005b7180(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_4 == 0) {
    lVar2 = FUN_004b0cd0(param_1,0);
    if (lVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar1 = FUN_005ad870(lVar2,param_2,param_3);
      uVar3 = (ulong)uVar1;
      FUN_004ab560(lVar2);
    }
    return uVar3;
  }
  uVar3 = FUN_005b6c20(FUN_005b6be0,param_1,param_2,param_3,param_4);
  return uVar3;
}

