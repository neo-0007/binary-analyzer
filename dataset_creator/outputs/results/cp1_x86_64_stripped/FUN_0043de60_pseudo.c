
bool FUN_0043de60(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if (param_2 != 0) {
    iVar1 = FUN_0043c6f0(param_1 + 2,param_2,*param_1);
    return iVar1 != 0;
  }
  return true;
}

