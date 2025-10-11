
bool FUN_004ebc60(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_1 != 0) {
    uVar2 = FUN_004ee2b0();
    uVar3 = FUN_004ee2a0(param_1);
    uVar2 = FUN_004f1e20(param_2,uVar3,uVar2);
    iVar1 = FUN_004ee8b0(param_1,uVar2);
    bVar4 = iVar1 != 0;
    FUN_004efd00(uVar2);
  }
  return bVar4;
}

