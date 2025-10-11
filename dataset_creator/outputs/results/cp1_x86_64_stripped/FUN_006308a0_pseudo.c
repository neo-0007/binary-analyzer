
/* WARNING: Removing unreachable block (ram,0x00630948) */

undefined8 FUN_006308a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  unkbyte10 *in_stack_00000018;
  unkbyte10 local_38;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_006525f0(*(undefined8 *)(param_1 + 0x10));
  *in_stack_00000018 = local_38;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

