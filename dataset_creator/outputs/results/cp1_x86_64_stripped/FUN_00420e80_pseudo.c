
void FUN_00420e80(byte *param_1)

{
  if ((*param_1 & 2) == 0) {
    FUN_00420d40();
    return;
  }
  FUN_00420b10(param_1,1);
  FUN_00420d40(param_1);
  return;
}

