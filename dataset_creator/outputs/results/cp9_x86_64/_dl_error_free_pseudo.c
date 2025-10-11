
void _dl_error_free(char *param_1)

{
  if (param_1 != "out of memory") {
    free(param_1);
    return;
  }
  return;
}

