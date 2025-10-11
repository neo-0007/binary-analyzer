
undefined8 FUN_00708af0(byte *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((*param_1 & 8) != 0) && (param_2 != -1)) {
    return 0xffffffff;
  }
  uVar1 = FUN_00708100();
  return uVar1;
}

