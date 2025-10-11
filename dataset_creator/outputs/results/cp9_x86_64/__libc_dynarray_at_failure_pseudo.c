
void __libc_dynarray_at_failure(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  char acStack_d8 [200];
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  snprintf(acStack_d8,200,"Fatal glibc error: array index %zu not less than array length %zu\n",
           param_2,param_1);
                    /* WARNING: Subroutine does not return */
  __libc_fatal(acStack_d8);
}

