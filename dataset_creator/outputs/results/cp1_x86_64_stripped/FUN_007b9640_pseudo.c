
void FUN_007b9640(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0070a340(&DAT_0093eaa0);
  puVar1 = (&PTR_DAT_0093eb60)[param_2 * 0x14];
  if (puVar1 == (undefined *)0x0) {
    (&PTR_DAT_0093eb60)[param_2 * 0x14] = param_1;
  }
  else {
    do {
      puVar2 = puVar1;
      puVar1 = *(undefined **)(puVar2 + 0x18);
    } while (*(undefined **)(puVar2 + 0x18) != (undefined *)0x0);
    *(undefined **)(param_1 + 0x20) = puVar2;
    *(undefined **)(puVar2 + 0x18) = param_1;
  }
  (&DAT_0093eb68)[param_2 * 0x28] = (&DAT_0093eb68)[param_2 * 0x28] + 1;
  *(long *)(param_1 + 0x480) = DAT_0093eb20;
  DAT_0093eb20 = DAT_0093eb20 + 1;
  FUN_0070abb0(&DAT_0093eaa0);
  return;
}

