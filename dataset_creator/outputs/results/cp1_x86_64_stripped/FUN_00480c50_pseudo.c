
void FUN_00480c50(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00406b90(*(undefined8 *)(param_1 + 0x28));
  FUN_00406a50(*(undefined8 *)(param_1 + 0x20));
  FUN_00406a50(*(undefined8 *)(param_1 + 0x70));
  FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../providers/implementations/signature/rsa_sig.c",0x3cd
              );
  lVar2 = *(long *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    iVar1 = FUN_0056b040(*(undefined8 *)(param_1 + 0x10));
    FUN_004227b0(*(undefined8 *)(param_1 + 0xb8),(long)iVar1);
    lVar2 = *(long *)(param_1 + 0xb8);
  }
  FUN_0041ad60(lVar2,"../providers/implementations/signature/rsa_sig.c",0x1f7);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_0042b980(*(undefined8 *)(param_1 + 0x10));
  FUN_0041aef0(param_1,0xc0,"../providers/implementations/signature/rsa_sig.c",0x3d1);
  return;
}

