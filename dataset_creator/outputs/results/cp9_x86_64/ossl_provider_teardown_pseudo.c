
void ossl_provider_teardown(long param_1)

{
  if ((*(code **)(param_1 + 0x70) != (code *)0x0) && ((*(byte *)(param_1 + 200) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0041f73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}

