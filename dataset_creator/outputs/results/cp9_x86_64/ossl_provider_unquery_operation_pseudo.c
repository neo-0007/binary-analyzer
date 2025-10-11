
void ossl_provider_unquery_operation(long param_1)

{
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004205c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0xd0));
    return;
  }
  return;
}

