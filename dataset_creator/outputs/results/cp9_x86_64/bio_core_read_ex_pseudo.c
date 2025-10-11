
undefined8
bio_core_read_ex(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(*param_1,0x11,bio_core_globals_method);
  if ((puVar1 != (undefined8 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)*puVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    uVar2 = BIO_get_data(param_1);
                    /* WARNING: Could not recover jumptable at 0x004ad228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

