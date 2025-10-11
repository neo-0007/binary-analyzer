
void FUN_00485650(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x48),"../providers/implementations/ciphers/ciphercommon.c"
               ,0xb3);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

