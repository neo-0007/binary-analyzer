
void __minimal_free(void *param_1)

{
  if (alloc_last_block != param_1) {
    return;
  }
  alloc_ptr = memset(alloc_last_block,0,(long)alloc_ptr - (long)alloc_last_block);
  return;
}

