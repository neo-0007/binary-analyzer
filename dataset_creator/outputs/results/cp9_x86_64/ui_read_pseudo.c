
undefined8 ui_read(undefined8 param_1,UI_STRING *param_2)

{
  UI_string_types UVar1;
  undefined8 uVar2;
  
  UVar1 = UI_get_string_type(param_2);
  if (UVar1 != UIT_PROMPT) {
    return 1;
  }
  uVar2 = ui_read_part_0(param_1,param_2);
  return uVar2;
}

