
ulong FUN_00422aa0(int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (DAT_0093fd18 != 0) {
    iVar1 = FUN_00436480();
    if (*param_1 < iVar1) {
      puVar3 = (undefined8 *)FUN_004364a0(DAT_0093fd18);
      uVar2 = (*(code *)*puVar3)(*(undefined8 *)(param_1 + 2));
      return (long)*param_1 ^ uVar2;
    }
  }
  uVar2 = FUN_00545cc0(*(undefined8 *)(param_1 + 2));
  return (long)*param_1 ^ uVar2;
}

