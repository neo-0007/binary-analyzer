
undefined8 FUN_00468300(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong in_R8;
  
  iVar1 = FUN_00538aa0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0040a180(param_1);
  if (((long)iVar1 != in_R8) && (iVar1 = FUN_005375b0(param_1,in_R8 & 0xffffffff), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_00536b10(param_1,0);
  return uVar2;
}

