
undefined8 FUN_005324c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004098f0();
  puVar1[0x30] = 0;
  FUN_004d1eb0(param_2,puVar1);
  FUN_004d1eb0(param_2 + 8,puVar1 + 0x10);
  puVar1[0x20] = *puVar1;
  puVar1[0x21] = puVar1[1];
  puVar1[0x22] = puVar1[2];
  puVar1[0x23] = puVar1[3];
  puVar1[0x24] = puVar1[4];
  puVar1[0x25] = puVar1[5];
  puVar1[0x26] = puVar1[6];
  puVar1[0x27] = puVar1[7];
  puVar1[0x28] = puVar1[8];
  puVar1[0x29] = puVar1[9];
  puVar1[0x2a] = puVar1[10];
  puVar1[0x2b] = puVar1[0xb];
  puVar1[0x2c] = puVar1[0xc];
  puVar1[0x2d] = puVar1[0xd];
  puVar1[0x2e] = puVar1[0xe];
  puVar1[0x2f] = puVar1[0xf];
  return 1;
}

