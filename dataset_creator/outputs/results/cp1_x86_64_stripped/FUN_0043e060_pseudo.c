
undefined8 * FUN_0043e060(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)
           FUN_0041aec0(0x28,"../providers/implementations/asymciphers/sm2_enc.c",0x88);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *puVar3 = *param_1;
    puVar3[1] = uVar1;
    uVar1 = param_1[3];
    puVar3[2] = param_1[2];
    puVar3[3] = uVar1;
    puVar3[4] = param_1[4];
    if ((puVar3[1] != 0) && (iVar2 = FUN_004ed9e0(), iVar2 == 0)) {
      FUN_0041ad60(puVar3,"../providers/implementations/asymciphers/sm2_enc.c",0x8e);
      return (undefined8 *)0x0;
    }
    iVar2 = FUN_0043c620(puVar3 + 2,param_1 + 2);
    if (iVar2 == 0) {
      FUN_004ed620(puVar3[1]);
      FUN_0043c5e0(puVar3 + 2);
      FUN_0041ad60(puVar3,"../providers/implementations/asymciphers/sm2_enc.c",0x80);
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

