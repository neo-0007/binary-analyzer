
undefined8 conf_ssl_get(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(ssl_names + param_1 * 0x18);
  *param_2 = *puVar1;
  uVar2 = puVar1[1];
  *param_3 = puVar1[2];
  return uVar2;
}

