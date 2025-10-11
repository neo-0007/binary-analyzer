
bool FUN_00597b60(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (*param_3 != 0) {
    lVar1 = FUN_0041c320(*param_3,0x10,"../crypto/ui/ui_util.c",0x4d);
    *param_3 = lVar1;
    return lVar1 != 0;
  }
  return false;
}

