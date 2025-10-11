
void __libc_alloc_buffer_create_failure(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  char acStack_d8 [200];
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  snprintf(acStack_d8,200,"Fatal glibc error: invalid allocation buffer of size %zu\n",param_2);
                    /* WARNING: Subroutine does not return */
  __libc_fatal(acStack_d8);
}

