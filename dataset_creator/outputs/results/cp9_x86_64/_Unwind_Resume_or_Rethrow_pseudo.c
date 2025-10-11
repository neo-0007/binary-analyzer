
void _Unwind_Resume_or_Rethrow(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_RDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  long in_SSP;
  undefined8 unaff_retaddr;
  ulong local_230;
  undefined4 local_228 [60];
  undefined4 local_138 [36];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_38;
  
  bVar6 = 0;
  local_38 = param_3;
  if (*(long *)(param_1 + 0x10) == 0) {
    _Unwind_RaiseException();
    return;
  }
  uw_init_context_1(local_228,&stack0x00000008,unaff_retaddr);
  puVar4 = local_228;
  puVar5 = local_138;
  for (lVar3 = 0x3c; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  iVar1 = _Unwind_ForcedUnwind_Phase2(param_1,local_138,&local_230);
  if (iVar1 != 7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar2 = uw_install_context_1(local_228,local_138);
  _Unwind_DebugHook(local_a8,local_a0,uVar2);
  if (in_SSP != 0) {
    for (; 0xff < local_230; local_230 = local_230 - 0xff) {
    }
  }
  *(undefined8 *)(&stack0x00000000 + extraout_RDX) = local_a0;
                    /* WARNING: Could not recover jumptable at 0x006c3ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&stack0x00000000 + extraout_RDX))();
  return;
}

