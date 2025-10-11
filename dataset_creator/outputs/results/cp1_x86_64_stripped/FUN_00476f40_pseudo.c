
void FUN_00476f40(long param_1)

{
  if (param_1 != 0) {
    FUN_00545130(*(undefined8 *)(param_1 + 8));
    FUN_0043c5e0(param_1 + 0x10);
    FUN_0041c0b0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 "../providers/implementations/macs/hmac_prov.c",0x61);
    FUN_0041ad60(param_1,"../providers/implementations/macs/hmac_prov.c",0x62);
    return;
  }
  return;
}

