
void * __minimal_realloc(void *param_1,size_t param_2)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = (long)alloc_ptr;
  if (param_1 == (void *)0x0) {
    pvVar2 = malloc(param_2);
    return pvVar2;
  }
  if (alloc_last_block == param_1) {
    alloc_ptr = param_1;
    pvVar2 = malloc(param_2);
    if (param_1 != pvVar2) {
      pvVar2 = memcpy(pvVar2,param_1,lVar1 - (long)param_1);
      return pvVar2;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("ptr == alloc_last_block","dl-minimal-malloc.c",0x70,"__minimal_realloc");
}

