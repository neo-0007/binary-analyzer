
void __resolv_context_put(void *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)(in_FS_OFFSET + -0x10) == param_1) {
    if (*(long *)((long)param_1 + 0x10) != 0) {
      if ((*(char *)((long)param_1 + 0x18) == '\0') ||
         (lVar2 = *(long *)((long)param_1 + 0x10) + -1, *(long *)((long)param_1 + 0x10) = lVar2,
         lVar2 == 0)) {
        *(undefined8 *)(in_FS_OFFSET + -0x10) = *(undefined8 *)((long)param_1 + 0x20);
        uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        __resolv_conf_put(*(undefined8 *)((long)param_1 + 8));
        free(param_1);
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("ctx->__refcount > 0","resolv_context.c",0xe6,"__resolv_context_put");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("current == ctx","resolv_context.c",0xe5,"__resolv_context_put");
}

