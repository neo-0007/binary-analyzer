
undefined4 * FUN_00445c00(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)0x0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_0041aec0(0x78,"../providers/implementations/ciphers/cipher_aes_siv.c",0x26);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar2 + 4) = 0x10;
      *puVar2 = 0x10004;
      *(undefined8 *)(puVar2 + 2) = 0x30;
      uVar3 = FUN_00445f50(0x180);
      *(undefined8 *)(puVar2 + 0x1a) = uVar3;
      uVar3 = FUN_00485290(param_1);
      *(undefined8 *)(puVar2 + 0x1c) = uVar3;
    }
  }
  return puVar2;
}

