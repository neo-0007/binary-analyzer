
undefined8 UI_method_get_data_destructor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  return uVar1;
}

