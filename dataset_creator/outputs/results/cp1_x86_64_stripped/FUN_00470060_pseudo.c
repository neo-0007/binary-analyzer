
bool FUN_00470060(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_0041cdd0(param_2,"bits");
  if (lVar3 != 0) {
    uVar1 = FUN_004d8e40(param_1);
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"security-bits");
  if (lVar3 != 0) {
    uVar1 = FUN_004d8df0(param_1);
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"max-size");
  if (lVar3 != 0) {
    uVar1 = FUN_004da7b0(param_1);
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"default-digest");
  if ((lVar3 != 0) && (iVar2 = FUN_0041e1a0(lVar3,"SHA256"), iVar2 == 0)) {
    return false;
  }
  uVar4 = FUN_004d8e60(param_1);
  iVar2 = FUN_00542360(uVar4,0,param_2);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_0046f9b0(param_1,0,param_2,1);
  return iVar2 != 0;
}

