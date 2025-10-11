
void FUN_00778a10(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(in_FS_OFFSET + -0x10) == param_1) {
    if (*(long *)(param_1 + 0x10) != 0) {
      if ((*(char *)(param_1 + 0x18) == '\0') ||
         (lVar2 = *(long *)(param_1 + 0x10) + -1, *(long *)(param_1 + 0x10) = lVar2, lVar2 == 0)) {
        *(undefined8 *)(in_FS_OFFSET + -0x10) = *(undefined8 *)(param_1 + 0x20);
        uVar1 = *(undefined4 *)(in_FS_OFFSET + -0x58);
        FUN_007af9e0(*(undefined8 *)(param_1 + 8));
        FUN_007104f0(param_1);
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar1;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_006e2220("ctx->__refcount > 0","resolv_context.c",0xe6,"__resolv_context_put");
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e2220("current == ctx","resolv_context.c",0xe5,"__resolv_context_put");
}

