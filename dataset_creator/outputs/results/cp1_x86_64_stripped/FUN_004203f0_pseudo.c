
void FUN_004203f0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 2;
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),"../crypto/provider_core.c",0x124);
  FUN_00436430(*(undefined8 *)(param_1 + 8),FUN_00420e80);
  FUN_00436430(*(undefined8 *)(param_1 + 0x10),FUN_0041f2d0);
  FUN_00422300(*(undefined8 *)(param_1 + 0x18));
  FUN_00422300(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1;
      FUN_004203a0(*(long *)(param_1 + 0x30) + uVar1 * 0x28);
      uVar1 = uVar2;
    } while (uVar2 < *(ulong *)(param_1 + 0x38));
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x30),"../crypto/provider_core.c",0x12e);
  FUN_0041ad60(param_1,"../crypto/provider_core.c",0x12f);
  return;
}

