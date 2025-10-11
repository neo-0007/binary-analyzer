
void FUN_00606480(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    FUN_004a06b0(*(undefined8 *)(param_1 + 8));
    if ((*param_1 & 4) == 0) {
      FUN_00436430(*(undefined8 *)(param_1 + 0x10),FUN_0060c570);
    }
    FUN_00436430(*(undefined8 *)(param_1 + 0x18),FUN_004a06b0);
    FUN_0041ad60(param_1,"../crypto/x509/pcy_data.c",0x1b);
    return;
  }
  return;
}

