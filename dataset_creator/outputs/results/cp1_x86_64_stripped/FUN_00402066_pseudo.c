
void FUN_00402066(void)

{
  long unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined **ppuStack0000000000000048;
  long in_stack_00000090;
  long in_stack_000000a0;
  
  ppuStack0000000000000048 = &PTR_FUN_009380c8;
  if (in_stack_00000090 != unaff_retaddr) {
    thunk_FUN_007104f0(in_stack_00000090,in_stack_000000a0 + 1);
  }
  ppuStack0000000000000048 = &PTR_FUN_009388a8;
  FUN_00625980(in_stack_00000010);
  FUN_00670bb0(in_stack_00000018,&PTR_DAT_009383d8);
  FUN_00670330(in_stack_00000008);
                    /* WARNING: Subroutine does not return */
  FUN_006cd5c0();
}

