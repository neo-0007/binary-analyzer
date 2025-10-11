
void FUN_00481bd0(long param_1)

{
  FUN_00406b90(*(undefined8 *)(param_1 + 0x168));
  FUN_00406a50(*(undefined8 *)(param_1 + 0x160));
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_004ed620(*(undefined8 *)(param_1 + 0x10));
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x178),"../providers/implementations/signature/sm2_sig.c",
               0x14d);
  FUN_0041ad60(param_1,"../providers/implementations/signature/sm2_sig.c",0x14e);
  return;
}

