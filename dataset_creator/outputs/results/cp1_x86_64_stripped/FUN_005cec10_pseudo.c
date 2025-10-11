
bool FUN_005cec10(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  if ((param_2 != 0) && (lVar1 = FUN_004b8260(param_2,*(undefined8 *)(param_1 + 0x40)), lVar1 == 0))
  {
    return false;
  }
  if ((param_3 != 0) && (lVar1 = FUN_004b8260(param_3,*(undefined8 *)(param_1 + 0x60)), lVar1 == 0))
  {
    return false;
  }
  bVar2 = true;
  if (param_4 != 0) {
    lVar1 = FUN_004b8260(param_4,*(undefined8 *)(param_1 + 0x68));
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}

