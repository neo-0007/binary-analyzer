
void trans_cb(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = BN_GENCB_get_arg(param_3);
  puVar1 = *(undefined4 **)(lVar2 + 0x68);
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0041082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x60))();
  return;
}

