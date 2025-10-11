
bool FUN_0043b220(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = FUN_0041cdd0(param_2,"name");
  if ((lVar3 != 0) && (iVar1 = FUN_0041e380(lVar3,"OpenSSL Base Provider"), iVar1 == 0)) {
    return false;
  }
  lVar3 = FUN_0041cdd0(param_2,"version");
  if ((lVar3 != 0) && (iVar1 = FUN_0041e380(lVar3,"3.0.2"), iVar1 == 0)) {
    return false;
  }
  lVar3 = FUN_0041cdd0(param_2,"buildinfo");
  if ((lVar3 != 0) && (iVar1 = FUN_0041e380(lVar3,"3.0.2"), iVar1 == 0)) {
    return false;
  }
  lVar3 = FUN_0041cdd0(param_2,"status");
  bVar4 = true;
  if (lVar3 != 0) {
    uVar2 = FUN_0043b840();
    iVar1 = thunk_FUN_0041d0b0(lVar3,uVar2);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}

