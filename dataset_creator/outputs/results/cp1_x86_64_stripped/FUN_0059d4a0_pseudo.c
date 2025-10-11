
bool FUN_0059d4a0(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_0059d060(0,*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    FUN_0051ef40(4,"name=",*(undefined8 *)(param_1 + 8),", value=",*(undefined8 *)(param_1 + 0x10));
  }
  else {
    *param_2 = lVar1;
  }
  return lVar1 != 0;
}

