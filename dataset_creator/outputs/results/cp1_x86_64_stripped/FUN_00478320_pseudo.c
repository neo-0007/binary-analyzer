
undefined8 FUN_00478320(long param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0058e9d0(param_1 + 8);
  iVar1 = FUN_0043b840();
  if ((uVar2 <= param_4) && (iVar1 != 0)) {
    *param_3 = uVar2;
    uVar3 = FUN_0058eca0(param_1 + 8,param_2,uVar2);
    return uVar3;
  }
  return 0;
}

