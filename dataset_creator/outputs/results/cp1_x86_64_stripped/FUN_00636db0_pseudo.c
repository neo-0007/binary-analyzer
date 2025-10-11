
bool FUN_00636db0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  bVar2 = true;
  if (uVar1 <= param_2) {
    bVar2 = uVar1 + *(long *)(uVar1 - 0x18) < param_2;
  }
  return bVar2;
}

