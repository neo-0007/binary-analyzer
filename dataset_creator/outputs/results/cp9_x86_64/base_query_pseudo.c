
undefined1 * base_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = base_decoder;
  if (((param_2 != 0x15) && (puVar1 = base_store, param_2 != 0x16)) &&
     (puVar1 = base_encoder, param_2 != 0x14)) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}

