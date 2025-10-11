
void FUN_005adbf0(long *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_004a87e0(*puVar1);
      thunk_FUN_004a2270(puVar1[1]);
      FUN_0040f4f0(puVar1[2]);
      FUN_0041ad60(puVar1[4],"../crypto/x509/x_pubkey.c",0x5d);
      FUN_0041ad60(puVar1,"../crypto/x509/x_pubkey.c",0x5e);
      *param_1 = 0;
    }
    return;
  }
  return;
}

