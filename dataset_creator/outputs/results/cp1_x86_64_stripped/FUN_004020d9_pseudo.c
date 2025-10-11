
void FUN_004020d9(void)

{
  undefined8 in_stack_00000008;
  undefined *puStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined **ppuStack00000000000000b0;
  
  puStack0000000000000030 = PTR_DAT_009383e0;
  *(undefined **)((long)&stack0x00000030 + *(long *)(PTR_DAT_009383e0 + -0x18)) = PTR_DAT_009383e8;
  uStack0000000000000038 = 0;
  ppuStack00000000000000b0 = &PTR_FUN_009370d8;
  FUN_00670330(in_stack_00000008);
                    /* WARNING: Subroutine does not return */
  FUN_006cd5c0();
}

