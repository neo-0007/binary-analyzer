
void __gconv_destroy_spec(undefined8 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  return;
}

