
void functions_deallocate(undefined8 param_1,undefined8 *param_2)

{
  __libc_dlclose(*param_2);
  free(param_2);
  return;
}

