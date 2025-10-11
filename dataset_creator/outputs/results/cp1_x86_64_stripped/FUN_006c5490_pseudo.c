
uint FUN_006c5490(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00757190(param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  return iVar1 >> 0x1e | (uint)(iVar1 != 0);
}

