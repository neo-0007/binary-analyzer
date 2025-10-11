
void _dl_exception_free(undefined1 (*param_1) [16])

{
  free(*(void **)param_1[1]);
  *(undefined8 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  return;
}

