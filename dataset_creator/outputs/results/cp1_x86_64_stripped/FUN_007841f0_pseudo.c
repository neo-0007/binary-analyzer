
void FUN_007841f0(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_0094ad58;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 * 0xa0 + 0x93ebd0);
  }
  if (*(long *)(puVar1 + 2) != 0) {
    return;
  }
  *(undefined **)(puVar1 + 2) = (&PTR_DAT_0093eb60)[param_1 * 0x14];
  return;
}

