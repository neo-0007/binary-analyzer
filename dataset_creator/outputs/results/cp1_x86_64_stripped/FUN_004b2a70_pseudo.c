
undefined8 * FUN_004b2a70(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041aec0(0x48,"../crypto/bn/bn_ctx.c",0x7a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_ctx.c",0x7b,"BN_CTX_new_ex");
    FUN_0051f8f0(3,0xc0100,0);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[8] = param_1;
  }
  return puVar1;
}

