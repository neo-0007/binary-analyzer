
int FUN_007c8480(undefined8 param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  iVar1 = FUN_007c8660(&local_10);
  if (iVar1 < 0) {
    local_10._0_4_ = -1;
  }
  else {
    local_10._0_4_ = (int)local_10 - (int)param_1;
  }
  return (int)local_10;
}

