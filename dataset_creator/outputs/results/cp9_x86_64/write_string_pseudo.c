
undefined8 write_string(undefined8 param_1,UI_STRING *param_2)

{
  FILE *__stream;
  UI_string_types UVar1;
  char *__s;
  
  UVar1 = UI_get_string_type(param_2);
  __stream = tty_out;
  if (1 < UVar1 - UIT_INFO) {
    return 1;
  }
  __s = UI_get0_output_string(param_2);
  fputs(__s,__stream);
  fflush(tty_out);
  return 1;
}

