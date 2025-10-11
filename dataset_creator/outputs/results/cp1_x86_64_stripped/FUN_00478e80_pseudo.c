
void FUN_00478e80(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf8), puVar1 != (undefined8 *)0x0)) {
    FUN_00537b70(*puVar1);
    FUN_00537b70(puVar1[1]);
    FUN_00537b70(puVar1[2]);
    FUN_00537a40(puVar1[3]);
    FUN_00537a40(puVar1[4]);
    FUN_0041c0b0(puVar1,0xb0,"../providers/implementations/rands/drbg_ctr.c",0x26e);
  }
  FUN_005b3600(param_1);
  return;
}

