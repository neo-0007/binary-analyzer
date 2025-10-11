
void __gconv_release_cache(void *param_1)

{
  if (gconv_cache != 0) {
    free(param_1);
    return;
  }
  return;
}

