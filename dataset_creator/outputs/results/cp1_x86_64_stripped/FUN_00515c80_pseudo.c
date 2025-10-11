
void FUN_00515c80(long param_1)

{
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30));
    }
    FUN_00436430(*(undefined8 *)(param_1 + 0x18),FUN_00513710);
    FUN_00549350(param_1 + 0x38);
    FUN_0041ad60(param_1,"../crypto/encode_decode/decoder_meth.c",0x2a0);
    return;
  }
  return;
}

