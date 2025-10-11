
bool FUN_00437160(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar2 = FUN_00420cf0();
    uVar2 = FUN_00418710(uVar2);
    iVar1 = FUN_00418920(uVar2,param_2);
    bVar3 = *(int *)(param_1 + 0x68) == iVar1;
  }
  return bVar3;
}

