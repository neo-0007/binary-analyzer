
void FUN_0046af60(long param_1)

{
  if (param_1 != 0) {
    FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../providers/implementations/kdfs/scrypt.c",0x4f);
    FUN_00406a50(*(undefined8 *)(param_1 + 0x50));
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x20),"../providers/implementations/kdfs/scrypt.c",0x5a);
    FUN_0041aef0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 "../providers/implementations/kdfs/scrypt.c",0x5b);
    *(undefined8 *)(param_1 + 0x30) = 0x100000;
    *(undefined8 *)(param_1 + 0x38) = 8;
    *(undefined8 *)(param_1 + 0x40) = 1;
    *(undefined8 *)(param_1 + 0x48) = 0x40100000;
    FUN_0041ad60(param_1,"../providers/implementations/kdfs/scrypt.c",0x52);
    return;
  }
  return;
}

