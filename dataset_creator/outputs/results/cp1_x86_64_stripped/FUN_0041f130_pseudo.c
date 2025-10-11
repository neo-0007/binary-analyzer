
void FUN_0041f130(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00417730(param_1,0x12,&DAT_008de0c0);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041f159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)puVar1[5])(*puVar1);
    return;
  }
  return;
}

