
undefined8 FUN_004ed0f0(undefined4 *param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    ppuVar1 = &PTR_s_SECG_curve_over_a_112_bit_prime_f_0092aeb8;
    uVar2 = 0x2c0;
    if (0x52 < param_2) {
      param_2 = 0x52;
    }
    pcVar3 = "SECG/WTLS curve over a 112 bit prime field";
    puVar4 = param_1;
    while( true ) {
      *puVar4 = uVar2;
      *(char **)(puVar4 + 2) = pcVar3;
      if (puVar4 + 4 == param_1 + param_2 * 4) break;
      uVar2 = *(undefined4 *)(ppuVar1 + -3);
      pcVar3 = *ppuVar1;
      ppuVar1 = ppuVar1 + 4;
      puVar4 = puVar4 + 4;
    }
  }
  return 0x52;
}

