
undefined8 FUN_004a20e0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 4) = param_2[1];
  iVar3 = FUN_004a1fa0(param_1,uVar2,uVar1);
  if (iVar3 != 0) {
    uVar4 = (ulong)((uint)*(undefined8 *)(param_1 + 0x10) & 0x80);
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(ulong *)(param_1 + 0x10) = *(ulong *)(param_2 + 4) & 0xffffffffffffff7f | uVar4;
    return 1;
  }
  return 0;
}

