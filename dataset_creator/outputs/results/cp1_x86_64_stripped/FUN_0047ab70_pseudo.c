
void FUN_0047ab70(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf8), puVar1 != (undefined8 *)0x0)) {
    FUN_0053f190(*puVar1);
    FUN_0043c5e0(puVar1 + 1);
    FUN_0041c0b0(puVar1,0xa8,"../providers/implementations/rands/drbg_hmac.c",0x138);
  }
  FUN_005b3600(param_1);
  return;
}

