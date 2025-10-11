
undefined8
pvk2key_export_object
          (long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE =
       (code *)ossl_prov_get_keymgmt_export(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
  if ((param_3 == 8) && (UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00453628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*param_2,*(undefined4 *)(param_1 + 0x10),param_4,param_5);
    return uVar1;
  }
  return 0;
}

