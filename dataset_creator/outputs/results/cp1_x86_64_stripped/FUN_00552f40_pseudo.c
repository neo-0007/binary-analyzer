
undefined8 FUN_00552f40(long param_1)

{
  if (param_1 != 0) {
    FUN_00537b70(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_0053f190(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    thunk_FUN_0053f9f0(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_004227b0(param_1,0x10);
    FUN_004227b0(param_1 + 0x10,0x10);
    *(undefined8 *)(param_1 + 0x38) = 0x1ffffffff;
    return 1;
  }
  return 1;
}

