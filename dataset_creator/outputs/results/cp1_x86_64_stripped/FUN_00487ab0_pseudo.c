
bool FUN_00487ab0(long param_1)

{
  int iVar1;
  long lVar2;
  long in_R8;
  undefined8 in_R9;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    iVar1 = FUN_0054c960(param_1 + 0x50);
  }
  else {
    iVar1 = FUN_0054cf40();
  }
  if ((in_R8 != 0) && (iVar1 == 0)) {
    lVar2 = FUN_0054d5c0(param_1 + 0x50,in_R8,in_R9);
    return lVar2 != 0;
  }
  return iVar1 == 0;
}

