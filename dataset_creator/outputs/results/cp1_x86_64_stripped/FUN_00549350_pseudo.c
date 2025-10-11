
void FUN_00549350(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (*(int *)*param_1 == 1) {
      FUN_0041aef0(*(undefined8 *)(*param_1 + 8),*(undefined8 *)param_1[1],"../crypto/passphrase.c",
                   0x14);
    }
    FUN_00549320(param_1);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    return;
  }
  return;
}

