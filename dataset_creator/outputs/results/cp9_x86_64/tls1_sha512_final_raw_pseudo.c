
void tls1_sha512_final_raw(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 8;
    *puVar1 = (char)((ulong)*param_1 >> 0x38);
    puVar1[1] = (char)((ulong)*param_1 >> 0x30);
    puVar1[2] = (char)((ulong)*param_1 >> 0x28);
    puVar1[3] = (char)((ulong)*param_1 >> 0x20);
    puVar1[4] = (char)((ulong)*param_1 >> 0x18);
    puVar1[5] = (char)((ulong)*param_1 >> 0x10);
    puVar1[6] = (char)((ulong)*param_1 >> 8);
    puVar1[7] = (char)*param_1;
    puVar1 = puVar2;
    param_1 = param_1 + 1;
  } while (param_2 + 0x40 != puVar2);
  return;
}

