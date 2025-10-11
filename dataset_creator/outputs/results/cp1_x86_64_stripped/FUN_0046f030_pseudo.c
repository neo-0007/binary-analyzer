
bool FUN_0046f030(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_0041cdd0(param_2,"bits");
  if (lVar3 != 0) {
    uVar1 = FUN_004d5ef0(param_1);
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"security-bits");
  if (lVar3 != 0) {
    uVar1 = FUN_004d5f50(param_1);
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"max-size");
  if (lVar3 != 0) {
    uVar1 = FUN_004d5f10(param_1);
    iVar2 = thunk_FUN_0041d0b0(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = FUN_0041cdd0(param_2,"encoded-pub-key");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) != 5) {
      return false;
    }
    lVar4 = FUN_004d5900(param_1,lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x18),0);
    *(long *)(lVar3 + 0x20) = lVar4;
    if (lVar4 == 0) {
      return false;
    }
  }
  iVar2 = FUN_004d3590(param_1,0,param_2);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_004d3610(param_1,0,param_2,1);
  return iVar2 != 0;
}

