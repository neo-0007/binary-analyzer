
void FUN_004a8970(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  uVar2 = FUN_0040aaf0(param_2);
  uVar3 = FUN_004239c0(uVar2);
  FUN_004a8880(param_1,uVar3,(-(uint)((uVar1 & 8) == 0) & 6) - 1,0);
  return;
}

